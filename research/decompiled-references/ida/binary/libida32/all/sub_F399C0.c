__int64 __fastcall sub_F399C0(__int64 a1)
{
  int v1; // edx
  __int64 i; // rax

  v1 = *(unsigned __int16 *)(a1 + 22);
  if ( *(_WORD *)(a1 + 22) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)(v1 - 1) + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 )
      return 1;
    if ( v1 != 1 )
    {
      for ( i = (unsigned int)(v1 - 2);
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * i + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 38;
            i = (unsigned int)(i - 1) )
      {
        if ( !(_DWORD)i )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}

