void __fastcall sub_C64730(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi

  v2 = (_QWORD *)a1[2];
  *a1 = &off_1C58960;
  if ( !v2 )
    goto LABEL_16;
  v3 = v2[165];
  v2[1] = &off_1C58940;
  v2[163] = &off_1C62610;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  sub_16329F0(v2 + 163);
  sub_177F420(v2 + 162);
  sub_184C8D0(v2 + 71);
  v4 = v2[67];
  v2[1] = &off_1C58920;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = v2[65];
  if ( v5 && (v6 = v2[66], v7 = *(_DWORD *)(v5 + 8) == 1, --*(_DWORD *)(v5 + 8), v7) )
  {
    sub_15D7BC0(v6, v5);
    v8 = v2[63];
    if ( !v8 )
    {
LABEL_10:
      v10 = v2[61];
      if ( v10 )
        goto LABEL_11;
      goto LABEL_13;
    }
  }
  else
  {
    v8 = v2[63];
    if ( !v8 )
      goto LABEL_10;
  }
  v9 = v2[64];
  v7 = (*(_DWORD *)(v8 + 8))-- == 1;
  if ( !v7 )
    goto LABEL_10;
  sub_15D7BC0(v9, v8);
  v10 = v2[61];
  if ( v10 )
  {
LABEL_11:
    v11 = v2[62];
    v7 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v11, v10);
  }
LABEL_13:
  v2[42] = &qword_1C637E8;
  sub_15841B0(v2 + 42);
  v2[22] = &qword_1C637E8;
  sub_15841B0(v2 + 22);
  v12 = v2[21];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  sub_15841B0(v2 + 1);
  sub_186B220(v2);
LABEL_16:
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x20u);
}

