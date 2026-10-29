unsigned __int64 __fastcall sub_73C140(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int8 v3; // bl
  __int64 v4; // rdx
  unsigned __int64 result; // rax
  int v6; // edx

  v3 = 1;
  if ( a3 != 1 )
    v3 = 2 * (a3 == 2);
  v4 = a1[274];
  a1[284] += 40LL;
  result = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v4 )
    a1[274] = result + 40;
  else
    result = sub_722150((__int64)(a1 + 274), 40, 3);
  *(_QWORD *)(result + 16) = a2;
  *(_OWORD *)result = 0;
  v6 = *(_DWORD *)(result + 32);
  *(_QWORD *)(result + 24) = *(_QWORD *)(result + 24) & 0xFC00000000000000LL
                           | ((unsigned __int64)v3 << 52)
                           | 0x6019C00000000LL;
  *(_DWORD *)(result + 32) = v6 & 0xE00000 | 0x57;
  return result;
}

