unsigned __int64 __fastcall sub_730CD0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx
  char v8; // dl

  if ( a3 )
  {
    v3 = 1;
    v4 = 4;
  }
  else
  {
    v3 = 0;
    v4 = 1;
  }
  v5 = a1[274];
  a1[284] += 40LL;
  result = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v5 )
    a1[274] = result + 40;
  else
    result = sub_722150((__int64)(a1 + 274), 40, 3);
  *(_QWORD *)(result + 16) = a2;
  *(_OWORD *)result = 0;
  v7 = (v3 << 52) | ((unsigned __int64)v4 << 48) | 0x19C00000000LL | *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_WORD *)(result + 32) = 153;
  v8 = *(_BYTE *)(result + 34);
  *(_QWORD *)(result + 24) = v7;
  *(_BYTE *)(result + 34) = v8 & 0xE0 | 4;
  return result;
}

