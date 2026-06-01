/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E380
// Address: 0x000000000043E380

//----- (000000000043E380) ----------------------------------------------------
__int64 __fastcall sub_43E380(__int64 a1, const char *a2)
{
  __int64 result; // x0
  __int64 v5; // x0
  char *v6; // x24
  char *v7; // x0
  __int64 v8; // x22
  char *v9; // x21
  size_t v10; // x0
  size_t v11; // x23
  unsigned __int64 v12; // x25
  void *v13; // x0

  if ( !a2 )
    return 0;
  result = sub_43E0D8(a1, a2);
  if ( !result )
  {
    v5 = *(_QWORD *)(a1 + 96);
    v6 = *(char **)(a1 + 88);
    if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(a1 + 104) )
    {
      v7 = (char *)sub_491288(a1 + 88, *(void **)(a1 + 88), v5 + 1, 0x38u);
      *(_QWORD *)(a1 + 88) = v7;
      v6 = v7;
      v5 = *(_QWORD *)(a1 + 96);
    }
    v8 = 56 * v5;
    v9 = &v6[v8];
    *(_QWORD *)&v6[v8] = 0;
    *((_QWORD *)v9 + 1) = 0;
    *((_QWORD *)v9 + 2) = 0;
    v9[24] = 2;
    *((_QWORD *)v9 + 5) = 0;
    *((_QWORD *)v9 + 6) = 0;
    *(_QWORD *)&v6[v8 + 32] = 0;
    ++*(_QWORD *)(a1 + 96);
    v10 = strlen(a2);
    v11 = v10;
    if ( v10 )
    {
      v12 = v10 + 1;
      v13 = *(void **)&v6[v8];
      if ( v12 > *((_QWORD *)v9 + 2) )
      {
        v13 = sub_491288((__int64)&v6[v8], *(void **)&v6[v8], v12, 1u);
        *(_QWORD *)v9 = v13;
      }
      *((_QWORD *)v9 + 1) = v12;
      memmove(v13, a2, v11);
      *(_BYTE *)(*(_QWORD *)v9 + v11) = 0;
    }
    else
    {
      *((_QWORD *)v9 + 1) = 0;
    }
    return (__int64)&v6[v8 + 24];
  }
  return result;
}
