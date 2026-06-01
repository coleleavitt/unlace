/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CDEC0
// Address: 0x080CDEC0

//----- (080CDEC0) --------------------------------------------------------
int __cdecl sub_80CDEC0(unsigned int *a1, unsigned int a2)
{
  int v2; // edx
  unsigned __int8 *v3; // eax
  int v4; // edx
  unsigned __int8 *v5; // edi
  int v6; // ebx
  int v8; // esi
  int v9; // esi
  __int16 v10; // dx
  int v11; // edx
  unsigned __int8 *v12; // esi
  __int16 v13; // bx
  __int16 v14; // dx
  int v15; // edx

  v2 = 0;
  v3 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
    goto LABEL_6;
  v4 = *v3;
  v5 = v3 + 1;
  if ( (v4 & 0x80u) != 0 )
  {
    if ( (~v4 & 0xC0) == 0 )
    {
      if ( (~(_BYTE)v4 & 0xE0) != 0 )
      {
        if ( (unsigned int)v5 < a2 )
        {
          v8 = v4 << 8;
          LOWORD(v8) = ((_WORD)v4 << 8) & 0x3F00;
          v9 = (v3[1] + v8) << 16;
          if ( (unsigned int)(v3 + 2) >= a2 )
          {
            v2 = v9;
            v3 += 2;
          }
          else if ( (unsigned int)(v3 + 3) >= a2 )
          {
            v14 = v3[2];
            v3 += 3;
            v2 = v9 + (unsigned __int16)(v14 << 8);
          }
          else
          {
            v10 = *((_WORD *)v3 + 1);
            v3 += 4;
            v2 = v9 + (unsigned __int16)__ROL2__(v10, 8);
          }
          goto LABEL_6;
        }
      }
      else if ( (unsigned int)v5 < a2 )
      {
        if ( (unsigned int)(v3 + 2) >= a2 )
        {
          v15 = v3[1];
          v3 += 2;
          v2 = v15 << 24;
          goto LABEL_6;
        }
        v11 = *(unsigned __int16 *)(v3 + 1);
        v12 = v3 + 3;
        LOWORD(v11) = __ROL2__(v11, 8);
        v2 = v11 << 16;
        if ( (unsigned int)(v3 + 3) < a2 )
        {
          v12 = v3 + 4;
          if ( (unsigned int)(v3 + 4) < a2 )
          {
            v13 = *(_WORD *)(v3 + 3);
            v3 += 5;
            v2 += (unsigned __int16)__ROL2__(v13, 8);
            goto LABEL_6;
          }
          v2 += (unsigned __int16)(v3[3] << 8);
        }
        v3 = v12;
        goto LABEL_6;
      }
      ++v3;
      v2 = 0;
LABEL_6:
      *a1 = (unsigned int)v3;
      return v2;
    }
    if ( (unsigned int)v5 < a2 )
    {
      v6 = v3[1];
      v3 += 2;
      v2 = v6 + ((v4 << 8) & 0xFFFF7F00);
      goto LABEL_6;
    }
  }
  *a1 = (unsigned int)v5;
  return v4;
}
