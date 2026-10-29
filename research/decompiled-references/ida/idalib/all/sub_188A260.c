__int64 __fastcall sub_188A260(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  unsigned int v8; // r14d
  unsigned __int8 v9; // r12
  unsigned int v10; // ebp
  unsigned __int64 v11; // r15
  __int64 v12; // rsi
  unsigned __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  char v26; // r9
  __int64 v27; // r12
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r13
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  unsigned __int8 v48; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v49; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v50; // [rsp+8h] [rbp-F0h]
  char v51; // [rsp+8h] [rbp-F0h]
  char v52; // [rsp+8h] [rbp-F0h]
  char v53; // [rsp+14h] [rbp-E4h]
  unsigned __int8 v54; // [rsp+14h] [rbp-E4h]
  __int64 v55[2]; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD *v56; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v57[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v58; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v59; // [rsp+50h] [rbp-A8h] BYREF
  char v60; // [rsp+A8h] [rbp-50h]
  unsigned int v61; // [rsp+B0h] [rbp-48h]
  char v62; // [rsp+B4h] [rbp-44h]

  v8 = a5;
  v9 = a4;
  v10 = a3;
  v55[0] = a2;
  v53 = a6;
  v48 = a6;
  v11 = sub_B7E900(a2, a2, a3, a4, a5, a6);
  if ( v11 )
  {
LABEL_2:
    if ( *(char *)(v11 + 28) < 0 || (*(_BYTE *)(v11 + 68) & 1) != 0 && !*(_QWORD *)(v11 + 40) )
      goto LABEL_15;
    v12 = *(_QWORD *)(v11 + 48);
    v13 = sub_A71450(*(_QWORD *)(a1 + 248), v12);
    v17 = sub_B78060(v11, v12, v14, v15, v16);
    if ( (_BYTE)v17 )
    {
      v24 = sub_F63270(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), v12, v13 & 0xFFFFFFFFFFFFFFF0LL, v18, v19, v17);
      if ( (unsigned __int8)sub_188A260(a1, v24, v10, v9, v8, v48) )
        goto LABEL_15;
      return 0;
    }
    if ( !v10 && (*(_BYTE *)(v11 + 68) & 0xC) != 0xC && (*(_BYTE *)(v11 + 68) & 0xC) != 0 )
    {
      if ( v53 )
      {
        v50 = v17;
        sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), *(_DWORD *)(v11 + 24), 0x17F1u, 0);
        v26 = v50;
        if ( v60 )
        {
          sub_AE9DF0(&v59, v11, 0xAu);
          v26 = v50;
        }
        else if ( v62 )
        {
          v32 = sub_168B9E0(v57);
          v36 = v50;
          v37 = v32;
          v38 = (__int64)v58;
          if ( v58 )
          {
            v38 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, _QWORD))(*v58 + 32LL))(
                    v58,
                    a1 + 8,
                    *v58,
                    v34,
                    v35,
                    v50);
            v36 = v50;
          }
          v51 = v36;
          v56 = (_QWORD *)v38;
          v39 = sub_1587BC0(v37, (__int64 *)&v56, v33, v34, v35, v36);
          sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * v61 + 8), v11, 0xAu);
          v26 = v51;
        }
        goto LABEL_26;
      }
      return 0;
    }
    if ( (*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
      && (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
        & 6) != 0 )
    {
      if ( v53 )
      {
        v54 = v17;
        sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), *(_DWORD *)(v11 + 24), 0x17F6u, 0);
        v25 = sub_185AB80((__int64)v57, v55);
        v26 = v54;
        v27 = v25;
        v28 = 0;
        v29 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v29 & 8) != 0 )
          v28 = *(__int64 *)((char *)&qword_18 + (v29 & 0xFFFFFFFFFFFFFFF0LL));
        v30 = v28 >> 6;
        v31 = v30 & 7;
        if ( *(_BYTE *)(v27 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v27 + 32), v30 & 7, 2u);
          v26 = v54;
        }
        else if ( *(_BYTE *)(v27 + 132) )
        {
          v40 = sub_168B9E0((_QWORD *)v27);
          v44 = v54;
          v45 = v40;
          v46 = *(_QWORD **)(v27 + 16);
          if ( v46 )
          {
            v46 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64, __int64, _QWORD))(*v46 + 32LL))(
                              *(_QWORD *)(v27 + 16),
                              v55,
                              *v46,
                              v42,
                              v43,
                              v54);
            v44 = v54;
          }
          v52 = v44;
          v56 = v46;
          v47 = sub_1587BC0(v45, (__int64 *)&v56, v41, v42, v43, v44);
          sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * *(unsigned int *)(v27 + 128) + 8), v31, 2u);
          v26 = v52;
        }
LABEL_26:
        v49 = v26;
        sub_15F7200(v57);
        return v49;
      }
      return 0;
    }
    v20 = 0;
    if ( v9 )
      v20 = ((*(_BYTE *)(v11 + 68) >> 1) ^ 1) & 1;
    if ( !(unsigned __int8)sub_1889AD0(a1, *(unsigned int *)(v11 + 24), v13, v20, v10, 1, a7, a8, v8, v48) )
      return 0;
LABEL_15:
    while ( 1 )
    {
      v21 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v21;
      if ( !v21 )
        break;
      if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_2;
    }
  }
  return 1;
}
