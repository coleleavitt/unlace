__int64 __fastcall sub_19F6B30(__int64 a1, __int64 a2, void *a3, size_t a4)
{
  float *v5; // rbp
  size_t v7; // rsi
  char *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // rdx
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  char v19; // al
  unsigned __int64 v20; // [rsp+8h] [rbp-40h] BYREF
  void *s1; // [rsp+10h] [rbp-38h] BYREF
  size_t v22; // [rsp+18h] [rbp-30h]

  v5 = *(float **)(a1 + 8);
  v22 = a4;
  s1 = a3;
  if ( a4 && *(_BYTE *)s1 == 80 )
  {
    v7 = a4 - 1;
    v8 = (char *)s1 + 1;
    s1 = (char *)s1 + 1;
    v22 = a4 - 1;
LABEL_4:
    v9 = 3;
    goto LABEL_5;
  }
  v13 = j__strlen("p");
  v14 = v13;
  if ( v13 <= a4 && (!v13 || !memcmp(s1, "p", v13)) )
  {
    v8 = (char *)s1 + v14;
    v7 = a4 - v14;
    s1 = (char *)s1 + v14;
    v22 = a4 - v14;
    goto LABEL_4;
  }
  v15 = j__strlen("F");
  if ( (unsigned __int8)sub_11899B0((const void **)&s1, "F", v15)
    || (v16 = j__strlen("f"), (unsigned __int8)sub_11899B0((const void **)&s1, "f", v16)) )
  {
    v7 = v22;
    v8 = (char *)s1;
    v9 = 2;
  }
  else
  {
    v17 = j__strlen("E");
    if ( (unsigned __int8)sub_11899B0((const void **)&s1, "E", v17) )
    {
      v7 = v22;
      v8 = (char *)s1;
      v9 = 1;
    }
    else
    {
      v9 = 0;
      v18 = j__strlen("e");
      v19 = sub_11899B0((const void **)&s1, "e", v18);
      v7 = v22;
      v8 = (char *)s1;
      if ( !v19 )
        v9 = 2;
    }
  }
LABEL_5:
  if ( !v7 || (unsigned __int8)sub_2247970(v8, v7, 10, &v20) )
  {
    v10 = 0;
    v11 = sub_2233410(v9);
  }
  else
  {
    v11 = v20;
    v10 = 1;
    if ( v20 >= 0x63 )
      v11 = 99;
  }
  LOBYTE(v10) = 1;
  return sub_2232F80(a2, v9, v11, v10, *v5);
}
