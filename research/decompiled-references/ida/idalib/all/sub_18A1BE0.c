__int64 __fastcall sub_18A1BE0(
        __int64 *a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6,
        __m128 a7,
        __m128i a8)
{
  __int64 **v11; // rbx
  unsigned int v12; // r15d
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r14
  char v29; // al
  _QWORD *v30; // rax
  __m128i *v31; // r12
  __int64 *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  bool v40; // al
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v45; // [rsp+10h] [rbp-108h]
  __int64 v46; // [rsp+10h] [rbp-108h]
  __int64 *v47; // [rsp+28h] [rbp-F0h]
  bool v48; // [rsp+37h] [rbp-E1h] BYREF
  __int64 v49; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int64 *v50; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v52[200]; // [rsp+50h] [rbp-C8h] BYREF

  v11 = (__int64 **)a1;
  if ( *(_DWORD *)(a4 + 56) )
  {
    v49 = 0;
    v12 = a3;
  }
  else
  {
    v12 = a3;
    v49 = *(_QWORD *)(a4 + 64);
    if ( v49 )
      v12 = *(_DWORD *)(a4 + 80);
  }
  v13 = a4;
  v50 = (unsigned __int64 *)sub_1E85170(*a1, a4);
  v51 = *v50;
  v16 = (__int64 *)sub_168B6C0((__int64)a1);
  if ( (*(_BYTE *)(v16[290] + 17) & 0x20) != 0 )
  {
    v17 = v51 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(_QWORD *)&byte_8[v51 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v18 & 8) == 0 || !*(_DWORD *)((char *)&qword_18 + (v18 & 0xFFFFFFFFFFFFFFF0LL) + 4) )
    {
      v19 = *(_QWORD *)v17;
      v20 = *(_QWORD *)(*(_QWORD *)v17 + 8LL) & 7LL | (*(__int64 *)(*(_QWORD *)v17 + 8LL) >> 3) & 1;
      if ( v20 )
        v21 = sub_F64F00(v51, a4, v19, v20, v15) & 0xFFFFFFFFFFFFFFF0LL;
      else
        v21 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_BYTE *)(*(_QWORD *)v21 + 16LL) == 24 )
        v21 = *(_QWORD *)(*(_QWORD *)v21 + 40LL);
      a1 = v16;
      v45 = v21;
      v22 = sub_A8A1F0(v16);
      v24 = v45;
      v25 = *(_QWORD *)(v22 + 48);
      if ( v25 )
      {
        v14 = v25 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v13 = v22;
        a1 = v16;
        v42 = sub_A7AA70((__int64)v16, v22, v45, 0, v15, v23);
        v24 = v45;
        v14 = v42;
      }
      if ( v24 == v14 )
      {
        a1 = v16;
        v26 = sub_A63A30((__int64)v16);
        if ( (_DWORD)v26 )
        {
          v41 = (v26 << 32) | v51 & 7;
          if ( (v51 & 8) != 0 )
          {
            v41 |= *(__int64 *)((char *)&qword_18 + (v51 & 0xFFFFFFFFFFFFFFF0LL));
            v13 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
          }
          else
          {
            v13 = v51 & 0xFFFFFFFFFFFFFFF0LL;
          }
          a1 = v16;
          v51 = sub_A70C40((__int64)v16, v13, v41);
        }
      }
    }
  }
  if ( a5 )
  {
    a1 = *v11;
    v13 = v12;
    a5 = (_DWORD *)(sub_17B22D0(*v11, v12, v49, v51, 0, a5, *(double *)a7.m128_u64) & 0xFFFFFFFFFFFFFFFELL);
    if ( !a5 )
    {
      *(_BYTE *)(a4 + 720) |= 1u;
      a5 = nullptr;
    }
  }
  v27 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
  {
    if ( (*(_BYTE *)(v27 + 17) & 8) != 0 )
    {
      a1 = *v11;
      v13 = (unsigned __int64)&v50;
      if ( !(unsigned __int8)sub_17AF2A0((__int64)*v11, (__int64 **)&v50, (__int64 *)&v51, v12, 0x14A8u) )
        *(_BYTE *)(a4 + 720) |= 1u;
    }
  }
  else
  {
    v13 = (unsigned __int64)v11;
    sub_168B9F0((__int64)v52, (__int64 *)v11, v12, 0xFF1u, 0);
    a1 = (__int64 *)v52;
    sub_15F7200(v52);
    *(_BYTE *)(a4 + 720) |= 1u;
  }
  if ( !a6 )
    goto LABEL_24;
  if ( a6 == 9 )
  {
    LOBYTE(a6) = 2;
    goto LABEL_24;
  }
  if ( a6 <= 9 )
  {
    if ( a6 != 8 )
      return sub_18A22C0(a1, v13, v27, v14, v15);
    LOBYTE(a6) = 1;
LABEL_24:
    v28 = (*v11)[68];
    if ( !v28 )
      return 0;
    goto LABEL_25;
  }
  if ( a6 == 11 )
  {
    LOBYTE(a6) = 3;
    goto LABEL_24;
  }
  if ( a6 == 20 )
  {
    LOBYTE(a6) = 4;
    v28 = (*v11)[68];
    if ( !v28 )
      return 0;
LABEL_25:
    v46 = v28 - 48;
    if ( v28 != 48 && *(char *)(v28 - 20) >= 0 )
    {
      v29 = *(_BYTE *)(v28 - 20) & 0x7F;
      if ( v29 == 21 )
      {
        if ( !byte_26430D8[*(unsigned int *)(sub_168B6E0((__int64)v11) + 368)] )
          v46 = *(_QWORD *)(v28 + 40);
      }
      else if ( v29 == 23 )
      {
        if ( !byte_26430D8[*(unsigned int *)(sub_168B6E0((__int64)v11) + 368)]
          || (v38 = *(_QWORD *)(v28 - 8), (v38 & 7) == 0) && (v38 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          sub_168B9F0((__int64)v52, (__int64 *)v11, v12, 0x1056u, 0);
          v39 = *(_QWORD *)(v28 - 8);
          v40 = 1;
          if ( (v39 & 7) == 0 )
            v40 = (v39 & 0xFFFFFFFFFFFFFFF8LL) == 0;
          v48 = v40;
          v31 = nullptr;
          sub_1588420((__int64)v52, (unsigned __int8 *)&v48);
          sub_15F7200(v52);
          return (__int64)v31;
        }
      }
      v47 = (__int64 *)v50;
      v30 = (_QWORD *)sub_168B6C0((__int64)v11);
      v31 = (__m128i *)sub_BA99A0(v30, v46, a3, v12, v49, v51, (__int64)v47, a6, (__int64)a5, 0);
      if ( (*(_BYTE *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x10) != 0 )
        sub_B88650((__int64)v31, 1);
      v32 = *v11;
      if ( v49 )
      {
        v33 = sub_1A5B7C0(v32, a2, v49, v12, 3, 1);
        v32 = *v11;
        v34 = v33;
        if ( v33 )
        {
          v35 = v46 + 48;
          if ( !v46 )
            v35 = 0;
          if ( sub_17A3270((__int64)v32, v34, v35, a2, 0) && (*(_BYTE *)(v34 + 28) & 0x7Fu) - 58 > 4 )
          {
            sub_168B9F0((__int64)v52, (__int64 *)v11, v12, 0xE83u, 0);
            sub_17AE460((__int64)v52, &v49);
            sub_15F7200(v52);
            sub_168B9F0((__int64)v52, (__int64 *)v11, *(_DWORD *)(v34 + 24), 0x70u, 0);
            sub_15F7200(v52);
            sub_B88650((__int64)v31, 1);
          }
          v32 = *v11;
        }
      }
      sub_1836CB0(v32, (__int64)a2, v31, (__int64 *)a4, a7, a8);
      if ( (*(_BYTE *)(a4 + 720) & 1) != 0 || ((**(_DWORD **)a4 >> 12) & 0x7F) == 0x45 )
      {
        sub_B88650((__int64)v31, 1);
        if ( (*(_BYTE *)(sub_168B6E0((__int64)v11) + 107) & 4) == 0 )
        {
LABEL_41:
          if ( *(_DWORD *)(*(_QWORD *)a4 + 268LL) )
          {
            v36 = v31->m128i_i64[1];
            if ( (v36 & 7) != 0 )
              v31->m128i_i64[1] = v36 & 0xFFFFFFFFFFFFFFF8LL | 4;
          }
          if ( v49 )
          {
            sub_17A1F20((__int64)a2, (__int64)v31);
            sub_15C17C0((__int64)(*v11 + 326), (__int64)v31);
          }
          if ( byte_26430D8[*(unsigned int *)(sub_168B6E0((__int64)v11) + 368)]
            && v31[1].m128i_i8[12] >= 0
            && (*(_BYTE *)(v28 - 20) & 0x7F) == 0x14 )
          {
            sub_168B9F0((__int64)v52, (__int64 *)v11, v12, 0x1B9Bu, 0);
            sub_15F7200(v52);
          }
          return (__int64)v31;
        }
      }
      else if ( (*(_BYTE *)(sub_168B6E0((__int64)v11) + 107) & 4) == 0 )
      {
        goto LABEL_41;
      }
      if ( (unsigned __int8)sub_189F360((__int64 *)v11, (unsigned __int64)v31) )
        sub_B88650((__int64)v31, 1);
      goto LABEL_41;
    }
    return 0;
  }
  return sub_18A22C0(a1, v13, v27, v14, v15);
}
