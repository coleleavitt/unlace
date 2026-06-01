__int64 __fastcall sub_449730(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  bool v4; // zf

  v2 = *(_QWORD *)(a1 + 32);
  result = (unsigned int)(*(_DWORD *)(v2 + 28) - 1);
  v4 = *(_DWORD *)(v2 + 28) == 1;
  *(_DWORD *)(v2 + 28) = result;
  if ( (int)result < 0 || v4 )
    result = sub_4389B0((__int64 **)v2);
  *(_QWORD *)(a1 + 24) = 0;
  return result;
}

