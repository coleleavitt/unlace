unsigned __int64 __fastcall sub_748F10(_QWORD *a1, int a2, int a3, __int64 a4, char a5, int a6, __int64 a7)
{
  __int64 v11; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rcx
  char v14; // dl

  v11 = a1[274];
  a1[284] += 64LL;
  result = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 64 && v11 )
    a1[274] = result + 64;
  else
    result = sub_722150((__int64)(a1 + 274), 64, 3);
  *(_DWORD *)(result + 36) = a2;
  v13 = *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_DWORD *)(result + 40) = a3;
  *(_QWORD *)(result + 16) = a7;
  *(_QWORD *)(result + 48) = a4;
  *(_QWORD *)(result + 24) = v13 | 0x7019C00000000LL;
  *(_WORD *)(result + 32) = 287;
  v14 = *(_BYTE *)(result + 34);
  *(_BYTE *)(result + 56) = a5;
  *(_DWORD *)(result + 60) = a6;
  *(_OWORD *)result = 0;
  *(_BYTE *)(result + 34) = v14 & 0xE0 | 4;
  return result;
}

