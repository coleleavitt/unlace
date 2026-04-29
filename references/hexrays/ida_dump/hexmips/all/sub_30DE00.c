__int64 __fastcall sub_30DE00(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 v7; // rax

  result = *(_DWORD *)a1 & 0xF;
  switch ( *(_DWORD *)a1 & 0xF )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 8:
      goto LABEL_4;
    case 2:
      v3 = *(_QWORD *)(a1 + 8);
      if ( v3 )
      {
        *(_QWORD *)(a1 + 16) = 0;
        result = qfree(v3);
      }
      goto LABEL_4;
    case 6:
    case 7:
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
      {
        v5 = *(_QWORD *)(a1 + 16);
        if ( v5 )
        {
          for ( i = 0; i != v5; ++i )
          {
            v7 = i;
            sub_30DE00(32 * v7 + v4);
            v4 = *(_QWORD *)(a1 + 8);
          }
        }
        *(_QWORD *)(a1 + 16) = 0;
        result = qfree(v4);
        *(_DWORD *)a1 = 0;
      }
      else
      {
LABEL_4:
        *(_DWORD *)a1 = 0;
      }
      return result;
    default:
      if ( !under_debugger )
        sub_37E160(51737);
      BUG();
  }
}
