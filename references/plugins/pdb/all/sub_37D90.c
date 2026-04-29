_QWORD *__fastcall sub_37D90(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 (__fastcall ***v10)(__int64); // rdi
  __int64 (__fastcall **v11)(__int64); // rax
  __int64 (__fastcall ****v12)(__int64); // rcx
  __int64 (__fastcall ***v13)(__int64); // rdx
  __int64 v16; // rax
  __m128 v17; // xmm0
  __m128i v18; // xmm0
  _QWORD v19[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __m128i v21; // [rsp+18h] [rbp-50h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a3 + 16);
  v4 = *(unsigned int *)(a3 + 24);
  v23 = __readfsqword(0x28u);
  v19[0] = off_AA248;
  v6 = *(_QWORD *)(v3 + 104);
  v22 = v3;
  v19[1] = 0;
  v20 = 0;
  v21 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v6 + 64LL))(v6, v4, v19) )
  {
    v7 = v20;
    *a1 = 0;
    v19[0] = off_AA248;
    if ( v7 )
    {
      v8 = v21.m128i_i64[0];
      if ( v21.m128i_i64[0] )
      {
        v9 = 0;
        while ( 1 )
        {
          v12 = (__int64 (__fastcall ****)(__int64))(v7 + 8 * v9);
          v13 = *v12;
          if ( !*v12 )
            goto LABEL_8;
          if ( (*((_DWORD *)v13 + 2))-- != 1 )
            goto LABEL_11;
          v10 = *v12;
          v11 = **v12;
          if ( *v11 != sub_241E0 )
          {
            (*v11)((__int64)v10);
            v7 = v20;
            goto LABEL_12;
          }
          if ( v10 )
          {
            v11[20]((__int64)v10);
            v7 = v20;
LABEL_8:
            if ( v8 == ++v9 )
              break;
          }
          else
          {
LABEL_11:
            v7 = v20;
LABEL_12:
            if ( v8 == ++v9 )
              break;
          }
        }
      }
      v21.m128i_i64[0] = 0;
      qfree(v7);
    }
  }
  else
  {
    v16 = operator new(0x38u);
    *a1 = v16;
    v17 = _mm_loadh_ps((const double *)&v20);
    *(_DWORD *)(v16 + 8) = 1;
    *(__m128 *)(v16 + 16) = v17;
    v18 = _mm_loadu_si128(&v21);
    *(_QWORD *)v16 = &off_A9FC8;
    *(_DWORD *)(v16 + 48) = -1;
    *(__m128i *)(v16 + 32) = v18;
  }
  return a1;
}
