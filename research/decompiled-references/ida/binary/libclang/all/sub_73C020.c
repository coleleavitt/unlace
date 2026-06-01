unsigned __int64 __fastcall sub_73C020(_QWORD *a1, char a2, __int64 a3, int a4)
{
  unsigned __int8 v5; // bl
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbx

  v5 = 1;
  if ( a4 != 1 )
    v5 = 2 * (a4 == 2);
  v6 = a1[274];
  a1[284] += 40LL;
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v6 )
    a1[274] = result + 40;
  else
    result = sub_722150((__int64)(a1 + 274), 40, 3);
  *(_BYTE *)(result + 34) &= 0xE0u;
  *(_QWORD *)(result + 16) = a3;
  *(_BYTE *)(result + 35) = a2;
  v8 = *(_QWORD *)(result + 24) & 0xFC00000000000000LL | ((unsigned __int64)v5 << 52) | 0x6019C00000000LL;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 24) = v8;
  *(_WORD *)(result + 32) = 87;
  return result;
}

