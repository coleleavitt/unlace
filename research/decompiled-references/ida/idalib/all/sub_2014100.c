__int64 __fastcall sub_2014100(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+8h] [rbp-20h]

  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = &off_2C758B0;
  *(_QWORD *)(a1 + 8) &= 0x80000000uLL;
  *(_QWORD *)(a1 + 72) = 0x100000000LL;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 88) = a1 + 112;
  *(_QWORD *)(a1 + 96) = 1;
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 108) = 1;
  result = sub_2210FF0((const char *)a1);
  v2 = *(unsigned int *)(a1 + 72);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
  {
    v3 = result;
    sub_2237220(a1 + 64, a1 + 80, v2 + 1, 8);
    v2 = *(unsigned int *)(a1 + 72);
    result = v3;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v2) = result;
  ++*(_DWORD *)(a1 + 72);
  return result;
}
