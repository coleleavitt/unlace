unsigned __int64 __fastcall sub_1FFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v6; // bl
  __int64 v7; // rdi
  unsigned __int16 v8; // r15
  bool v9; // r14
  __int64 dword; // r12
  __int64 v11; // rsi
  bool v12; // r8
  int v13; // eax
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // r10d
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rsi
  char *v24; // rdi
  __int64 v26; // r9
  _QWORD *v27; // r11
  __int64 v28; // r10
  __int64 v29; // rsi
  _QWORD *v30; // r10
  _QWORD *v31; // rax
  char fixup; // al
  bool v33; // [rsp+7h] [rbp-B9h]
  int v34; // [rsp+8h] [rbp-B8h]
  _QWORD *v35; // [rsp+8h] [rbp-B8h]
  __int64 v36; // [rsp+10h] [rbp-B0h]
  bool v37; // [rsp+10h] [rbp-B0h]
  __int64 v38; // [rsp+10h] [rbp-B0h]
  __int64 v40; // [rsp+18h] [rbp-A8h]
  _QWORD v42[2]; // [rsp+28h] [rbp-98h] BYREF
  unsigned __int64 *v43; // [rsp+38h] [rbp-88h] BYREF
  char *s1; // [rsp+40h] [rbp-80h] BYREF
  __int128 v45; // [rsp+48h] [rbp-78h]
  unsigned __int64 *v46; // [rsp+60h] [rbp-60h] BYREF
  __m128i si128; // [rsp+68h] [rbp-58h]
  __int64 v48; // [rsp+78h] [rbp-48h]
  __int64 v49; // [rsp+80h] [rbp-40h]
  unsigned __int64 v50; // [rsp+88h] [rbp-38h]

  v6 = a2;
  v7 = a3;
  v42[0] = a3;
  v50 = __readfsqword(0x28u);
  if ( (((_BYTE)a2 - 36) & 0xFB) != 0 )
  {
    if ( (a2 & 0xFB) == 0x23 )
    {
      v8 = 4;
      v9 = 0;
      dword = (unsigned int)get_dword(a3, a2, a3, a4, a5);
      goto LABEL_5;
    }
    if ( (a2 & 0xFB) == 0x22 )
    {
      v8 = 1;
      v9 = 0;
      dword = (unsigned __int16)get_word(a3);
      goto LABEL_5;
    }
  }
  else
  {
    get_qword(a3);
    v7 = v42[0];
  }
  v8 = 13;
  dword = (unsigned __int8)get_byte(v7);
  v9 = (_BYTE)a2 == 52;
LABEL_5:
  v11 = getseg(v42[0]);
  if ( !v11 )
    return v50 - __readfsqword(0x28u);
  s1 = nullptr;
  v45 = 0;
  get_segm_name(&s1, v11, 0);
  v12 = v6 == 52 || (unsigned __int8)(v6 - 37) <= 3u;
  if ( (_QWORD)v45 )
  {
    v13 = strcmp(s1, ".eh_frame");
    v12 = v6 == 52 || (unsigned __int8)(v6 - 37) <= 3u;
    if ( !v13 )
    {
      v14 = *(_QWORD **)(a1 + 376);
      if ( v6 == 52 || (unsigned __int8)(v6 - 37) <= 3u )
      {
LABEL_9:
        v15 = v14;
        if ( v6 == 52 )
        {
          v16 = 0;
          v17 = 0;
          v18 = 0;
          LODWORD(dword) = 0;
          v9 = 1;
          v19 = (_QWORD *)(a1 + 368);
          goto LABEL_27;
        }
        LODWORD(dword) = dword - (a4 + a5);
        goto LABEL_11;
      }
LABEL_45:
      LODWORD(dword) = a4 + a5 + dword;
      v15 = v14;
LABEL_11:
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v9 = 1;
      v19 = (_QWORD *)(a1 + 368);
      goto LABEL_27;
    }
  }
  v15 = *(_QWORD **)(a1 + 376);
  v14 = v15;
  if ( !v12 )
  {
    if ( !v9 )
    {
      v18 = a4;
      v16 = 0;
      v17 = dword + a5;
      v19 = (_QWORD *)(a1 + 368);
      goto LABEL_27;
    }
    goto LABEL_45;
  }
  if ( v9 )
    goto LABEL_9;
  v20 = v42[0];
  v19 = (_QWORD *)(a1 + 368);
  v26 = v42[0];
  v23 = (_QWORD *)(a1 + 368);
  if ( !v15 )
  {
    v18 = a4;
    v16 = 0;
    v17 = dword - a5;
    *(_DWORD *)(a1 + 408) = v6;
    goto LABEL_15;
  }
  v27 = (_QWORD *)(a1 + 368);
  do
  {
    while ( 1 )
    {
      v28 = v14[2];
      v29 = v14[3];
      if ( v14[4] < v42[0] )
        break;
      v27 = v14;
      v14 = (_QWORD *)v14[2];
      if ( !v28 )
        goto LABEL_42;
    }
    v14 = (_QWORD *)v14[3];
  }
  while ( v29 );
LABEL_42:
  if ( v19 == v27 || v42[0] < v27[4] )
  {
    v18 = a4;
    v16 = 0;
    v17 = dword - a5;
    *(_DWORD *)(a1 + 408) = v6;
    goto LABEL_29;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 408) - 33) > 3 )
  {
    v9 = v12;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    *(_DWORD *)(a1 + 408) = v6;
    LODWORD(dword) = dword - (a4 + a5);
    goto LABEL_29;
  }
  v30 = (_QWORD *)(a1 + 368);
  do
  {
    if ( v15[4] >= v42[0] )
    {
      v30 = v15;
      v15 = (_QWORD *)v15[2];
    }
    else
    {
      v15 = (_QWORD *)v15[3];
    }
  }
  while ( v15 );
  if ( v30 == v19 || v42[0] < v30[4] )
  {
    v43 = v42;
    v37 = v12;
    v31 = sub_1FA80((_QWORD *)(a1 + 360), v30, &v43);
    v26 = v42[0];
    v19 = (_QWORD *)(a1 + 368);
    v30 = v31;
    v12 = v37;
  }
  v35 = v19;
  v33 = v12;
  v38 = v30[5];
  v46 = nullptr;
  v48 = 0;
  v49 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BEB0);
  fixup = get_fixup(&v46, v26);
  v18 = v38;
  v19 = v35;
  v16 = a4;
  if ( fixup )
  {
    v17 = v49 - a5;
    v15 = *(_QWORD **)(a1 + 376);
  }
  else
  {
    v17 = 0;
    v9 = v33;
    v15 = *(_QWORD **)(a1 + 376);
    LODWORD(dword) = dword - (a4 + a5);
  }
LABEL_27:
  *(_DWORD *)(a1 + 408) = v6;
  if ( v15 )
  {
    v20 = v42[0];
LABEL_29:
    v23 = v19;
    do
    {
      v22 = v15[3];
      if ( v15[4] >= v20 )
      {
        v23 = v15;
        v15 = (_QWORD *)v15[2];
      }
      else
      {
        v15 = (_QWORD *)v15[3];
      }
    }
    while ( v15 );
    if ( v19 != v23 && v20 >= v23[4] )
      goto LABEL_16;
    goto LABEL_15;
  }
  v23 = v19;
LABEL_15:
  v34 = v18;
  v46 = v42;
  v36 = v17;
  v20 = a1 + 360;
  v40 = v16;
  v21 = sub_1FA80((_QWORD *)(a1 + 360), v23, &v46);
  v18 = v34;
  v17 = v36;
  v23 = v21;
  v16 = v40;
LABEL_16:
  v23[5] = a4;
  if ( v9 )
  {
    if ( (unsigned __int8)is_debugger_on(v20, v23, v22, v19, v17, v16) )
    {
      v24 = s1;
      if ( !s1 )
        return v50 - __readfsqword(0x28u);
      goto LABEL_22;
    }
    if ( v8 == 4 )
    {
      put_dword(v42[0], (unsigned int)dword);
    }
    else if ( v8 == 1 )
    {
      put_word(v42[0], (unsigned __int16)dword);
    }
    else
    {
      put_byte(v42[0], (unsigned __int8)dword);
    }
  }
  else
  {
    sub_42050(a1, v42[0], v18, 0, v17, v8, v16, 1879048192, 0);
  }
  v24 = s1;
  if ( s1 )
  {
LABEL_22:
    *(_QWORD *)&v45 = 0;
    qfree(v24);
  }
  return v50 - __readfsqword(0x28u);
}
