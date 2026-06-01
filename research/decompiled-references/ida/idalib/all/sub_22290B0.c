void __fastcall sub_22290B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v4; // rbx
  const char **v5; // rbp
  const char *v6; // rbp
  size_t v7; // rax
  void *v8; // rdi
  size_t v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = -1;
  v5 = *(const char ***)(a1 + 8);
  if ( a4 && !(unsigned __int8)sub_2247970(a3, a4, 10, v9) )
    v4 = v9[0];
  v6 = *v5;
  if ( v6 )
  {
    v7 = strlen(v6);
    v8 = *(void **)(a2 + 32);
    if ( v4 > v7 )
      v4 = v7;
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v8 >= v4 )
    {
      if ( v4 )
      {
        memcpy(v8, v6, v4);
        *(_QWORD *)(a2 + 32) += v4;
      }
    }
    else
    {
      sub_227BF10(a2, v6, v4);
    }
  }
}
