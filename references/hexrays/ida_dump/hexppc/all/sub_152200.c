__int64 __fastcall sub_152200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v8; // dl
  __int64 result; // rax
  __int64 v10; // r8
  int v11; // r9d

  v8 = *(_BYTE *)a4;
  if ( a2 )
  {
    if ( v8 == 4
      && (unsigned __int8)sub_11CB60(*(_BYTE **)(a4 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), 0, a4, a5, a6) )
    {
      return sub_152060(a2, a3, a4, 0, v10, v11);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    result = 1;
    if ( v8 == 4 )
      return (unsigned int)sub_11CB60(*(_BYTE **)(a4 + 8), a1, 0, a4, a5, a6) ^ 1;
  }
  return result;
}
