/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409E00
// Address: 0x0000000000409E00

//----- (0000000000409E00) ----------------------------------------------------
__int64 __fastcall sub_409E00(__int64 a1, char *s, int a3)
{
  __int64 v6; // x21
  size_t v7; // x0
  size_t v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const char *v11; // x3
  unsigned __int64 v13; // x25
  void *v14; // x0

  v6 = *(_QWORD *)(a1 + 24);
  if ( s )
  {
    v7 = strlen(s);
    v8 = v7;
    if ( v7 )
    {
      v13 = v7 + 1;
      v14 = *(void **)(v6 + 136);
      if ( v13 > *(_QWORD *)(v6 + 152) )
      {
        v14 = sub_491288(v6 + 136, *(void **)(v6 + 136), v13, 1u);
        *(_QWORD *)(v6 + 136) = v14;
      }
      *(_QWORD *)(v6 + 144) = v13;
      memmove(v14, s, v8);
      *(_BYTE *)(*(_QWORD *)(v6 + 136) + v8) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 160LL) = a3;
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v10 + 24) )
        goto LABEL_4;
LABEL_9:
      v11 = (const char *)&qword_4B2D48;
      goto LABEL_5;
    }
  }
  *(_QWORD *)(v6 + 144) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 160LL) = a3;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(v10 + 24) )
    goto LABEL_9;
LABEL_4:
  v11 = *(const char **)(v10 + 16);
LABEL_5:
  sub_45CDF8(v9, (__int64)"debuglink '%s' of '%s'\n", s, v11);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
