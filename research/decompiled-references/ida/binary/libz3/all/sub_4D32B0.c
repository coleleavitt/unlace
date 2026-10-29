__int64 __fastcall sub_4D32B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // r15
  __int64 *v6; // rbx
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 *i; // r8
  __int64 v10; // rax
  char *v11; // rdx
  char *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  int v17[2]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v18[248]; // [rsp+28h] [rbp-150h] BYREF
  void *v19; // [rsp+120h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+128h] [rbp-50h]
  int v21; // [rsp+12Ch] [rbp-4Ch]
  int v22; // [rsp+130h] [rbp-48h]
  int v23; // [rsp+138h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v17 = v2;
  sub_654110(v2, a2);
  sub_643420(v18, v2 + 2360);
  v20 = *(_DWORD *)(v2 + 2296);
  v3 = v20;
  v4 = (char *)sub_186B270(8LL * v20);
  v5 = v4;
  if ( (_DWORD)v3 )
    memset(v4, 0, 8 * v3);
  v6 = *(__int64 **)(v2 + 2288);
  v19 = v5;
  v7 = v20 - 1;
  v8 = 8LL * v20;
  for ( i = &v6[(unsigned __int64)v8 / 8]; i != v6; *(_QWORD *)v12 = v13 )
  {
    while ( (unsigned __int64)*v6 <= 1 )
    {
      if ( i == ++v6 )
        goto LABEL_12;
    }
    v10 = 8LL * (*(_DWORD *)(*v6 + 12) & v7);
    v11 = &v5[v10];
    if ( v8 == v10 )
    {
LABEL_19:
      if ( v5 == v11 )
      {
LABEL_24:
        sub_1872CE0("");
        sub_1873130(114, 181);
      }
      v12 = v5;
      while ( *(_QWORD *)v12 )
      {
        v12 += 8;
        if ( v11 == v12 )
          goto LABEL_24;
      }
    }
    else
    {
      v12 = &v5[v10];
      while ( *(_QWORD *)v12 )
      {
        v12 += 8;
        if ( &v5[v8] == v12 )
          goto LABEL_19;
      }
    }
    v13 = *v6++;
  }
LABEL_12:
  v14 = *(_DWORD *)(v2 + 2300);
  v22 = 0;
  v21 = v14;
  LOBYTE(v23) = *(_BYTE *)(v2 + 2984);
  if ( (_BYTE)v23 )
    sub_64C350(v2);
  v15 = sub_4D2940(a1, v17);
  sub_64C320(*(_QWORD *)v17);
  sub_64B510(*(_QWORD *)v17, &v19);
  sub_64C430(*(_QWORD *)v17, v18);
  if ( (_BYTE)v23 )
    sub_64DCE0(*(_QWORD *)v17);
  if ( v19 )
    sub_186B220(v19);
  sub_63D960(v18);
  return v15;
}

