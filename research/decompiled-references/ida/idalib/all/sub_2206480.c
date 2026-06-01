unsigned __int64 __fastcall sub_2206480(unsigned __int64 *a1, int a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned int v5; // edi
  char v6; // cl
  __int64 v7; // rdx
  __int64 v8; // rsi

  v3 = 0;
  if ( a2 )
    v3 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)a2);
  v4 = *a1;
  if ( *((_DWORD *)a1 + 2) <= 0x40u )
    return (v4 >> a3) & v3;
  v5 = a3 >> 6;
  v6 = a3 & 0x3F;
  v7 = (a2 + a3 - 1) >> 6;
  v8 = *(_QWORD *)(v4 + 8LL * v5) >> v6;
  if ( (_DWORD)v7 == v5 )
    return v8 & v3;
  else
    return (v8 | (*(_QWORD *)(v4 + 8 * v7) << (64 - v6))) & v3;
}
