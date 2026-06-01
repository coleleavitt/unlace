__int64 __fastcall sub_9FDD90(__int64 a1, __int64 a2)
{
  char v3; // al
  void *v4; // rdi

  v3 = *(_BYTE *)(a2 + 32);
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( !v3 )
    {
      *(_BYTE *)(a1 + 32) = 0;
      v4 = *(void **)a1;
      if ( v4 != (void *)(a1 + 16) )
        operator delete(v4);
      return a1;
    }
    sub_9CAB60(a1, a2);
    return a1;
  }
  else
  {
    if ( !v3 )
      return a1;
    *(_QWORD *)a1 = a1 + 16;
    sub_9FAFB0((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
    *(_BYTE *)(a1 + 32) = 1;
    return a1;
  }
}

