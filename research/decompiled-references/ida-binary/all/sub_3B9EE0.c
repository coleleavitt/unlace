__int64 __fastcall sub_3B9EE0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  _BYTE *v10; // r12
  __int64 v11; // rbx
  __int64 (*v13)(); // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int **v16; // rsi
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  unsigned int *v19; // rbx
  unsigned int *v20; // r13
  unsigned int v21; // r12d
  unsigned int v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // [rsp+0h] [rbp-60h]
  __int64 idati; // [rsp+8h] [rbp-58h]
  unsigned int *v29; // [rsp+10h] [rbp-50h] BYREF
  __int128 v30; // [rsp+18h] [rbp-48h]
  unsigned __int64 v31; // [rsp+28h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  v9 = sub_3C5BB0(a1);
  if ( !v9 )
    return 0;
  v10 = *(_BYTE **)(v9 + 2488);
  v11 = v9;
  if ( (v10[112] & 2) != 0 )
    return 0;
  idati = get_idati(a1);
  v13 = *(__int64 (**)())(*(_QWORD *)v10 + 64LL);
  v14 = 0;
  if ( v13 != sub_3AAC50 )
    v14 = ((__int64 (__fastcall *)(_BYTE *))v13)(v10);
  if ( idati != v14 )
    return 0;
  v15 = *(_QWORD *)(a1 + 200);
  v29 = nullptr;
  v30 = 0;
  if ( v15 )
  {
    v16 = &v29;
    sub_3C60D0(v11, &v29, v15, -1);
    v19 = v29;
    v20 = &v29[v30];
    if ( v20 != v29 )
    {
      do
      {
        v21 = *v19;
        v16 = nullptr;
        v22 = sub_3A43F0(
                nullptr,
                0,
                "Please select the destination type",
                idati,
                0,
                0,
                0.0,
                a3,
                a4,
                a5,
                *(double *)v17.m128_u64,
                *(double *)v18.m128_u64,
                a8,
                a9,
                0);
        v23 = v22;
        if ( !v22 )
          break;
        v16 = (unsigned int **)v21;
        if ( !(unsigned __int8)set_type_alias(idati, v21, v22) )
        {
          v16 = (unsigned int **)v21;
          sub_169630(
            (int)"Failed to map type #%u -> #%u\nPlease delete the type to remove its mapping",
            v21,
            v23,
            v24,
            v25,
            v26,
            (__m128)0LL,
            a3,
            a4,
            a5,
            v17,
            v18,
            a8,
            a9,
            v27);
        }
        ++v19;
      }
      while ( v20 != v19 );
      v19 = v29;
    }
    if ( v19 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v19, (const char *)v16);
    }
  }
  return 1;
}
