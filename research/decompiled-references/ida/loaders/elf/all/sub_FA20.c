bool __fastcall sub_FA20(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  unsigned int dword; // eax
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // r11d
  __int64 v18; // r12
  __int64 v19; // r8
  int v20; // esi
  int v22; // eax
  int v23; // r11d
  char v24; // al
  __int64 v25; // rbp
  unsigned int v26; // [rsp+0h] [rbp-68h]
  unsigned int v27; // [rsp+0h] [rbp-68h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  unsigned __int64 v29; // [rsp+10h] [rbp-58h]
  unsigned int v30; // [rsp+18h] [rbp-50h]
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int16 v32; // [rsp+2Eh] [rbp-3Ah]

  v5 = a2[4];
  if ( (v5 & 0xF) != 0 || v5 <= 0x1F )
    return 0;
  v6 = v5 >> 4;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL);
  v8 = v7 + a2[2];
  if ( a3 )
  {
    v9 = v6 - 1;
    v10 = *(_QWORD *)(a3 + 16) + v7;
    v11 = v8 + 28;
    v12 = v6 - 1;
    v32 = *(_WORD *)(a1 + 346);
    v29 = *(_QWORD *)(a3 + 32);
    while ( 1 )
    {
      dword = get_dword(v11, a2, a3, a4, a5);
      a3 = dword + v11;
      v26 = dword;
      if ( a3 < v10 )
        goto LABEL_13;
      v14 = a3 - v10;
      if ( (((_BYTE)a3 - (_BYTE)v10) & 3) != 0 )
        goto LABEL_13;
      if ( v14 <= 0xB )
        goto LABEL_13;
      a4 = v29;
      if ( v14 >= v29 )
        goto LABEL_13;
      v30 = a3;
      v28 = v11 - 12;
      v31 = *(_QWORD *)(a1 + 16);
      v15 = get_dword(a3, a2, a3, v31, a5);
      a2 = *(_QWORD **)(a1 + 8);
      v16 = v30;
      v17 = v26;
      v18 = *(_QWORD *)(v31 + 456) & (a2[41] + v15);
      if ( (v32 & 2) != 0 )
      {
        if ( !getseg(*(_QWORD *)(v31 + 456) & (a2[41] + v15)) )
          goto LABEL_13;
        v22 = v18 - v11 + 4;
        a5 = ((_DWORD)v18 - (_DWORD)v11) & 3;
        if ( (((_DWORD)v18 - (_DWORD)v11) & 3) != 0 )
          goto LABEL_13;
        v23 = v22 >> 2;
        if ( (v22 & 0x2000000) != 0 && (~v23 & 0xFF000000) != 0 )
          goto LABEL_13;
        v27 = v23 & 0xFFFFFF | 0xEA000000;
        create_insn(v28, 0);
        del_items(v11, 0, 1, 0);
        v24 = segtype(v18);
        sub_40E20(a1, v28, v24 == 1);
        v20 = v11 - 12;
        v17 = v27;
        v16 = v18;
        v19 = ((_DWORD)v18 - (_DWORD)v11) & 3;
      }
      else if ( v11 )
      {
        v19 = v11;
        v20 = v11;
      }
      else
      {
        v17 = v30;
        v19 = 0;
        v20 = -12;
      }
      --v9;
      sub_42050(a1, v20, v16, v17, 0, 4, v19, 8, 0);
      a2 = (_QWORD *)(v11 - 12);
      sub_40E60(a1, v28, v18, ".", "");
LABEL_13:
      v11 += 16;
      if ( !--v12 )
        return v9 == 0;
    }
  }
  v25 = v8 + 16 * v6 - 16;
  do
  {
    if ( v8 == v25 )
      return 1;
    v8 += 16;
  }
  while ( (unsigned __int8)equal_bytes(v8, &unk_6C510, 0, 12, 1) );
  return 0;
}

