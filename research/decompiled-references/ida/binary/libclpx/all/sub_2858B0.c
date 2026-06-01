__int64 __fastcall sub_2858B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax

  v3 = 1;
  while ( (unsigned __int8)_ITM_RU1() )
  {
    ++a2;
    ++v3;
  }
  v4 = `transaction-clone for`operator new[]();
  v5 = v4 + 24;
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 8) = v3 - 1;
  *(_QWORD *)v4 = v3 - 1;
  result = _ITM_memcpyRtWn();
  if ( a1 )
    *a1 = v5;
  return result;
}

