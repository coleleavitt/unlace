__int64 __fastcall enc_chooser_t__::vfunc_4(__int64 a1)
{
  int encoding_qty; // r12d
  unsigned __int64 v2; // rdx
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax

  encoding_qty = get_encoding_qty();
  v2 = encoding_qty + 1;
  *(_QWORD *)(a1 + 224) = 0;
  if ( *(_QWORD *)(a1 + 232) < v2 )
  {
    v8 = qvector_reserve(a1 + 216, *(_QWORD *)(a1 + 216), v2, 4);
    v9 = *(_BYTE *)(a1 + 184) == 0;
    *(_QWORD *)(a1 + 216) = v8;
    if ( v9 )
      goto LABEL_3;
  }
  else if ( !*(_BYTE *)(a1 + 184) )
  {
    goto LABEL_3;
  }
  v10 = *(_QWORD *)(a1 + 224);
  v11 = *(_QWORD *)(a1 + 216);
  if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v10 + 1) )
  {
    v12 = qvector_reserve(a1 + 216, v11, v10 + 1, 4);
    *(_QWORD *)(a1 + 216) = v12;
    v11 = v12;
    v10 = *(_QWORD *)(a1 + 224);
  }
  *(_DWORD *)(v11 + 4 * v10) = 0;
  ++*(_QWORD *)(a1 + 224);
LABEL_3:
  v3 = 1;
  if ( encoding_qty > 1 )
  {
    do
    {
      while ( *(_DWORD *)(a1 + 180) && *(_DWORD *)(a1 + 180) != (unsigned int)get_encoding_bpu(v3) )
      {
        if ( ++v3 == encoding_qty )
          return 1;
      }
      v4 = *(_QWORD *)(a1 + 224);
      v5 = *(_QWORD *)(a1 + 216);
      if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v4 + 1) )
      {
        v7 = qvector_reserve(a1 + 216, v5, v4 + 1, 4);
        *(_QWORD *)(a1 + 216) = v7;
        v5 = v7;
        v4 = *(_QWORD *)(a1 + 224);
      }
      *(_DWORD *)(v5 + 4 * v4) = v3++;
      ++*(_QWORD *)(a1 + 224);
    }
    while ( v3 != encoding_qty );
  }
  return 1;
}
