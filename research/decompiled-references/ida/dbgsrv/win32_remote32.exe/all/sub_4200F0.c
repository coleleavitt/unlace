/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4200F0
// Address: 0x004200F0

//----- (004200F0) --------------------------------------------------------
void __cdecl sub_4200F0(int *a1, int a2)
{
  bool v2; // cf
  const CHAR *v3; // edi
  const CHAR *v4; // ecx
  const char *v5; // eax
  int *v6; // eax
  const char *v7; // eax
  int v8; // ecx
  int v9; // eax
  LPVOID v10; // eax
  int *v11; // edi
  const char *v12; // eax
  unsigned int v13; // edi
  int v14; // ecx
  int *v15; // edx
  LPVOID v16; // eax
  int v17; // edi
  int v18; // ecx
  void *v19; // [esp-Ch] [ebp-ACh]
  unsigned int v20; // [esp-8h] [ebp-A8h]
  double v21; // [esp-4h] [ebp-A4h]
  _BYTE v22[8]; // [esp+Ch] [ebp-94h] BYREF
  __int128 v23; // [esp+14h] [ebp-8Ch]
  _BYTE v24[8]; // [esp+24h] [ebp-7Ch] BYREF
  __int128 v25; // [esp+2Ch] [ebp-74h]
  _BYTE v26[8]; // [esp+3Ch] [ebp-64h] BYREF
  __int128 v27; // [esp+44h] [ebp-5Ch]
  _BYTE v28[8]; // [esp+54h] [ebp-4Ch] BYREF
  __int128 v29; // [esp+5Ch] [ebp-44h]
  _BYTE v30[8]; // [esp+6Ch] [ebp-34h] BYREF
  __int128 v31; // [esp+74h] [ebp-2Ch]
  int v32; // [esp+84h] [ebp-1Ch]
  const CHAR *v33; // [esp+88h] [ebp-18h]
  const CHAR *v34; // [esp+8Ch] [ebp-14h]
  int *v35; // [esp+90h] [ebp-10h]
  int v36; // [esp+9Ch] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 8) < 0xEu;
  v3 = (const CHAR *)(a2 + 8);
  v33 = (const CHAR *)(a2 + 8);
  if ( v2 )
    *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, 0xEu, 1u);
  v34 = (const CHAR *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 14;
  v19 = *(void **)a2;
  v35 = (int *)(a2 + 4);
  sub_464310((unsigned int)v19, (unsigned int)"Runtime error", 0xDu);
  *(_BYTE *)(*(_DWORD *)a2 + 13) = 0;
  v27 = 0;
  v26[0] = 2;
  LODWORD(v27) = 0;
  v25 = 0;
  v36 = 1;
  v24[0] = 2;
  LODWORD(v25) = 0;
  sub_423CF0((__m128i)0LL, (__int128 *)v24, a1, "line", 0);
  sub_423CF0((__m128i)0LL, (__int128 *)v26, a1, "file", 0);
  if ( v24[0] == 2 && (v3 = v34, v33 = v34, (int)v25 > 0) && (v33 = v34, v26[0] == 7) )
  {
    v4 = MultiByteStr;
    if ( DWORD1(v27) )
      v4 = (const CHAR *)v27;
    v5 = "<unknown>";
    if ( *v4 )
      v5 = v4;
    sub_41F840((__m128i)0LL, a2, " on %s:%d", v5, (_DWORD)v25);
    v6 = (int *)(a2 + 4);
    v3 = (const CHAR *)(a2 + 8);
    v35 = (int *)(a2 + 4);
    v33 = (const CHAR *)(a2 + 8);
  }
  else
  {
    v30[0] = 2;
    v31 = 0;
    LODWORD(v31) = 0;
    LOBYTE(v36) = 2;
    sub_423CF0((__m128i)0LL, (__int128 *)v30, a1, "func", 0);
    if ( v30[0] == 7 )
    {
      v35 = (int *)(a2 + 4);
      if ( DWORD1(v31) > 1 )
      {
        v22[0] = 2;
        v23 = 0;
        LODWORD(v23) = 0;
        LOBYTE(v36) = 3;
        sub_423CF0((__m128i)0LL, (__int128 *)v22, a1, (const char *)&dword_489A54, 0);
        v7 = MultiByteStr;
        LODWORD(v21) = v23;
        if ( DWORD1(v31) )
          v7 = (const char *)v31;
        sub_41F840((__m128i)0LL, a2, " at %s+0x%a", v7, v21);
        LOBYTE(v36) = 4;
        sub_423B70((int)v22);
        v35 = (int *)(a2 + 4);
      }
    }
    LOBYTE(v36) = 5;
    sub_423B70((int)v30);
    v6 = v35;
    LOBYTE(v36) = 1;
  }
  v8 = *v6 != 0 ? *v6 - 1 : 0;
  v34 = (const CHAR *)v8;
  v9 = v8 + 3;
  v32 = v8 + 3;
  if ( (unsigned int)(v8 + 3) > *(_DWORD *)v3 )
  {
    v10 = sub_453B00(a2, *(void **)a2, v8 + 3, 1u);
    v8 = (int)v34;
    *(_DWORD *)a2 = v10;
    v9 = v32;
  }
  v11 = v35;
  *v35 = v9;
  strcpy((char *)(v8 + *(_DWORD *)a2), ": ");
  v29 = 0;
  v28[0] = 2;
  LODWORD(v29) = 0;
  LOBYTE(v36) = 6;
  sub_423CF0((__m128i)0LL, (__int128 *)v28, a1, "description", 0);
  if ( v28[0] == 7 )
  {
    if ( DWORD1(v29) )
    {
      v12 = (const char *)v29;
      v34 = (const CHAR *)v29;
      if ( !(_DWORD)v29 )
        goto LABEL_29;
    }
    else
    {
      v12 = MultiByteStr;
      v34 = MultiByteStr;
    }
    v13 = strlen(v12);
    v14 = *v35 != 0 ? *v35 - 1 : 0;
    v32 = v14;
    v15 = (int *)(v13 + v14 + 1);
    v35 = v15;
    if ( (unsigned int)v15 > *(_DWORD *)v33 )
    {
      v16 = sub_453B00(a2, *(void **)a2, v13 + v14 + 1, 1u);
      v14 = v32;
      v15 = v35;
      *(_DWORD *)a2 = v16;
    }
    *(_DWORD *)(a2 + 4) = v15;
    v20 = (unsigned int)v34;
    *(_BYTE *)(v14 + v13 + *(_DWORD *)a2) = 0;
    sub_464310(v14 + *(_DWORD *)a2, v20, v13);
  }
  else
  {
    v17 = *v11 != 0 ? *v11 - 1 : 0;
    v18 = v17 + 20;
    if ( (unsigned int)(v17 + 20) > *(_DWORD *)v33 )
    {
      *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v17 + 20, 1u);
      v18 = v17 + 20;
    }
    *v35 = v18;
    *(_BYTE *)(v17 + *(_DWORD *)a2 + 19) = 0;
    sub_464310(v17 + *(_DWORD *)a2, (unsigned int)"Unhandled exception", 0x13u);
  }
LABEL_29:
  LOBYTE(v36) = 7;
  sub_423B70((int)v28);
  LOBYTE(v36) = 8;
  sub_423B70((int)v24);
  v36 = 9;
  sub_423B70((int)v26);
}
// 420298: variable 'v21' is possibly undefined
// 489A54: using guessed type int dword_489A54;
