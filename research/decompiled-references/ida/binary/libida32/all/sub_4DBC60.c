unsigned __int64 __fastcall sub_4DBC60(char *a1, int a2, int a3, unsigned int a4, char a5)
{
  unsigned int v9; // eax
  int v10; // esi
  char *v11; // rbx
  unsigned int v12; // r13d
  char *v13; // r14
  unsigned int v14; // r12d
  char *v15; // rdi
  _QWORD *v16; // [rsp+8h] [rbp-40h]

  v16 = *(_QWORD **)(*(_QWORD *)a1 + 1560LL);
  if ( !a5 )
  {
    v9 = sub_3B90A0(a1, a2);
    v10 = a3;
    v11 = a1 + 2492;
    v12 = v9;
    v13 = a1 + 2556;
    v14 = sub_3B90A0(a1, v10);
    do
    {
      sub_79B9E0(v11, *(_QWORD *)a1, v12, v14, a4, 83);
      v15 = v11;
      v11 += 4;
      sub_79B990(v15, *(_QWORD *)a1, v12, v14, a4, 65);
    }
    while ( v11 != v13 );
  }
  return sub_4DABC0(v16);
}

