__int64 __fastcall sub_76B9D0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // dx
  __int64 result; // rax
  _QWORD *v6; // rdx
  char v7; // dl
  unsigned __int16 v8; // cx

  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(a4) = (unsigned __int8)v4 > 0xFu;
  result = (2 * ((v4 >> 1) & 1))
         | (16 * a4)
         | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0);
  v6 = *(_QWORD **)(a1 + 16);
  if ( v6 )
  {
    v7 = *(_BYTE *)(*(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    v8 = v7 & 0x1F;
    LOBYTE(a1) = (unsigned __int8)v8 > 0xFu;
    return (unsigned int)result | (16 * (_DWORD)a1) | v7 & 1 | ((v7 & 4) != 0 ? 0xC : 0) | (2 * ((v8 >> 1) & 1));
  }
  return result;
}

