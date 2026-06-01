unsigned __int64 __fastcall sub_8ACB40(__int64 a1, char a2)
{
  __int64 v2; // rbp
  unsigned int *v3; // rcx
  unsigned int *v5; // rbp
  unsigned int *v7; // r14
  const char *v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rbp
  __int64 i; // rbx
  unsigned int *v12; // rax
  void *v13; // rdi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int **)a1;
  v16 = __readfsqword(0x28u);
  v5 = &v3[8 * v2];
  if ( v5 != v3 )
  {
    v7 = v3;
    v9 = *v3;
    if ( !a2 || v9 != 10 )
    {
LABEL_3:
      v8 = haystack;
      if ( *((_QWORD *)v7 + 2) )
        v8 = *((const char **)v7 + 1);
      sub_813110((char **)&ptr, v9, (__int64)v8);
      sub_368890();
    }
    while ( 1 )
    {
      v7 += 8;
      if ( v5 == v7 )
        break;
      v9 = *v7;
      if ( *v7 != 10 )
        goto LABEL_3;
    }
    v3 = *(unsigned int **)a1;
  }
  if ( v3 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v12 = &v3[8 * i];
        v13 = *((void **)v12 + 1);
        if ( v13 )
        {
          *((_QWORD *)v12 + 2) = 0;
          qfree(v13);
          v3 = *(unsigned int **)a1;
        }
      }
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return v16 - __readfsqword(0x28u);
}
