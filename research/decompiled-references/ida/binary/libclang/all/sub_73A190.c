unsigned __int64 __fastcall sub_73A190(_QWORD *a1, __int64 a2, int a3)
{
  bool v3; // zf
  __int64 v4; // rdx
  bool v5; // bl
  unsigned __int64 result; // rax

  v3 = a3 == 0;
  v4 = a1[274];
  v5 = !v3;
  a1[284] += 40LL;
  result = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v4 )
    a1[274] = result + 40;
  else
    result = sub_722150((__int64)(a1 + 274), 40, 3);
  *(_BYTE *)(result + 34) &= 0xE0u;
  *(_QWORD *)(result + 16) = a2;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 24) = *(_QWORD *)(result + 24) & 0xFC00000000000000LL
                           | ((unsigned __int64)v5 << 52)
                           | 0x6019C00000000LL;
  *(_WORD *)(result + 32) = 209;
  return result;
}

