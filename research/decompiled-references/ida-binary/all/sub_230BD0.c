unsigned __int64 __fastcall sub_230BD0(__int64 a1, char **a2)
{
  const char *v4; // rsi
  size_t v5; // r12
  char *v6; // rbp
  void *v7; // rdi
  const char *v9; // r13
  size_t v10; // rax
  size_t v11; // r12
  __int64 v12; // rax
  const char *v13; // rax
  const char *v14; // rbp
  size_t v15; // rax
  size_t v16; // r12
  void *v17; // rdi
  size_t v18; // r14
  void *v19; // rdi
  char *v20; // r13
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-58h] BYREF
  void *src; // [rsp+8h] [rbp-50h] BYREF
  __int128 v24; // [rsp+10h] [rbp-48h]
  int v25; // [rsp+20h] [rbp-38h]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v4 = &byte_6;
  v24 = 0;
  v22 = 0x800000028LL;
  src = nullptr;
  v25 = -1;
  if ( (unsigned int)sub_20CEA0(a1, 6, &v22) )
  {
    v5 = v24;
  }
  else
  {
    v9 = *(const char **)(a1 + 8);
    if ( !v9 || (v10 = strlen(*(const char **)(a1 + 8)), (v11 = v10) == 0) )
    {
      *(_QWORD *)&v24 = 0;
      HIDWORD(v22) = -1;
      goto LABEL_12;
    }
    v17 = src;
    v18 = v10 + 1;
    if ( *((_QWORD *)&v24 + 1) < v10 + 1 )
    {
      src = (void *)qvector_reserve(&src, src, v18, 1);
      v17 = src;
    }
    v4 = v9;
    *(_QWORD *)&v24 = v18;
    memmove(v17, v9, v11);
    *((_BYTE *)src + v11) = 0;
    v5 = v24;
    HIDWORD(v22) = -1;
  }
  if ( v5 > 1 )
  {
    v6 = (char *)src;
    v7 = *a2;
    if ( (unsigned __int64)a2[2] >= v5 )
    {
LABEL_5:
      a2[1] = (char *)v5;
      v4 = v6;
      memmove(v7, v6, v5 - 1);
      (*a2)[v5 - 1] = 0;
      goto LABEL_6;
    }
LABEL_15:
    v12 = qvector_reserve(a2, v7, v5, 1);
    *a2 = (char *)v12;
    v7 = (void *)v12;
    goto LABEL_5;
  }
LABEL_12:
  v5 = xmmword_8CC318;
  if ( xmmword_8CC318 <= 1 )
  {
    v13 = sub_2270F0(a1);
    v14 = v13;
    if ( v13 && (v15 = strlen(v13), (v16 = v15) != 0) )
    {
      v19 = *a2;
      v20 = (char *)(v15 + 1);
      if ( (unsigned __int64)a2[2] < v15 + 1 )
      {
        v21 = qvector_reserve(a2, *a2, v15 + 1, 1);
        *a2 = (char *)v21;
        v19 = (void *)v21;
      }
      a2[1] = v20;
      v4 = v14;
      memmove(v19, v14, v16);
      (*a2)[v16] = 0;
    }
    else
    {
      a2[1] = nullptr;
    }
  }
  else if ( a2 != &qword_8CC310 )
  {
    v6 = qword_8CC310;
    v7 = *a2;
    if ( (unsigned __int64)a2[2] >= xmmword_8CC318 )
      goto LABEL_5;
    goto LABEL_15;
  }
LABEL_6:
  if ( src )
  {
    *(_QWORD *)&v24 = 0;
    qfree(src, v4);
  }
  return v26 - __readfsqword(0x28u);
}
