unsigned __int64 __fastcall sub_73C410(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx

  v2 = a1[274];
  a1[284] += 40LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v2 )
    a1[274] = result + 40;
  else
    result = sub_722150((__int64)(a1 + 274), 40, 3);
  v4 = *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_BYTE *)(result + 34) &= 0xE0u;
  *(_QWORD *)(result + 16) = a2;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 24) = v4 | 0x2019C00000000LL;
  *(_WORD *)(result + 32) = 16;
  return result;
}

