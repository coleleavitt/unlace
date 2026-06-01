/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4752EB
// Address: 0x004752EB

//----- (004752EB) --------------------------------------------------------
int __usercall sub_4752EB@<eax>(
        unsigned int a1@<ebx>,
        int a2@<edi>,
        __m128i *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned int *v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // eax
  signed int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  DWORD v15; // [esp-4h] [ebp-24h]
  volatile signed __int32 *v16; // [esp+Ch] [ebp-14h]
  unsigned int v17; // [esp+10h] [ebp-10h]
  __m128i *lpWideCharStr; // [esp+14h] [ebp-Ch]
  unsigned int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  if ( !a5 || !a6 )
    return 0;
  if ( !a3 )
    goto LABEL_4;
  a2 = (int)a7;
  if ( !a7 || a6 > 0xFFFFFFFF / a5 )
  {
    if ( a4 != -1 )
      sub_464890(a3, 0, a4);
    if ( !a7 || a6 > 0xFFFFFFFF / a5 )
    {
LABEL_4:
      *sub_46B984() = 22;
      goto LABEL_5;
    }
  }
  v8 = a7;
  v16 = a7 + 3;
  if ( (a7[3] & 0x4C0) != 0 )
    v17 = a7[6];
  else
    v17 = 4096;
  a1 = a4;
  a2 = a6 * a5;
  lpWideCharStr = a3;
  v19 = a4;
  v9 = a6 * a5;
  v20 = a6 * a5;
  if ( !(a6 * a5) )
    return a6;
  while ( 1 )
  {
    if ( (v8[3] & 0x4C0) != 0 )
    {
      a1 = v8[2];
      if ( a1 )
      {
        if ( (a1 & 0x80000000) != 0 )
          goto LABEL_42;
        if ( v9 < a1 )
          a1 = v9;
        if ( a1 > v19 )
          goto LABEL_39;
        sub_471A66(a1, a2, lpWideCharStr, v19, *v8, a1);
        v8 = a7;
        v9 = v20 - a1;
        a7[2] -= a1;
        *a7 += a1;
        v19 -= a1;
        goto LABEL_37;
      }
      a1 = v19;
    }
    if ( v9 < v17 )
      break;
    if ( v9 > 0x7FFFFFFF )
      v9 = 0x7FFFFFFF;
    if ( v17 )
    {
      v9 -= v9 % v17;
      v8 = a7;
    }
    if ( v9 > a1 )
      goto LABEL_39;
    v10 = v8[1];
    v8[2] = 0;
    v15 = v9;
    *v8 = v10;
    v11 = sub_47631B(a1, a2, (int)v8);
    v12 = sub_473D17(a2, v11, lpWideCharStr->m128i_i16, v15);
    a1 = v12;
    if ( !v12 )
    {
      _InterlockedOr(v16, 8u);
LABEL_44:
      v14 = a2 - v20;
      return v14 / a5;
    }
    v9 = v20;
    if ( v12 < 0 )
    {
LABEL_42:
      _InterlockedOr(v16, 0x10u);
      v14 = a2 - v9;
      return v14 / a5;
    }
    v8 = a7;
    v9 = v20 - v12;
    v19 -= v12;
LABEL_37:
    lpWideCharStr = (__m128i *)((char *)lpWideCharStr + a1);
    v20 = v9;
    if ( !v9 )
      return a6;
    a1 = v19;
  }
  v13 = sub_47CB42(a1, a2, (int)v8);
  if ( v13 == -1 )
    goto LABEL_44;
  if ( a1 )
  {
    v8 = a7;
    lpWideCharStr->m128i_i8[0] = v13;
    v9 = v20 - 1;
    v17 = a7[6];
    v19 = a1 - 1;
    a1 = 1;
    goto LABEL_37;
  }
LABEL_39:
  if ( a4 != -1 )
    sub_464890(a3, 0, a4);
  *sub_46B984() = 34;
LABEL_5:
  sub_467EF4(a1, a2);
  return 0;
}
