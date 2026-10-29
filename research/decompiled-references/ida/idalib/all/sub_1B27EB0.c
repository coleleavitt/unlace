__int64 __fastcall sub_1B27EB0(__int64 *a1, __int64 (__fastcall ***a2)(), unsigned int a3, double a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r9d
  __int16 v8; // dx
  unsigned __int16 v9; // dx
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  int v12; // ebx
  _DWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r9d
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v25; // r13
  unsigned int v26; // eax
  unsigned int v27; // r9d
  __int64 v28; // r13
  __int16 v29; // ax
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r13
  __int16 v35; // cx
  __int64 v36; // rsi
  unsigned __int64 v37; // rax
  unsigned int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 *v46; // r15
  unsigned int v47; // eax
  int v48; // [rsp+0h] [rbp-108h] BYREF
  int v49; // [rsp+4h] [rbp-104h] BYREF
  __int64 v50; // [rsp+8h] [rbp-100h] BYREF
  __int64 (__fastcall **v51)(); // [rsp+10h] [rbp-F8h] BYREF
  int v52; // [rsp+18h] [rbp-F0h]
  __int64 v53; // [rsp+20h] [rbp-E8h]
  __int64 v54; // [rsp+28h] [rbp-E0h]
  __int64 v55; // [rsp+30h] [rbp-D8h]
  _QWORD v56[25]; // [rsp+40h] [rbp-C8h] BYREF

  if ( !a2 )
  {
    if ( (_BYTE)a3 )
    {
      sub_168B9F0((__int64)v56, (__int64 *)(*a1 + 8), *((_DWORD *)a1 + 6), 0x11C1u, 0);
      sub_15F7200(v56);
      return a3;
    }
    return 1;
  }
  v5 = (__int64)a2;
  if ( (*(_WORD *)a2 & 0x1FF) == 0x3C && (*(_DWORD *)a2 & 0x80000) == 0 )
    v5 = (__int64)a2[2];
  if ( *(_DWORD *)(a1[4] + 16) != *(_DWORD *)(a1[4] + 12) )
  {
    a2 = (__int64 (__fastcall ***)())v5;
    v53 = a1[4];
    v51 = off_2C62DC8;
    v54 = 0;
    v55 = 0;
    v52 = 16843008;
    if ( !(unsigned __int8)sub_BC97E0((__int64 *)&v51, v5) )
    {
      v20 = HIDWORD(v55);
      sub_168B9F0((__int64)v56, (__int64 *)(*a1 + 8), v55, 0x11BBu, 0);
      v48 = v20;
      v21 = sub_180D980((__int64)v56, &v48);
      v49 = 0;
      v22 = sub_1587D10(v21, &v49);
      v23 = v54;
      v24 = v22;
      if ( *(_BYTE *)(v22 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v22 + 32), v54, 0xAu);
      }
      else if ( *(_BYTE *)(v22 + 132) )
      {
        v43 = sub_168B9E0((_QWORD *)v22);
        v44 = *(_QWORD *)(v24 + 16);
        if ( v44 )
          v44 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 32LL))(*(_QWORD *)(v24 + 16));
        v50 = v44;
        v45 = sub_1587BC0(v43, &v50, v39, v40, v41, v42);
        sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * *(unsigned int *)(v24 + 128) + 8), v23, 0xAu);
      }
      sub_15F7200(v56);
      return 1;
    }
  }
  v6 = sub_EEC8C0(v5, (__int64)a2, a4);
  v8 = *(_WORD *)v5;
  a1[5] = v6;
  v9 = v8 & 0x1FF;
  if ( ((v9 + 509) & 0x1FFu) <= 0x7E )
  {
    v5 = sub_BFB9F0(v5);
    v9 = *(_WORD *)v5 & 0x1FF;
  }
  if ( v9 <= 0x75u )
  {
    if ( v9 != 91 || ((*(_BYTE *)(v5 + 3) >> 1) & 0x3F) != 0xF )
      goto LABEL_27;
    v33 = 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL);
    v34 = *(_QWORD *)(v5 + v33 + 32);
    v35 = *(_WORD *)v34 & 0x1FF;
    if ( v35 == 71 )
    {
      v36 = *(_QWORD *)(v34 + 16);
      if ( (*(_BYTE *)(v36 + 28) & 0x7F) == 0x2C )
      {
        v37 = sub_B73640(*(_QWORD *)(v34 + 16));
        if ( (*(_WORD *)sub_1AE6910(v37) & 0x1FF) == 0x2E )
          goto LABEL_42;
        v36 = *(_QWORD *)(v34 + 16);
        v33 = 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL);
      }
      return sub_1B1A9F0((__int64)a1, v36, v34, *(_DWORD **)(v5 + v33 + 40), a3, v7);
    }
    if ( v35 != 46 || (*(_QWORD *)v34 & 0x80000LL) == 0 || (*(_WORD *)sub_BFBAE0(*(_QWORD *)(v34 + 16)) & 0x1FF) != 0x62 )
      goto LABEL_27;
LABEL_42:
    BUG();
  }
  if ( v9 > 0x77u )
  {
    if ( v9 == 245 )
    {
      v10 = *(_QWORD *)(v5 + 8);
      if ( v10 )
      {
        if ( (v10 & 1) == 0
          && (*(_BYTE *)(v10 + 28) & 0x7Fu) - 40 <= 6
          && sub_B735C0(*(_QWORD *)(v5 + 8))
          && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
        {
          if ( (*(_BYTE *)(v10 + 96) & 0x60) != 0 )
          {
            if ( (_BYTE)a3 )
            {
              v46 = (__int64 *)(*a1 + 8);
              v47 = sub_EEB7E0(v5, (__int64)a2, a4);
              sub_168B9F0((__int64)v56, v46, v47, 0x1603u, 0);
              a2 = &v51;
              v51 = (__int64 (__fastcall **)())sub_EEC8C0(v5, (__int64)v46, a4);
              sub_1587DB0((__int64)v56, (__int64 *)&v51);
              sub_15F7200(v56);
            }
          }
          v11 = sub_B73640(v10);
          v12 = *(_DWORD *)(v5 + 16);
          v13 = (_DWORD *)v11;
          v56[0] = *(_QWORD *)(v10 + 48);
          v16 = sub_C1BEF0((__int64)v56, (__int64)a2, v14, v15);
          v17 = sub_1AE9760(*a1, v10, v16, v12);
          return sub_1B1A9F0((__int64)a1, v10, v17, v13, a3, v18);
        }
      }
    }
    goto LABEL_27;
  }
  if ( ((*(_WORD *)(v5 + 2) >> 3) & 0x3F) != 0x15 )
  {
LABEL_27:
    if ( (unsigned __int8)sub_1AE7CC0(a1) || (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
      return 0;
    if ( (_BYTE)a3 )
    {
      v25 = *a1;
      v26 = sub_EEB7E0(v5, (__int64)a2, a4);
      sub_168B9F0((__int64)v56, (__int64 *)(v25 + 8), v26, 0x11C1u, 0);
      v51 = (__int64 (__fastcall **)())sub_EEC8C0(v5, v25 + 8, a4);
      sub_1587DB0((__int64)v56, (__int64 *)&v51);
      sub_15F7200(v56);
      return a3;
    }
    return 1;
  }
  v28 = sub_BFB9F0(*(_QWORD *)(v5 + 16));
  v29 = *(_WORD *)v28 & 0x1FF;
  if ( v29 != 71 )
  {
    if ( v29 == 46 && (*(_QWORD *)v28 & 0x80000LL) != 0 && (*(_WORD *)sub_BFBAE0(*(_QWORD *)(v28 + 16)) & 0x1FF) == 0x62 )
      return sub_1B1A9F0((__int64)a1, *(_QWORD *)(v28 + 24), v28, *(_DWORD **)(v5 + 24), a3, v38);
    goto LABEL_27;
  }
  v30 = *(_QWORD *)(v28 + 16);
  if ( (*(_BYTE *)(v30 + 28) & 0x7F) == 0x2C )
  {
    v31 = sub_B73640(*(_QWORD *)(v28 + 16));
    v32 = sub_1AE6910(v31);
    if ( (*(_WORD *)v32 & 0x1FF) == 0x2E )
      return sub_1B1A9F0((__int64)a1, *(_QWORD *)(v32 + 24), v32, *(_DWORD **)(v5 + 24), a3, v27);
    v30 = *(_QWORD *)(v28 + 16);
  }
  return sub_1B1A9F0((__int64)a1, v30, v28, *(_DWORD **)(v5 + 24), a3, v27);
}
