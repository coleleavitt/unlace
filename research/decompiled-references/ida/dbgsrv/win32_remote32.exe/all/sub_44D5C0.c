/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D5C0
// Address: 0x0044D5C0

//----- (0044D5C0) --------------------------------------------------------
int __cdecl sub_44D5C0(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  unsigned __int64 v8; // kr10_8
  int result; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // ebp
  int v13; // edi
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v17; // kr20_8
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // kr28_4
  int v21; // eax
  int v22; // [esp+Ch] [ebp-20h]
  unsigned int v23; // [esp+10h] [ebp-1Ch]
  unsigned int v24; // [esp+3Ch] [ebp+10h]

  if ( a4 <= -1 )
  {
    v6 = 0;
    v7 = 0;
  }
  else
  {
    v4 = sub_453720();
    v8 = (unsigned int)v4 + sub_4633C0(a4 + 1000LL * v5, 1000);
    v6 = HIDWORD(v8);
    v7 = v8;
  }
  result = a3;
  v10 = a3;
  v23 = v7;
  v24 = v6;
  v22 = a3;
  if ( a3 )
  {
    v11 = a1;
    while ( 1 )
    {
      if ( v6 | v7 )
      {
        v13 = sub_453720();
        v16 = ((unsigned int)v13
             + __PAIR64__(
                 ((1000 * (unsigned __int64)(1000 * v14)) >> 32) + 1000 * ((1000 * (unsigned __int64)v14) >> 32),
                 1000000 * v14)) >> 32;
        v15 = v13 + 1000000 * v14;
        if ( (unsigned int)v13
           + __PAIR64__(
               ((1000 * (unsigned __int64)(1000 * v14)) >> 32) + 1000 * ((1000 * (unsigned __int64)v14) >> 32),
               1000000 * v14) < __PAIR64__(v24, v7) )
        {
          v17 = __PAIR64__(v24, v7) - __PAIR64__(v16, v15);
          v18 = ((446676599 * (unsigned __int64)(v7 - v15)) >> 32)
              + 446676599 * ((__PAIR64__(v24, v7) - __PAIR64__(v16, v15)) >> 32);
          v20 = ((103079215LL * (v7 - v15) + (unsigned __int64)(unsigned int)v18) >> 32) + HIDWORD(v18);
          v19 = (((103079215LL * (v7 - v15) + (unsigned __int64)(unsigned int)v18) >> 32) + HIDWORD(v18)) >> 32;
          v10 = v22;
          v12 = (__PAIR64__(v19, v20)
               + 103079215LL * HIDWORD(v17)
               + ((v17 - (__PAIR64__(v19, v20) + 103079215LL * HIDWORD(v17))) >> 1)) >> 9;
        }
        else
        {
          v12 = 0;
        }
        v11 = a1;
      }
      else
      {
        v12 = -1;
      }
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 20))(v11, v12) <= 0 )
        break;
      v21 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v11 + 24))(v11, a2, v10);
      if ( v21 <= 0 )
        break;
      v6 = v24;
      v10 -= v21;
      a2 += v21;
      v7 = v23;
      v22 = v10;
      if ( !v10 )
        return a3;
    }
    return a3 - v10;
  }
  return result;
}
// 44D5E7: variable 'v5' is possibly undefined
// 44D65D: variable 'v14' is possibly undefined
