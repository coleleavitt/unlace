__int64 __fastcall sub_35FF0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r12
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // r15
  char *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r14
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  size_t nb; // [rsp+18h] [rbp-50h]
  size_t na; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+18h] [rbp-50h]

  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = sub_29E60(a1, *(void **)a1, a2, 0xB0u);
  v4 = *(_QWORD *)(a1 + 8);
  v17 = v4;
  if ( v4 < a2 )
  {
    v18 = 176 * v4;
    do
    {
      v5 = *(_QWORD *)a1 + v18;
      sub_35540(v5, a3);
      *(_QWORD *)(v5 + 152) = 0;
      *(_OWORD *)(v5 + 160) = 0;
      v6 = *(_QWORD *)(a3 + 160);
      if ( v6 )
      {
        v7 = (char *)sub_29E10(88 * v6);
        *(_QWORD *)(v5 + 152) = v7;
        v8 = v7;
        v9 = 0;
        *(_QWORD *)(v5 + 168) = v6;
        while ( 1 )
        {
          v10 = &v8[88 * v9];
          v11 = *(_QWORD *)(a3 + 152) + 88 * v9;
          *(_QWORD *)v10 = 0;
          v12 = v11;
          *(_OWORD *)(v10 + 8) = 0;
          if ( *(_QWORD *)(v11 + 8) )
          {
            nb = *(_QWORD *)(v11 + 8);
            v13 = sub_29E10(nb);
            *(_QWORD *)v10 = v13;
            *((_QWORD *)v10 + 2) = nb;
            memcpy(v13, *(const void **)v12, nb);
            *((_QWORD *)v10 + 1) = nb;
          }
          *((_QWORD *)v10 + 3) = 0;
          *((_OWORD *)v10 + 2) = 0;
          if ( *(_QWORD *)(v12 + 32) )
          {
            n = *(_QWORD *)(v12 + 32);
            v15 = sub_29E10(n);
            *((_QWORD *)v10 + 3) = v15;
            *((_QWORD *)v10 + 5) = n;
            memcpy(v15, *(const void **)(v12 + 24), n);
            *((_QWORD *)v10 + 4) = n;
          }
          *((_QWORD *)v10 + 6) = 0;
          *(_OWORD *)(v10 + 56) = 0;
          if ( *(_QWORD *)(v12 + 56) )
          {
            na = *(_QWORD *)(v12 + 56);
            v14 = sub_29E10(na);
            *((_QWORD *)v10 + 6) = v14;
            *((_QWORD *)v10 + 8) = na;
            memcpy(v14, *(const void **)(v12 + 48), na);
            *((_QWORD *)v10 + 7) = na;
          }
          ++v9;
          *((_QWORD *)v10 + 9) = *(_QWORD *)(v12 + 72);
          *((_QWORD *)v10 + 10) = *(_QWORD *)(v12 + 80);
          if ( v6 == v9 )
            break;
          v8 = *(char **)(v5 + 152);
        }
        *(_QWORD *)(v5 + 160) = v6;
      }
      ++v17;
      v18 += 176;
    }
    while ( a2 != v17 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  return a1;
}

