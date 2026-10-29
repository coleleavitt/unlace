/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100079688
// Address: 0x0000000100079688

//----- (0000000100079688) ----------------------------------------------------
__int64 __fastcall sub_100079688(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  int v5; // t1
  unsigned __int64 v11; // x10
  unsigned __int8 *v12; // x12
  __int64 v15; // x0
  unsigned __int8 *v16; // x3
  unsigned int i; // w3
  unsigned int v22; // w8
  unsigned int v23; // w17
  unsigned int j; // w0
  unsigned __int64 v25; // x9
  __int64 v26; // x15
  unsigned __int64 v27; // x13
  unsigned __int64 v34; // x13
  char v35; // w16
  unsigned int v36; // w10
  int v37; // w0
  unsigned int v38; // w2
  unsigned int v39; // w3
  int v41; // w15
  unsigned int k; // w16
  unsigned int v43; // w8
  unsigned int v44; // w14
  unsigned int m; // w15
  __int64 *v46; // x10
  unsigned __int64 v47; // x11
  __int64 v49; // t1
  unsigned __int8 *v51; // x10
  int v53; // t1

  if ( !a2 )
    return 0;
  for ( _X8 = a1 ^ 0xFFFFFFFFLL; a3; --a3 )
  {
    if ( ((unsigned __int8)a2 & 7) == 0 )
      break;
    v5 = *a2++;
    _W9 = v5;
    __asm { CRC32B          W8, W8, W9 }
    _X8 = _OFF;
    __asm { CRC32B          W8, W8, W9 }
  }
  v11 = a3 >> 3;
  if ( a3 >= 0x17610 )
  {
    v12 = a2 + 31920;
    do
    {
      LODWORD(_X16) = 0;
      _W17 = 0;
      v15 = -31920;
      v16 = v12;
      do
      {
        _X4 = *(_QWORD *)&a2[v15 + 31920];
        _X5 = *(_QWORD *)v16;
        _X6 = *((_QWORD *)v16 + 3990);
        __asm
        {
          CRC32X          W8, W8, X4
          CRC32X          W17, W17, X5
          CRC32X          W16, W16, X6
        }
        _X16 = _OFF;
        __asm { CRC32X          W16, W16, X6 }
        v16 += 8;
        v15 += 8;
      }
      while ( v15 );
      a2 += 95760;
      for ( i = 0x80000000; ; i >>= 1 )
      {
        if ( (i & 0xA10D3D0C) != 0 )
        {
          LODWORD(v15) = v15 ^ _X8;
          if ( ((i - 1) & 0xA10D3D0C) == 0 )
            break;
        }
        if ( (_X8 & 1) != 0 )
          LODWORD(_X8) = ((unsigned int)_X8 >> 1) ^ 0xEDB88320;
        else
          LODWORD(_X8) = (unsigned int)_X8 >> 1;
      }
      v22 = 0;
      v23 = v15 ^ _W17;
      for ( j = 0x80000000; ; j >>= 1 )
      {
        if ( (j & 0xA10D3D0C) != 0 )
        {
          v22 ^= v23;
          if ( ((j - 1) & 0xA10D3D0C) == 0 )
            break;
        }
        if ( (v23 & 1) != 0 )
          v23 = (v23 >> 1) ^ 0xEDB88320;
        else
          v23 >>= 1;
      }
      v11 -= 11970LL;
      _X8 = _X16 ^ v22;
      v12 += 95760;
    }
    while ( v11 > 0x2EC1 );
  }
  v25 = a3 & 7;
  if ( v11 >= 0x960 )
  {
    v26 = (unsigned __int16)v11 / 3uLL;
    if ( (unsigned __int16)v11 < 3u )
    {
      _X12 = 0;
      _W14 = 0;
      a2 += 24 * v26;
      v34 = v11 - 3 * v26;
    }
    else
    {
      v27 = 0;
      LODWORD(_X12) = 0;
      _W14 = 0;
      do
      {
        _X2 = *(_QWORD *)&a2[8 * v27];
        _X3 = *(_QWORD *)&a2[8 * v26 + 8 * v27];
        _X0 = *(_QWORD *)&a2[16 * v26 + 8 * v27];
        __asm
        {
          CRC32X          W8, W8, X2
          CRC32X          W14, W14, X3
          CRC32X          W12, W12, X0
        }
        _X12 = _OFF;
        __asm { CRC32X          W12, W12, X0 }
        ++v27;
      }
      while ( v27 < v26 );
      a2 += 24 * v26;
      v34 = v11 - 3 * v26;
      if ( (unsigned __int16)v11 >= 3u )
      {
        v35 = 6;
        v36 = 0x80000000;
        do
        {
          if ( (v26 & 1) != 0 )
          {
            v37 = *((_DWORD *)qword_10008C420 + (v35 & 0x1F));
            v38 = 0x80000000;
            v39 = v36;
            v36 = 0;
            while ( 1 )
            {
              if ( (v38 & v37) != 0 )
              {
                v36 ^= v39;
                if ( ((v38 - 1) & v37) == 0 )
                  break;
              }
              v38 >>= 1;
              if ( (v39 & 1) != 0 )
                v39 = (v39 >> 1) ^ 0xEDB88320;
              else
                v39 >>= 1;
            }
          }
          v26 >>= 1;
          ++v35;
        }
        while ( v26 );
LABEL_42:
        v41 = 0;
        for ( k = 0x80000000; ; k >>= 1 )
        {
          if ( (k & v36) != 0 )
          {
            v41 ^= _X8;
            if ( ((k - 1) & v36) == 0 )
              break;
          }
          if ( (_X8 & 1) != 0 )
            LODWORD(_X8) = ((unsigned int)_X8 >> 1) ^ 0xEDB88320;
          else
            LODWORD(_X8) = (unsigned int)_X8 >> 1;
        }
        v43 = 0;
        v44 = v41 ^ _W14;
        for ( m = 0x80000000; ; m >>= 1 )
        {
          if ( (m & v36) != 0 )
          {
            v43 ^= v44;
            if ( ((m - 1) & v36) == 0 )
              break;
          }
          if ( (v44 & 1) != 0 )
            v44 = (v44 >> 1) ^ 0xEDB88320;
          else
            v44 >>= 1;
        }
        _X8 = _X12 ^ v43;
        if ( v34 )
          goto LABEL_55;
        goto LABEL_57;
      }
    }
    v36 = 0x80000000;
    goto LABEL_42;
  }
  v34 = v11;
  if ( v11 )
  {
LABEL_55:
    v46 = (__int64 *)a2;
    v47 = v34;
    do
    {
      v49 = *v46++;
      _X12 = v49;
      __asm { CRC32X          W8, W8, X12 }
      _X8 = _OFF;
      __asm { CRC32X          W8, W8, X12 }
      --v47;
    }
    while ( v47 );
  }
LABEL_57:
  if ( v25 )
  {
    v51 = &a2[8 * v34];
    do
    {
      v53 = *v51++;
      _W11 = v53;
      __asm { CRC32B          W8, W8, W11 }
      _X8 = _OFF;
      __asm { CRC32B          W8, W8, W11 }
      --v25;
    }
    while ( v25 );
  }
  return _X8 ^ 0xFFFFFFFFLL;
}
// 10008C420: using guessed type __int64 qword_10008C420[16];
