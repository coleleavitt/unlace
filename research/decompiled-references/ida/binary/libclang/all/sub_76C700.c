__int64 __fastcall sub_76C700(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // dx
  int v5; // eax
  _DWORD **v6; // rcx
  __int64 result; // rax
  _DWORD **i; // rsi
  _DWORD *v9; // rdx

  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(a4) = (unsigned __int8)v4 > 0xFu;
  v5 = (16 * a4) | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0);
  v6 = *(_DWORD ***)(a1 + 24);
  result = (2 * ((v4 >> 1) & 1)) | (unsigned int)v5;
  for ( i = &v6[*(unsigned int *)(a1 + 32)]; v6 != i; result = (*v9 >> 14) & 0x1F | (unsigned int)result )
    v9 = *v6++;
  return result;
}

