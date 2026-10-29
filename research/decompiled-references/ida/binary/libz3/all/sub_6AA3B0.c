void __fastcall sub_6AA3B0(_QWORD *a1)
{
  unsigned int v2; // ebp
  __int64 v3; // rdi
  void (__fastcall ***v4)(__int64); // rbx
  __int64 v5; // rdi

  v2 = 0;
  *a1 = qword_1C69D60;
  v3 = a1[5];
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
          goto LABEL_7;
      }
      v5 = *(_QWORD *)(v3 + 8LL * v2++);
      (**v4)(v5);
      sub_186B220(v4);
      v3 = a1[5];
      if ( !v3 )
        goto LABEL_5;
    }
LABEL_7:
    sub_186B220((void *)(v3 - 8));
  }
LABEL_5:
  operator delete(a1, 0x30u);
}

