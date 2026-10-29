__int64 __fastcall sub_33500(__int64 *a1, __int64 a2)
{
  __int64 i; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  for ( i = 1; (unsigned __int8)_ITM_RU1(a2 - 1 + i); ++i )
    ;
  v3 = `transaction-clone for`operator new[](i + 24);
  *(_DWORD *)(v3 + 16) = 0;
  v4 = v3 + 24;
  *(_QWORD *)(v3 + 8) = i - 1;
  *(_QWORD *)v3 = i - 1;
  result = _ITM_memcpyRtWn(v3 + 24, a2, i);
  *a1 = v4;
  return result;
}

