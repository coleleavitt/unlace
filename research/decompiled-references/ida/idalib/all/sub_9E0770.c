unsigned __int64 *__fastcall sub_9E0770(
        unsigned __int64 *a1,
        __int64 **a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int16 v11; // cx
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rax
  bool v26; // cl
  int v27; // eax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+8h] [rbp-80h]
  _QWORD v34[2]; // [rsp+10h] [rbp-78h] BYREF
  char v35; // [rsp+20h] [rbp-68h]
  _QWORD v36[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+40h] [rbp-48h]
  int v38; // [rsp+48h] [rbp-40h]
  unsigned __int64 v39; // [rsp+50h] [rbp-38h]
  bool v40; // [rsp+58h] [rbp-30h]

  if ( !(a6 | a5) )
  {
    sub_9E0580(a1, a2, a3, nullptr, a5, a6);
    return a1;
  }
  v36[1] = a4;
  v36[0] = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( !a5 )
    goto LABEL_5;
  v11 = *(_WORD *)a5 & 0x1FF;
  if ( v11 == 46 )
  {
    v37 = *(_QWORD *)(a5 + 16) & 0xFFFFFFFFFFFFFFFDLL;
    v40 = (*(_QWORD *)a5 & 0x80000LL) != 0;
LABEL_5:
    v12 = (*(_BYTE *)(a4 + 28) & 0x7F) - 35;
    goto LABEL_6;
  }
  if ( v11 == 92 )
  {
    v33 = a5;
    v23 = sub_C94680(a5);
    v24 = *(_QWORD *)(v33 + 32);
    v37 = v23 & 0xFFFFFFFFFFFFFFFDLL;
    v25 = (_QWORD *)sub_BFD550(v24);
    v26 = 0;
    a5 = v33;
    if ( (*(_WORD *)v25 & 0x1FF) == 0x2E )
      v26 = (*v25 & 0x80000) != 0;
    v27 = *(_DWORD *)(v33 + 16);
    v40 = v26;
    v38 = v27;
    v39 = (v33 + 8 * (((*(_BYTE *)(v33 + 2) & 8) != 0) + 1LL) + 32) & 0xFFFFFFFFFFFFFFFBLL;
    v12 = (*(_BYTE *)(a4 + 28) & 0x7F) - 35;
  }
  else
  {
    v12 = (*(_BYTE *)(a4 + 28) & 0x7F) - 35;
    if ( ((v11 + 423) & 0x1FFu) <= 4 )
    {
      v30 = 8 * (((*(_BYTE *)(a5 + 2) & 8) != 0) + 1LL);
      v31 = a5 + v30 + 32;
      if ( v11 == 91 && v12 <= 3 )
      {
        v32 = *(_QWORD *)v31;
        v38 = *(_DWORD *)(a5 + 16) - 1;
        v37 = v32 & 0xFFFFFFFFFFFFFFFDLL;
        v39 = (a5 + v30 + 40) & 0xFFFFFFFFFFFFFFFBLL;
        goto LABEL_7;
      }
      v38 = *(_DWORD *)(a5 + 16);
      v39 = v31 & 0xFFFFFFFFFFFFFFFBLL;
    }
    else if ( (unsigned int)v11 - 113 <= 1 )
    {
      v38 = *(_DWORD *)(a5 + 32);
      v28 = a5 + 48;
      v29 = a5 + 40;
      if ( v11 == 114 )
        v29 = v28;
      a5 = v29 & 0xFFFFFFFFFFFFFFFBLL;
      v39 = a5;
    }
  }
LABEL_6:
  if ( v12 > 3 )
  {
    if ( a6 )
      goto LABEL_21;
LABEL_30:
    if ( !a3 )
    {
      sub_9E0580(a1, a2, v37 & 0xFFFFFFFFFFFFFFFCLL, nullptr, a5, a6);
      return a1;
    }
LABEL_16:
    sub_9E0580(a1, a2, a3, v36, a5, a6);
    return a1;
  }
LABEL_7:
  v13 = *(_QWORD *)(sub_B8C1B0(a4 + 72) + 16);
  if ( (v13 & 4) != 0 )
    v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v14 )
    BUG();
  v15 = *(_QWORD *)(v14 + 64);
  if ( v15 && (*(_BYTE *)(v15 + 10) & 0x20) != 0 )
    v37 = 0;
  if ( !a6 )
    goto LABEL_30;
  if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v37 = a6 | 2;
    if ( a3 )
      goto LABEL_16;
    goto LABEL_22;
  }
LABEL_21:
  v39 = a6 | 4;
  if ( a3 )
    goto LABEL_16;
LABEL_22:
  v19 = sub_B987D0(a4);
  v21 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v21 + 16) - 43 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
    && (v21 = sub_F63050(v21, v19, v17, v18, v20)) != 0 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(v21 + 32);
      if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
        break;
      v22 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      v21 = *(_QWORD *)v22;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v22 + 16LL) - 43 > 1 )
        v21 = sub_F63050(v21, v22, v17, v18, v20);
    }
  }
  sub_9DD0C0(v34, v19, v17, v18, v20);
  *a1 = a6 & 0xFFFFFFFFFFFFFFF9LL | (v35 != 0 ? 4 : 0);
  a1[1] = v34[0];
  a1[2] = v34[1];
  return a1;
}
