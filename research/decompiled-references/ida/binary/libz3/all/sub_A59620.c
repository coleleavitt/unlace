__int64 __fastcall sub_A59620(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned __int8 a4, _BYTE *a5)
{
  __int64 v7; // r12
  int *v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r14
  void *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  int *v18; // rax
  int *v19; // rax
  __int64 v21; // r15
  __int64 v22; // r14
  int v23; // edx
  int v24; // edx
  int v25; // r12d
  int *v26; // rax
  int *v27; // r13
  void *v28; // rdi
  __int64 v29; // [rsp+8h] [rbp-90h]
  int **i; // [rsp+8h] [rbp-90h]
  void *v34; // [rsp+28h] [rbp-70h]
  int v35; // [rsp+3Ch] [rbp-5Ch] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v37[9]; // [rsp+50h] [rbp-48h] BYREF

  v29 = a2;
  if ( a3 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * a2);
    if ( !v7 )
      goto LABEL_4;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * a2);
    if ( !v7 )
      goto LABEL_4;
  }
  v8 = sub_9AD4F0(a1, a2);
  v9 = v7 + 16;
  v10 = 1;
  if ( sub_9F4890((__int64)v8, v9) )
    return v10;
LABEL_4:
  v11 = *(_QWORD *)(a1 + 1512);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      v13 = v11 + 40 * v12;
      do
      {
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v11);
        v15 = v11 + 16;
        v11 += 40;
        sub_182CBA0(v14, v15);
      }
      while ( v11 != v13 );
      v11 = *(_QWORD *)(a1 + 1512);
    }
    *(_DWORD *)(v11 - 4) = 0;
  }
  v16 = *(_QWORD *)(a1 + 720);
  *(_DWORD *)(a1 + 1520) = 0;
  *(_QWORD *)(a1 + 1524) = -1;
  v17 = v16 + 4 * v29;
  if ( a2 != -1 && (*(_BYTE *)(v17 + 3) & 0x30) == 0 )
  {
    v36[0] = 1;
    v36[1] = 0;
    v37[0] = 1;
    v37[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v37);
    BYTE4(v37[0]) &= ~1u;
    LODWORD(v37[0]) = 1;
    i = (int **)(a1 + 1512);
    v18 = sub_9C4650(a1 + 1512, &v35);
    v18[8] = a2;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v18, (int *)v36);
    sub_25A130((char *)v36);
    goto LABEL_13;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 696) + 24LL * (*(_DWORD *)v17 & 0xFFFFFFF));
  if ( v21 )
  {
    v22 = v21 + 40LL * *(unsigned int *)(v21 - 4);
    for ( i = (int **)(a1 + 1512); v21 != v22; v21 += 40 )
    {
      v25 = *(_DWORD *)(v21 + 32);
      if ( a2 == v25 || v25 == -1 )
        continue;
      v26 = sub_9C4650((__int64)i, v36);
      v26[8] = v25;
      v27 = v26;
      v28 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v21 + 4) & 1) != 0 )
      {
        v34 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v26, v21);
        v28 = v34;
        if ( (*(_BYTE *)(v21 + 20) & 1) != 0 )
        {
LABEL_29:
          sub_182C690(v28, v27 + 4, v21 + 16);
          goto LABEL_23;
        }
      }
      else
      {
        v23 = *(_DWORD *)v21;
        *((_BYTE *)v26 + 4) &= ~1u;
        *v26 = v23;
        if ( (*(_BYTE *)(v21 + 20) & 1) != 0 )
          goto LABEL_29;
      }
      v24 = *(_DWORD *)(v21 + 16);
      *((_BYTE *)v27 + 20) &= ~1u;
      v27[4] = v24;
LABEL_23:
      sub_1831620(qword_1C7F2C0, v27);
    }
  }
  else
  {
    i = (int **)(a1 + 1512);
  }
LABEL_13:
  v10 = sub_A580A0(a1, i, a3, a4, a5);
  if ( v10 == 2 )
  {
    v19 = sub_9AD4F0(a1, a2);
    sub_A0FDC0((_QWORD *)a1, a2, (__int64)v19, a3, i);
  }
  return v10;
}

