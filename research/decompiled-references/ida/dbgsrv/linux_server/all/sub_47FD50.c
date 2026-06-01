/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FD50
// Address: 0x000000000047FD50

//----- (000000000047FD50) ----------------------------------------------------
__int64 __fastcall sub_47FD50(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // rcx
  __int64 result; // rax
  unsigned __int8 *v5; // r8
  int v6; // esi
  int v7; // edi
  unsigned __int8 *v8; // rdi
  __int16 v9; // si
  int v10; // eax
  __int16 v11; // si
  int v12; // eax

  v2 = (unsigned __int8 *)*a1;
  result = 0;
  if ( *a1 >= a2 )
    goto LABEL_6;
  result = *v2;
  v5 = v2 + 1;
  if ( (result & 0x80u) == 0LL )
    goto LABEL_7;
  if ( (~(_BYTE)result & 0xC0) == 0 )
  {
    if ( (~(_BYTE)result & 0xE0) != 0 )
    {
      if ( (unsigned __int64)v5 < a2 )
      {
        v7 = *v2 << 8;
        v5 = v2 + 2;
        LOWORD(v7) = v7 & 0x3F00;
        result = (v7 + (unsigned int)v2[1]) << 16;
        if ( (unsigned __int64)(v2 + 2) >= a2 )
          goto LABEL_7;
        v8 = v2 + 3;
        if ( (unsigned __int64)(v2 + 3) < a2 )
        {
          v9 = *((_WORD *)v2 + 1);
          v2 += 4;
          result = (unsigned __int16)__ROL2__(v9, 8) + (unsigned int)result;
          goto LABEL_6;
        }
        result = (unsigned __int16)(v2[2] << 8) + (unsigned int)result;
LABEL_20:
        v2 = v8;
        goto LABEL_6;
      }
    }
    else if ( (unsigned __int64)v5 < a2 )
    {
      if ( (unsigned __int64)(v2 + 2) >= a2 )
      {
        v12 = v2[1];
        v2 += 2;
        result = (unsigned int)(v12 << 24);
        goto LABEL_6;
      }
      v10 = *(unsigned __int16 *)(v2 + 1);
      v8 = v2 + 3;
      LOWORD(v10) = __ROL2__(v10, 8);
      result = (unsigned int)(v10 << 16);
      if ( (unsigned __int64)(v2 + 3) < a2 )
      {
        if ( (unsigned __int64)(v2 + 4) >= a2 )
        {
          result = (unsigned __int16)(v2[3] << 8) + (unsigned int)result;
          v2 += 4;
        }
        else
        {
          v11 = *(_WORD *)(v2 + 3);
          v2 += 5;
          result = (unsigned __int16)__ROL2__(v11, 8) + (unsigned int)result;
        }
        goto LABEL_6;
      }
      goto LABEL_20;
    }
    ++v2;
    result = 0;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v5 < a2 )
  {
    v6 = v2[1];
    v2 += 2;
    result = v6 + (((_DWORD)result << 8) & 0xFFFF7F00);
LABEL_6:
    *a1 = (unsigned __int64)v2;
    return result;
  }
LABEL_7:
  *a1 = (unsigned __int64)v5;
  return result;
}
