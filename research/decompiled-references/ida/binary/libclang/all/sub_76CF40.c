__int64 __fastcall sub_76CF40(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v5; // ax
  int v6; // edx
  _DWORD **v7; // rcx
  int v8; // esi
  _DWORD **i; // rdi
  _DWORD *v10; // rax
  char v11; // dl
  unsigned __int16 v12; // cx

  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(a4) = (unsigned __int8)v5 > 0xFu;
  v6 = 16 * a4;
  v7 = (_DWORD **)(a1 + 48);
  v8 = (2 * ((v5 >> 1) & 1))
     | v6
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0);
  if ( (*(_WORD *)a1 & 0x1FF) != 0x73 )
    v7 = (_DWORD **)(a1 + 40);
  for ( i = &v7[*(unsigned int *)(a1 + 32)]; v7 != i; v8 |= (*v10 >> 14) & 0x1B )
    v10 = *v7++;
  v11 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 40) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v12 = v11 & 0x1F;
  LOBYTE(i) = (unsigned __int8)v12 > 0xFu;
  return (2 * ((v12 >> 1) & 1)) | v8 | (16 * (_DWORD)i) | v11 & 1 | (unsigned int)((v11 & 4) != 0 ? 0xC : 0);
}

