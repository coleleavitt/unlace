__int64 __fastcall sub_6F70(__int64 *a1, __int64 a2)
{
  size_t v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // r12
  size_t v8; // rbx
  size_t v9; // r15
  __int64 v10; // rax
  __int64 result; // rax

  v3 = strlen((const char *)(a2 + 1));
  v4 = v3;
  if ( v3 > 1 || (result = 0, *(_BYTE *)(a2 + v3) == 59) )
  {
    if ( !a1 )
      return 1;
    v5 = *a1;
    if ( *a1 )
    {
      a1[1] = 0;
      qfree(v5);
      *a1 = 0;
      v6 = 0;
      a1[2] = 0;
    }
    else
    {
      v6 = a1[2];
    }
    v7 = a1[1];
    v8 = v3 - 1;
    v9 = v8;
    if ( v7 )
    {
      --v7;
      v10 = 0;
      v9 = v8 + v7;
      v4 = v8 + v7 + 1;
      if ( v6 >= v4 )
        goto LABEL_7;
    }
    else
    {
      v10 = 0;
      if ( v6 >= v4 )
      {
LABEL_7:
        a1[1] = v4;
        *(_BYTE *)(v10 + v9) = 0;
        memmove((void *)(v7 + *a1), (const void *)(a2 + 1), v8);
        sub_6C90((__int64)a1, "/", ".");
        return 1;
      }
    }
    v10 = qvector_reserve(a1, 0, v4, 1);
    *a1 = v10;
    goto LABEL_7;
  }
  return result;
}
