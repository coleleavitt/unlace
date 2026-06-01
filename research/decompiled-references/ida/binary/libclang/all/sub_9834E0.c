__int64 __fastcall sub_9834E0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // r8d
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rbx
  _QWORD *v14; // r12
  __int64 v15; // rbx
  __int64 *v16; // rcx
  int v17; // eax
  __int64 *v18; // rax
  char v19; // cl
  __int64 *v20; // rdi
  char v21; // si
  int v22; // eax
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  char v28; // al
  __int64 *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // r10d
  __int64 v38; // rdx
  __int64 *v39; // rdi
  unsigned __int8 v40; // cl
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
  int v55; // [rsp+C0h] [rbp-58h]
  int v56; // [rsp+D0h] [rbp-48h]

  v5 = (unsigned __int64)&v50;
  sub_97F890((__int64)&v50, a2);
  v7 = *(unsigned int *)(a2 + 208);
  v8 = *(_QWORD *)(a2 + 192);
  v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 448LL) + 4LL);
  if ( !(_DWORD)v7 )
    goto LABEL_32;
  v5 = ((_DWORD)v7 - 1) & (37 * v9);
  v6 = v8 + 16 * v5;
  v10 = *(_DWORD *)v6;
  if ( v9 != *(_DWORD *)v6 )
  {
    v6 = 1;
    while ( v10 != -1 )
    {
      v37 = v6 + 1;
      v38 = ((_DWORD)v7 - 1) & (unsigned int)(v5 + v6);
      v5 = (unsigned int)v38;
      v6 = v8 + 16 * v38;
      v10 = *(_DWORD *)v6;
      if ( v9 == *(_DWORD *)v6 )
        goto LABEL_3;
      v6 = v37;
    }
    goto LABEL_32;
  }
LABEL_3:
  if ( v6 == 16 * v7 + v8 )
  {
LABEL_32:
    v11 = *(_QWORD *)(a2 + 168) + v9 - (unsigned __int64)*(unsigned int *)(a2 + 160);
    v14 = (_QWORD *)v11;
    goto LABEL_7;
  }
  v11 = *(_QWORD *)(v6 + 8);
  sub_A1BF70(v54, v11);
  v12 = v54[3];
  v13 = v54[0];
  if ( !v56 && *(_BYTE *)(sub_8E5480((__int64)v54) + 51) && v13 == v55 )
    v14 = (_QWORD *)(v12 + v13 + 72);
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
    v18 = &v50;
    if ( v50 == v15 )
      v18 = (__int64 *)v51;
    v19 = *((_BYTE *)v18 + 20);
    if ( (v19 & 7) == 1 )
    {
      v32 = &v47;
      if ( v15 == v47 )
        v32 = (__int64 *)v48;
      v33 = &v47;
      if ( (*((_BYTE *)v32 + 20) & 7) != 1 )
        goto LABEL_76;
      sub_835150((__int64)v53, &v47, v50);
      v39 = v53;
      if ( v15 == v53[0] )
        v39 = (__int64 *)v53[1];
      sub_2579BF0(v39);
    }
    else
    {
      v20 = &v47;
      if ( v15 == v47 )
        v20 = (__int64 *)v48;
      v21 = *((_BYTE *)v20 + 20);
      if ( (v21 & 7) == 1 )
      {
        sub_835150((__int64)v53, &v50, v50);
      }
      else
      {
        if ( (v19 & 7) == 3 && (v21 & 7) == 3 )
        {
          v40 = v19 & 8;
          if ( v40 >> 3 != ((v21 & 8) != 0) )
          {
            v33 = &v47;
            if ( !v40 )
              v33 = &v50;
LABEL_76:
            sub_835150((__int64)v53, v33, v50);
            goto LABEL_47;
          }
        }
        if ( v50 == v15 )
          v22 = sub_257E370(&v50, &v47);
        else
          v22 = sub_2577560(&v50, &v47);
        v23 = &v47;
        if ( v22 )
          v23 = &v50;
        if ( v15 == *v23 )
          sub_257CF50(v53, v23);
        else
          sub_25768A0(v53, v23);
      }
    }
LABEL_47:
    if ( v15 == v53[0] )
      sub_257CF50(v54, v53);
    else
      sub_25768A0(v54, v53);
    if ( v15 == v45 )
    {
      if ( v15 == v54[0] )
      {
        v34 = v46;
        if ( v46 )
        {
          v35 = *(_QWORD *)(v46 - 8);
          v36 = v46 + 24 * v35;
          if ( v46 != v36 )
          {
            do
            {
              v44 = v34;
              v43 = v36 - 24;
              sub_5FF3B0((__int64 *)(v36 - 24));
              v36 = v43;
              v34 = v44;
            }
            while ( v44 != v43 );
            v35 = *(_QWORD *)(v44 - 8);
          }
          operator delete[]((void *)(v34 - 8), 24 * v35 + 8);
        }
        v46 = 0;
        sub_257D000(&v45, v54, v34, v25);
        goto LABEL_52;
      }
    }
    else if ( v15 != v54[0] )
    {
      sub_2576350(&v45, v54, v24, v25);
LABEL_52:
      sub_5FF3B0(v54);
      sub_5FF3B0(v53);
      goto LABEL_53;
    }
    sub_5FF3B0(&v45);
    if ( v15 == v54[0] )
      sub_257D000(&v45, v54, v30, v31);
    else
      sub_2576960(&v45, v54);
    goto LABEL_52;
  }
  if ( v50 == v15 )
  {
    v16 = (__int64 *)v51;
    v28 = *(_BYTE *)(v51 + 20) & 7;
    if ( v28 != 3 )
    {
      if ( v28 == 1 )
        goto LABEL_13;
      goto LABEL_58;
    }
  }
  else
  {
    if ( (v52 & 7) != 3 )
    {
      if ( (v52 & 7) == 1 )
        goto LABEL_13;
      goto LABEL_23;
    }
    v16 = &v50;
  }
  if ( v47 == v15 )
  {
    if ( (*(_BYTE *)(v48 + 20) & 7) != 3 )
      goto LABEL_22;
  }
  else if ( (v49 & 7) != 3 )
  {
    goto LABEL_22;
  }
  if ( (*((_BYTE *)v16 + 20) & 8) != 0 )
  {
    sub_9807A0(&v45, &v47, v50);
    goto LABEL_53;
  }
LABEL_22:
  if ( v50 == v15 )
  {
LABEL_58:
    sub_257CF50(v54, &v50);
    goto LABEL_24;
  }
LABEL_23:
  sub_25768A0(v54, &v50);
LABEL_24:
  if ( v15 == v47 )
    v17 = sub_257E370(&v47, v54);
  else
    v17 = sub_2577560(&v47, v54);
  if ( v17 != 2 )
  {
    sub_5FF3B0(v54);
    if ( v15 == v45 )
    {
      if ( v50 == v15 )
      {
        sub_257D030(&v45, &v50);
        goto LABEL_53;
      }
    }
    else if ( v50 != v15 )
    {
      sub_2576220(&v45, &v50);
      goto LABEL_53;
    }
    sub_5FF3B0(&v45);
    v29 = &v50;
    if ( v15 != v50 )
      goto LABEL_62;
LABEL_65:
    sub_257CF50(&v45, v29);
    goto LABEL_53;
  }
  sub_5FF3B0(v54);
LABEL_13:
  if ( v15 != v45 )
  {
    if ( v15 != v47 )
    {
      sub_2576220(&v45, &v47);
      goto LABEL_53;
    }
LABEL_61:
    sub_5FF3B0(&v45);
    v29 = &v47;
    if ( v15 != v47 )
    {
LABEL_62:
      sub_25768A0(&v45, v29);
      goto LABEL_53;
    }
    goto LABEL_65;
  }
  if ( v15 != v47 )
    goto LABEL_61;
  sub_257D030(&v45, &v47);
LABEL_53:
  v26 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v15 == v45 )
    sub_257CF50(v26, &v45);
  else
    sub_25768A0(v26, &v45);
  sub_5FF3B0(&v45);
  sub_5FF3B0(&v47);
  return sub_5FF3B0(&v50);
}

