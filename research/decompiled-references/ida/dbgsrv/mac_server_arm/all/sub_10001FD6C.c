/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001FD6C
// Address: 0x000000010001FD6C

//----- (000000010001FD6C) ----------------------------------------------------
__int64 __fastcall sub_10001FD6C(__int64 a1, __int64 a2)
{
  __int64 v3; // x8
  unsigned __int64 v4; // x10
  __int64 v5; // x9
  unsigned __int64 v6; // x11
  char *p_s; // x8
  char v8; // w13
  bool v9; // cf
  size_t v10; // x0
  size_t v11; // x20
  unsigned __int64 v12; // x22
  void *v13; // x0
  char __s; // [xsp+8h] [xbp-438h] BYREF
  _BYTE v16[7]; // [xsp+9h] [xbp-437h] BYREF

  __s = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)(v3 - 2) <= 0x1E )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( !v4 )
      goto LABEL_9;
    v5 = 0;
    v6 = (unsigned int)v3;
    p_s = &__s;
    do
    {
      if ( v4 % v6 <= 9 )
        v8 = (v4 % v6) | 0x30;
      else
        v8 = v4 % v6 + 55;
      *p_s++ = v8;
      --v5;
      v9 = v4 >= v6;
      v4 /= v6;
    }
    while ( v9 );
    if ( !v5 )
    {
LABEL_9:
      p_s = v16;
      __s = 48;
    }
    *p_s = 0;
    memrev(&__s, p_s - &__s);
  }
  v10 = strlen(&__s);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v10 )
  {
    v11 = v10;
    v12 = v10 + 1;
    if ( v10 == -1 )
    {
      v13 = nullptr;
    }
    else
    {
      v13 = qvector_reserve((_QWORD *)(a2 + 8), nullptr, v12, 1u);
      *(_QWORD *)(a2 + 8) = v13;
    }
    *(_QWORD *)(a2 + 16) = v12;
    memmove(v13, &__s, v11);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v11) = 0;
  }
  return 0;
}
