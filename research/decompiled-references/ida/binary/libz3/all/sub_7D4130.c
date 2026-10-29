__int64 __fastcall sub_7D4130(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax

  v1 = (_DWORD *)(a1 + 112);
  result = *(unsigned int *)(*(_QWORD *)v1 + 1048LL);
  v1[60] = result;
  return result;
}

