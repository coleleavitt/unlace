__int64 __fastcall sub_A4CD70(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned __int8 a4, _BYTE *a5)
{
  __int64 v7; // r14
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r14
  void *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  int **v17; // r15
  int *v18; // rax
  int *v19; // rax
  __int64 v21; // r13
  __int64 i; // r14
  int v23; // edx
  int v24; // edx
  int v25; // r12d
  int *v26; // rax
  void *v27; // rdi
  __int64 v28; // [rsp+8h] [rbp-90h]
  void *v32; // [rsp+20h] [rbp-78h]
  int *v33; // [rsp+20h] [rbp-78h]
  int *v34; // [rsp+28h] [rbp-70h]
  int v35; // [rsp+3Ch] [rbp-5Ch] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v37[9]; // [rsp+50h] [rbp-48h] BYREF

  v28 = a2;
  if ( a3 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * a2);
    if ( !v7 )
      goto LABEL_4;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * a2);
    if ( !v7 )
      goto LABEL_4;
  }
  v8 = 1;
  v9 = sub_999800(a1, a2);
  if ( sub_3ED680((__int64)qword_1C7F2C0, v9, v7 + 16) )
    return v8;
LABEL_4:
  v10 = *(_QWORD *)(a1 + 1320);
  if ( v10 )
  {
    v11 = *(unsigned int *)(v10 - 4);
    if ( (_DWORD)v11 )
    {
      v12 = v10 + 40 * v11;
      do
      {
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v10);
        v14 = v10 + 16;
        v10 += 40;
        sub_182CBA0(v13, v14);
      }
      while ( v10 != v12 );
      v10 = *(_QWORD *)(a1 + 1320);
    }
    *(_DWORD *)(v10 - 4) = 0;
  }
  v15 = *(_QWORD *)(a1 + 592);
  *(_DWORD *)(a1 + 1328) = 0;
  *(_QWORD *)(a1 + 1332) = -1;
  v16 = v15 + 4 * v28;
  if ( a2 != -1 && (*(_BYTE *)(v16 + 3) & 0x30) == 0 )
  {
    v17 = (int **)(a1 + 1320);
    v36[0] = 1;
    v36[1] = 0;
    v37[0] = 1;
    v37[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v37);
    BYTE4(v37[0]) &= ~1u;
    LODWORD(v37[0]) = 1;
    v18 = sub_9C3770(a1 + 1320, &v35);
    v18[8] = a2;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v18, (int *)v36);
    sub_25A130((char *)v36);
    goto LABEL_13;
  }
  v17 = (int **)(a1 + 1320);
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 568) + 24LL * (*(_DWORD *)v16 & 0xFFFFFFF));
  if ( v21 )
  {
    v17 = (int **)(a1 + 1320);
    for ( i = v21 + 40LL * *(unsigned int *)(v21 - 4); v21 != i; v21 += 40 )
    {
      v25 = *(_DWORD *)(v21 + 32);
      if ( a2 == v25 || v25 == -1 )
        continue;
      v26 = sub_9C3770(a1 + 1320, v36);
      v26[8] = v25;
      v27 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v21 + 4) & 1) != 0 )
      {
        v34 = v26;
        v32 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v26, v21);
        v26 = v34;
        v27 = v32;
        if ( (*(_BYTE *)(v21 + 20) & 1) != 0 )
        {
LABEL_29:
          v33 = v26;
          sub_182C690(v27, v26 + 4, v21 + 16);
          v26 = v33;
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
      *((_BYTE *)v26 + 20) &= ~1u;
      v26[4] = v24;
LABEL_23:
      sub_1831620(qword_1C7F2C0, v26);
    }
  }
LABEL_13:
  v8 = sub_A4BF60(a1, v17, a3, a4, a5);
  if ( v8 == 2 )
  {
    v19 = (int *)sub_999800(a1, a2);
    sub_A0EB30((_QWORD *)a1, a2, v19, a3, v17);
  }
  return v8;
}

