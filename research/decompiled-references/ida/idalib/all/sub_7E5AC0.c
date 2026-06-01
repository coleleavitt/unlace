unsigned __int64 __fastcall sub_7E5AC0(__int64 a1, __int64 *a2)
{
  char v2; // r12
  bool v3; // cc
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  size_t v11; // rdx
  void *v12; // rdi
  const char *v14; // rsi
  const char *v15; // rsi
  _BYTE *v16; // rsi
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8) <= 1u;
  v23 = __readfsqword(0x28u);
  ptr = nullptr;
  v22 = 0;
  if ( !v3 )
  {
    sub_649F10((__int64 *)&ptr, *(const char **)a1);
    v2 = 1;
  }
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 > 1 )
    goto LABEL_30;
  if ( *(_QWORD *)(a1 + 56) <= 1u )
  {
    if ( *(_QWORD *)(a1 + 80) <= 1u )
      goto LABEL_6;
    goto LABEL_22;
  }
  v14 = haystack;
  if ( v5 )
LABEL_30:
    v14 = *(const char **)(a1 + 24);
  sub_649F10((__int64 *)&ptr, v14);
  v15 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v15 = *(const char **)(a1 + 48);
  sub_649F10((__int64 *)&ptr, v15);
  v2 |= 2u;
  if ( *(_QWORD *)(a1 + 80) <= 1u )
  {
LABEL_6:
    if ( *(_QWORD *)(a1 + 104) <= 1u )
      goto LABEL_7;
    goto LABEL_23;
  }
LABEL_22:
  sub_649F10((__int64 *)&ptr, *(const char **)(a1 + 72));
  v2 |= 4u;
  if ( *(_QWORD *)(a1 + 104) <= 1u )
  {
LABEL_7:
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 == -1 )
      goto LABEL_8;
LABEL_24:
    sub_3A0A80((__int64 *)&ptr, v6 + 1);
    v7 = *(_QWORD *)(a1 + 128);
    v2 |= 0x10u;
    if ( !v7 )
      goto LABEL_9;
    goto LABEL_25;
  }
LABEL_23:
  sub_649F10((__int64 *)&ptr, *(const char **)(a1 + 96));
  v6 = *(_QWORD *)(a1 + 120);
  v2 |= 8u;
  if ( v6 != -1 )
    goto LABEL_24;
LABEL_8:
  v7 = *(_QWORD *)(a1 + 128);
  if ( !v7 )
    goto LABEL_9;
LABEL_25:
  v16 = ptr;
  v17 = v7 >> 20;
  v18 = v22;
  if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v22 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v22 + 1, 1);
    v16 = ptr;
    v18 = v22;
  }
  v16[v18] = v17;
  v19 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)&v22 = v22 + 1;
  if ( (v19 & 0xF00000) == 0x500000 )
  {
    sub_3A0A80((__int64 *)&ptr, *(_QWORD *)(a1 + 136) + 1LL);
    sub_3A0A80((__int64 *)&ptr, *(_QWORD *)(a1 + 144) + 1LL);
    sub_3A0A80((__int64 *)&ptr, *(_QWORD *)(a1 + 152) + 1LL);
    sub_3A0970((__int64 *)&ptr, *(_DWORD *)(a1 + 160));
  }
  v2 |= 0x20u;
LABEL_9:
  v8 = *(_QWORD *)(a1 + 408);
  if ( v8 != -1 )
  {
    sub_3A0A80((__int64 *)&ptr, v8 + 1);
    v2 |= 0x40u;
  }
  v9 = a2[1];
  v10 = *a2;
  if ( a2[2] < (unsigned __int64)(v9 + 1) )
  {
    v20 = qvector_reserve(a2, v10, v9 + 1, 1);
    *a2 = v20;
    v10 = v20;
    v9 = a2[1];
  }
  *(_BYTE *)(v10 + v9) = v2;
  v11 = v22;
  ++a2[1];
  v12 = ptr;
  if ( v11 )
  {
    sub_7DE6E0(a2, ptr, v11);
    v12 = ptr;
  }
  if ( v12 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v12);
  }
  return v23 - __readfsqword(0x28u);
}
