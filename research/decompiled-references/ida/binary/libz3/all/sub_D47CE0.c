void __fastcall sub_D47CE0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void (__fastcall ***v3)(void *); // r12
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi

  v2 = (_QWORD *)a1[2];
  *a1 = &off_1C5A6A8;
  if ( !v2 )
    goto LABEL_17;
  v3 = (void (__fastcall ***)(void *))v2[71];
  v2[1] = &off_1C5A688;
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 2))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  sub_13A2BD0(v2 + 69);
  v5 = v2[67];
  v2[1] = &off_1C5A668;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = v2[65];
  if ( v6 && (v7 = v2[66], v4 = *(_DWORD *)(v6 + 8) == 1, --*(_DWORD *)(v6 + 8), v4) )
  {
    sub_15D7BC0(v7, v6);
    v8 = v2[63];
    if ( !v8 )
    {
LABEL_11:
      v10 = v2[61];
      if ( v10 )
        goto LABEL_12;
      goto LABEL_14;
    }
  }
  else
  {
    v8 = v2[63];
    if ( !v8 )
      goto LABEL_11;
  }
  v9 = v2[64];
  v4 = (*(_DWORD *)(v8 + 8))-- == 1;
  if ( !v4 )
    goto LABEL_11;
  sub_15D7BC0(v9, v8);
  v10 = v2[61];
  if ( v10 )
  {
LABEL_12:
    v11 = v2[62];
    v4 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v11, v10);
  }
LABEL_14:
  v2[42] = &qword_1C637E8;
  sub_15841B0(v2 + 42);
  v2[22] = &qword_1C637E8;
  sub_15841B0(v2 + 22);
  v12 = v2[21];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  sub_15841B0(v2 + 1);
  sub_186B220(v2);
LABEL_17:
  sub_18572D0(a1 + 3);
}

