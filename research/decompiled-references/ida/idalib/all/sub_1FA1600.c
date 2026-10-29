__int64 __fastcall sub_1FA1600(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int8 v14; // dl
  int v15; // esi
  unsigned __int8 v16; // dl
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rdi
  _QWORD *v20; // r13
  char v21; // al
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // r13
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 result; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // r13
  _QWORD **v33; // rbx
  _QWORD **v34; // rbx
  int v35; // r15d
  int v36; // eax
  unsigned __int64 v37; // rsi
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  bool v52; // al
  unsigned __int64 v53[8]; // [rsp+8h] [rbp-40h] BYREF

  v8 = *(_QWORD *)(a2 + 104);
  v9 = *(_QWORD *)(v8 + 96);
  v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v9 & 1) != 0 )
    goto LABEL_21;
  v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_21;
  v12 = v9 & 2;
  if ( (_DWORD)v12 )
  {
    v10 = sub_6E2500(v11, *(_QWORD *)(a2 + 104), v12, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v8 + 96) = v10 | 1;
LABEL_21:
    v53[0] = v10;
    sub_B7BB70(v53);
  }
  v13 = *(_QWORD *)(a2 + 128);
  sub_9B9C90(a1[2], (*(_BYTE *)(v13 + 10) & 0x20) != 0);
  v14 = *(_BYTE *)(v13 + 1);
  v15 = ((*(_BYTE *)(v13 + 3) & 1) << 24)
      | (*(_BYTE *)(v13 + 2) >> 7 << 23)
      | (((*(_BYTE *)(v13 + 2) & 0x40) != 0) << 22)
      | (((*(_BYTE *)(v13 + 2) & 0x20) != 0) << 21)
      | (((*(_BYTE *)(v13 + 2) & 0x10) != 0) << 20)
      | (((*(_BYTE *)(v13 + 2) & 8) != 0) << 19)
      | (((*(_BYTE *)(v13 + 2) & 4) != 0) << 18)
      | (((*(_BYTE *)(v13 + 2) & 2) != 0) << 17)
      | ((*(_BYTE *)(v13 + 2) & 1) << 16)
      | (v14 >> 7 << 15)
      | (((v14 & 0x40) != 0) << 14)
      | (((v14 & 0x20) != 0) << 13)
      | (((v14 & 0x10) != 0) << 12)
      | (((v14 & 8) != 0) << 11)
      | (((v14 & 4) != 0) << 10)
      | (((v14 & 2) != 0) << 9)
      | ((v14 & 1) << 8)
      | *(_BYTE *)v13 & 1
      | (2 * ((*(_BYTE *)v13 >> 1) & 0x3F))
      | (*(_BYTE *)v13 >> 7 << 7);
  sub_9B9C90(
    a1[2],
    (((*(_BYTE *)(v13 + 3) & 0x40) != 0) << 30)
  | (((*(_BYTE *)(v13 + 3) & 0x20) != 0) << 29)
  | (((*(_BYTE *)(v13 + 3) & 0x10) != 0) << 28)
  | (((*(_BYTE *)(v13 + 3) & 8) != 0) << 27)
  | (((*(_BYTE *)(v13 + 3) & 4) != 0) << 26)
  | (((*(_BYTE *)(v13 + 3) & 2) != 0) << 25)
  | (unsigned int)v15);
  sub_9B9C90(
    a1[2],
    (((*(_WORD *)(v13 + 6) >> 3) & 0x3F) << 20)
  | (2 * *(_DWORD *)(v13 + 4)) & 0xFC000
  | (((*(_WORD *)(v13 + 4) >> 7) & 0x3F) << 8)
  | (((*(_BYTE *)(v13 + 4) & 0x40) != 0) << 7)
  | (((*(_BYTE *)(v13 + 4) & 0x20) != 0) << 6)
  | (32 * ((*(_BYTE *)(v13 + 4) & 0x10) != 0))
  | (16 * ((*(_BYTE *)(v13 + 4) & 8) != 0))
  | (8 * ((*(_BYTE *)(v13 + 4) & 4) != 0))
  | (*(_BYTE *)(v13 + 3) >> 7)
  | (4 * ((*(_BYTE *)(v13 + 4) & 2) != 0))
  | (2 * (*(_BYTE *)(v13 + 4) & 1u)));
  v16 = *(_BYTE *)(v13 + 9);
  sub_9B9C90(
    a1[2],
    (((*(_BYTE *)(v13 + 10) & 0x10) != 0) << 27)
  | (((*(_BYTE *)(v13 + 10) & 8) != 0) << 26)
  | (((*(_BYTE *)(v13 + 10) & 4) != 0) << 25)
  | (((*(_BYTE *)(v13 + 10) & 2) != 0) << 24)
  | ((*(_BYTE *)(v13 + 10) & 1) << 23)
  | (v16 >> 7 << 22)
  | (((v16 & 0x40) != 0) << 21)
  | ((v16 & 0x3F) << 15)
  | (*(_BYTE *)(v13 + 8) >> 7 << 14)
  | (((*(_BYTE *)(v13 + 8) & 0x40) != 0) << 13)
  | (((*(_BYTE *)(v13 + 8) & 0x20) != 0) << 12)
  | (((*(_BYTE *)(v13 + 8) & 0x10) != 0) << 11)
  | (((*(_BYTE *)(v13 + 8) & 8) != 0) << 10)
  | (((*(_BYTE *)(v13 + 8) & 4) != 0) << 9)
  | (((*(_BYTE *)(v13 + 8) & 2) != 0) << 8)
  | (*(_BYTE *)(v13 + 7) >> 1) & 0x3F
  | ((*(_BYTE *)(v13 + 8) & 1) << 7)
  | ((unsigned __int8)(*(_BYTE *)(v13 + 7) >> 7) << 6));
  v17 = a1[2];
  v18 = sub_B96BE0(a2);
  sub_9B9C90(v17, v18);
  if ( (unsigned __int8)sub_B8E180(a2 + 64) || (unsigned int)sub_B97260(a2) == 3 )
  {
    v19 = a1[2];
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1[1] + 40) + 56LL) + 104LL) & 2) != 0 )
    {
      v19 = a1[2];
      goto LABEL_37;
    }
    v52 = sub_B8DA40(a2);
    v19 = a1[2];
    if ( v52 )
    {
LABEL_37:
      sub_9B9C90(v19, 1);
      v47 = a1[1];
      v48 = sub_1F92240(v47, a2);
      v49 = v47 + 2000;
      v20 = (_QWORD *)(v13 + 40);
      sub_9B9C90(v49, v48);
      if ( (*(_BYTE *)(v13 + 56) & 4) == 0 )
        goto LABEL_7;
      goto LABEL_38;
    }
  }
  v20 = (_QWORD *)(v13 + 40);
  sub_9B9C90(v19, 0);
  if ( (*(_BYTE *)(v13 + 56) & 4) == 0 )
    goto LABEL_7;
LABEL_38:
  sub_B968A0((__int64)v20, *a1);
LABEL_7:
  sub_1F960C0((__int64)a1, v20);
  sub_9B9C90(a1[2], *(_BYTE *)(v13 + 10) >> 7);
  v21 = *(_BYTE *)(v13 + 10);
  if ( v21 < 0 )
  {
    if ( (*(_BYTE *)(v13 + 80) & 4) != 0 )
      sub_B968A0(v13 + 64, *a1);
    sub_1F960C0((__int64)a1, (_QWORD *)(v13 + 64));
    v21 = *(_BYTE *)(v13 + 10);
  }
  v22 = a1[2];
  if ( (v21 & 0x20) != 0 )
  {
    v23 = *(_QWORD *)(a2 + 128);
    sub_9B9C90(
      v22,
      (4 * ((*(_BYTE *)(v23 + 104) & 4) != 0))
    | ((*(_BYTE *)(v23 + 108) & 1) << 20)
    | *(_BYTE *)(v23 + 104) & 3
    | (8 * ((*(_BYTE *)(v23 + 104) >> 3) & 3))
    | *(_DWORD *)(v23 + 104) & 0xFFFE0u);
    sub_9B9C90(a1[2], *(_WORD *)(v23 + 106) >> 4);
    sub_9B9C90(a1[2], *(_DWORD *)(v23 + 108) >> 1);
    v24 = a1[2];
    v25 = sub_B97150(a2);
    sub_9B9C90(v24, v25);
    sub_1F9A760(a1, *(__int64 **)(v23 + 136), v26, v27, v28, v29);
    result = (*(_DWORD *)(v23 + 104) >> 5) & 0x7FFF;
    if ( ((*(_DWORD *)(v23 + 104) >> 5) & 0x7FFF) != 0 )
    {
      v31 = 0;
      v32 = 16 * ((unsigned int)(result - 1) + 1LL);
      do
      {
        while ( 1 )
        {
          v33 = (_QWORD **)(*(_QWORD *)(v23 + 128) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v23 + 128) & 4) != 0 )
            v33 = (_QWORD **)**v33;
          v34 = &v33[v31 / 8];
          sub_1F6F570((_QWORD *)a1[1], *((_DWORD *)v34 + 2), a1[2]);
          v35 = *(_DWORD *)v34;
          v36 = sub_C94E40((__int64 *)v34);
          sub_9B9C90(a1[2], v35 & 1 | (unsigned int)(2 * v36));
          result = (unsigned int)sub_C94E40((__int64 *)v34) - 2;
          if ( (unsigned int)result <= 1 )
            break;
          v31 += 16LL;
          if ( v31 == v32 )
            return result;
        }
        v37 = (unsigned __int64)*v34 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v37 )
        {
          if ( (*(_BYTE *)(((unsigned __int64)*v34 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 26 >= 0x1B )
            v37 = 0;
        }
        v38 = a1[2];
        v31 += 16LL;
        v39 = sub_1F92240(a1[1], v37);
        sub_9B9C90(v38, v39);
        result = sub_1F6F570((_QWORD *)a1[1], *((_DWORD *)v34 + 3), a1[2]);
      }
      while ( v31 != v32 );
    }
  }
  else
  {
    sub_9B9C90(v22, *(unsigned int *)(v13 + 16));
    v40 = *(unsigned int *)(v13 + 16);
    if ( (_DWORD)v40 )
    {
      if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
      {
        v50 = sub_B96980(v13);
        v40 = *(unsigned int *)(v13 + 16);
        v41 = v50;
      }
      else
      {
        v41 = *(_QWORD *)(v13 + 24);
      }
      sub_1F9E0F0((__int64)a1, v41, v40);
    }
    sub_9B9C90(a1[2], *(unsigned int *)(v13 + 20));
    v42 = *(unsigned int *)(v13 + 20);
    if ( (_DWORD)v42 )
    {
      if ( (*(_BYTE *)(v13 + 32) & 1) != 0 )
      {
        v51 = sub_B969C0(v13);
        v42 = *(unsigned int *)(v13 + 20);
        v43 = v51;
      }
      else
      {
        v43 = *(_QWORD *)(v13 + 32);
      }
      sub_1F9E0F0((__int64)a1, v43, v42);
    }
    v44 = sub_BA5B10(a2);
    v45 = a1[2];
    v46 = sub_1F92240(a1[1], v44);
    return sub_9B9C90(v45, v46);
  }
  return result;
}
