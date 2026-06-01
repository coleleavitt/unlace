__int64 __fastcall sub_765CD0(__int64 a1, const char *a2)
{
  __int64 *v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  char v6; // bp
  __int64 *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *(int *)&word_2C5264C <= 0 )
    return 1611;
  v2 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -44;
  v4 = v2[1];
  v5 = *v2;
  if ( v2[2] < (unsigned __int64)(v4 + 1) )
  {
    v11 = qvector_reserve(v2, v5, v4 + 1, 1);
    *v2 = v11;
    v5 = v11;
    v4 = v2[1];
  }
  *(_BYTE *)(v5 + v4) = -44;
  ++v2[1];
  ++*(_DWORD *)(a1 + 200);
  sub_765200(a1, a2, 0);
  v6 = word_2C5264C;
  if ( (unsigned __int16)word_2C5264C <= 0xFu )
  {
    v8 = *(__int64 **)(a1 + 192);
    *(_BYTE *)(a1 + 204) = word_2C5264C;
    v9 = v8[1];
    v10 = *v8;
    if ( v8[2] < (unsigned __int64)(v9 + 1) )
    {
      v12 = qvector_reserve(v8, v10, v9 + 1, 1);
      *v8 = v12;
      v10 = v12;
      v9 = v8[1];
    }
    *(_BYTE *)(v10 + v9) = v6;
    ++v8[1];
    ++*(_DWORD *)(a1 + 200);
  }
  else
  {
    sub_764420(a1, 0, word_2C5264C);
  }
  return 0;
}

