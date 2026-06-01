/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428D70
// Address: 0x00428D70

//----- (00428D70) --------------------------------------------------------
char __userpurge sub_428D70@<al>(__m128i a1@<xmm0>, int a2, int a3, char *a4, int a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // esi
  int v6; // edi
  char result; // al
  int (__stdcall *v8)(int, int, char *, int); // eax
  _DWORD v9[6]; // [esp+10h] [ebp-18h] BYREF

  v5 = dword_4B6BD4;
  sub_4562D0(dword_4B6BD4);
  if ( dword_4B6BE4 >= (unsigned int)dword_4B6BDC )
  {
    v6 = 0;
  }
  else
  {
    v6 = *(_DWORD *)(dword_4B6BD8 + 4 * dword_4B6BE4);
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
  }
  sub_4562F0(v5);
  v9[2] = v6;
  v9[5] = 1;
  if ( v6 )
  {
    v8 = *(int (__stdcall **)(int, int, char *, int))(v6 + 36);
    if ( v8 )
    {
      result = v8(a2, a3, a4, a5);
      goto LABEL_18;
    }
    if ( a5 )
      sub_402970(
        a1,
        (LPVOID *)a5,
        "the '%s' extlang des not implement the 'eval_expr' callback",
        *(const char **)(v6 + 12));
    result = 0;
  }
  else
  {
    if ( *(_DWORD *)(a5 + 8) < 0x16u )
      *(_DWORD *)a5 = sub_453B00(a5, *(void **)a5, 0x16u, 1u);
    *(_DWORD *)(a5 + 4) = 22;
    sub_464310(*(_DWORD *)a5, (unsigned int)"no extlang registered", 0x15u);
    *(_BYTE *)(*(_DWORD *)a5 + 21) = 0;
    if ( a2 )
    {
      sub_423B70(a2);
      *(_BYTE *)a2 = 2;
      *(_DWORD *)(a2 + 8) = 0;
    }
    v9[1] = a3;
    v9[0] = &off_48BE8C;
    result = sub_428B60(a1, (char *)a2, a4, a5, (int)v9);
  }
  if ( v6 )
LABEL_18:
    --*(_DWORD *)(v6 + 8);
  return result;
}
// 48BE8C: using guessed type _UNKNOWN *off_48BE8C;
// 4B6BD8: using guessed type int dword_4B6BD8;
// 4B6BDC: using guessed type int dword_4B6BDC;
// 4B6BE4: using guessed type int dword_4B6BE4;
