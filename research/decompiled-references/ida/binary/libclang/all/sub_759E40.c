unsigned __int64 __fastcall sub_759E40(_QWORD *a1, __int64 a2, __int64 a3, int a4, char a5, __int64 a6)
{
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl

  v9 = a1[274];
  a1[284] += 64LL;
  result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 64 && v9 )
    a1[274] = result + 64;
  else
    result = sub_722150((__int64)(a1 + 274), 64, 3);
  v12 = *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_QWORD *)(result + 16) = a6;
  *(_QWORD *)(result + 36) = a2;
  *(_QWORD *)(result + 44) = a3;
  *(_QWORD *)(result + 24) = v12 | 0xA019C00000000LL;
  *(_WORD *)(result + 32) = 428;
  v13 = *(_BYTE *)(result + 34);
  *(_DWORD *)(result + 52) = a4;
  *(_BYTE *)(result + 56) = a5;
  *(_OWORD *)result = 0;
  *(_BYTE *)(result + 34) = v13 & 0xE0 | 4;
  return result;
}

