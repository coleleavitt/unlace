__int64 __fastcall sub_780E80(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 152);
  v2 = 0;
  if ( v1 )
  {
    if ( (v1 & 6) == 0 )
    {
      v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      v2 = v3;
      if ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 32 >= 6 )
          return *(_QWORD *)(a1 + 152) & 6LL;
      }
    }
  }
  return v2;
}

