__int64 __fastcall sub_629670(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5, __int64 a6, unsigned __int8 a7)
{
  unsigned __int64 v7; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 *v14; // rax
  __int64 v16; // [rsp+10h] [rbp-48h]
  __int64 v17; // [rsp+10h] [rbp-48h]

  result = a5;
  v11 = a5 + (unsigned __int64)*(unsigned int *)(a1 + 72);
  if ( *(unsigned int *)(a1 + 76) < v11 )
  {
    v17 = a5;
    sub_25D6060(a1 + 64, a1 + 80, v11, 16);
    result = v17;
  }
  if ( a5 )
  {
    v16 = a4 + 24 * result;
    do
    {
      v7 = v7 & 0xFFFFFFFF00000000LL | 0x2BC;
      v12 = sub_132B900(
              a4,
              a3,
              a2,
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1872LL),
              (int)a1 + 24,
              (*(_BYTE *)(a1 + 8) & 0x10) != 0,
              a7);
      v13 = *(unsigned int *)(a1 + 72);
      if ( *(unsigned int *)(a1 + 76) < (unsigned __int64)(v13 + 1) )
      {
        sub_25D6060(a1 + 64, a1 + 80, v13 + 1, 16);
        v13 = *(unsigned int *)(a1 + 72);
      }
      v14 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 16 * v13);
      a4 += 24;
      *v14 = v7;
      v14[1] = v12;
      result = v16;
      ++*(_DWORD *)(a1 + 72);
    }
    while ( a4 != v16 );
  }
  return result;
}

