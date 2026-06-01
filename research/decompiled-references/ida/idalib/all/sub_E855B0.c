void __fastcall sub_E855B0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7,
        size_t n)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r12d
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbp
  char v17; // r8
  __int64 v18; // r15
  void *v19; // rdi
  char *v20; // rax
  char src; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+18h] [rbp-50h]
  char v25; // [rsp+2Fh] [rbp-39h]
  char v26; // [rsp+2Fh] [rbp-39h]

  v14 = sub_E77210(a2, a2, a3, a4, a5, a6);
  if ( !a3 )
  {
    v23 = -1;
    v16 = -(__int64)((unsigned __int8)sub_E774E0(a2, a2, v10, v11, v12, v13) ^ 1u);
LABEL_3:
    v17 = 0;
    if ( (unsigned int)v14 > 3 )
      goto LABEL_4;
    goto LABEL_17;
  }
  v15 = sub_EE5E00(*(_QWORD *)(*a1 + 8), a3, v10, v11);
  v23 = 0;
  v16 = v15
      / sub_A97D20(
          *(_QWORD *)(*a1 + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 18648LL) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v14 != 2 )
    goto LABEL_3;
  v16 -= sub_A7AC40(*(_QWORD *)(*a1 + 8), a2);
LABEL_17:
  v17 = a00fg1hij420[v14];
LABEL_4:
  v18 = a1[1];
  v19 = *(void **)(v18 + 32);
  if ( n > *(_QWORD *)(v18 + 24) - (_QWORD)v19 )
  {
    v26 = v17;
    sub_227BF10(a1[1], a7, n);
    v18 = a1[1];
    v17 = v26;
  }
  else if ( n )
  {
    v25 = v17;
    memcpy(v19, a7, n);
    *(_QWORD *)(v18 + 32) += n;
    v17 = v25;
    v18 = a1[1];
  }
  if ( a3
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 152LL) > 0xB71AFFFu
    && a4
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 16
    && (a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    src = v17;
    sub_995540(v18, "M");
    sub_E845E0(a1, a5, nullptr, 0);
    v18 = a1[1];
    v17 = src;
  }
  v20 = *(char **)(v18 + 32);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(v18 + 24) )
  {
    sub_227BA10(v18, (unsigned int)v17);
  }
  else
  {
    *(_QWORD *)(v18 + 32) = v20 + 1;
    *v20 = v17;
  }
  sub_E79E60((__int64)a1, (void *)v16);
  if ( v14 == 3 )
  {
    sub_E79E60((__int64)a1, nullptr);
    goto LABEL_19;
  }
  if ( v14 > 1 )
LABEL_19:
    sub_E79E60((__int64)a1, (void *)v23);
}
