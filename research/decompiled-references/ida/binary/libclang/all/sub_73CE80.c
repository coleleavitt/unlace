unsigned __int64 __fastcall sub_73CE80(_QWORD *a1, char a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx

  v4 = a1[274];
  a1[284] += 40LL;
  result = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v4 )
    a1[274] = result + 40;
  else
    result = sub_722150((__int64)(a1 + 274), 40, 3);
  v6 = *(_QWORD *)(result + 24) & 0xFC00000000000000LL;
  *(_BYTE *)(result + 34) &= 0xE0u;
  *(_QWORD *)(result + 16) = a3;
  *(_BYTE *)(result + 35) = a2;
  *(_QWORD *)(result + 24) = v6 | 0x2019C00000000LL;
  *(_WORD *)(result + 32) = 18;
  *(_OWORD *)result = 0;
  return result;
}

