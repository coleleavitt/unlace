__int64 __fastcall sub_76CEC0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  _DWORD **v6; // rdi
  unsigned __int16 v7; // dx
  _DWORD **v8; // rcx
  __int64 result; // rax
  _DWORD **i; // rsi
  _DWORD *v11; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  v6 = (_DWORD **)(a1 + 40);
  LOBYTE(v4) = *(_BYTE *)(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v7 = v4 & 0x1F;
  LOBYTE(a4) = (unsigned __int8)v7 > 0xFu;
  LODWORD(v4) = (16 * a4) | ((v4 & 4) != 0 ? 0xC : 0);
  v8 = (_DWORD **)(a1 + 48);
  result = (2 * ((v7 >> 1) & 1)) | (unsigned int)v4;
  if ( (*(_WORD *)(v6 - 5) & 0x1FF) != 0x73 )
    v8 = v6;
  for ( i = &v8[*(unsigned int *)(a1 + 32)]; v8 != i; result = (*v11 >> 14) & 0x1B | (unsigned int)result )
    v11 = *v8++;
  return result;
}

