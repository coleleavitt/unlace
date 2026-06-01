void __fastcall sub_D03DC0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = (_QWORD *)a1[2];
  *a1 = &off_1C59FE0;
  if ( !v2 )
    goto LABEL_14;
  v3 = v2[67];
  v2[1] = &off_1C59FA0;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = v2[65];
  if ( v4 && (v5 = v2[66], v6 = *(_DWORD *)(v4 + 8) == 1, --*(_DWORD *)(v4 + 8), v6) )
  {
    sub_15D7BC0(v5, v4);
    v7 = v2[63];
    if ( !v7 )
    {
LABEL_8:
      v9 = v2[61];
      if ( v9 )
        goto LABEL_9;
      goto LABEL_11;
    }
  }
  else
  {
    v7 = v2[63];
    if ( !v7 )
      goto LABEL_8;
  }
  v8 = v2[64];
  v6 = (*(_DWORD *)(v7 + 8))-- == 1;
  if ( !v6 )
    goto LABEL_8;
  sub_15D7BC0(v8, v7);
  v9 = v2[61];
  if ( v9 )
  {
LABEL_9:
    v10 = v2[62];
    v6 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v10, v9);
  }
LABEL_11:
  v2[42] = &qword_1C637E8;
  sub_15841B0(v2 + 42);
  v2[22] = &qword_1C637E8;
  sub_15841B0(v2 + 22);
  v11 = v2[21];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  sub_15841B0(v2 + 1);
  sub_186B220(v2);
LABEL_14:
  sub_18572D0(a1 + 3);
}

