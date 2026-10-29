__int64 __fastcall sub_D7DAF0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v6; // ebp
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // r10
  _DWORD *v16; // rsi
  __int64 v17; // rcx
  _DWORD *v18; // rdi
  _DWORD *v19; // rax
  int v20; // ecx
  _QWORD *v21; // rax
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdi
  void *v28; // rbx
  int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // [rsp+0h] [rbp-88h]
  void *v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+18h] [rbp-70h]
  _QWORD *v37; // [rsp+20h] [rbp-68h]
  unsigned int v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v40; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+40h] [rbp-48h] BYREF
  __int64 v42; // [rsp+48h] [rbp-40h]

  v6 = sub_15C5560(a1 + 432, a2);
  v34 = a1 + 232;
  v38 = sub_15C5540((int)a1 + 432, a2, v7, v8, v9, v10);
  v39 = 0;
  v40 = nullptr;
  v41 = 1;
  v42 = 0;
  sub_182CBA0(qword_1C7F2C0, &v41);
  BYTE4(v41) &= ~1u;
  LODWORD(v41) = 1;
  sub_1674520(a1 + 232, &v39, (unsigned int)(v6 - 1));
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v39);
  sub_182CBA0(v35, &v41);
  v11 = *(_QWORD *)(a1 + 440);
  v12 = v38 - 1;
  v13 = *(unsigned int *)(v11 + 824);
  v14 = *(_DWORD **)(v11 + 816);
  v15 = 24 * v13;
  v16 = &v14[6 * v13];
  v17 = 24LL * ((v38 - 1) & ((_DWORD)v13 - 1));
  v18 = &v14[(unsigned __int64)v17 / 4];
  v19 = &v14[(unsigned __int64)v17 / 4];
  if ( v17 != v15 )
  {
    do
    {
      v20 = v19[1];
      if ( v20 == 2 )
      {
        if ( v12 == *v19 && v12 == v19[2] )
          goto LABEL_8;
      }
      else if ( !v20 )
      {
        goto LABEL_31;
      }
      v19 += 6;
    }
    while ( v16 != v19 );
  }
  if ( v14 == v18 )
    goto LABEL_31;
  while ( 1 )
  {
    v30 = v14[1];
    if ( v30 != 2 )
    {
      if ( !v30 )
        goto LABEL_31;
      goto LABEL_25;
    }
    if ( v12 == *v14 && v12 == v14[2] )
      break;
LABEL_25:
    v14 += 6;
    if ( v18 == v14 )
      goto LABEL_31;
  }
  v19 = v14;
LABEL_8:
  if ( v16 != v19 )
  {
    while ( v19[1] != 2 )
    {
      v19 += 6;
      if ( v16 == v19 )
        goto LABEL_31;
    }
    if ( v16 != v19 )
    {
      v21 = *((_QWORD **)v19 + 2);
      goto LABEL_14;
    }
  }
LABEL_31:
  v36 = *(_QWORD *)(a1 + 440);
  v31 = (_QWORD *)sub_186B270(0x10u);
  *v31 = 0;
  v31[1] = 0;
  LODWORD(v39) = v38 - 1;
  v40 = v31;
  v37 = v31;
  sub_D81F20(v36 + 816, &v39);
  v32 = *(_QWORD *)(v36 + 760);
  BYTE4(v39) &= 0xFCu;
  LODWORD(v39) = 2;
  v40 = nullptr;
  sub_18393F0(v32, &v39, v38 - 1, v37);
  v33 = *(_QWORD *)(v36 + 760);
  v39 = 0xFFFFFFFFLL;
  v40 = nullptr;
  sub_1839610(v33, v37, &v39);
  v21 = v37;
LABEL_14:
  v39 = 0;
  v22 = qword_1C7F2C0;
  v40 = nullptr;
  v41 = 1;
  v42 = 0;
  if ( (*((_BYTE *)v21 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v39, v21);
  else
    LODWORD(v39) = *(_DWORD *)v21;
  sub_182CBA0(v22, &v41);
  BYTE4(v41) &= ~1u;
  LODWORD(v41) = 1;
  sub_1674520(v34, &v39, v38);
  v23 = sub_15E1BF0(*(_QWORD *)(a1 + 432));
  v24 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  v25 = *a4;
  if ( *a4 )
  {
    v26 = a4[1];
    if ( (*(_DWORD *)(v25 + 8))-- == 1 )
      sub_15D7BC0(v26, v25);
  }
  *a4 = v24;
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v39);
  return sub_182CBA0(v28, &v41);
}

