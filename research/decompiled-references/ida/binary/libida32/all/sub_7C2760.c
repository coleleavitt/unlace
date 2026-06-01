unsigned __int64 __fastcall sub_7C2760(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r12
  bool v6; // cc
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  size_t v14; // rdx
  void *v15; // rdi
  const char *v17; // rsi
  const char *v18; // rsi
  _BYTE *v19; // rsi
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8) <= 1u;
  v26 = __readfsqword(0x28u);
  ptr = nullptr;
  v25 = 0;
  if ( !v6 )
  {
    sub_62C910((__int64 *)&ptr, *(const char **)a1);
    v5 = 1;
  }
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 > 1 )
    goto LABEL_30;
  if ( *(_QWORD *)(a1 + 56) <= 1u )
  {
    if ( *(_QWORD *)(a1 + 80) <= 1u )
      goto LABEL_6;
    goto LABEL_22;
  }
  v17 = haystack;
  if ( v8 )
LABEL_30:
    v17 = *(const char **)(a1 + 24);
  sub_62C910((__int64 *)&ptr, v17);
  v18 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v18 = *(const char **)(a1 + 48);
  sub_62C910((__int64 *)&ptr, v18);
  v5 |= 2u;
  if ( *(_QWORD *)(a1 + 80) <= 1u )
  {
LABEL_6:
    if ( *(_QWORD *)(a1 + 104) <= 1u )
      goto LABEL_7;
    goto LABEL_23;
  }
LABEL_22:
  sub_62C910((__int64 *)&ptr, *(const char **)(a1 + 72));
  v5 |= 4u;
  if ( *(_QWORD *)(a1 + 104) <= 1u )
  {
LABEL_7:
    v9 = *(_QWORD *)(a1 + 120);
    if ( v9 == -1 )
      goto LABEL_8;
LABEL_24:
    sub_7BE190((__int64 *)&ptr, v9 + 1, a3, a4, a5);
    v10 = *(_QWORD *)(a1 + 128);
    v5 |= 0x10u;
    if ( !v10 )
      goto LABEL_9;
    goto LABEL_25;
  }
LABEL_23:
  sub_62C910((__int64 *)&ptr, *(const char **)(a1 + 96));
  v9 = *(_QWORD *)(a1 + 120);
  v5 |= 8u;
  if ( v9 != -1 )
    goto LABEL_24;
LABEL_8:
  v10 = *(_QWORD *)(a1 + 128);
  if ( !v10 )
    goto LABEL_9;
LABEL_25:
  v19 = ptr;
  v20 = v10 >> 20;
  v21 = v25;
  a3 = v25 + 1;
  if ( *((_QWORD *)&v25 + 1) < (unsigned __int64)(v25 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, a3, 1);
    v19 = ptr;
    v21 = v25;
  }
  v19[v21] = v20;
  v22 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)&v25 = v25 + 1;
  if ( (v22 & 0xF00000) == 0x500000 )
    sub_7BE1F0((__int64 *)&ptr, (unsigned int *)(a1 + 136), a3, a4, a5);
  v5 |= 0x20u;
LABEL_9:
  v11 = *(unsigned int *)(a1 + 272);
  if ( (_DWORD)v11 != -1 )
  {
    sub_7BE190((__int64 *)&ptr, v11 + 1, a3, a4, a5);
    v5 |= 0x40u;
  }
  v12 = a2[1];
  v13 = *a2;
  if ( a2[2] < (unsigned __int64)(v12 + 1) )
  {
    v23 = qvector_reserve(a2, v13, v12 + 1, 1);
    *a2 = v23;
    v13 = v23;
    v12 = a2[1];
  }
  *(_BYTE *)(v13 + v12) = v5;
  v14 = v25;
  ++a2[1];
  v15 = ptr;
  if ( v14 )
  {
    sub_7BB300(a2, ptr, v14);
    v15 = ptr;
  }
  if ( v15 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v15);
  }
  return v26 - __readfsqword(0x28u);
}

