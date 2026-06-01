__int64 __fastcall sub_76B330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r10d
  unsigned __int16 v7; // ax
  char v8; // dl
  unsigned __int16 v9; // cx
  int v10; // eax
  _DWORD *v11; // rdx
  __int64 result; // rax

  v7 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(v6) = (unsigned __int8)v7 > 0xFu;
  v8 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v9 = v8 & 0x1F;
  LOBYTE(a6) = (unsigned __int8)v9 > 0xFu;
  v10 = (2 * ((v7 >> 1) & 1))
      | (16 * v6)
      | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0)
      | (16 * a6)
      | v8 & 1
      | ((v8 & 4) != 0 ? 0xC : 0);
  v11 = *(_DWORD **)(a1 + 16);
  result = (2 * ((v9 >> 1) & 1)) | (unsigned int)v10;
  if ( v11 )
    return (*v11 >> 14) & 0x1B | (unsigned int)result;
  return result;
}

