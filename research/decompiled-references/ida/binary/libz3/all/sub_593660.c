__int64 __fastcall sub_593660(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = *(_QWORD *)(a1 + 24) + 16LL;
  for ( *(_QWORD *)(a1 + 24) = result; result != v1; *(_QWORD *)(a1 + 24) = result )
  {
    if ( *(_DWORD *)(result + 4) == 2 )
      break;
    result += 16;
  }
  return result;
}

