unsigned __int64 __fastcall sub_747F40(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rcx
  char v11; // dl

  v8 = a1[274];
  a1[284] += 56LL;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 56 && v8 )
    a1[274] = result + 56;
  else
    result = sub_722150((__int64)(a1 + 274), 56, 3);
  v10 = *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_QWORD *)(result + 16) = a5;
  *(_DWORD *)(result + 36) = a2;
  *(_QWORD *)(result + 40) = a3;
  *(_QWORD *)(result + 24) = v10 | 0xA019C00000000LL;
  *(_WORD *)(result + 32) = 284;
  v11 = *(_BYTE *)(result + 34);
  *(_QWORD *)(result + 48) = a4;
  *(_OWORD *)result = 0;
  *(_BYTE *)(result + 34) = v11 & 0xE0 | 4;
  return result;
}

