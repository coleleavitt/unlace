__int64 (__fastcall **__fastcall sub_6B0190(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  unsigned int v3; // ebp
  __int64 v4; // rdi
  void (__fastcall ***v5)(__int64); // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi

  result = &off_1C52FD8;
  v3 = 0;
  *a1 = &off_1C52FD8;
  v4 = a1[6];
  if ( v4 )
  {
    while ( v3 < *(_DWORD *)(v4 - 4) )
    {
      while ( 1 )
      {
        v5 = *(void (__fastcall ****)(__int64))(v4 + 8LL * v3);
        if ( v5 )
          break;
        if ( ++v3 >= *(_DWORD *)(v4 - 4) )
          goto LABEL_10;
      }
      v6 = *(_QWORD *)(v4 + 8LL * v3++);
      (**v5)(v6);
      result = (__int64 (__fastcall **)())sub_186B220(v5);
      v4 = a1[6];
      if ( !v4 )
        goto LABEL_5;
    }
LABEL_10:
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  }
LABEL_5:
  v7 = a1[3];
  if ( v7 )
  {
    v8 = a1[4];
    if ( (*(_DWORD *)(v7 + 8))-- == 1 )
      return (__int64 (__fastcall **)())sub_15D7BC0(v8, v7);
  }
  return result;
}

