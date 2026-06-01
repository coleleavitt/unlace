unsigned __int64 __fastcall sub_21BF3E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned int v6; // eax

  v2 = *a2;
  v3 = a2[1];
  v4 = *(unsigned __int8 *)(*(_QWORD *)a1 + 16LL);
  if ( (_BYTE)v4 == 0xFF )
    v5 = 0x62546B6200000000LL;
  else
    v5 = (((0xBF58476D1CE4E5B9LL * v4) >> 31) ^ (0xBF58476D1CE4E5B9LL * v4)) << 32;
  v6 = sub_2248890(v2, v3);
  return ((0xBF58476D1CE4E5B9LL * (v5 | v6)) >> 31) ^ (0xBF58476D1CE4E5B9LL * (v5 | v6));
}
