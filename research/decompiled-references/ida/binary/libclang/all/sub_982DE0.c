__int64 __fastcall sub_982DE0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // r8d
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r12
  _QWORD *v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rdi
  char v18; // dl
  int v19; // eax
  __int64 *v20; // rdx
  __int64 v21; // rdx
  char v22; // al
  int v23; // eax
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // dl
  __int64 *v28; // rsi
  char v29; // si
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // r10d
  __int64 v39; // rdx
  __int64 *v40; // rdi
  __int64 v42; // [rsp+10h] [rbp-108h]
  __int64 v43; // [rsp+10h] [rbp-108h]
  __int64 v44; // [rsp+18h] [rbp-100h]
  __int64 v45; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+28h] [rbp-F0h]
  __int64 v47; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+48h] [rbp-D0h]
  char v49; // [rsp+54h] [rbp-C4h]
  __int64 v50; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+68h] [rbp-B0h]
  char v52; // [rsp+74h] [rbp-A4h]
  __int64 v53[4]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v54[4]; // [rsp+A0h] [rbp-78h] BYREF
  unsigned int v55; // [rsp+C0h] [rbp-58h]
  int v56; // [rsp+D0h] [rbp-48h]

  v5 = (unsigned __int64)&v50;
  sub_97F890((__int64)&v50, a2);
  v7 = *(unsigned int *)(a2 + 208);
  v8 = *(_QWORD *)(a2 + 192);
  v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 448LL) + 4LL);
  if ( !(_DWORD)v7 )
    goto LABEL_34;
  v5 = ((_DWORD)v7 - 1) & (37 * v9);
  v6 = v8 + 16 * v5;
  v10 = *(_DWORD *)v6;
  if ( v9 != *(_DWORD *)v6 )
  {
    v6 = 1;
    while ( v10 != -1 )
    {
      v38 = v6 + 1;
      v39 = ((_DWORD)v7 - 1) & (unsigned int)(v5 + v6);
      v5 = (unsigned int)v39;
      v6 = v8 + 16 * v39;
      v10 = *(_DWORD *)v6;
      if ( v9 == *(_DWORD *)v6 )
        goto LABEL_3;
      v6 = v38;
    }
    goto LABEL_34;
  }
LABEL_3:
  if ( v6 == 16 * v7 + v8 )
  {
LABEL_34:
    v11 = *(_QWORD *)(a2 + 168) + v9 - (unsigned __int64)*(unsigned int *)(a2 + 160);
    v14 = (_QWORD *)v11;
    goto LABEL_7;
  }
  v11 = *(_QWORD *)(v6 + 8);
  sub_A1BF70(v54, v11);
  v12 = v54[3];
  v13 = v54[0];
  if ( !v56 && *(_BYTE *)(sub_8E5480((__int64)v54) + 51) && v55 == v13 )
    v14 = (_QWORD *)(v12 + v55 + 72);
  else
    v14 = (_QWORD *)(v12 + v13 + 40);
  v5 = (unsigned __int64)v54;
  sub_A1C0C0(v54);
LABEL_7:
  v15 = sub_2575D20(v5, v11, v6);
  if ( *v14 == v15 )
    sub_257CF50(&v47, v14);
  else
    sub_25768A0(&v47, v14);
  v42 = sub_2575CF0();
  sub_2582F80(v54, 0.0);
  sub_257EDC0(&v45, v54, v42);
  sub_25769A0(v54);
  if ( a3 )
  {
    v20 = &v50;
    if ( v15 == v50 )
      v20 = (__int64 *)v51;
    v21 = *((unsigned __int8 *)v20 + 20);
    v22 = v21 & 7;
    if ( (v21 & 7) == 1 )
    {
      v33 = &v47;
      if ( v47 == v15 )
        v33 = (__int64 *)v48;
      v34 = &v47;
      if ( (*((_BYTE *)v33 + 20) & 7) != 1 )
        goto LABEL_79;
      sub_835150((__int64)v53, &v47, v21);
      v40 = v53;
      if ( v15 == v53[0] )
        v40 = (__int64 *)v53[1];
      sub_2579BF0(v40);
LABEL_47:
      if ( v15 == v53[0] )
        sub_257CF50(v54, v53);
      else
        sub_25768A0(v54, v53);
      if ( v15 == v45 )
      {
        if ( v15 == v54[0] )
        {
          v35 = v46;
          if ( v46 )
          {
            v36 = *(_QWORD *)(v46 - 8);
            v37 = v46 + 24 * v36;
            if ( v46 != v37 )
            {
              do
              {
                v44 = v35;
                v43 = v37 - 24;
                sub_5FF3B0((__int64 *)(v37 - 24));
                v37 = v43;
                v35 = v44;
              }
              while ( v44 != v43 );
              v36 = *(_QWORD *)(v44 - 8);
            }
            operator delete[]((void *)(v35 - 8), 24 * v36 + 8);
          }
          v46 = 0;
          sub_257D000(&v45, v54, v35, v26);
          goto LABEL_52;
        }
      }
      else if ( v15 != v54[0] )
      {
        sub_2576350(&v45, v54, v25, v26);
LABEL_52:
        sub_5FF3B0(v54);
        sub_5FF3B0(v53);
        goto LABEL_16;
      }
      sub_5FF3B0(&v45);
      if ( v15 == v54[0] )
        sub_257D000(&v45, v54, v31, v32);
      else
        sub_2576960(&v45, v54);
      goto LABEL_52;
    }
    if ( v47 == v15 )
    {
      v29 = *(_BYTE *)(v48 + 20) & 7;
      if ( v29 != 1 )
      {
        if ( v22 == 3 && v29 == 3 )
        {
          v21 = (v21 & 8) != 0;
          if ( ((*(_BYTE *)(v48 + 20) & 8) != 0) != (_BYTE)v21 )
          {
LABEL_84:
            v34 = &v50;
            if ( !(_BYTE)v21 )
              v34 = &v47;
LABEL_79:
            sub_835150((__int64)v53, v34, v21);
            goto LABEL_47;
          }
        }
        v23 = sub_257E370(&v47, &v50);
        goto LABEL_43;
      }
    }
    else if ( (v49 & 7) != 1 )
    {
      if ( v22 == 3 && (v49 & 7) == 3 )
      {
        v21 = (v21 & 8) != 0;
        if ( ((v49 & 8) != 0) != (_BYTE)v21 )
          goto LABEL_84;
      }
      v23 = sub_2577560(&v47, &v50);
LABEL_43:
      v24 = &v47;
      if ( v23 )
        v24 = &v50;
      if ( v15 == *v24 )
        sub_257CF50(v53, v24);
      else
        sub_25768A0(v53, v24);
      goto LABEL_47;
    }
    sub_835150((__int64)v53, &v50, v21);
    goto LABEL_47;
  }
  if ( v15 == v50 )
  {
    v27 = *(_BYTE *)(v51 + 20) & 7;
    if ( v27 != 3 )
    {
      if ( v27 == 1 )
        goto LABEL_13;
      goto LABEL_55;
    }
  }
  else if ( (v52 & 7) != 3 )
  {
    if ( (v52 & 7) == 1 )
      goto LABEL_13;
    goto LABEL_25;
  }
  if ( v47 == v15 )
  {
    v18 = *(_BYTE *)(v48 + 20);
    if ( (v18 & 7) != 3 )
      goto LABEL_24;
  }
  else
  {
    v18 = v49;
    if ( (v49 & 7) != 3 )
      goto LABEL_24;
  }
  v30 = v18 & 8;
  if ( (_DWORD)v30 )
  {
    sub_9807A0(&v45, &v47, v30);
    goto LABEL_16;
  }
LABEL_24:
  if ( v15 == v50 )
  {
LABEL_55:
    sub_257CF50(v54, &v50);
    goto LABEL_26;
  }
LABEL_25:
  sub_25768A0(v54, &v50);
LABEL_26:
  if ( v15 == v47 )
    v19 = sub_257E370(&v47, v54);
  else
    v19 = sub_2577560(&v47, v54);
  if ( v19 )
  {
    sub_5FF3B0(v54);
    if ( v15 == v45 )
    {
      if ( v15 == v50 )
      {
        sub_257D030(&v45, &v50);
        goto LABEL_16;
      }
    }
    else if ( v15 != v50 )
    {
      sub_2576220(&v45, &v50);
      goto LABEL_16;
    }
    sub_5FF3B0(&v45);
    v28 = &v50;
    if ( v15 != v50 )
      goto LABEL_60;
LABEL_63:
    sub_257CF50(&v45, v28);
    goto LABEL_16;
  }
  sub_5FF3B0(v54);
LABEL_13:
  if ( v15 != v45 )
  {
    if ( v15 != v47 )
    {
      sub_2576220(&v45, &v47);
      goto LABEL_16;
    }
LABEL_59:
    sub_5FF3B0(&v45);
    v28 = &v47;
    if ( v15 != v47 )
    {
LABEL_60:
      sub_25768A0(&v45, v28);
      goto LABEL_16;
    }
    goto LABEL_63;
  }
  if ( v15 != v47 )
    goto LABEL_59;
  sub_257D030(&v45, &v47);
LABEL_16:
  v16 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v15 == v45 )
    sub_257CF50(v16, &v45);
  else
    sub_25768A0(v16, &v45);
  sub_5FF3B0(&v45);
  sub_5FF3B0(&v47);
  return sub_5FF3B0(&v50);
}

