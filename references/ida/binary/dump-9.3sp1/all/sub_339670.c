__int64 __fastcall sub_339670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // r12
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 *v20; // rdi
  __m128i v21; // [rsp+0h] [rbp-68h] BYREF
  __int64 v22[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v23; // [rsp+20h] [rbp-48h] BYREF
  __m128i v24; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  if ( (unsigned int)(*(_DWORD *)a4 - 56) > 1 )
  {
    sub_127A20((__int64)v22, a3, a4, 0, a5, a6);
    sub_648D0((__int64 *)a1, v22);
    v16 = *(_QWORD *)(a1 + 16);
    v17 = v23;
    v23 = nullptr;
    v18 = _mm_loadu_si128(&v24);
    v24 = 0;
    if ( v16 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      v21 = v18;
      qfree(v16);
      v19 = _mm_load_si128(&v21);
      v20 = v23;
      *(_QWORD *)(a1 + 16) = v17;
      *(__m128i *)(a1 + 24) = v19;
      if ( v20 )
      {
        v24.m128i_i64[0] = 0;
        qfree((__int64)v20);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 16) = v17;
      *(__m128i *)(a1 + 24) = v18;
    }
    qfree(v22[0]);
  }
  else
  {
    if ( *(_BYTE *)(a4 + 64) != 8 )
    {
      if ( !under_debugger )
        sub_383060(52823);
      BUG();
    }
    v7 = *(_QWORD *)(a4 + 72);
    if ( *(_QWORD *)(v7 + 56) )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = *(_QWORD *)(v7 + 48) + 16 * v9;
        v11 = *(_DWORD *)(v10 + 4);
        v12 = *(_DWORD *)(v10 + 8);
        v22[0] = 0;
        v22[1] = 0;
        sub_63E80(v22, v12, v11);
        v23 = nullptr;
        v24 = 0;
        sub_64280((__int64 *)a1, v22);
        sub_316CB0((__int64 *)(a1 + 16), &v23, v13, v14);
        if ( v23 )
        {
          v24.m128i_i64[0] = 0;
          qfree((__int64)v23);
        }
        ++v8;
        qfree(v22[0]);
        v9 = v8;
      }
      while ( (unsigned __int64)v8 < *(_QWORD *)(v7 + 56) );
    }
    else
    {
      sub_1C67F0(a2, a1, (_DWORD *)(v7 + 80));
    }
  }
  return a1;
}
