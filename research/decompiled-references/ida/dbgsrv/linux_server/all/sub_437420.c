/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437420
// Address: 0x0000000000437420

//----- (0000000000437420) ----------------------------------------------------
void *__fastcall sub_437420(char **a1, const void *a2, size_t a3)
{
  unsigned __int64 v4; // r12
  char *v5; // rdi
  unsigned __int64 v7; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // rax
  char *v14; // rax
  char v15; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v4 = (unsigned __int64)a1[1];
  v5 = *a1;
  v16 = __readfsqword(0x28u);
  v15 = 0;
  v7 = a3 + v4;
  if ( __CFADD__(a3, v4) )
  {
LABEL_7:
    a1[1] = (char *)v7;
    return memcpy(&v5[v4], a2, a3);
  }
  if ( v4 < v7 )
  {
    v9 = (unsigned __int64)a1[2];
    if ( &v15 < v5 || &v15 >= &v5[v9] )
    {
      v10 = v4;
      if ( v9 >= v7
        || (v13 = (char *)sub_481540((__int64)a1, v5, v7, 1u),
            *a1 = v13,
            v5 = v13,
            v10 = (unsigned __int64)a1[1],
            v10 < v7) )
      {
        do
        {
          v5[v10++] = 0;
          v5 = *a1;
        }
        while ( v7 != v10 );
      }
    }
    else
    {
      v11 = v4;
      if ( v9 >= v7
        || (v14 = (char *)sub_481540((__int64)a1, v5, v7, 1u),
            *a1 = v14,
            v5 = v14,
            v11 = (unsigned __int64)a1[1],
            v11 < v7) )
      {
        do
        {
          v5[v11] = 0;
          v12 = v11 + 1;
          v5 = *a1;
          if ( v7 == v12 )
            break;
          v5[v12] = 0;
          v11 = v12 + 1;
          v5 = *a1;
        }
        while ( v7 != v11 );
      }
    }
    goto LABEL_7;
  }
  return memcpy(&v5[v4], a2, a3);
}
