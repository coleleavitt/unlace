_BYTE *__fastcall sub_E65550(__int64 *a1, __int64 a2)
{
  char v3; // al
  _BYTE *v4; // rdx
  unsigned __int8 v5; // dl
  int v6; // ecx
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // rdx
  __int64 *v12; // r12
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _BYTE *result; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  _BYTE *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  char v39; // si
  __int64 v40; // rdi
  _BYTE *v41; // rax
  unsigned __int64 v42; // rdi
  int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  char *v51; // [rsp+8h] [rbp-30h]

  v3 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v3 == 43 )
  {
    v5 = *(_BYTE *)(a2 + 96);
    v6 = v5 & 7;
    if ( v6 == 2 )
    {
LABEL_30:
      v40 = a1[1];
      v41 = *(_BYTE **)(v40 + 32);
      if ( (unsigned __int64)v41 >= *(_QWORD *)(v40 + 24) )
      {
        sub_2257CD0(v40, 52);
      }
      else
      {
        *(_QWORD *)(v40 + 32) = v41 + 1;
        *v41 = 52;
      }
      goto LABEL_9;
    }
    goto LABEL_5;
  }
  v4 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    if ( ((*(_BYTE *)(*(_QWORD *)v4 + 8LL) + 70) & 0x7Fu) > 3 )
    {
LABEL_4:
      v5 = *(_BYTE *)(a2 + 96);
      v6 = v5 & 7;
      if ( v6 == 2 )
      {
LABEL_34:
        if ( ((v3 + 85) & 0x7D) != 0 )
        {
          v42 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v42 = *(_QWORD *)(v42 + 8);
          v43 = *(_BYTE *)(sub_B6AD60(v42) + 8) & 0x7F;
          if ( !v43 || v43 == 24 )
            goto LABEL_7;
          if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
          {
            v44 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
              v44 = *(_QWORD *)v44;
            if ( ((*(_BYTE *)(v44 + 8) + 70) & 0x7Fu) <= 3 )
              goto LABEL_7;
          }
        }
        goto LABEL_30;
      }
LABEL_5:
      if ( v6 || ((v5 >> 3) & 3) != 2 )
      {
LABEL_7:
        v7 = a1[1];
        v8 = *(_BYTE **)(v7 + 32);
        if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
        {
          sub_2257CD0(v7, 51);
        }
        else
        {
          *(_QWORD *)(v7 + 32) = v8 + 1;
          *v8 = 51;
        }
        goto LABEL_9;
      }
      goto LABEL_34;
    }
  }
  else if ( ((v4[8] + 70) & 0x7Fu) > 3 )
  {
    goto LABEL_4;
  }
  v33 = a1[1];
  v34 = *(_QWORD *)(v33 + 24);
  v35 = *(_BYTE **)(v33 + 32);
  if ( ((*(_BYTE *)(a2 + 29) >> 5) & 3) != 0 )
  {
    if ( ((*(_BYTE *)(a2 + 29) >> 5) & 3) == 1 )
    {
      if ( (unsigned __int64)v35 >= v34 )
      {
        sub_2257CD0(v33, 49);
      }
      else
      {
        *(_QWORD *)(v33 + 32) = v35 + 1;
        *v35 = 49;
      }
    }
    else if ( (unsigned __int64)v35 >= v34 )
    {
      sub_2257CD0(v33, 48);
    }
    else
    {
      *(_QWORD *)(v33 + 32) = v35 + 1;
      *v35 = 48;
    }
  }
  else if ( (unsigned __int64)v35 >= v34 )
  {
    sub_2257CD0(v33, 50);
  }
  else
  {
    *(_QWORD *)(v33 + 32) = v35 + 1;
    *v35 = 50;
  }
LABEL_9:
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  v10 = *(_QWORD *)(a2 + 48);
  v11 = (char *)v9;
  v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v13 - 42) > 2u && v13 != 33 )
  {
    v51 = v11;
    v45 = sub_A4E300(*(_QWORD **)(*a1 + 8), v10);
    v46 = v45;
    if ( v45 )
    {
      v47 = *(_QWORD *)(v45 + 32);
      v48 = *(_QWORD *)&byte_8[v47 & 0xFFFFFFFFFFFFFFF0LL];
      LOBYTE(v45) = 0;
      if ( (v48 & 8) != 0 )
        v45 = *(__int64 *)((char *)&qword_18 + (v48 & 0xFFFFFFFFFFFFFFF0LL));
      sub_E547F0(a1[1], v45 | (v47 | v48) & 7);
      sub_E608A0(a1, *(_QWORD *)(v46 + 32), nullptr, 1);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 32) & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) <= 4u )
      {
        v49 = a1[1];
        result = *(_BYTE **)(v49 + 32);
        if ( (unsigned __int64)result >= *(_QWORD *)(v49 + 24) )
          return (_BYTE *)sub_2257CD0(v49, 65);
        *(_QWORD *)(v49 + 32) = result + 1;
        *result = 65;
        return result;
      }
      v50 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
      LOBYTE(v38) = 0;
      if ( (v50 & 8) == 0 )
        goto LABEL_55;
    }
    else
    {
      sub_E608A0(a1, v10, v51, 0);
      v50 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
      LOBYTE(v38) = 0;
      if ( (v50 & 8) == 0 )
      {
LABEL_55:
        v39 = v10 | v50;
        return (_BYTE *)sub_E544F0((__int64)a1, (unsigned __int8)v38 | v39 & 7u, 0);
      }
    }
    v38 = *(__int64 *)((char *)&qword_18 + (v50 & 0xFFFFFFFFFFFFFFF0LL));
    goto LABEL_55;
  }
  sub_E608A0(a1, v10, v11, 0);
  v14 = sub_F47380(v10, *(_QWORD *)(*a1 + 8));
  v15 = 0;
  if ( (v14 & 8) != 0 )
    v15 = *(__int64 *)((char *)&qword_18 + (v14 & 0xFFFFFFFFFFFFFFF0LL));
  v16 = v14 & 7 | v15;
  sub_E54680((__int64)a1, v16, 0);
  v20 = *v12;
  if ( *(_BYTE *)(*v12 + 16) == 33 )
    goto LABEL_14;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
    goto LABEL_25;
  v20 = sub_F3F310(*v12, v16, v17, v18);
  if ( !v20 )
  {
    v20 = *v12;
LABEL_25:
    v36 = sub_F44710(v20, v16, v17, v18, v19);
    v37 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL];
    LOBYTE(v38) = 0;
    if ( (v37 & 8) != 0 )
      v38 = *(__int64 *)((char *)&qword_18 + (v37 & 0xFFFFFFFFFFFFFFF0LL));
    v39 = v36 | v37;
    return (_BYTE *)sub_E544F0((__int64)a1, (unsigned __int8)v38 | v39 & 7u, 0);
  }
LABEL_14:
  v21 = *(_QWORD *)(v20 + 32);
  v22 = *(_QWORD *)&byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL];
  v23 = 0;
  if ( (v22 & 8) != 0 )
    v23 = *(__int64 *)((char *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL));
  v24 = v23 | ((unsigned __int8)v22 | (unsigned __int8)v21) & 7;
  sub_E544F0((__int64)a1, v24, 1);
  v28 = sub_F3DED0(v20, v24, v25, v26, v27);
  return sub_E5E850(a1, v28, 0, v29, v30, v31);
}

