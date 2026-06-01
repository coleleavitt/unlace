void __fastcall sub_9808C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // eax
  int v9; // r8d
  _QWORD *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 *v13; // rax
  char v14; // dl
  __int64 *v15; // rax
  bool v16; // dl
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 *v21; // rbp
  __int64 *v22; // rbx
  __int64 v23; // rsi
  __int64 *v24; // r12
  __int64 *v25; // rbp
  __int64 v26; // rsi
  __int64 *v27; // r12
  __int64 *v28; // rbp
  __int64 v29; // rsi
  __int64 *v30; // r14
  __int64 *v31; // r12
  __int64 v32; // rsi
  unsigned int v33; // r10d
  __int64 v34; // rdx
  __int64 v35; // [rsp+0h] [rbp-D8h] BYREF
  __int64 *v36; // [rsp+8h] [rbp-D0h]
  __int64 v37; // [rsp+20h] [rbp-B8h] BYREF
  __int64 *v38; // [rsp+28h] [rbp-B0h]
  __int64 v39; // [rsp+40h] [rbp-98h] BYREF
  __int64 *v40; // [rsp+48h] [rbp-90h]
  __int64 v41; // [rsp+60h] [rbp-78h] BYREF
  __int64 *v42; // [rsp+68h] [rbp-70h]
  __int64 v43; // [rsp+78h] [rbp-60h]
  unsigned int v44; // [rsp+80h] [rbp-58h]
  int v45; // [rsp+90h] [rbp-48h]

  v4 = (unsigned __int64)&v39;
  sub_97F890((__int64)&v39, a2);
  v6 = *(unsigned int *)(a2 + 208);
  v7 = *(_QWORD *)(a2 + 192);
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 448LL) + 4LL);
  if ( !(_DWORD)v6 )
    goto LABEL_34;
  v4 = ((_DWORD)v6 - 1) & (37 * v8);
  v5 = v7 + 16 * v4;
  v9 = *(_DWORD *)v5;
  if ( v8 != *(_DWORD *)v5 )
  {
    v5 = 1;
    while ( v9 != -1 )
    {
      v33 = v5 + 1;
      v34 = ((_DWORD)v6 - 1) & (unsigned int)(v4 + v5);
      v4 = (unsigned int)v34;
      v5 = v7 + 16 * v34;
      v9 = *(_DWORD *)v5;
      if ( v8 == *(_DWORD *)v5 )
        goto LABEL_3;
      v5 = v33;
    }
    goto LABEL_34;
  }
LABEL_3:
  v7 += 16 * v6;
  if ( v5 == v7 )
  {
LABEL_34:
    v10 = (_QWORD *)(*(_QWORD *)(a2 + 168) + v8 - (unsigned __int64)*(unsigned int *)(a2 + 160));
    goto LABEL_7;
  }
  v7 = *(_QWORD *)(v5 + 8);
  sub_A1BF70(&v41, v7);
  if ( v45 )
    goto LABEL_5;
  v7 = *(_QWORD *)(v43 + 32);
  if ( *(_DWORD *)(v7 + 16) != v44 && v44 )
    v7 = *(_QWORD *)(v43 + v44 + 32);
  if ( !*(_BYTE *)(v7 + 51) || (v10 = (_QWORD *)(v43 + v41 + 72), v41 != v44) )
LABEL_5:
    v10 = (_QWORD *)(v43 + v41 + 40);
  v4 = (unsigned __int64)&v41;
  sub_A1C0C0(&v41);
LABEL_7:
  v11 = sub_2575D20(v4, v7, v5);
  if ( *v10 == v11 )
    sub_257CF50(&v37, v10);
  else
    sub_25768A0(&v37, v10);
  if ( v39 == v11 )
    sub_257CF50(&v35, &v39);
  else
    sub_25768A0(&v35, &v39);
  v12 = v35;
  v13 = &v35;
  if ( v35 == v11 )
    v13 = v36;
  v14 = *((_BYTE *)v13 + 20);
  v15 = &v37;
  v16 = (v14 & 8) != 0;
  if ( v37 == v11 )
    v15 = v38;
  if ( v16 != ((*((_BYTE *)v15 + 20) & 8) != 0) )
  {
    if ( v35 == v11 )
      sub_257D180(&v35);
    else
      sub_2577530(&v35);
    v12 = v35;
  }
  v17 = *(_QWORD *)(a1 + 184);
  if ( v12 == v11 )
    sub_257CF50(&v41, &v35);
  else
    sub_25768A0(&v41, &v35);
  v20 = sub_A1A4E0(v17, 24);
  if ( v41 == v11 )
    sub_257D000(v20, &v41, v18, v19);
  else
    sub_2576960(v20, &v41);
  if ( v41 == v11 )
  {
    v30 = v42;
    if ( v42 )
    {
      v31 = &v42[3 * *(v42 - 1)];
      if ( v42 == v31 )
      {
        v32 = 0;
      }
      else
      {
        do
        {
          v31 -= 3;
          sub_5FF3B0(v31);
        }
        while ( v30 != v31 );
        v32 = 24 * *(v30 - 1);
      }
      operator delete[](v30 - 1, v32 + 8);
    }
  }
  else
  {
    sub_25769A0(&v41);
  }
  if ( v35 == v11 )
  {
    v27 = v36;
    if ( v36 )
    {
      v28 = &v36[3 * *(v36 - 1)];
      if ( v36 == v28 )
      {
        v29 = 0;
      }
      else
      {
        do
        {
          v28 -= 3;
          sub_5FF3B0(v28);
        }
        while ( v27 != v28 );
        v29 = 24 * *(v27 - 1);
      }
      operator delete[](v27 - 1, v29 + 8);
    }
    v36 = nullptr;
  }
  else
  {
    sub_25769A0(&v35);
  }
  if ( v37 == v11 )
  {
    v24 = v38;
    if ( v38 )
    {
      v25 = &v38[3 * *(v38 - 1)];
      if ( v38 == v25 )
      {
        v26 = 0;
      }
      else
      {
        do
        {
          v25 -= 3;
          sub_5FF3B0(v25);
        }
        while ( v24 != v25 );
        v26 = 24 * *(v24 - 1);
      }
      operator delete[](v24 - 1, v26 + 8);
    }
    v38 = nullptr;
  }
  else
  {
    sub_25769A0(&v37);
  }
  if ( v39 == v11 )
  {
    v21 = v40;
    if ( v40 )
    {
      v22 = &v40[3 * *(v40 - 1)];
      if ( v40 == v22 )
      {
        v23 = 0;
      }
      else
      {
        do
        {
          v22 -= 3;
          sub_5FF3B0(v22);
        }
        while ( v21 != v22 );
        v23 = 24 * *(v21 - 1);
      }
      operator delete[](v21 - 1, v23 + 8);
    }
  }
  else
  {
    sub_25769A0(&v39);
  }
}

