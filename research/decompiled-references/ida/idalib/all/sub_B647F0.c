__int64 __fastcall sub_B647F0(__int64 a1)
{
  _DWORD **v1; // rcx
  __int64 result; // rax
  _DWORD **i; // rsi
  _DWORD *v4; // rdx

  v1 = *(_DWORD ***)(a1 + 16);
  result = 0;
  for ( i = (_DWORD **)((char *)v1 + ((*(_QWORD *)(a1 + 24) - (_QWORD)v1) & 0x7FFFFFFF8LL));
        i != v1;
        result = (*v4 >> 14) & 0x1F | (unsigned int)result )
  {
    v4 = *v1++;
  }
  return result;
}
