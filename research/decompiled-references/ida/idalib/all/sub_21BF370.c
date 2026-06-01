unsigned __int64 __fastcall sub_21BF370(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx

  v2 = *(unsigned __int8 *)(*(_QWORD *)a1 + 16LL);
  if ( (_BYTE)v2 == 0xFF )
    v3 = 0x62546B6200000000LL;
  else
    v3 = (((0xBF58476D1CE4E5B9LL * v2) >> 31) ^ (0xBF58476D1CE4E5B9LL * v2)) << 32;
  return ((0xBF58476D1CE4E5B9LL
         * (v3 | (484763065 * (unsigned int)*a2) ^ (unsigned int)((0xBF58476D1CE4E5B9LL * *a2) >> 31))) >> 31)
       ^ (0xBF58476D1CE4E5B9LL
        * (v3 | (484763065 * (unsigned int)*a2) ^ (unsigned int)((0xBF58476D1CE4E5B9LL * *a2) >> 31)));
}
