__int64 __fastcall sub_C4E940(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  void *v9; // rdi
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  void *v17; // rbx
  void *v19; // [rsp+8h] [rbp-60h]
  _QWORD v20[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v20[0] = 0;
  v20[1] = 0;
  v9 = qword_1C7F2C0;
  v21[0] = 1;
  v21[1] = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    v19 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v20, a3);
    v9 = v19;
  }
  else
  {
    LODWORD(v20[0]) = *(_DWORD *)a3;
  }
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v9, v21, a3 + 16);
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 )
      goto LABEL_5;
  }
  else
  {
    v10 = *(_DWORD *)(a3 + 16);
    v11 = *(_QWORD *)(a1 + 16);
    BYTE4(v21[0]) &= ~1u;
    LODWORD(v21[0]) = v10;
    if ( v11 )
      goto LABEL_5;
  }
  sub_16669E0(a1 + 8);
  v11 = *(_QWORD *)(a1 + 16);
LABEL_5:
  sub_166A700(v11, (unsigned int)v20, 0, (_DWORD)a4, a5, a6);
  v12 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v14 = *a4;
  if ( *a4 )
  {
    v15 = a4[1];
    if ( (*(_DWORD *)(v14 + 8))-- == 1 )
      sub_15D7BC0(v15, v14);
  }
  *a4 = v13;
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v20);
  return sub_182CBA0(v17, v21);
}

