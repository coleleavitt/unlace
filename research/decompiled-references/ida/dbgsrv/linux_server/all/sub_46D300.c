/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D300
// Address: 0x000000000046D300

//----- (000000000046D300) ----------------------------------------------------
__int64 __fastcall sub_46D300(_DWORD *a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v7; // r10d
  int v8; // edx
  __int64 (*v9)(); // rax

  v4 = 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)&a1[2 * v4 + 216];
    if ( a3 != v5 )
    {
      if ( v5 == -1 )
        break;
      goto LABEL_4;
    }
    if ( a2 == a1[v4 + 224] )
      return 0;
    if ( v5 == -1 )
      break;
LABEL_4:
    if ( ++v4 == 4 )
      return 0;
  }
  v7 = 0;
  *(_QWORD *)&a1[2 * (int)v4 + 216] = a3;
  a1[(int)v4 + 224] = a2;
  if ( a2 != 8 )
    v7 = a2 << (4 * v4 + 16);
  v8 = 0;
  if ( (unsigned int)(a4 - 2) <= 6 )
    v8 = *((_DWORD *)qword_4917E0 + (unsigned int)(a4 - 2)) << (4 * v4 + 18);
  a1[229] |= v8 | v7 | (1 << (2 * v4));
  v9 = *(__int64 (**)())(*(_QWORD *)a1 + 616LL);
  if ( v9 == sub_40C100 )
    return 0;
  return v9();
}
// 40C100: using guessed type __int64 sub_40C100();
// 4917E0: using guessed type __int64 qword_4917E0[3];
