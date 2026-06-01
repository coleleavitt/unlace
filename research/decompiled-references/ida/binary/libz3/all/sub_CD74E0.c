void __fastcall sub_CD74E0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void (__fastcall ***v3)(_QWORD); // r12
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
  *a1 = &off_1C597E0;
  if ( !v2 )
    goto LABEL_16;
  v3 = (void (__fastcall ***)(_QWORD))v2[69];
  if ( v3 )
  {
    (**v3)(v2[69]);
    sub_186B220(v3);
  }
  v4 = v2[67];
  v2[1] = &off_1C597A0;
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
  operator delete(a1, 0x18u);
}

