/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E740
// Address: 0x0044E740

//----- (0044E740) --------------------------------------------------------
int __thiscall sub_44E740(_DWORD *this, signed int a2)
{
  _DWORD *v2; // ebx
  unsigned __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // edx
  unsigned __int64 v11; // kr08_8
  unsigned __int64 v12; // kr10_8
  unsigned int v13; // ecx
  unsigned int v14; // ebp
  unsigned __int64 v15; // kr20_8
  __int64 v16; // rcx
  unsigned __int64 v17; // kr30_8
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  int v21; // esi
  unsigned __int64 v22; // rax
  unsigned int v24; // [esp+10h] [ebp-34h]
  unsigned __int64 v25; // [esp+18h] [ebp-2Ch]
  int v27; // [esp+34h] [ebp-10h] BYREF
  __int16 v28; // [esp+38h] [ebp-Ch]

  v2 = this;
  while ( 1 )
  {
    if ( (*(unsigned __int8 (**)(void))(*v2 + 72))() )
    {
      v2[11] = "select";
      return -1;
    }
    if ( v2[5] )
    {
      v4 = v2[4];
      HIDWORD(v3) = *(_DWORD *)(v4 + 24 * v2[5] - 16);
      LODWORD(v3) = *(_DWORD *)(v4 + 24 * v2[5] - 12);
    }
    else
    {
      v3 = 0;
    }
    v24 = HIDWORD(v3);
    if ( a2 <= -1 )
    {
      v25 = 0;
    }
    else
    {
      v5 = sub_453720();
      LODWORD(v7) = sub_44D840(v5, v6, a2);
      v25 = v7;
      if ( v7 && (v7 <= __PAIR64__(v3, HIDWORD(v3)) || !v3) )
      {
        v3 = __PAIR64__(v7, HIDWORD(v7));
        v24 = v7;
      }
    }
    v8 = -1;
    if ( v3 )
    {
      v9 = sub_453720();
      v11 = __PAIR64__(
              ((1000 * (unsigned __int64)(1000 * v10)) >> 32) + 1000 * ((1000 * (unsigned __int64)v10) >> 32),
              v9)
          + 1000000 * v10;
      v12 = v24 + 1000000LL * (unsigned int)v3;
      if ( v12 <= v11 )
      {
        v14 = 0;
        v13 = 0;
      }
      else
      {
        v14 = (v12 - v11) >> 32;
        v13 = v12 - v11;
      }
      v15 = ((446676599 * (unsigned __int64)v13) >> 32) + 446676599LL * v14;
      v17 = (unsigned int)(__CFADD__((_DWORD)v15, 103079215 * v13) + ((103079215 * (unsigned __int64)v13) >> 32))
          + (unsigned __int64)HIDWORD(v15)
          + 103079215LL * v14;
      HIDWORD(v16) = HIDWORD(v17);
      v18 = (__PAIR64__(v14, v13) - v17) >> 32;
      LODWORD(v16) = (__PAIR64__(v14, v13) - v17) >> 1;
      v19 = (__PAIR64__(v18 >> 1, v17) + v16) >> 32;
      v2 = this;
      v8 = __PAIR64__(v19, (int)v17 + (int)v16) >> 9;
    }
    v27 = v2[7];
    v28 = 256;
    v20 = off_4B4058((int)&v27, 1u, v8);
    v21 = v20;
    if ( v20 )
      break;
    if ( v25 )
    {
      LODWORD(v22) = sub_453720();
      if ( v22 >= v25 )
      {
        v2[11] = "poll";
        v2[12] = 258;
        return -1;
      }
    }
  }
  if ( v20 < 0 )
  {
    v2[11] = "poll";
    v2[12] = WSAGetLastError();
  }
  return v21;
}
// 44E7B5: variable 'v6' is possibly undefined
// 44E7C3: variable 'v7' is possibly undefined
// 44E800: variable 'v10' is possibly undefined
// 44E92B: variable 'v22' is possibly undefined
// 4B4058: using guessed type int (__stdcall *off_4B4058)(int a1, unsigned int a2, int a3);
