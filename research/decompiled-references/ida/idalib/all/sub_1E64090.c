__int64 __fastcall sub_1E64090(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  size_t v16; // rax
  __int64 result; // rax
  __int64 v18; // rax
  _BYTE *v19; // rdi
  __int64 (*v20)(void); // rax
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+0h] [rbp-118h]
  __int64 v36[2]; // [rsp+8h] [rbp-110h] BYREF
  int v37; // [rsp+1Ch] [rbp-FCh] BYREF
  int v38[6]; // [rsp+20h] [rbp-F8h] BYREF
  void *v39; // [rsp+38h] [rbp-E0h]
  __int64 v40; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v41[184]; // [rsp+60h] [rbp-B8h] BYREF

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v36[0] = a2;
  v9 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(unsigned __int8 *)(v10 + 16);
  if ( (unsigned __int8)(v11 - 2) <= 4u )
  {
    v10 = a1[29];
    LODWORD(v12) = (unsigned __int8)v11;
    if ( (*(_BYTE *)(v10 + 89) & 1) != 0 )
      goto LABEL_3;
LABEL_9:
    sub_168B9F0((__int64)v41, a1 + 1, a3, 0xF13u, 0);
    LOBYTE(v38[0]) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36[0] & 0xFFFFFFFFFFFFFFF0LL)
                                                                              + 8LL)
                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                      + 16LL)
                   - 25 <= 1;
    v18 = sub_1588420((__int64)v41, (unsigned __int8 *)v38);
    sub_1605D30(v18, v36);
    sub_15F7200(v41);
    return 1;
  }
  v12 = (unsigned __int8)v11;
  if ( (unsigned int)(unsigned __int8)v11 - 25 <= 1 )
    goto LABEL_9;
  if ( (_BYTE)v11 != 13 )
  {
LABEL_3:
    v12 = (unsigned int)(v12 - 35);
    if ( (unsigned int)v12 <= 1 )
    {
      sub_168B9F0((__int64)v41, a1 + 1, a3, 0x113Fu, 0);
      v37 = 0;
      v13 = sub_1587D10((__int64)v41, &v37);
      v14 = sub_1605D30(v13, v36);
      goto LABEL_5;
    }
    goto LABEL_18;
  }
  v11 = *(unsigned __int16 *)(v10 + 18);
  LOWORD(v11) = ((unsigned __int16)v11 >> 3) & 0x1FF;
  if ( (_WORD)v11 == 480 )
  {
    v11 = a1[29];
    if ( (*(_BYTE *)(v11 + 60) & 8) == 0 )
    {
      v19 = *(_BYTE **)(a1[31] + 17448);
      v20 = *(__int64 (**)(void))(*(_QWORD *)v19 + 88LL);
      if ( (char *)v20 == (char *)sub_102B7F0 )
        v21 = v19[277];
      else
        v21 = v20();
      if ( !v21 )
      {
        sub_168B9F0((__int64)v41, a1 + 1, a3, 0x12BCu, 0);
        v37 = 1;
        v14 = sub_1587D10((__int64)v41, &v37);
LABEL_5:
        v15 = v14;
        v16 = j__strlen("*");
        sub_9EC740((__int64)v38, a3, "*", v16, 0);
        sub_1589170(v15, v38);
        if ( v39 != &v40 )
          operator delete(v39);
        goto LABEL_7;
      }
      v6 = v36[0] & 0xFFFFFFFFFFFFFFF0LL;
      v9 = *(_QWORD *)(v36[0] & 0xFFFFFFFFFFFFFFF0LL);
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      LODWORD(v12) = *(unsigned __int8 *)(v11 + 16);
      goto LABEL_3;
    }
  }
LABEL_18:
  v22 = *(_QWORD *)(v6 + 8);
  if ( (v22 & 8) != 0 && *(_DWORD *)((char *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL) + 4) )
  {
    sub_168B9F0((__int64)v41, a1 + 1, a3, 0x130Cu, 0);
    v34 = sub_1605D30((__int64)v41, v36);
    v38[0] = 0;
    sub_1587D10(v34, v38);
LABEL_7:
    sub_15F7200(v41);
    return 1;
  }
  while ( 1 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v9 + 16) - 2) <= 4u )
      goto LABEL_20;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v23 = sub_F63050(v9, v12, v11, v10);
    if ( !v23 )
      break;
    v9 = v23;
LABEL_20:
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v24 = sub_F63240(v9, v12, v11, v10, a5, a6);
  if ( v24 && (unsigned __int8)sub_F58560((__int64)v24) )
    goto LABEL_26;
  v31 = *(_QWORD *)(v36[0] & 0xFFFFFFFFFFFFFFF0LL);
  while ( 2 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v31 + 16) - 2) <= 4u )
    {
LABEL_36:
      v31 = *(_QWORD *)(*(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      continue;
    }
    break;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v32 = sub_F63050(v31, v12, v25, v26);
    if ( v32 )
    {
      v31 = v32;
      goto LABEL_36;
    }
  }
  v33 = sub_F63240(v31, v12, v25, v26, v27, v28);
  if ( v33 && sub_F58570((__int64)v33) )
LABEL_26:
    sub_17D0CF0((__int64)a1, v36[0], a3, 1, 6, v28, v35, v36[0]);
  v29 = v36[0];
  if ( (v36[0] & 4) != 0 || (v30 = *(_QWORD *)&byte_8[v36[0] & 0xFFFFFFFFFFFFFFF0LL], (v30 & 4) != 0) )
  {
    if ( *(char *)(a1[29] + 1) < 0 )
    {
      sub_168B9F0((__int64)v41, a1 + 1, a3, 0x1ABDu, 0);
      sub_1605D30((__int64)v41, v36);
      sub_15F7200(v41);
      v29 = v36[0];
    }
    v30 = *(_QWORD *)&byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL];
  }
  result = 0;
  if ( (v30 & 8) != 0 && (*(_DWORD *)((char *)&qword_18 + (v30 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v29 & 7)) >> 9 )
    return *(_BYTE *)(a1[29] + 89) & 1;
  return result;
}
