/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000744A8
// Address: 0x00000001000744A8

//----- (00000001000744A8) ----------------------------------------------------
__int64 __fastcall sub_1000744A8(int a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int8 *v4; // x9
  unsigned __int64 v11; // x10
  unsigned __int64 v27; // x9
  unsigned __int8 *v28; // x12
  __int64 v31; // x0
  unsigned __int8 *v32; // x3
  unsigned int i; // w3
  __int64 v38; // x8
  unsigned int v39; // w17
  unsigned int j; // w0
  unsigned __int64 v41; // x11
  unsigned __int64 v42; // x15
  unsigned int v45; // w14
  int v46; // w16
  __int64 v47; // x15
  unsigned int k; // w15
  __int64 v49; // x8
  unsigned int v50; // w13
  unsigned int m; // w15
  __int64 *v52; // x10
  unsigned __int64 v53; // x12
  __int64 v55; // t1
  unsigned __int8 *v57; // x9
  __int64 v72; // x14
  __int64 *v73; // x17
  __int64 v77; // t1
  char v79; // w16
  unsigned __int64 v80; // x0
  bool v81; // cc
  int v82; // w2
  unsigned int v83; // w3
  unsigned int v84; // w4

  if ( !a2 )
    return 0;
  _X8 = (unsigned int)~a1;
  if ( a3 && ((unsigned __int8)a2 & 7) != 0 )
  {
    v4 = a2 + 1;
    _W10 = *a2;
    __asm { CRC32B          W8, W8, W10 }
    _X8 = _OFF;
    __asm { CRC32B          W8, W8, W10 }
    v11 = a3 - 1;
    if ( a3 == 1 )
      goto LABEL_20;
    if ( ((unsigned __int8)v4 & 7) == 0 )
      goto LABEL_20;
    v4 = a2 + 2;
    _W10 = a2[1];
    __asm { CRC32B          W8, W8, W10 }
    _X8 = _OFF;
    __asm { CRC32B          W8, W8, W10 }
    v11 = a3 - 2;
    if ( a3 == 2 )
      goto LABEL_20;
    if ( ((unsigned __int8)v4 & 7) == 0 )
      goto LABEL_20;
    v4 = a2 + 3;
    _W10 = a2[2];
    __asm { CRC32B          W8, W8, W10 }
    _X8 = _OFF;
    __asm { CRC32B          W8, W8, W10 }
    v11 = a3 - 3;
    if ( a3 == 3 )
      goto LABEL_20;
    if ( ((unsigned __int8)v4 & 7) == 0 )
      goto LABEL_20;
    v4 = a2 + 4;
    _W10 = a2[3];
    __asm { CRC32B          W8, W8, W10 }
    _X8 = _OFF;
    __asm { CRC32B          W8, W8, W10 }
    v11 = a3 - 4;
    if ( a3 == 4 )
      goto LABEL_20;
    if ( ((unsigned __int8)v4 & 7) == 0 )
      goto LABEL_20;
    v4 = a2 + 5;
    _W10 = a2[4];
    __asm { CRC32B          W8, W8, W10 }
    _X8 = _OFF;
    __asm { CRC32B          W8, W8, W10 }
    v11 = a3 - 5;
    if ( a3 == 5 )
      goto LABEL_20;
    if ( ((unsigned __int8)v4 & 7) == 0 )
      goto LABEL_20;
    v4 = a2 + 6;
    _W10 = a2[5];
    __asm { CRC32B          W8, W8, W10 }
    _X8 = _OFF;
    __asm { CRC32B          W8, W8, W10 }
    v11 = a3 - 6;
    if ( a3 == 6 )
      goto LABEL_20;
    if ( ((unsigned __int8)v4 & 7) == 0 )
      goto LABEL_20;
    v4 = a2 + 7;
    _W10 = a2[6];
    __asm { CRC32B          W8, W8, W10 }
    _X8 = _OFF;
    __asm { CRC32B          W8, W8, W10 }
    v11 = a3 - 7;
    if ( a3 == 7 || ((unsigned __int8)v4 & 7) == 0 )
    {
LABEL_20:
      a2 = v4;
      a3 = v11;
    }
    else
    {
      a3 -= 8LL;
      _W9 = a2[7];
      a2 += 8;
      __asm { CRC32B          W8, W8, W9 }
      _X8 = _OFF;
      __asm { CRC32B          W8, W8, W9 }
    }
  }
  v27 = a3 >> 3;
  if ( a3 >= 0x17610 )
  {
    v28 = a2 + 31920;
    do
    {
      LODWORD(_X16) = 0;
      _W17 = 0;
      v31 = -31920;
      v32 = v28;
      do
      {
        _X4 = *(_QWORD *)&a2[v31 + 31920];
        _X5 = *(_QWORD *)v32;
        _X6 = *((_QWORD *)v32 + 3990);
        __asm
        {
          CRC32X          W8, W8, X4
          CRC32X          W17, W17, X5
          CRC32X          W16, W16, X6
        }
        _X16 = _OFF;
        __asm { CRC32X          W16, W16, X6 }
        v32 += 8;
        v31 += 8;
      }
      while ( v31 );
      a2 += 95760;
      for ( i = 0x80000000; ; i >>= 1 )
      {
        if ( (i & 0xA10D3D0C) != 0 )
        {
          LODWORD(v31) = v31 ^ _X8;
          if ( ((i - 1) & 0xA10D3D0C) == 0 )
            break;
        }
        if ( (_X8 & 1) != 0 )
          LODWORD(_X8) = ((unsigned int)_X8 >> 1) ^ 0xEDB88320;
        else
          LODWORD(_X8) = (unsigned int)_X8 >> 1;
      }
      LODWORD(v38) = 0;
      v39 = v31 ^ _W17;
      for ( j = 0x80000000; ; j >>= 1 )
      {
        if ( (j & 0xA10D3D0C) != 0 )
        {
          v38 = (unsigned int)v38 ^ v39;
          if ( ((j - 1) & 0xA10D3D0C) == 0 )
            break;
        }
        if ( (v39 & 1) != 0 )
          v39 = (v39 >> 1) ^ 0xEDB88320;
        else
          v39 >>= 1;
      }
      _X8 = _X16 ^ v38;
      v28 += 95760;
      v27 -= 11970LL;
    }
    while ( v27 > 0x2EC1 );
  }
  v41 = a3 & 7;
  if ( v27 >= 0x960 )
  {
    v42 = (unsigned __int16)v27 / 3LL;
    if ( (unsigned __int16)v27 >= 3u )
    {
      LODWORD(_X12) = 0;
      _W13 = 0;
      if ( v42 <= 1 )
        v72 = 1;
      else
        v72 = (unsigned __int16)v27 / 3LL;
      v73 = (__int64 *)a2;
      do
      {
        _X0 = v73[v42];
        _X2 = v73[2 * v42];
        v77 = *v73++;
        _X3 = v77;
        __asm
        {
          CRC32X          W8, W8, X3
          CRC32X          W13, W13, X0
          CRC32X          W12, W12, X2
        }
        _X12 = _OFF;
        __asm { CRC32X          W12, W12, X2 }
        --v72;
      }
      while ( v72 );
      v79 = 6;
      v45 = 0x80000000;
      v80 = (unsigned __int16)v27 / 3LL;
      do
      {
        if ( (v80 & 1) != 0 )
        {
          v82 = *((_DWORD *)qword_100087520 + (v79 & 0x1F));
          v83 = 0x80000000;
          v84 = v45;
          v45 = 0;
          while ( 1 )
          {
            if ( (v83 & v82) != 0 )
            {
              v45 ^= v84;
              if ( ((v83 - 1) & v82) == 0 )
                break;
            }
            v83 >>= 1;
            if ( (v84 & 1) != 0 )
              v84 = (v84 >> 1) ^ 0xEDB88320;
            else
              v84 >>= 1;
          }
        }
        ++v79;
        v81 = v80 > 1;
        v80 >>= 1;
      }
      while ( v81 );
    }
    else
    {
      _X12 = 0;
      _W13 = 0;
      v45 = 0x80000000;
    }
    v46 = 0;
    v47 = 3 * v42;
    a2 += 8 * v47;
    v27 -= v47;
    for ( k = 0x80000000; ; k >>= 1 )
    {
      if ( (k & v45) != 0 )
      {
        v46 ^= _X8;
        if ( ((k - 1) & v45) == 0 )
          break;
      }
      if ( (_X8 & 1) != 0 )
        LODWORD(_X8) = ((unsigned int)_X8 >> 1) ^ 0xEDB88320;
      else
        LODWORD(_X8) = (unsigned int)_X8 >> 1;
    }
    LODWORD(v49) = 0;
    v50 = v46 ^ _W13;
    for ( m = 0x80000000; ; m >>= 1 )
    {
      if ( (m & v45) != 0 )
      {
        v49 = (unsigned int)v49 ^ v50;
        if ( ((m - 1) & v45) == 0 )
          break;
      }
      if ( (v50 & 1) != 0 )
        v50 = (v50 >> 1) ^ 0xEDB88320;
      else
        v50 >>= 1;
    }
    _X8 = _X12 ^ v49;
  }
  if ( v27 )
  {
    v52 = (__int64 *)a2;
    v53 = v27;
    do
    {
      v55 = *v52++;
      _X13 = v55;
      __asm { CRC32X          W8, W8, X13 }
      _X8 = _OFF;
      __asm { CRC32X          W8, W8, X13 }
      --v53;
    }
    while ( v53 );
  }
  if ( v41 )
  {
    v57 = &a2[8 * v27];
    _W10 = *v57;
    __asm { CRC32B          W8, W8, W10 }
    _X8 = _OFF;
    __asm { CRC32B          W8, W8, W10 }
    if ( v41 != 1 )
    {
      _W10 = v57[1];
      __asm { CRC32B          W8, W8, W10 }
      _X8 = _OFF;
      __asm { CRC32B          W8, W8, W10 }
      if ( v41 != 2 )
      {
        _W10 = v57[2];
        __asm { CRC32B          W8, W8, W10 }
        _X8 = _OFF;
        __asm { CRC32B          W8, W8, W10 }
        if ( v41 != 3 )
        {
          _W10 = v57[3];
          __asm { CRC32B          W8, W8, W10 }
          _X8 = _OFF;
          __asm { CRC32B          W8, W8, W10 }
          if ( v41 != 4 )
          {
            _W10 = v57[4];
            __asm { CRC32B          W8, W8, W10 }
            _X8 = _OFF;
            __asm { CRC32B          W8, W8, W10 }
            if ( v41 != 5 )
            {
              _W10 = v57[5];
              __asm { CRC32B          W8, W8, W10 }
              _X8 = _OFF;
              __asm { CRC32B          W8, W8, W10 }
              if ( v41 != 6 )
              {
                _W9 = v57[6];
                __asm { CRC32B          W8, W8, W9 }
                _X8 = _OFF;
                __asm { CRC32B          W8, W8, W9 }
              }
            }
          }
        }
      }
    }
  }
  return _X8 ^ 0xFFFFFFFFLL;
}
// 100087520: using guessed type __int64 qword_100087520[16];
