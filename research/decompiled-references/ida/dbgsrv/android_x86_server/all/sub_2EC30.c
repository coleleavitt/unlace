/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2EC30
// Address: 0x0002EC30

//----- (0002EC30) --------------------------------------------------------
__int64 *__userpurge sub_2EC30@<eax>(__int64 *a1, _DWORD *a2, int a3, _DWORD *a4, int a5, __int64 a6)
{
  int v6; // ecx
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // esi
  __int64 v12; // kr00_8
  unsigned int v13; // ecx
  char *v14; // edx
  int v16; // [esp+20h] [ebp-3Ch]
  _DWORD *v17; // [esp+30h] [ebp-2Ch]
  char *v18; // [esp+34h] [ebp-28h]
  __int64 v19; // [esp+40h] [ebp-1Ch] BYREF
  unsigned int v20; // [esp+48h] [ebp-14h]

  v20 = __readgsdword(0x14u);
  v6 = a5;
  if ( a5 == a3 || (v16 = 93 * (a4 - a2) - 1171354717 * ((a5 - *a4) >> 2) + (a3 - *a2) / -44, v16 <= 0) )
  {
    v12 = a6;
  }
  else
  {
    v7 = a4;
    do
    {
      if ( v6 == *v7 )
        v6 = *--v7 + 4092;
      v17 = v7;
      v18 = (char *)(v6 - 44);
      v8 = *v7;
      v9 = -1171354717 * ((v6 - *v7) >> 2);
      v10 = v6 - 44 * v16;
      if ( v9 > v16 )
        v9 = v16;
      else
        v10 = v8;
      sub_2F160(&v19, v10, v6, a6);
      a6 = v19;
      v16 -= v9;
      v11 = v9 - 1;
      v12 = v19;
      if ( v11 )
      {
        v13 = -1171354717 * ((int)&v18[-*v17] >> 2) - v11;
        if ( (int)v13 <= 0 )
        {
          v14 = (char *)&dword_13BCA8[11 * (93 * ((int)(92 - v13) / 93) - (92 - v13)) - 322358]
              + v17[(int)(92 - v13) / -93];
          v7 = &v17[(int)(92 - v13) / -93];
        }
        else
        {
          v14 = (char *)(v17[v13 / 0x5D] + 44 * (v13 % 0x5D));
          v7 = &v17[v13 / 0x5D];
        }
      }
      else
      {
        v7 = v17;
        v14 = v18;
      }
      v6 = (int)v14;
    }
    while ( v16 > 0 );
  }
  *a1 = v12;
  return a1;
}
// 13BCA8: using guessed type int dword_13BCA8[6];
