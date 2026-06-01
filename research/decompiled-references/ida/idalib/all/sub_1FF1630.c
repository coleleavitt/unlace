__int64 __fastcall sub_1FF1630(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v5; // rsi
  __int64 *v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  bool v17; // [rsp+Fh] [rbp-39h]

  v5 = a3[1];
  v6 = *a3;
  if ( *a3 == v5 )
    goto LABEL_10;
  while ( 1 )
  {
    v7 = v6[1];
    v8 = *v6;
    if ( v7 > 0xD
      && *(_QWORD *)v8 == 0x7265766972642D2DLL
      && *(_DWORD *)(v8 + 8) == 1685024045
      && *(_WORD *)(v8 + 12) == 15717 )
    {
      break;
    }
    v6 += 4;
    if ( v5 == v6 )
      goto LABEL_10;
  }
  if ( v7 != 16 )
LABEL_10:
    v17 = 0;
  else
    v17 = *(_WORD *)(v8 + 14) == 27747;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v9 = *a3;
  v10 = ((char *)a3[1] - (char *)*a3) >> 5;
  if ( v10 )
  {
    v11 = 0;
    while ( 1 )
    {
      v13 = (__int64)&v9[4 * v11];
      v14 = *(_QWORD *)v13;
      v15 = *(_QWORD *)(v13 + 8);
      if ( v17 )
        break;
      if ( v15 == 3 )
      {
        if ( *(_WORD *)v14 == 19757 && *(_BYTE *)(v14 + 2) == 70
          || *(_WORD *)v14 == 19757
          && (*(_BYTE *)(v14 + 2) == 84 || *(_WORD *)v14 == 19757 && *(_BYTE *)(v14 + 2) == 81) )
        {
          ++v11;
          goto LABEL_18;
        }
        if ( *(_WORD *)v14 != 19757 )
          break;
      }
      else if ( v15 <= 1 || *(_WORD *)v14 != 19757 )
      {
        break;
      }
      if ( v10 <= ++v11 )
        return a1;
LABEL_19:
      v9 = *a3;
    }
    if ( v15 <= 0xC )
      goto LABEL_16;
    if ( *(_QWORD *)v14 == 0x636E49776F68732FLL && *(_DWORD *)(v14 + 8) == 1701082476 )
    {
      if ( *(_BYTE *)(v14 + 12) == 115 )
        goto LABEL_18;
      if ( *(_QWORD *)v14 != 0x636E49776F68732DLL )
        goto LABEL_16;
    }
    else if ( *(_QWORD *)v14 != 0x636E49776F68732DLL )
    {
      goto LABEL_16;
    }
    if ( *(_DWORD *)(v14 + 8) == 1701082476 && *(_BYTE *)(v14 + 12) == 115 )
    {
LABEL_18:
      if ( v10 <= ++v11 )
        return a1;
      goto LABEL_19;
    }
LABEL_16:
    v12 = *(_QWORD **)(a1 + 8);
    if ( v12 == *(_QWORD **)(a1 + 16) )
    {
      sub_10BCB90((void ***)a1, *(const __m128i **)(a1 + 8), v13);
    }
    else
    {
      *v12 = v12 + 2;
      sub_1FF0D10(v12, *(_BYTE **)v13, *(_QWORD *)v13 + *(_QWORD *)(v13 + 8));
      *(_QWORD *)(a1 + 8) += 32LL;
    }
    goto LABEL_18;
  }
  return a1;
}
