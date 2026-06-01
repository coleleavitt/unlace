__int64 __fastcall sub_372500(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // rbp
  char *v5; // rbp
  size_t v7; // rax
  size_t v8; // r12
  size_t v9; // r13
  void *v10; // rax
  char *v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  v11 = nullptr;
  v12 = 0;
  v2 = strlen(s);
  v3 = v2 + 1;
  v4 = v2;
  v11 = (char *)qvector_reserve(&v11, 0, v2 + 1, 1);
  *(_QWORD *)&v12 = v3;
  memmove(v11, s, v4);
  v11[v4] = 0;
  v5 = v11;
  if ( (_QWORD)v12 )
  {
    if ( !v11 )
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
      return 0;
    }
    v7 = strlen(v11);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v8 = v7;
    *(_OWORD *)(a2 + 16) = 0;
    if ( !v7 )
      goto LABEL_6;
    v9 = v7 + 1;
    v10 = (void *)qvector_reserve(a2 + 8, 0, v7 + 1, 1);
    *(_QWORD *)(a2 + 8) = v10;
    *(_QWORD *)(a2 + 16) = v9;
    memmove(v10, v5, v8);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v8) = 0;
    v5 = v11;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  if ( v5 )
  {
LABEL_6:
    *(_QWORD *)&v12 = 0;
    qfree(v5);
  }
  return 0;
}

