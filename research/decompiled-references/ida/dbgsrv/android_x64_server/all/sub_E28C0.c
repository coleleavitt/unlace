/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E28C0
// Address: 0x00000000000E28C0

//----- (00000000000E28C0) ----------------------------------------------------
__int64 __fastcall sub_E28C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  size_t v4; // rsi
  size_t v5; // rcx
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  size_t v8; // rsi
  _BYTE *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  _BYTE *v13; // rax
  size_t v14; // rsi
  size_t v15; // rsi
  _BYTE *v16; // rbx
  _BYTE *v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  _BYTE *v20; // rax
  size_t v21; // rsi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = v3 + 1;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( v5 >= v4 )
    {
      v8 = 2 * v4;
      if ( v8 < v5 )
        v8 = v3 + 1;
      *(_QWORD *)(a2 + 16) = v8;
      v6 = realloc(*(void **)a2, v8);
      *(_QWORD *)a2 = v6;
      v3 = *(_QWORD *)(a2 + 8);
      v5 = v3 + 1;
    }
    else
    {
      v6 = *(_BYTE **)a2;
    }
    *(_QWORD *)(a2 + 8) = v5;
    v6[v3] = 91;
    v9 = *(_BYTE **)(a1 + 16);
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 24LL))(v9, a2);
    if ( v9[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 32LL))(v9, a2);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = *(_QWORD *)(a2 + 16);
    v12 = v10 + 1;
    if ( v10 + 1 >= v11 )
    {
      v14 = 2 * v11;
      if ( v14 < v12 )
        v14 = v10 + 1;
      *(_QWORD *)(a2 + 16) = v14;
      v13 = realloc(*(void **)a2, v14);
      *(_QWORD *)a2 = v13;
      v10 = *(_QWORD *)(a2 + 8);
      v12 = v10 + 1;
    }
    else
    {
      v13 = *(_BYTE **)a2;
    }
    *(_QWORD *)(a2 + 8) = v12;
    v13[v10] = 93;
  }
  else
  {
    if ( v5 >= v4 )
    {
      v15 = 2 * v4;
      if ( v15 < v5 )
        v15 = v3 + 1;
      *(_QWORD *)(a2 + 16) = v15;
      v7 = realloc(*(void **)a2, v15);
      *(_QWORD *)a2 = v7;
      v3 = *(_QWORD *)(a2 + 8);
      v5 = v3 + 1;
    }
    else
    {
      v7 = *(_BYTE **)a2;
    }
    *(_QWORD *)(a2 + 8) = v5;
    v7[v3] = 46;
    v16 = *(_BYTE **)(a1 + 16);
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v16 + 24LL))(v16, a2);
    if ( v16[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v16 + 32LL))(v16, a2);
  }
  v17 = *(_BYTE **)(a1 + 24);
  if ( (unsigned __int8)(v17[8] - 43) >= 2u )
  {
    v18 = *(_QWORD *)(a2 + 8);
    v19 = *(_QWORD *)(a2 + 16);
    if ( v18 + 3 >= v19 )
    {
      v21 = 2 * v19;
      if ( v21 < v18 + 3 )
        v21 = v18 + 3;
      *(_QWORD *)(a2 + 16) = v21;
      v20 = realloc(*(void **)a2, v21);
      *(_QWORD *)a2 = v20;
      v18 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v20 = *(_BYTE **)a2;
    }
    v20[v18 + 2] = 32;
    *(_WORD *)&v20[v18] = 15648;
    *(_QWORD *)(a2 + 8) += 3LL;
    v17 = *(_BYTE **)(a1 + 24);
  }
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v17 + 24LL))(v17, a2);
  if ( v17[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v17 + 32LL))(v17, a2);
  return result;
}
