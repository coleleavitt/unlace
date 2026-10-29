__int64 __fastcall sub_37C960(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 result; // rax
  _QWORD *v6; // rbp
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdi

  v1 = (__int64 *)sub_186B270(0x4E8u);
  v2 = *(__int64 **)(a1 + 16);
  v3 = *v2;
  *v1 = *v2;
  sub_D50630(v1 + 1, v3);
  v4 = *v1;
  sub_D85990(v1 + 81, *v1, *(_DWORD *)(*v1 + 712) != 0, v1 + 148);
  v1[81] = (__int64)&off_1C4D970;
  result = sub_D83130(v1 + 148, v4, v1 + 1, a1 + 24);
  v6 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v1;
  if ( !v6 )
    return result;
  v7 = (__int64 *)v6[153];
  v6[81] = &off_1C4D970;
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = v6[152];
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_9;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_9:
    v7 = (__int64 *)v6[153];
    if ( v7 )
LABEL_10:
      sub_186B220(v7 - 1);
  }
  v12 = (__int64 *)v6[150];
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = v6[149];
          v11 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_18;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_18:
    v12 = (__int64 *)v6[150];
    if ( v12 )
LABEL_19:
      sub_186B220(v12 - 1);
  }
  v16 = v6[147];
  v6[81] = &off_1C4D950;
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = v6[145];
  if ( v17 && (v18 = v6[146], v11 = *(_DWORD *)(v17 + 8) == 1, --*(_DWORD *)(v17 + 8), v11) )
  {
    sub_15D7BC0(v18, v17);
    v19 = v6[143];
    if ( !v19 )
    {
LABEL_26:
      v21 = v6[141];
      if ( v21 )
        goto LABEL_27;
      goto LABEL_29;
    }
  }
  else
  {
    v19 = v6[143];
    if ( !v19 )
      goto LABEL_26;
  }
  v20 = v6[144];
  v11 = (*(_DWORD *)(v19 + 8))-- == 1;
  if ( !v11 )
    goto LABEL_26;
  sub_15D7BC0(v20, v19);
  v21 = v6[141];
  if ( v21 )
  {
LABEL_27:
    v22 = v6[142];
    v11 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v22, v21);
  }
LABEL_29:
  v6[122] = &qword_1C637E8;
  sub_15841B0(v6 + 122);
  v6[102] = &qword_1C637E8;
  sub_15841B0(v6 + 102);
  v23 = v6[101];
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  sub_15841B0(v6 + 81);
  sub_D81A00(v6 + 1);
  return sub_186B220(v6);
}

