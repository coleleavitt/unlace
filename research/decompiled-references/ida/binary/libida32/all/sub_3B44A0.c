__int64 __fastcall sub_3B44A0(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 48) = a3;
  result = *(_QWORD *)(v3 + 16);
  if ( a3 )
  {
    v6 = v3 + 8;
    while ( result )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(result + 24);
        if ( *(_DWORD *)(result + 32) >= a2 )
          break;
        result = *(_QWORD *)(result + 24);
        if ( !v7 )
          goto LABEL_6;
      }
      v6 = result;
      result = *(_QWORD *)(result + 16);
    }
LABEL_6:
    *(_QWORD *)(a1 + 32) = v6;
    result = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(a1 + 40) = result;
  }
  else
  {
    v8 = v3 + 8;
    v9 = v8;
    while ( result )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(result + 24);
        if ( *(_DWORD *)(result + 32) >= a2 )
          break;
        result = *(_QWORD *)(result + 24);
        if ( !v10 )
          goto LABEL_12;
      }
      v9 = result;
      result = *(_QWORD *)(result + 16);
    }
LABEL_12:
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v8;
  }
  return result;
}

