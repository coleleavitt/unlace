unsigned __int64 __fastcall sub_2049390(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned int v4; // [rsp+2Ch] [rbp-4h]

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( !(_DWORD)v2 )
    v1 = 0;
  v4 = (((unsigned __int64)((_DWORD)v2 != 0) << 32) | (unsigned int)v2 | v1 & 0xFFFFFF0000000000LL) >> 32;
  LOBYTE(v4) = (_DWORD)v2 != 0;
  return __PAIR64__(v4, v2);
}
