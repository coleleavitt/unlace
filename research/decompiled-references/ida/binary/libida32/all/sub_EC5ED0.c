__int64 __fastcall sub_EC5ED0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  double v5; // rcx
  __int16 v6; // di
  double *v7; // rsi
  __int16 v8; // di
  char v9; // r10
  char v10; // r9
  __int64 v11; // r8
  __int16 v12; // di
  __int64 v13; // rdx
  __int16 v14; // di
  double v15[2]; // [rsp+0h] [rbp-10h] BYREF

  result = a1;
  if ( !a2 || (*(_WORD *)a2 & 0x1FF) != 0x82 )
  {
    if ( !a3 )
      goto LABEL_12;
    v9 = 0;
    v10 = 0;
    v5 = 0.0;
    goto LABEL_15;
  }
  v4 = a2 + 16 + 8LL * (*(_DWORD *)a2 >> 9);
  if ( a2 + 16 == v4 )
    goto LABEL_10;
  v5 = *(double *)(a2 + 16);
  v6 = *(_WORD *)(*(_QWORD *)&v5 + 36LL);
  if ( v6 == 49 )
  {
LABEL_27:
    v9 = 0;
    v10 = 1;
  }
  else
  {
    if ( v6 != 52 )
    {
      v7 = (double *)(a2 + 24);
      while ( v7 != (double *)v4 )
      {
        v5 = *v7;
        v8 = *(_WORD *)(*(_QWORD *)v7 + 36LL);
        if ( v8 == 49 )
          goto LABEL_27;
        ++v7;
        if ( v8 == 52 )
          goto LABEL_28;
      }
LABEL_10:
      v9 = 0;
      v10 = 0;
      v5 = 0.0;
      goto LABEL_11;
    }
LABEL_28:
    v9 = 1;
    v10 = 0;
  }
LABEL_11:
  if ( !a3 )
    goto LABEL_12;
LABEL_15:
  if ( (*(_WORD *)a3 & 0x1FF) != 0x82 )
    goto LABEL_12;
  v11 = a3 + 16 + 8LL * (*(_DWORD *)a3 >> 9);
  if ( a3 + 16 == v11 )
    goto LABEL_12;
  v12 = *(_WORD *)(*(_QWORD *)(a3 + 16) + 36LL);
  if ( v12 != 49 )
  {
    if ( v12 != 52 )
    {
      v13 = a3 + 24;
      while ( v13 != v11 )
      {
        v14 = *(_WORD *)(*(_QWORD *)v13 + 36LL);
        if ( v14 == 49 )
          goto LABEL_25;
        v13 += 8;
        if ( v14 == 52 )
          goto LABEL_24;
      }
      goto LABEL_12;
    }
LABEL_24:
    v10 = v9;
  }
LABEL_25:
  if ( !v10 )
  {
LABEL_12:
    *(_BYTE *)(result + 16) = 0;
    *(_OWORD *)result = 0;
    return result;
  }
  v15[0] = v5;
  *(_BYTE *)(result + 16) = 1;
  *(__m128 *)result = _mm_loadh_ps(v15);
  return result;
}

