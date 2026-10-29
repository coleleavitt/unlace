__int64 __fastcall sub_18D8440(
        __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __m128i **a5,
        __int64 *a6,
        __m128 a7,
        __int32 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  unsigned __int8 v13; // r12
  int v15; // ebx
  __int64 v16; // r10
  __int64 v17; // rdi
  int v18; // ecx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 *v23; // r9
  int v24; // r10d
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // r12
  unsigned int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+8h] [rbp-120h]
  int v34; // [rsp+8h] [rbp-120h]
  int v35; // [rsp+8h] [rbp-120h]
  __int64 *v36; // [rsp+8h] [rbp-120h]
  __int64 *v37; // [rsp+10h] [rbp-118h]
  __int64 v38; // [rsp+10h] [rbp-118h]
  __int64 *v39; // [rsp+18h] [rbp-110h]
  _BOOL4 v40; // [rsp+24h] [rbp-104h] BYREF
  __int64 v41; // [rsp+28h] [rbp-100h] BYREF
  __int64 v42[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-E8h] BYREF
  int v44; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v46[200]; // [rsp+60h] [rbp-C8h] BYREF

  v13 = a4;
  v15 = a2;
  v16 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 || a10 && (a10 & 4) != 0 && (a10 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v17 = *a1;
    v18 = (_BYTE)a4 == 0 ? 26 : 37;
    return sub_19AA5D0(v17, a2, a3, v18, (_DWORD)a5, (_DWORD)a6, a8, a9, a10, a11);
  }
  v20 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (_BYTE)a4 )
  {
    v33 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_BYTE *)(v20 + 16) != 42 )
    {
      v39 = a6;
      v38 = *(_QWORD *)(a2 + 8);
      v26 = sub_18BBDD0(v20, a2, v16 & 0xFFFFFFFFFFFFFFF0LL, a4);
      LODWORD(v16) = v38;
      a6 = v39;
      if ( !v26 )
        goto LABEL_10;
      v20 = *(_QWORD *)v33;
      if ( *(_BYTE *)(*(_QWORD *)v33 + 16LL) != 42 )
      {
        v28 = sub_F63050(v20, a2, v33, v27);
        a6 = v39;
        LODWORD(v16) = v38;
        v20 = v28;
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 48 )
    {
      v17 = *a1;
      v18 = 37;
      return sub_19AA5D0(v17, a2, a3, v18, (_DWORD)a5, (_DWORD)a6, a8, a9, a10, a11);
    }
  }
  else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
  {
    v17 = *a1;
    v18 = 26;
    return sub_19AA5D0(v17, a2, a3, v18, (_DWORD)a5, (_DWORD)a6, a8, a9, a10, a11);
  }
LABEL_10:
  if ( !a10 || (v37 = a6, v34 = v16, (a10 & 4) != 0) )
    BUG();
  v21 = sub_B87700(
          *(_QWORD *)(*a1 + 248) + 17536LL,
          *(_QWORD *)&byte_8[*(_QWORD *)(a10 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(a10 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL]
         | (unsigned __int8)*(_QWORD *)(a10 & 0xFFFFFFFFFFFFFFF8LL))
        & 7);
  v43 = v21;
  v44 = a11;
  sub_B85890(&v45, v21);
  v23 = v37;
  v24 = v34;
  v45 = a10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v37 )
    return sub_19CC2F0(*a1, v15, v24, a3, v13, (_DWORD)a5, 0, 0, (__int64)&v43, 0, 0, 0);
  v25 = *(_QWORD *)(*v37 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v25 + 16) - 47 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 <= 1
    && (v29 = sub_F63050(v25, v21, a10 & 0xFFFFFFFFFFFFFFF8LL, v22), v24 = v34, v23 = v37, v29) )
  {
    v35 = v24;
    sub_15AB760(a5, *(_QWORD **)(*a1 + 248), *v23, (__int64)(v23 + 1), a8, a7);
    v24 = v35;
    return sub_19CC2F0(*a1, v15, v24, a3, v13, (_DWORD)a5, 0, 0, (__int64)&v43, 0, 0, 0);
  }
  v36 = v23;
  v30 = (__int64 *)(*a1 + 8);
  v42[0] = *v23;
  v42[1] = (__int64)(v23 + 1);
  v31 = sub_F6CCB0(v42, a7);
  sub_168B9F0((__int64)v46, v30, v31, 0xEA3u, 0);
  v41 = *v36;
  v32 = sub_162B6D0((__int64)v46, &v41);
  v40 = (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) != 0;
  sub_1588370(v32, (unsigned int *)&v40);
  sub_15F7200(v46);
  return 1;
}
