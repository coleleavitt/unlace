/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428F60
// Address: 0x0000000000428F60

//----- (0000000000428F60) ----------------------------------------------------
unsigned int *__fastcall sub_428F60(__int64 a1, int a2, const char *a3)
{
  __int64 v4; // rdx
  unsigned int *v5; // rbx
  unsigned int *v6; // rax
  unsigned int *v7; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 168) )
    sub_4236E0();
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(unsigned int **)(a1 + 32);
  ptr = nullptr;
  v10 = 0;
  v6 = v5;
  if ( !(v4 << 6) )
    return nullptr;
  if ( v5[1] != a2 )
    goto LABEL_4;
  if ( v5 )
  {
LABEL_8:
    if ( *(__int64 *)(a1 + 176) > 0 )
    {
      if ( *(_QWORD *)(a1 + 192) )
      {
        sub_428E80(*(_QWORD *)(a1 + 160), (__int64)&ptr, (__int64 *)(a1 + 176), *v5);
        if ( (_QWORD)v10 )
        {
          if ( !strcmp((const char *)ptr, a3) )
            goto LABEL_15;
LABEL_12:
          v6 = *(unsigned int **)(a1 + 32);
          v4 = *(_QWORD *)(a1 + 40);
LABEL_4:
          v7 = &v6[16 * v4];
          while ( 1 )
          {
            v5 += 16;
            if ( v5 == v7 )
              break;
            if ( a2 == v5[1] )
            {
              *(_QWORD *)&v10 = 0;
              goto LABEL_8;
            }
          }
          v5 = nullptr;
          goto LABEL_15;
        }
      }
    }
  }
  if ( strcmp(s1, a3) )
    goto LABEL_12;
LABEL_15:
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    j__free(ptr);
  }
  return v5;
}
