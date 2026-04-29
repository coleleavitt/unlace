__int64 __fastcall sub_3943C0(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 module_data; // rax
  const __m128i *v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v14; // edx
  int v15; // eax
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rdx
  _DWORD v22[4]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+20h] [rbp-48h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4EF998);
  v8 = *(const __m128i **)(a2 + 40);
  v9 = module_data;
  if ( dword_4EE9E0 == (*(unsigned int (__fastcall **)(const __m128i *))(v8->m128i_i64[0] + 112))(v8) )
  {
    v10 = (*(__int64 (__fastcall **)(const __m128i *))(v8->m128i_i64[0] + 128))(v8);
    v11 = sub_384AB0(v10);
    if ( v11 )
    {
      v12 = a1[2].m128i_i64[1];
      if ( v12 )
        qfree(v12);
      a1[2].m128i_i64[1] = v11;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v14 = *(__int16 *)(a2 + 28);
    v15 = *(__int16 *)(a2 + 30);
    v22[0] = 0;
    v16 = _mm_loadl_epi64(v8 + 1);
    v24 = -1;
    v22[1] = v14;
    v17 = *(_QWORD *)(v9 + 1008);
    v22[2] = v15;
    v18 = *(__int64 **)(v17 + 40);
    v19 = *(_QWORD *)(v17 + 48);
    v23 = _mm_unpacklo_epi64(v16, v16);
    v20 = &v18[v19];
    if ( v18 == v20 )
    {
LABEL_11:
      v21 = 0;
    }
    else
    {
      while ( 1 )
      {
        v21 = *v18;
        if ( *v18 )
        {
          if ( a3 == *(_QWORD *)(v21 + 8) || a3 == *(_QWORD *)(v21 + 16) )
            break;
        }
        if ( v20 == ++v18 )
          goto LABEL_11;
      }
    }
    return sub_3937C0(a1, v9, v21, (__int64)v22, 1, (a4 & 1) == 0);
  }
}
