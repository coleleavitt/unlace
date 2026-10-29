void __fastcall sub_732710(_QWORD *a1)
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
  *a1 = &off_1C53D18;
  if ( !v2 )
    goto LABEL_14;
  v2[2] = &off_1C53CF8;
  sub_76D6C0(v2 + 69);
  v3 = v2[68];
  v2[2] = &off_1C53CD8;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = v2[66];
  if ( v4 && (v5 = v2[67], v6 = *(_DWORD *)(v4 + 8) == 1, --*(_DWORD *)(v4 + 8), v6) )
  {
    sub_15D7BC0(v5, v4);
    v7 = v2[64];
    if ( !v7 )
    {
LABEL_8:
      v9 = v2[62];
      if ( v9 )
        goto LABEL_9;
      goto LABEL_11;
    }
  }
  else
  {
    v7 = v2[64];
    if ( !v7 )
      goto LABEL_8;
  }
  v8 = v2[65];
  v6 = (*(_DWORD *)(v7 + 8))-- == 1;
  if ( !v6 )
    goto LABEL_8;
  sub_15D7BC0(v8, v7);
  v9 = v2[62];
  if ( v9 )
  {
LABEL_9:
    v10 = v2[63];
    v6 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v10, v9);
  }
LABEL_11:
  v2[43] = &qword_1C637E8;
  sub_15841B0(v2 + 43);
  v2[23] = &qword_1C637E8;
  sub_15841B0(v2 + 23);
  v11 = v2[22];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  sub_15841B0(v2 + 2);
  sub_186B220(v2);
LABEL_14:
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x20u);
}

