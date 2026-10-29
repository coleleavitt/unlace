void __fastcall sub_6B0230(_QWORD *a1)
{
  unsigned int v2; // ebp
  __int64 v3; // rdi
  void (__fastcall ***v4)(__int64); // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi

  v2 = 0;
  *a1 = &off_1C52FD8;
  v3 = a1[6];
  if ( v3 )
  {
    while ( v2 < *(_DWORD *)(v3 - 4) )
    {
      while ( 1 )
      {
        v4 = *(void (__fastcall ****)(__int64))(v3 + 8LL * v2);
        if ( v4 )
          break;
        if ( ++v2 >= *(_DWORD *)(v3 - 4) )
          goto LABEL_10;
      }
      v5 = *(_QWORD *)(v3 + 8LL * v2++);
      (**v4)(v5);
      sub_186B220(v4);
      v3 = a1[6];
      if ( !v3 )
        goto LABEL_5;
    }
LABEL_10:
    sub_186B220((void *)(v3 - 8));
  }
LABEL_5:
  v6 = a1[3];
  if ( v6 )
  {
    v7 = a1[4];
    if ( (*(_DWORD *)(v6 + 8))-- == 1 )
      sub_15D7BC0(v7, v6);
  }
  operator delete(a1, 0x40u);
}

