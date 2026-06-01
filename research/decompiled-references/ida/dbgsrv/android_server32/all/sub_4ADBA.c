/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4ADBA
// Address: 0x0004ADBA

//----- (0004ADBA) --------------------------------------------------------
int __fastcall sub_4ADBA(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        _DWORD *a21)
{
  int v21; // r4
  _DWORD *v22; // r6
  int v23; // r7
  _DWORD *v24; // r0
  _DWORD *v25; // r5
  int v26; // r2
  int v27; // r6
  int v28; // r0
  int v29; // r7
  int v30; // r2
  int v31; // r1
  unsigned __int8 *v32; // r1
  int v33; // r4
  unsigned __int8 *i; // r6
  int savedregs; // [sp+0h] [bp+0h]
  int v37; // [sp+1Ch] [bp+1Ch]

  if ( v23 >= 0 )
  {
    v24 = *(_DWORD **)(savedregs + 4);
    if ( v24[1] > (unsigned int)v23 )
    {
      v25 = *(_DWORD **)(*v24 + 4 * v23);
      if ( v25 )
      {
        if ( v25[5] )
        {
          v26 = a21[10];
          v27 = *(_DWORD *)(a21[9] + 4 * (v26 - 1));
          if ( v26 )
            a21[10] = v26 - 1;
          v28 = a21[4];
          if ( v28 - v27 < v25[3] )
          {
            v37 = v25[3];
            v29 = v25[9];
            if ( v29 )
            {
              v30 = v25[8];
              if ( v30 )
              {
                v31 = v29 + v28 - v27 - v37;
                if ( v31 >= 0 )
                {
                  v32 = (unsigned __int8 *)(v30 + 24 * v31);
                  v33 = v28 + v29 - 1 - v27 - v37;
                  for ( i = v32; ; v32 = i )
                  {
                    ++v33;
                    i += 24;
                    if ( v33 >= v29 )
                      break;
                    sub_3DC40((int)(a21 + 3), v32);
                  }
                  JUMPOUT(0x4B1B4);
                }
                JUMPOUT(0x4AF3A);
              }
            }
            JUMPOUT(0x4AF8A);
          }
          JUMPOUT(0x4AF34);
        }
        JUMPOUT(0x4AEFE);
      }
    }
    JUMPOUT(0x4AF02);
  }
  *v22 = -v23;
  return sub_4AE60(1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, v21);
}
// 4ADD4: control flows out of bounds to 4AF02
// 4ADEE: control flows out of bounds to 4AEFE
// 4AE10: control flows out of bounds to 4AF34
// 4AE1A: control flows out of bounds to 4AF8A
// 4AE2E: control flows out of bounds to 4AF3A
// 4AE50: control flows out of bounds to 4B1B4
// 4ADBA: could not find valid save-restore pair for r4
// 4ADC8: variable 'v23' is possibly undefined
// 4ADCA: variable 'savedregs' is possibly undefined
// 4AE5E: variable 'v22' is possibly undefined
// 4AE5F: variable 'v21' is possibly undefined
// 4AE60: using guessed type int __fastcall sub_4AE60(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
