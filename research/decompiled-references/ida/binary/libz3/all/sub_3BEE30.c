__int64 __fastcall sub_3BEE30(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  char *v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  char *v9; // rbp
  __int64 v10; // rdi

  result = sub_2334C0((__int64 *)(a1 + 104));
  v3 = *(void **)(a1 + 80);
  if ( v3 )
    result = sub_186B220(v3);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = *(char **)(a1 + 32);
  if ( v6 )
  {
    v7 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v7 )
    {
      v8 = *(_QWORD *)(a1 + 32);
      v9 = &v6[16 * v7];
      do
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v8 + 8);
          if ( !v10 )
            break;
          v8 += 16;
          sub_186B220((void *)(v10 - 8));
          if ( v9 == (char *)v8 )
            return sub_186B220(v6);
        }
        v8 += 16;
      }
      while ( v9 != (char *)v8 );
    }
    return sub_186B220(v6);
  }
  return result;
}

