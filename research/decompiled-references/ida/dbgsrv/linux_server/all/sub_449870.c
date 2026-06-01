/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449870
// Address: 0x0000000000449870

//----- (0000000000449870) ----------------------------------------------------
char **__fastcall sub_449870(__int64 a1, char ***a2, unsigned __int8 a3, int a4)
{
  char **result; // rax
  char *v6; // r12
  unsigned int v7; // r13d
  char v8; // bp
  char **v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  char **v12; // rsi
  char **v13; // rax
  unsigned __int64 v14; // [rsp+0h] [rbp-48h]
  __int64 v15; // [rsp+8h] [rbp-40h]

  result = (char **)(*(_QWORD *)(a1 + 56) + 56LL * a4);
  if ( a3 < (unsigned __int64)result[1] )
  {
    result = (char **)&(*result)[24 * a3];
    if ( result[1] )
    {
      v6 = *result;
      v7 = a4 - 1;
LABEL_4:
      v8 = *v6;
      if ( !*v6 )
        return result;
      do
      {
        ++v6;
        if ( (unsigned __int8)(v8 + 0x80) <= 0x7Eu )
        {
          result = (char **)sub_449870(a1, a2, (unsigned __int8)(v8 + 0x80), v7);
          goto LABEL_4;
        }
        v9 = a2[1];
        if ( v9 )
        {
          v10 = (unsigned __int64)v9 + 1;
          v11 = (__int64)a2[1];
          v12 = *a2;
          v9 = (char **)((char *)v9 - 1);
          if ( (unsigned __int64)a2[2] < v10 )
            goto LABEL_12;
        }
        else
        {
          v12 = *a2;
          v11 = 1;
          v10 = 2;
          if ( (unsigned __int64)a2[2] < 2 )
          {
LABEL_12:
            v15 = v11;
            v14 = v10;
            v13 = (char **)sub_481540((__int64)a2, v12, v10, 1u);
            v11 = v15;
            v10 = v14;
            *a2 = v13;
            v12 = v13;
          }
        }
        a2[1] = (char **)v10;
        *((_BYTE *)v9 + (_QWORD)v12) = v8;
        result = *a2;
        *((_BYTE *)*a2 + v11) = 0;
        v8 = *v6;
      }
      while ( *v6 );
    }
  }
  return result;
}
