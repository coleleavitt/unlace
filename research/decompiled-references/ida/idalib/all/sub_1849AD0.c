__int64 __fastcall sub_1849AD0(_QWORD *a1, unsigned __int64 *a2, __int64 a3, __m128 a4)
{
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  __int64 v10; // rax
  bool v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // cl
  __int64 *v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rsi
  __m128 *v20; // rdi
  __int64 *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  char v25; // cl
  unsigned int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+18h] [rbp-C0h] BYREF
  __m128 v37; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v39; // [rsp+40h] [rbp-98h] BYREF
  char v40; // [rsp+98h] [rbp-40h]
  unsigned int v41; // [rsp+A0h] [rbp-38h]
  char v42; // [rsp+A4h] [rbp-34h]

  v7 = *(_QWORD *)(a3 + 16);
  v8 = *(_BYTE *)(v7 + 28) & 0x7F;
  if ( (unsigned int)v8 - 40 <= 6 )
  {
    if ( v8 == 43 )
    {
      if ( ((*(_BYTE *)(a3 + 3) >> 1) & 3) == 1 )
        return 0;
      v21 = (__int64 *)(*a1 + 8LL);
      if ( (*(_QWORD *)a3 & 0x80000LL) != 0 )
      {
        v22 = *(_QWORD *)(a3 + 32);
        v23 = *(_QWORD *)(a3 + 40);
        if ( v22 )
        {
          v34 = v23;
          a4 = _mm_loadh_ps((const double *)&v34);
          v37 = a4;
          v24 = *(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v24 )
          {
            v37.m128_u64[0] = v24;
            v25 = 0;
            while ( (*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v25 = 1;
              v24 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v25 )
              v37.m128_u64[0] = v24;
          }
          v26 = sub_E90530((__int64 *)&v37);
        }
        else
        {
          v26 = 0;
        }
      }
      else
      {
        v26 = *(_DWORD *)(a3 + 4);
      }
      sub_168B9F0((__int64)&v37, v21, v26, 0x12B7u, 0);
      v35 = *(_QWORD *)(v7 + 40);
      v20 = (__m128 *)sub_15894B0((__int64)&v37, &v35);
      v36 = sub_EEC8C0(*a2, (__int64)&v35, *(double *)a4.m128_u64);
      goto LABEL_37;
    }
  }
  else if ( v8 != 52 )
  {
    return 0;
  }
  v10 = sub_B9ACA0(*(_QWORD *)(a3 + 16));
  if ( !v10 )
    return 0;
  v11 = (*(_BYTE *)(v10 + 28) & 0x7F) != 46 && (*(_BYTE *)(v10 + 28) & 0x7F) != 40;
  if ( v11 )
    return 0;
  v12 = *(_QWORD *)(v10 + 16);
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v12 & 4) != 0 )
    v13 = *(_QWORD *)(v13 + 8);
  if ( !v13 )
    return 0;
  v14 = *(_BYTE *)(sub_B8EAA0(v13) + 8) & 0x7F;
  if ( v14 <= 0x12u )
  {
    if ( ((1LL << v14) & 0x40182) == 0 )
      return 0;
  }
  else if ( ((v14 + 94) & 0x7Fu) > 5 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a3 + 3) & 6) != 0 )
    return 0;
  v15 = (__int64 *)(*a1 + 8LL);
  if ( (*(_QWORD *)a3 & 0x80000LL) != 0 )
  {
    v16 = *(_QWORD *)(a3 + 32);
    if ( v16 )
    {
      v34 = *(_QWORD *)(a3 + 40);
      a4 = _mm_loadh_ps((const double *)&v34);
      v37 = a4;
      v17 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v17 )
      {
        v37.m128_u64[0] = v17;
        while ( (*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v11 = 1;
          v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v11 )
          v37.m128_u64[0] = v17;
      }
      v18 = sub_E90530((__int64 *)&v37);
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v18 = *(_DWORD *)(a3 + 4);
  }
  v19 = (__int64)v15;
  sub_168B9F0((__int64)&v37, v15, v18, 0x12B6u, 0);
  if ( v40 )
  {
    v19 = v7;
    sub_AE9DF0(&v39, v7, 0xAu);
  }
  else if ( v42 )
  {
    v31 = sub_168B9E0(&v37);
    v32 = v38;
    if ( v38 )
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
    v36 = v32;
    v33 = sub_1587BC0(v31, &v36, v27, v28, v29, v30);
    v19 = v7;
    sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v41 + 8), v7, 0xAu);
  }
  v20 = &v37;
  v36 = sub_EEC8C0(*a2, v19, *(double *)a4.m128_u64);
LABEL_37:
  LOBYTE(v34) = *(_BYTE *)(sub_1587DB0((__int64)v20, &v36) + 120);
  sub_15F7200(&v37);
  return (unsigned __int8)v34;
}
