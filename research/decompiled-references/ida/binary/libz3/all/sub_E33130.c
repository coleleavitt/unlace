__int64 __fastcall sub_E33130(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  bool v3; // r12

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1);
  v3 = (_DWORD)result != a2;
  if ( *(_BYTE *)(a1 + 208) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 200LL))(*(_QWORD *)(a1 + 160), a2);
    *(_BYTE *)(a1 + 208) = v3;
  }
  else
  {
    *(_BYTE *)(a1 + 209) = v3;
  }
  return result;
}

