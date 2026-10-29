__int64 __fastcall sub_125630(__int64 a1)
{
  int encoding_qty; // r12d
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax

  encoding_qty = get_encoding_qty();
  *(_QWORD *)(a1 + 224) = 0;
  if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(encoding_qty + 1) )
  {
    v7 = qvector_reserve();
    v8 = *(_BYTE *)(a1 + 184) == 0;
    *(_QWORD *)(a1 + 216) = v7;
    if ( v8 )
      goto LABEL_3;
  }
  else if ( !*(_BYTE *)(a1 + 184) )
  {
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a1 + 224);
  v10 = *(_QWORD *)(a1 + 216);
  if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v9 + 1) )
  {
    v11 = qvector_reserve();
    *(_QWORD *)(a1 + 216) = v11;
    v10 = v11;
    v9 = *(_QWORD *)(a1 + 224);
  }
  *(_DWORD *)(v10 + 4 * v9) = 0;
  ++*(_QWORD *)(a1 + 224);
LABEL_3:
  v2 = 1;
  if ( encoding_qty > 1 )
  {
    do
    {
      while ( *(_DWORD *)(a1 + 180) && *(_DWORD *)(a1 + 180) != (unsigned int)get_encoding_bpu() )
      {
        if ( ++v2 == encoding_qty )
          return 1;
      }
      v3 = *(_QWORD *)(a1 + 224);
      v4 = *(_QWORD *)(a1 + 216);
      if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v3 + 1) )
      {
        v6 = qvector_reserve();
        *(_QWORD *)(a1 + 216) = v6;
        v4 = v6;
        v3 = *(_QWORD *)(a1 + 224);
      }
      *(_DWORD *)(v4 + 4 * v3) = v2++;
      ++*(_QWORD *)(a1 + 224);
    }
    while ( v2 != encoding_qty );
  }
  return 1;
}

