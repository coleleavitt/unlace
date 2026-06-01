__int64 __fastcall sub_CCA940(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  _DWORD *v6; // rax
  bool v7; // zf
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rbp
  int v15; // eax
  int *v16; // rcx
  int v17; // edx
  void *v18; // rbx
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // rbp
  int v25; // eax
  int *v26; // rcx
  int v27; // edx
  char v28; // [rsp+Eh] [rbp-5Ah] BYREF
  char v29; // [rsp+Fh] [rbp-59h] BYREF
  _QWORD v30[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1 + 8;
  v6 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v6 || *v6 != 5 || v6[1] != 1 )
    sub_163AEC();
  v30[0] = 0;
  v7 = *(_WORD *)(a2 + 4) == 0;
  v30[1] = 0;
  v31[0] = 1;
  v31[1] = 0;
  if ( !v7
    || *(_DWORD *)(a2 + 24)
    || (v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v8 != -1
    || !(unsigned __int8)sub_1666AE0(v3, a3, v30, &v28)
    || ((v20 = a1 + 136, (v31[0] & 0x100000000LL) != 0)
     || LODWORD(v31[0]) != 1
     || (*(_BYTE *)(a1 + 156) & 1) != 0
     || *(_DWORD *)(a1 + 152) != 1
      ? (LOBYTE(v21) = sub_1848D40(qword_1C7F2C0, v30, v20))
      : (v30[0] & 0x100000000LL) != 0 || (*(_BYTE *)(a1 + 140) & 1) != 0
      ? (v21 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v30, v20) >> 31)
      : (LOBYTE(v21) = SLODWORD(v30[0]) < *(_DWORD *)(a1 + 136)),
        (_BYTE)v21
     || ((v22 = a1 + 104, (*(_BYTE *)(a1 + 124) & 1) != 0)
      || *(_DWORD *)(a1 + 120) != 1
      || (v31[0] & 0x100000000LL) != 0
      || LODWORD(v31[0]) != 1
       ? (LOBYTE(v23) = sub_1848D40(qword_1C7F2C0, v22, v30))
       : (*(_BYTE *)(a1 + 108) & 1) != 0 || (v30[0] & 0x100000000LL) != 0
       ? (v23 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v22, v30) >> 31)
       : (LOBYTE(v23) = *(_DWORD *)(a1 + 104) < SLODWORD(v30[0])),
         (_BYTE)v23)) )
  {
    if ( *(_WORD *)(a3 + 4)
      || *(_DWORD *)(a3 + 24)
      || (v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) != nullptr && *v9 != -1
      || !(unsigned __int8)sub_1666AE0(v3, a2, v30, &v29)
      || ((v10 = a1 + 136, (v31[0] & 0x100000000LL) != 0)
       || LODWORD(v31[0]) != 1
       || (*(_BYTE *)(a1 + 156) & 1) != 0
       || *(_DWORD *)(a1 + 152) != 1
        ? (LOBYTE(v11) = sub_1848D40(qword_1C7F2C0, v30, v10))
        : (v30[0] & 0x100000000LL) != 0 || (*(_BYTE *)(a1 + 140) & 1) != 0
        ? (v11 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v30, v10) >> 31)
        : (LOBYTE(v11) = SLODWORD(v30[0]) < *(_DWORD *)(a1 + 136)),
          (_BYTE)v11
       || ((v12 = a1 + 104, (*(_BYTE *)(a1 + 124) & 1) != 0)
        || *(_DWORD *)(a1 + 120) != 1
        || (v31[0] & 0x100000000LL) != 0
        || LODWORD(v31[0]) != 1
         ? (LOBYTE(v13) = sub_1848D40(qword_1C7F2C0, v12, v30))
         : (*(_BYTE *)(a1 + 108) & 1) != 0 || (v30[0] & 0x100000000LL) != 0
         ? (v13 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v12, v30) >> 31)
         : (LOBYTE(v13) = *(_DWORD *)(a1 + 104) < SLODWORD(v30[0])),
           (_BYTE)v13)) )
    {
      sub_163AEC();
    }
    v14 = (unsigned int)sub_CCA120(a1, a3);
    v15 = sub_182D050(qword_1C7F2C0, v30);
    v16 = (int *)(*(_QWORD *)(a1 + 64) + 4 * v14);
    v17 = *v16;
    if ( *v16 < v15 )
      v17 = v15;
    *v16 = v17;
  }
  else
  {
    v24 = (unsigned int)sub_CCA120(a1, a2);
    v25 = sub_182D050(qword_1C7F2C0, v30);
    v26 = (int *)(*(_QWORD *)(a1 + 72) + 4 * v24);
    v27 = *v26;
    if ( *v26 > v25 )
      v27 = v25;
    *v26 = v27;
  }
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  return sub_182CBA0(v18, v31);
}

