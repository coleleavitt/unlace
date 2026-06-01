unsigned __int64 __fastcall sub_7CC20(
        unsigned int *a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        char a8)
{
  int v11; // r10d
  int v12; // r9d
  int v13; // eax
  int v14; // r8d
  __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned __int64 result; // rax
  __int64 *v19; // rdx

  if ( !a3 )
    return -70;
  if ( !a5 )
    return -20;
  if ( a3 > a5 )
  {
    v19 = &qword_AA7E0[2 * (unsigned int)(16 * a5 / a3)];
    v14 = *(_DWORD *)v19;
    v13 = *((_DWORD *)v19 + 1);
    v12 = *((_DWORD *)v19 + 2);
    v11 = *((_DWORD *)v19 + 3);
  }
  else
  {
    v11 = 202;
    v12 = 1695;
    v13 = 185;
    v14 = 1412;
  }
  v16 = a6;
  v17 = a3;
  if ( (unsigned int)(a3 >> 8) * v13 + v14 <= (((unsigned int)(a3 >> 8) * v11 + v12) >> 5)
                                            + (unsigned int)(a3 >> 8) * v11
                                            + v12 )
  {
    result = sub_7C000(a1, a4, a5, v16, a7, a8);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      if ( a5 > result )
        return sub_76480((unsigned __int64)a2, v17, (unsigned __int16 *)&a4[result], a5 - result, (int *)a1, a8);
      return -72;
    }
  }
  else
  {
    result = sub_7C4D0(a1, a4, a5, v16, a7, a8);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      if ( a5 > result )
        return sub_79C30(a2, v17, (unsigned __int16 *)&a4[result], a5 - result, a1, a8);
      return -72;
    }
  }
  return result;
}

