__int64 __fastcall sub_1FF1850(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  char v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // r11
  void *v12; // rdi
  _QWORD *v13; // rdi
  void **v15; // r14
  void **v16; // r13
  void *v17; // rax
  void **v18; // rbp
  __int64 v19; // rax
  void **v20; // r13
  void **v21; // rbp
  __int64 v22; // [rsp+0h] [rbp-A0h]
  __int64 v23; // [rsp+8h] [rbp-98h]
  __int64 v24; // [rsp+10h] [rbp-90h]
  _QWORD v25[2]; // [rsp+18h] [rbp-88h] BYREF
  void *v26[2]; // [rsp+28h] [rbp-78h] BYREF
  __int64 v27; // [rsp+38h] [rbp-68h]
  __m128i *v28[2]; // [rsp+48h] [rbp-58h] BYREF
  void (__fastcall *v29)(__m128i **, __m128i **, __int64); // [rsp+58h] [rbp-48h]
  void (__fastcall *v30)(void **, __m128i **, __int64, _QWORD *); // [rsp+60h] [rbp-40h]

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v5 = *a3;
  v22 = (a3[1] - v5) >> 5;
  if ( !v22 )
    goto LABEL_35;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = 32 * v7 + v5;
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_QWORD *)v8;
    if ( v9 <= 0xA )
    {
      if ( v9 == 2 )
      {
        if ( *(_WORD *)v10 == 25389 )
          goto LABEL_14;
        if ( *(_WORD *)v10 == 21293 )
        {
          v11 = *(_QWORD *)(a1 + 8);
          if ( v11 == *(_QWORD *)a1 )
            goto LABEL_20;
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( *(_QWORD *)v10 == 0x65742D657661732DLL && *(_WORD *)(v10 + 8) == 28781 && *(_BYTE *)(v10 + 10) == 115 )
        goto LABEL_20;
      if ( v9 != 11 )
      {
        if ( *(_QWORD *)v10 == 0x742D657661732D2DLL && *(_DWORD *)(v10 + 8) == 1936747877 )
          goto LABEL_20;
        if ( v9 > 0x12
          && (!(*(_QWORD *)v10 ^ 0x2D726F6C6F63662DLL | *(_QWORD *)(v10 + 8) ^ 0x74736F6E67616964LL)
           && *(_WORD *)(v10 + 16) == 25449
           && *(_BYTE *)(v10 + 18) == 115
           || !(*(_QWORD *)v10 ^ 0x6F6E67616964662DLL | *(_QWORD *)(v10 + 8) ^ 0x6F632D7363697473LL)
           && *(_WORD *)(v10 + 16) == 28524
           && *(_BYTE *)(v10 + 18) == 114) )
        {
LABEL_14:
          v11 = *(_QWORD *)(a1 + 8);
          if ( v11 == *(_QWORD *)a1 )
            goto LABEL_20;
LABEL_15:
          v24 = v11;
          v23 = v11 - 32;
          if ( !sub_9B4AA0(v11 - 32, "-Xclang") )
          {
            *(_QWORD *)(a1 + 8) = v23;
            v12 = *(void **)(v24 - 32);
            if ( v12 != (void *)(v23 + 16) )
              operator delete(v12);
          }
          goto LABEL_18;
        }
      }
    }
    v13 = *(_QWORD **)(a1 + 8);
    if ( v13 == *(_QWORD **)(a1 + 16) )
    {
      sub_10BCB90((void ***)a1, *(const __m128i **)(a1 + 8), v8);
    }
    else
    {
      *v13 = v13 + 2;
      sub_1FF0D10(v13, *(_BYTE **)v8, *(_QWORD *)v8 + *(_QWORD *)(v8 + 8));
      *(_QWORD *)(a1 + 8) += 32LL;
    }
LABEL_18:
    if ( v9 == 13
      && *(_QWORD *)v10 == 0x7861746E7973662DLL
      && *(_DWORD *)(v10 + 8) == 1819176749
      && *(_BYTE *)(v10 + 12) == 121 )
    {
      v6 = 1;
    }
LABEL_20:
    if ( v22 == ++v7 )
      break;
    v5 = *a3;
  }
  if ( v6 )
    return a1;
LABEL_35:
  sub_1FF1160(v28, "-fsyntax-only", 1);
  v25[1] = 0;
  v25[0] = &byte_22F0C30;
  if ( !v29 )
    std::__throw_bad_function_call();
  v30(v26, v28, a1, v25);
  v15 = *(void ***)a1;
  v16 = *(void ***)(a1 + 8);
  *(void **)a1 = v26[0];
  v17 = v26[1];
  v18 = v15;
  *(_OWORD *)v26 = 0;
  *(_QWORD *)(a1 + 8) = v17;
  v19 = v27;
  v27 = 0;
  *(_QWORD *)(a1 + 16) = v19;
  if ( v15 == v16 )
  {
LABEL_39:
    if ( v15 )
      goto LABEL_40;
  }
  else
  {
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 += 4;
        if ( v16 == v18 )
          goto LABEL_39;
      }
      v18 += 4;
    }
    while ( v16 != v18 );
    if ( !v15 )
      goto LABEL_41;
LABEL_40:
    operator delete(v15);
  }
LABEL_41:
  v20 = (void **)v26[1];
  v21 = (void **)v26[0];
  if ( v26[1] != v26[0] )
  {
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 4;
        if ( v21 == v20 )
          goto LABEL_44;
      }
      v21 += 4;
    }
    while ( v20 != v21 );
LABEL_44:
    v21 = (void **)v26[0];
  }
  if ( v21 )
    operator delete(v21);
  if ( v29 )
    v29(v28, v28, 3);
  return a1;
}
