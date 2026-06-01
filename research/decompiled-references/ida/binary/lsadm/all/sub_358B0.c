void *__fastcall sub_358B0(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // r14
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // r15
  char *v7; // rbx
  __int64 v8; // rbp
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  result = sub_35540(a1, a2);
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v3 = *(_QWORD *)(a2 + 160);
  if ( v3 )
  {
    v4 = (char *)sub_29E10(88 * v3);
    *(_QWORD *)(a1 + 152) = v4;
    v5 = v4;
    v6 = 0;
    *(_QWORD *)(a1 + 168) = v3;
    while ( 1 )
    {
      v7 = &v5[88 * v6];
      v8 = *(_QWORD *)(a2 + 152) + 88 * v6;
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      if ( *(_QWORD *)(v8 + 8) )
      {
        nb = *(_QWORD *)(v8 + 8);
        v9 = sub_29E10(nb);
        *(_QWORD *)v7 = v9;
        *((_QWORD *)v7 + 2) = nb;
        memcpy(v9, *(const void **)v8, nb);
        *((_QWORD *)v7 + 1) = nb;
      }
      *((_QWORD *)v7 + 3) = 0;
      *((_OWORD *)v7 + 2) = 0;
      if ( *(_QWORD *)(v8 + 32) )
      {
        n = *(_QWORD *)(v8 + 32);
        v11 = sub_29E10(n);
        *((_QWORD *)v7 + 3) = v11;
        *((_QWORD *)v7 + 5) = n;
        memcpy(v11, *(const void **)(v8 + 24), n);
        *((_QWORD *)v7 + 4) = n;
      }
      *((_QWORD *)v7 + 6) = 0;
      *(_OWORD *)(v7 + 56) = 0;
      if ( *(_QWORD *)(v8 + 56) )
      {
        na = *(_QWORD *)(v8 + 56);
        v10 = sub_29E10(na);
        *((_QWORD *)v7 + 6) = v10;
        *((_QWORD *)v7 + 8) = na;
        memcpy(v10, *(const void **)(v8 + 48), na);
        *((_QWORD *)v7 + 7) = na;
      }
      ++v6;
      *((_QWORD *)v7 + 9) = *(_QWORD *)(v8 + 72);
      result = *(void **)(v8 + 80);
      *((_QWORD *)v7 + 10) = result;
      if ( v3 == v6 )
        break;
      v5 = *(char **)(a1 + 152);
    }
    *(_QWORD *)(a1 + 160) = v3;
  }
  return result;
}

