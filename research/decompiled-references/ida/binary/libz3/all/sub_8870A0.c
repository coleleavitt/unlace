__int64 __fastcall sub_8870A0(_QWORD *a1, __int64 a2, unsigned int a3, int a4, int *a5, int a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r12
  bool v14; // zf
  __int64 v15; // rax
  unsigned int *v16; // rbp
  unsigned int v17; // eax
  unsigned int v18; // r12d
  unsigned int v19; // r14d
  void *v20; // r15
  int v21; // eax
  void *v22; // rbx
  __int64 result; // rax
  __int64 v24; // [rsp+8h] [rbp-60h]
  int v25; // [rsp+10h] [rbp-58h] BYREF
  char v26; // [rsp+14h] [rbp-54h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  int v28; // [rsp+20h] [rbp-48h] BYREF
  char v29; // [rsp+24h] [rbp-44h]
  __int64 v30; // [rsp+28h] [rbp-40h]

  v24 = a1[9];
  v9 = a1[105];
  if ( !v9 )
  {
    sub_16669E0(a1 + 104);
    v9 = a1[105];
  }
  sub_166A700(v9, (_DWORD)a5, 1, a4, (_DWORD)a5, a6);
  v10 = sub_15E1B70(a1[104]);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = sub_15E1B70(a1[104]);
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  if ( v11 )
  {
    v14 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v24, v11);
  }
  v15 = sub_15E1B70(a1[104]);
  v16 = (unsigned int *)v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  if ( v13 )
  {
    v14 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v24, v13);
  }
  v17 = sub_859A80((__int64)a1, v16);
  v18 = sub_852640((__int64)a1, v17);
  v19 = sub_852640((__int64)a1, a3);
  sub_854030((__int64)a1, v18);
  sub_854030((__int64)a1, v18);
  sub_854030((__int64)a1, v19);
  v26 &= 0xFCu;
  v29 &= 0xFCu;
  v25 = 0;
  v20 = qword_1C7F2C0;
  v27 = 0;
  v28 = 1;
  v30 = 0;
  if ( (a5[1] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v25, a5);
  else
    v25 = *a5;
  if ( (a5[5] & 1) != 0 )
  {
    sub_182C690(v20, &v28, a5 + 4);
  }
  else
  {
    v21 = a5[4];
    v29 &= ~1u;
    v28 = v21;
  }
  sub_1831690(qword_1C7F2C0, &v25);
  sub_854030((__int64)a1, v19);
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v25);
  result = sub_182CBA0(v22, &v28);
  if ( v16 )
  {
    v14 = v16[2]-- == 1;
    if ( v14 )
      return sub_15D7BC0(v24, v16);
  }
  return result;
}

