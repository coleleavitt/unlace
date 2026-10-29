unsigned __int64 __fastcall sub_1AA8160(__int64 *a1, __int64 a2, char a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 *v9; // r15
  bool v10; // r13
  int v11; // eax
  __int64 v12; // rdi
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  bool v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v35; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v36[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v38[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v39; // [rsp+98h] [rbp-50h]
  unsigned int v40; // [rsp+A0h] [rbp-48h]
  char v41; // [rsp+A4h] [rbp-44h]

  if ( (_BYTE)a2 == 8 )
    return sub_1AA25B0((__int64)a1, a4);
  v9 = (unsigned __int16 *)sub_BFBAE0(a4);
  v10 = (_BYTE)a2 == 13;
  v11 = *v9;
  LOWORD(v11) = v11 & 0x1FF;
  if ( (_BYTE)a2 == 13 || a3 == 45 )
  {
    v7 = (unsigned int)(v11 + 389);
    LOWORD(v7) = (v11 + 389) & 0x1FF;
    if ( (unsigned __int16)v7 <= 1u )
    {
      v15 = sub_C00A40(a4, a2, v6, v7, v8);
      sub_168B9F0((__int64)v36, a1, v15, 0xB69u, 0);
      if ( v39 )
      {
        sub_AE9DF0(v38, v10, 2u);
      }
      else if ( v41 )
      {
        v21 = sub_168B9E0(v36);
        v24 = v37;
        if ( v37 )
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
        v35 = v24;
        v25 = sub_1587BC0(v21, &v35, v19, v20, v22, v23);
        sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v40 + 8), v10, 2u);
      }
      sub_15F7200(v36);
      return 1;
    }
  }
  while ( 1 )
  {
    if ( (_WORD)v11 == 124 )
    {
LABEL_17:
      v14 = *((_QWORD *)v9 + 3);
      goto LABEL_18;
    }
    if ( (_WORD)v11 != 123 )
      break;
    if ( !sub_9EC890(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 3) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v7, v8) )
      goto LABEL_17;
    v14 = *((_QWORD *)v9 + 2);
LABEL_18:
    v9 = (unsigned __int16 *)sub_BFBAE0(v14);
    LOWORD(v11) = *v9 & 0x1FF;
  }
  if ( (_WORD)v11 != 71 )
    goto LABEL_10;
  if ( (*(_QWORD *)v9 & 0x200000LL) != 0 )
    v12 = *(_QWORD *)&v9[8 * ((*(_QWORD *)v9 & 0x80000LL) != 0) + 16];
  else
    v12 = *((_QWORD *)v9 + 2);
  if ( ((*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) + 28) + 88) & 0x7Fu) <= 7 )
    return a4;
  LOWORD(v11) = *v9 & 0x1FF;
LABEL_10:
  if ( (_WORD)v11 == 46 )
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 3) + 32LL))(*((_QWORD *)v9 + 3)) + 28)
        & 0x7Fu)
       - 49 <= 2 )
    {
      if ( (a3 & 0xFB) != 0x29 && (_BYTE)a2 != 13 )
        return a4;
      v7 = *((_QWORD *)v9 + 2);
      if ( (*(_WORD *)v7 & 0x1FF) == 0x62 && (*(_QWORD *)v7 & 0x80000) != 0 )
        return a4;
    }
    LOWORD(v11) = *v9 & 0x1FF;
  }
  if ( a3 != 45 && (_BYTE)a2 != 13 && (_WORD)v11 == 98 )
    return a4;
  if ( (_WORD)v11 == 69 )
    return a4;
  v16 = a3 != 41;
  if ( (_WORD)v11 == 109 && a3 != 41 )
    return a4;
  if ( (_WORD)v11 == 16 )
    return 1;
  if ( (_BYTE)a2 == 13 )
  {
    v26 = sub_C00A40(a4, a2, v6, v7, v8);
    sub_168B9F0((__int64)v36, a1, v26, 0xB69u, 0);
    LODWORD(v35) = 1;
    goto LABEL_43;
  }
  if ( (_BYTE)a2 == 13 || a3 == 45 )
  {
    v18 = sub_C00A40(a4, a2, v6, v7, v8);
    sub_168B9F0((__int64)v36, a1, v18, 0xB69u, 0);
    LODWORD(v35) = 0;
LABEL_43:
    sub_1587D10((__int64)v36, (int *)&v35);
    goto LABEL_37;
  }
  v17 = sub_C00A40(a4, a2, v6, v7, v8);
  sub_168B9F0((__int64)v36, a1, v17, 0xB67u, 0);
  if ( v39 )
  {
    sub_AE9DF0(v38, v16, 2u);
  }
  else if ( v41 )
  {
    v29 = sub_168B9E0(v36);
    v32 = v37;
    if ( v37 )
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
    v35 = v32;
    v33 = sub_1587BC0(v29, &v35, v27, v28, v30, v31);
    sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v40 + 8), v16, 2u);
  }
LABEL_37:
  sub_15F7200(v36);
  return 1;
}
