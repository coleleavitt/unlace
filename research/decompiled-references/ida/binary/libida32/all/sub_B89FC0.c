__int64 __fastcall sub_B89FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rdx

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 120);
  if ( !v7 )
  {
    a2 = *(_QWORD *)(a1 + 96);
    sub_A557A0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
    v7 = *(_QWORD *)(a1 + 120);
  }
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v8 )
    return 0;
  if ( (*(_BYTE *)(v8 + 72) & 1) != 0 )
    sub_B84BC0(a1);
  result = sub_B89430(a1, a2, a3, a4, a5, a6);
  if ( !result )
    return 0;
LABEL_7:
  v10 = *(_QWORD *)(result + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(result + 40) & 7) != 0 )
    v10 = 0;
  if ( v6 != v10 )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(result + 128);
      if ( !result )
        return 0;
      while ( *(char *)(result + 28) >= 0 )
      {
        if ( (*(_BYTE *)(result + 8) & 6) == 0 )
          goto LABEL_7;
        result = *(_QWORD *)(result + 128);
        if ( !result )
          return 0;
      }
    }
  }
  return result;
}

