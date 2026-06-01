__int64 __fastcall sub_732880(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi

  v1 = **(_QWORD **)(a1 + 16);
  v2 = sub_186B270(0x2A8u);
  v3 = v2 + 552;
  *(_QWORD *)v2 = v1;
  v4 = v2;
  *(_BYTE *)(v2 + 8) = 0;
  sub_76DA90(v2 + 16, v1, *(_DWORD *)(v1 + 712) != 0, v2 + 552);
  *(_QWORD *)(v4 + 16) = &off_1C53CF8;
  result = sub_76A560(v3, v1, a1 + 24);
  v6 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v4;
  if ( !v6 )
    return result;
  v6[2] = &off_1C53CF8;
  sub_76D6C0(v6 + 69);
  v7 = v6[68];
  v6[2] = &off_1C53CD8;
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = v6[66];
  if ( v8 && (v9 = v6[67], v10 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), v10) )
  {
    sub_15D7BC0(v9, v8);
    v11 = v6[64];
    if ( !v11 )
    {
LABEL_8:
      v13 = v6[62];
      if ( v13 )
        goto LABEL_9;
      goto LABEL_11;
    }
  }
  else
  {
    v11 = v6[64];
    if ( !v11 )
      goto LABEL_8;
  }
  v12 = v6[65];
  v10 = (*(_DWORD *)(v11 + 8))-- == 1;
  if ( !v10 )
    goto LABEL_8;
  sub_15D7BC0(v12, v11);
  v13 = v6[62];
  if ( v13 )
  {
LABEL_9:
    v14 = v6[63];
    v10 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v14, v13);
  }
LABEL_11:
  v6[43] = &qword_1C637E8;
  sub_15841B0(v6 + 43);
  v6[23] = &qword_1C637E8;
  sub_15841B0(v6 + 23);
  v15 = v6[22];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  sub_15841B0(v6 + 2);
  return sub_186B220(v6);
}

