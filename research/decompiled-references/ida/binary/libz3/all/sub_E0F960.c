__int64 __fastcall sub_E0F960(_QWORD *ptr)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 result; // rax

  if ( !ptr )
    return result;
  *ptr = &off_1C4CA60;
  v2 = ptr[66];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = ptr[64];
  if ( v3 && (v4 = ptr[65], v5 = *(_DWORD *)(v3 + 8) == 1, --*(_DWORD *)(v3 + 8), v5) )
  {
    sub_15D7BC0(v4, v3);
    v6 = ptr[62];
    if ( !v6 )
    {
LABEL_8:
      v8 = ptr[60];
      if ( v8 )
        goto LABEL_9;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = ptr[62];
    if ( !v6 )
      goto LABEL_8;
  }
  v7 = ptr[63];
  v5 = (*(_DWORD *)(v6 + 8))-- == 1;
  if ( !v5 )
    goto LABEL_8;
  sub_15D7BC0(v7, v6);
  v8 = ptr[60];
  if ( v8 )
  {
LABEL_9:
    v9 = ptr[61];
    v5 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v9, v8);
  }
LABEL_11:
  ptr[41] = &qword_1C637E8;
  sub_15841B0(ptr + 41);
  ptr[21] = &qword_1C637E8;
  sub_15841B0(ptr + 21);
  v10 = ptr[20];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  sub_15841B0(ptr);
  return sub_186B220(ptr);
}

