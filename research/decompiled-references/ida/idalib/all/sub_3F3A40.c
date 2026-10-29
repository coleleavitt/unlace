__int64 *__fastcall sub_3F3A40(__int64 *a1)
{
  unsigned int v2; // eax
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // rbp
  void *v6; // rax
  unsigned __int64 v7; // rax
  _BYTE *v8; // rdi
  _BYTE *v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v16; // [rsp+408h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v2 = sub_38EDA0();
  qctime(v15, 1024, v2);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v3 = strlen(v15);
  v4 = v3 + 1;
  v5 = v3;
  v6 = (void *)qvector_reserve(a1, 0, v3 + 1, 1);
  *a1 = (__int64)v6;
  a1[1] = v4;
  memmove(v6, v15, v5);
  *(_BYTE *)(*a1 + v5) = 0;
  v7 = a1[1];
  if ( v7 > 1 )
  {
    v8 = (_BYTE *)*a1;
    v9 = (_BYTE *)(*a1 + v7 - 1);
    if ( *a1 < (unsigned __int64)v9 )
    {
      while ( *(v9 - 1) == 10 )
      {
        if ( v8 == --v9 )
          goto LABEL_12;
      }
    }
    v10 = v9 - v8;
    if ( v9 == v8 )
    {
LABEL_12:
      if ( v8 )
      {
        a1[1] = 0;
        qfree(v8);
        *a1 = 0;
        a1[2] = 0;
      }
    }
    else
    {
      v11 = v10 + 1;
      if ( v7 < v10 + 1 )
      {
        if ( a1[2] < v11 )
        {
          v14 = qvector_reserve(a1, *a1, v10 + 1, 1);
          *a1 = v14;
          v8 = (_BYTE *)v14;
          v7 = a1[1];
        }
        memset(&v8[v7], 0, v11 - v7);
        v13 = *a1;
        a1[1] = v11;
        v9 = (_BYTE *)(v10 + v13);
      }
      else if ( v7 != v10 + 1 )
      {
        a1[1] = v11;
      }
      *v9 = 0;
    }
  }
  return a1;
}
