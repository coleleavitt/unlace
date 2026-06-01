__int64 __fastcall sub_D30C40(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rdi
  void *v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  void *v19; // rdi

  v2 = a1 + 81;
  *(v2 - 70) = &off_1C5A550;
  sub_14476A0(v2);
  v3 = a1[77];
  a1[11] = &off_1C5A530;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[75];
  if ( v4 )
  {
    v5 = a1[76];
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v5, v4);
  }
  v7 = a1[73];
  if ( v7 )
  {
    v8 = a1[74];
    v6 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v8, v7);
  }
  v9 = a1[71];
  if ( v9 )
  {
    v10 = a1[72];
    v6 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v10, v9);
  }
  a1[52] = &qword_1C637E8;
  sub_15841B0(a1 + 52);
  a1[32] = &qword_1C637E8;
  sub_15841B0(a1 + 32);
  v11 = a1[31];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  result = sub_15841B0(a1 + 11);
  v13 = a1[10];
  if ( v13 )
    result = sub_186B220((void *)(v13 - 8));
  v14 = (void *)a1[7];
  if ( v14 )
    result = sub_186B220(v14);
  v15 = (__int64 *)a1[6];
  if ( v15 )
  {
    result = *((unsigned int *)v15 - 1);
    v16 = &v15[result];
    if ( v15 >= v16 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[5];
          v6 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_25;
      }
      result = sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_25:
    v15 = (__int64 *)a1[6];
    if ( v15 )
LABEL_26:
      result = sub_186B220(v15 - 1);
  }
  v19 = (void *)a1[2];
  if ( v19 )
    return sub_186B220(v19);
  return result;
}

