unsigned __int64 __fastcall sub_432120(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE **v4; // r12
  _BYTE **v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r11
  unsigned __int8 *v9; // r10
  unsigned __int8 *v10; // r13
  unsigned __int8 v11; // cl
  _BYTE *v12; // rsi
  _BYTE *v13; // rdx
  _BYTE *v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v17; // rdx
  _BYTE **v18; // rdx

  v4 = (_BYTE **)a2;
  v5 = (_BYTE **)a1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a2 + 16);
  while ( v6 < v7 )
  {
    v17 = v6;
    v6 = v7;
    v7 = v17;
    v18 = v5;
    v5 = v4;
    v4 = v18;
  }
  v8 = 0;
  v9 = (unsigned __int8 *)&unk_2389AE0 + 6 * (((v6 + v7 - 2 * a3) * (v6 + v7 - 2 * a3 + 1)) >> 1) + 6 * (v6 - 1 - v7);
  v10 = v9 + 6;
  do
  {
    v11 = *v9;
    if ( !*v9 )
      break;
    v12 = v5[1];
    if ( v12 != *v5 )
    {
      v13 = *v5;
      v14 = *v4;
      v15 = 0;
      while ( v14 != v4[1] )
      {
        if ( *v13 == *v14 )
        {
          ++v13;
          ++v15;
          ++v14;
          if ( v12 == v13 )
            break;
        }
        else
        {
          if ( !v11 )
            break;
          if ( (v11 & 1) != 0 )
            ++v13;
          else
            v14 += -((v11 & 2) == 0) + 1;
          v11 >>= 2;
          if ( v12 == v13 )
            break;
        }
      }
      if ( v8 < v15 )
        v8 = v15;
    }
    ++v9;
  }
  while ( v9 != v10 );
  if ( v8 < a3 )
    return 0;
  return v8;
}

