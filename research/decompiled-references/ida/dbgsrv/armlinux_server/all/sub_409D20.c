/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409D20
// Address: 0x0000000000409D20

//----- (0000000000409D20) ----------------------------------------------------
__int64 __fastcall sub_409D20(__int64 a1, char *s)
{
  __int64 v4; // x21
  size_t v5; // x0
  size_t v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  const char *v9; // x3
  unsigned __int64 v11; // x24
  void *v12; // x0

  v4 = *(_QWORD *)(a1 + 24);
  if ( s )
  {
    v5 = strlen(s);
    v6 = v5;
    if ( v5 )
    {
      v11 = v5 + 1;
      v12 = *(void **)(v4 + 112);
      if ( v11 > *(_QWORD *)(v4 + 128) )
      {
        v12 = sub_491288(v4 + 112, *(void **)(v4 + 112), v11, 1u);
        *(_QWORD *)(v4 + 112) = v12;
      }
      *(_QWORD *)(v4 + 120) = v11;
      memmove(v12, s, v6);
      *(_BYTE *)(*(_QWORD *)(v4 + 112) + v6) = 0;
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v8 + 24) )
        goto LABEL_4;
LABEL_9:
      v9 = (const char *)&qword_4B2D48;
      goto LABEL_5;
    }
  }
  *(_QWORD *)(v4 + 120) = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(v8 + 24) )
    goto LABEL_9;
LABEL_4:
  v9 = *(const char **)(v8 + 16);
LABEL_5:
  sub_45CDF8(v7, (__int64)"Build ID '%s' of '%s'\n", s, v9);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
