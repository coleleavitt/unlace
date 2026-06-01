/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051AF0
// Address: 0x0000000140051AF0

//----- (0000000140051AF0) ----------------------------------------------------
__int64 __fastcall sub_140051AF0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char *v6; // rax
  char *v7; // rsi
  __int64 v9; // rdx
  int v10; // ebp
  char *v11; // rcx
  char *v12; // rbx
  size_t v14; // rax
  char *Str; // [rsp+20h] [rbp-18h] BYREF
  char *v16; // [rsp+28h] [rbp-10h]

  v6 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                 a1,
                 *(unsigned __int8 *)(*(_QWORD *)a2 + 4LL),
                 a2);
  v7 = v6;
  if ( !v6 )
    return a3;
  v9 = *(unsigned int *)v6;
  Str = v6 + 5;
  v16 = &v6[v9 + 5];
  v10 = sub_14005B690((unsigned __int64 *)&Str, (unsigned __int64)v16);
  if ( v10 < 0 && a4 )
  {
    v11 = Str;
    v12 = Str;
    while ( v11 < v16 )
    {
      if ( !*v11++ )
      {
        Str = v11;
        if ( v12 )
        {
          v14 = strlen(v12);
          if ( v14 )
          {
            sub_140001810(a4, v12, v14);
            goto LABEL_12;
          }
        }
        break;
      }
    }
    *(_QWORD *)(a4 + 8) = 0;
  }
LABEL_12:
  j_free(v7);
  return (unsigned int)v10;
}
