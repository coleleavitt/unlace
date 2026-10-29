__int64 __fastcall sub_688590(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  _DWORD *v3; // rdi
  _DWORD *v4; // r8

  result = sub_685560((_DWORD *)(a1 + 40), 1u);
  if ( !(_BYTE)result )
  {
    v3 = *(_DWORD **)v2;
    if ( *(_QWORD *)v2 + 80LL * *(_QWORD *)(v2 + 8) != *(_QWORD *)v2 )
    {
      do
      {
        result = sub_685560(v3, 0);
        if ( (_BYTE)result )
          break;
        v3 += 20;
      }
      while ( v4 != v3 );
    }
  }
  return result;
}

