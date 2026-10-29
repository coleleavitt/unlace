__int64 __fastcall sub_446230(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        char a4,
        __int64 a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  __int64 v10; // r14
  int v11; // r13d
  unsigned __int64 v12; // r12
  _BYTE *v13; // rbp
  unsigned __int8 *v14; // rbx
  unsigned __int64 v15; // r15
  unsigned int v16; // r9d
  int v17; // r8d
  __int64 v18; // rsi
  unsigned __int16 v19; // cx
  int v21; // eax
  unsigned int v22; // [rsp+8h] [rbp-60h]
  __int64 i; // [rsp+10h] [rbp-58h]
  __int64 *v24; // [rsp+18h] [rbp-50h]
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+28h] [rbp-40h]

  v10 = a1 + 4;
  v11 = 0;
  v12 = (unsigned __int64)&a2[a3];
  v13 = a6;
  v14 = a2;
  v25 = (int)a6;
  v26 = (int)a2;
  v15 = (unsigned __int64)&a6[a7 - 3];
  v16 = 0;
  v24 = *(__int64 **)(a1 + 264);
  for ( i = *v24; (unsigned __int64)v14 < v12; ++v11 )
  {
    if ( (unsigned __int64)v13 > v15 )
    {
      v16 = -4;
      break;
    }
    v17 = *v14;
    v18 = *v14;
    if ( *(_BYTE *)(v18 + v10) )
    {
      if ( (unsigned __int64)++v14 >= v12 )
      {
        LODWORD(v14) = (_DWORD)v14 - 1;
        v16 = -1;
        break;
      }
      v19 = *(_WORD *)(v24[v18] + 2LL * *v14);
    }
    else
    {
      v19 = *(_WORD *)(i + 2 * v18);
    }
    if ( v17 != 0 && v19 == 0 )
    {
      if ( (a4 & 4) != 0 )
      {
        v16 = -2;
        break;
      }
      v19 = v17;
      v14 = &v14[(*(_BYTE *)(v18 + v10) == 0) - 1];
    }
    if ( (unsigned __int16)(v19 - 1) > 0x7Eu )
    {
      v22 = v16;
      v21 = sub_49BA90(v19, v13);
      v16 = v22;
      ++v14;
      v13 += v21;
    }
    else
    {
      *v13 = v19;
      ++v14;
      ++v13;
    }
  }
  *a8 = (_DWORD)v14 - v26;
  *a9 = (_DWORD)v13 - v25;
  *a10 = v11;
  return v16;
}

