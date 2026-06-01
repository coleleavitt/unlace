__int64 __fastcall sub_B653D0(__int64 a1)
{
  char v1; // al
  char v2; // r8
  bool v3; // si
  char v4; // dl
  __int64 result; // rax
  char v6; // dl
  unsigned int v7; // ecx
  _DWORD **v8; // rcx
  _DWORD **i; // rsi
  _DWORD *v10; // rdx

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = 16 * ((v1 & 0x10) != 0);
  v3 = (v1 & 2) != 0;
  v4 = (32 * ((v1 & 8) != 0)) | v1 & 1;
  result = 8;
  v6 = (2 * v3)
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0)
     | v2
     | v4;
  v7 = v6 & 0x10;
  if ( (v6 & 0x10) != 0 )
  {
    result = 24;
    v7 = 16;
  }
  if ( (v6 & 8) == 0 )
    result = v7;
  if ( (v6 & 4) != 0 )
    result = (unsigned int)result | 4;
  if ( (v6 & 2) != 0 )
    result = (unsigned int)result | 2;
  v8 = (_DWORD **)(a1 + 40);
  if ( (*(_WORD *)a1 & 0x1FF) == 0x72 )
    v8 = (_DWORD **)(a1 + 48);
  for ( i = &v8[*(unsigned int *)(a1 + 32)]; i != v8; result = (*v10 >> 14) & 0x1B | (unsigned int)result )
    v10 = *v8++;
  return result;
}
