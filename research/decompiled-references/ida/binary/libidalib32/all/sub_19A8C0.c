__int64 __fastcall sub_19A8C0(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 88);
    if ( v2 )
    {
      v3 = a1 + 80;
      do
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)(v2 + 16);
          v5 = *(_QWORD *)(v2 + 24);
          if ( *(_WORD *)(v2 + 32) >= a2 )
            break;
          v2 = *(_QWORD *)(v2 + 24);
          if ( !v5 )
            goto LABEL_6;
        }
        v3 = v2;
        v2 = *(_QWORD *)(v2 + 16);
      }
      while ( v4 );
LABEL_6:
      if ( a1 + 80 != v3 && a2 >= *(_WORD *)(v3 + 32) )
        return *(_QWORD *)(v3 + 40);
    }
    result = *(_QWORD *)(a1 + 120);
    if ( !result )
      return result;
    a1 = *(_QWORD *)(a1 + 120);
  }
}

