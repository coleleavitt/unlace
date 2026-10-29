__int64 __fastcall sub_AB3340(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  void *v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 result; // rax
  void *v19; // rdi
  __int64 *v20; // rbx
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v25; // rdi

  v2 = a1[98];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[94];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void *)a1[90];
  if ( v4 )
    sub_186B220(v4);
  v5 = (void *)a1[87];
  if ( v5 )
    sub_186B220(v5);
  v6 = (void *)a1[84];
  if ( v6 )
    sub_186B220(v6);
  v7 = a1[82];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[81];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[79];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[78];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[77];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[76];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[75];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 66);
  sub_182CBA0(v14, a1 + 68);
  v15 = (void *)a1[49];
  a1[43] = &off_1C62200;
  if ( v15 )
    sub_186B220(v15);
  v16 = (void *)a1[46];
  if ( v16 )
    sub_186B220(v16);
  v17 = (void *)a1[42];
  result = (__int64)&off_1C62200;
  a1[36] = &off_1C62200;
  if ( v17 )
    result = sub_186B220(v17);
  v19 = (void *)a1[39];
  if ( v19 )
    result = sub_186B220(v19);
  v20 = (__int64 *)a1[28];
  if ( v20 )
  {
    result = *((unsigned int *)v20 - 1);
    v21 = &v20[result];
    if ( v20 >= v21 )
      goto LABEL_41;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = a1[27];
          if ( (*(_DWORD *)(v22 + 8))-- == 1 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_40;
      }
      result = sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_40:
    v20 = (__int64 *)a1[28];
    if ( v20 )
LABEL_41:
      result = sub_186B220(v20 - 1);
  }
  v25 = a1[26];
  if ( v25 )
    return sub_186B220((void *)(v25 - 8));
  return result;
}

