__int64 __fastcall sub_DF8C80(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  void (*v6)(); // rax

  v2 = *(_QWORD *)(a1 + 512);
  result = 3LL * *(unsigned int *)(a1 + 520);
  v4 = v2 + 24LL * *(unsigned int *)(a1 + 520);
  if ( v2 != v4 )
  {
    while ( *(_DWORD *)(v2 + 4) != 2 )
    {
      v2 += 24;
      if ( v4 == v2 )
        return result;
    }
    if ( v4 != v2 )
    {
      do
      {
        v5 = *(_QWORD *)(v2 + 16);
        v6 = *(void (**)())(*(_QWORD *)v5 + 16LL);
        if ( v6 != nullsub_126 )
          ((void (__fastcall *)(__int64, __int64))v6)(v5, a1);
        result = v2 + 24;
        if ( v4 == v2 + 24 )
          break;
        while ( 1 )
        {
          v2 = result;
          if ( *(_DWORD *)(result + 4) == 2 )
            break;
          result += 24;
          if ( v4 == result )
            return result;
        }
      }
      while ( v4 != result );
    }
  }
  return result;
}

