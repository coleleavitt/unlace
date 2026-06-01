__int64 __fastcall sub_76D580(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  __int64 result; // rax
  unsigned __int16 v4; // dx
  __int64 v5; // rdx
  __int64 v6; // rsi
  _DWORD **v7; // rcx
  _DWORD *v8; // rdx

  if ( *(_BYTE *)(a1 + 26) == 1 && (v2 = *(_DWORD **)(a1 + 40)) != nullptr )
  {
    result = (*v2 >> 14) & 0x1F;
  }
  else
  {
    v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
    LOBYTE(a2) = (unsigned __int8)v4 > 0xFu;
    result = (2 * ((v4 >> 1) & 1))
           | (16 * a2)
           | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
                          ? 0xC
                          : 0);
  }
  v5 = 8LL * *(unsigned __int16 *)(a1 + 24);
  v6 = a1 + v5 + 48;
  v7 = (_DWORD **)(a1 + 48);
  if ( v5 )
  {
    do
    {
      v8 = *v7++;
      result = (*v8 >> 14) & 0x1F | (unsigned int)result;
    }
    while ( v7 != (_DWORD **)v6 );
  }
  return result;
}

