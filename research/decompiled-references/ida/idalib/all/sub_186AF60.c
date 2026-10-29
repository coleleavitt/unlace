__int64 __fastcall sub_186AF60(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v5; // rax
  char v6; // dl
  __int64 v7; // rax
  unsigned int v9; // edx
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int8 v30; // [rsp+Dh] [rbp-DBh] BYREF
  unsigned __int8 v31; // [rsp+Eh] [rbp-DAh] BYREF
  unsigned __int8 v32; // [rsp+Fh] [rbp-D9h] BYREF
  __int64 v33; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v35[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v37; // [rsp+40h] [rbp-A8h] BYREF
  char v38; // [rsp+98h] [rbp-50h]
  unsigned int v39; // [rsp+A0h] [rbp-48h]
  char v40; // [rsp+A4h] [rbp-44h]

  v3 = 0;
  if ( (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
    && (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
      & 6) != 0
    && (*(_DWORD *)(a1 + 16) || (*(_BYTE *)(a2 + 68) & 0xC) == 0xC || (*(_BYTE *)(a2 + 68) & 0xC) == 0) )
  {
    v3 = *(unsigned __int8 *)(a1 + 35);
    if ( (_BYTE)v3 )
    {
      v5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v5 = *(_QWORD *)v5;
      v6 = *(_BYTE *)(v5 + 8);
      v7 = v5 - 64;
      if ( (v6 & 0x7Fu) - 58 >= 4 )
        v7 = 0;
      v9 = *(_DWORD *)(a2 + 24);
      v33 = v7;
      sub_168B9F0((__int64)v35, (__int64 *)(*(_QWORD *)a1 + 8LL), v9, 0x1714u, 0);
      v10 = 6;
      if ( !*(_QWORD *)(a1 + 24) )
        v10 = *(_DWORD *)(a1 + 16);
      if ( v38 )
      {
        sub_AE9DF0(&v37, v10, 2u);
      }
      else if ( v40 )
      {
        v27 = sub_168B9E0(v35);
        v28 = v36;
        if ( v36 )
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
        v34 = v28;
        v29 = sub_1587BC0(v27, &v34, v23, v24, v25, v26);
        sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v39 + 8), v10, 2u);
      }
      v11 = sub_185AB80((__int64)v35, &v33);
      v30 = 1;
      v12 = sub_1588420(v11, &v30);
      v13 = v12;
      if ( *(_BYTE *)(v12 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v12 + 32), a2, 0xAu);
      }
      else if ( *(_BYTE *)(v12 + 132) )
      {
        v20 = sub_168B9E0((_QWORD *)v12);
        v21 = *(_QWORD *)(v13 + 16);
        if ( v21 )
          v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 32LL))(*(_QWORD *)(v13 + 16));
        v34 = v21;
        v22 = sub_1587BC0(v20, &v34, v16, v17, v18, v19);
        sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * *(unsigned int *)(v13 + 128) + 8), a2, 0xAu);
      }
      LODWORD(v34) = 4;
      v14 = sub_1587D10(v13, (int *)&v34);
      v31 = 0;
      v15 = sub_1588420(v14, &v31);
      v32 = 1;
      sub_1588420(v15, &v32);
      sub_15F7200(v35);
    }
    else
    {
      return 1;
    }
  }
  return v3;
}
