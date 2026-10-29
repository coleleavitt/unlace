__int64 __fastcall sub_76C2A0(__int64 a1)
{
  _DWORD **v1; // rcx
  unsigned __int16 v2; // dx
  __int64 result; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rdx

  v1 = (_DWORD **)(a1 + 32);
  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4;
  LOBYTE(v2) = -((_BYTE)v2 != 0);
  result = (4 * ((v2 >> 2) & 1))
         | *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1
         | 0x1Au;
  v4 = a1 + 32 + 8LL * *(unsigned int *)(a1 + 24);
  if ( a1 + 32 != v4 )
  {
    do
    {
      v5 = *v1++;
      result = (*v5 >> 14) & 0x1F | (unsigned int)result;
    }
    while ( v1 != (_DWORD **)v4 );
  }
  return result;
}

