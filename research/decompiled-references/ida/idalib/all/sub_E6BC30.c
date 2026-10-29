void __fastcall sub_E6BC30(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  const char *v6; // r12
  size_t v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  __int64 *v12; // rsi
  unsigned __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax

  v1 = *a1;
  v2 = a1[1];
  v3 = *(_QWORD *)(*a1 + 72LL);
  if ( !v3 )
    goto LABEL_13;
  v4 = (v3 >> 1) & 3;
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      v13 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v13 )
      {
        v5 = *v13;
        v6 = "previous";
        goto LABEL_4;
      }
    }
LABEL_13:
    v6 = "previous";
    v7 = 8;
LABEL_14:
    v10 = 0;
    v5 = 0;
    if ( (_BYTE)byte_2CCC408 )
      goto LABEL_7;
    goto LABEL_15;
  }
  v5 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  v6 = "inherited from";
  v7 = 14;
  if ( !v5 )
    goto LABEL_14;
LABEL_4:
  v7 = strlen(v6);
  if ( !v5 )
    goto LABEL_14;
  v8 = *(_QWORD *)(v5 + 72);
  v9 = *(unsigned int *)(v5 + 24);
  if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 && ((v8 >> 1) & 3) != 1 )
  {
    if ( !(_BYTE)byte_2CCC408 && __cxa_guard_acquire(&byte_2CCC408) )
    {
      qword_2CCC420 &= 0xFFFFFFFE00000000LL;
      qword_2CCC428 = 0;
      qword_2CCC438 = 0;
      __cxa_guard_release(&byte_2CCC408);
    }
    v16 = (__int64 *)(*(_QWORD *)(v5 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v16 )
    {
      v17 = (*(__int64 *)(v5 + 72) >> 1) & 3;
      if ( v17 == 1 )
      {
        v18 = v16[9];
        v16 = nullptr;
        if ( !v18 )
          goto LABEL_26;
        v16 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v18 >> 1) & 3) != 2 || !v16 )
          goto LABEL_26;
      }
      else if ( v17 != 2 )
      {
        goto LABEL_26;
      }
      v16 = (__int64 *)v16[1];
    }
    else
    {
      v16 = &qword_2CCC420;
    }
LABEL_26:
    v9 = (unsigned __int64)sub_F1E510(v16) >> 32;
  }
  v10 = *(unsigned int *)(*(_QWORD *)(v5 + 56) + 8LL) | (v9 << 32);
  if ( (_BYTE)byte_2CCC408 )
    goto LABEL_7;
LABEL_15:
  if ( __cxa_guard_acquire(&byte_2CCC408) )
  {
    qword_2CCC420 &= 0xFFFFFFFE00000000LL;
    qword_2CCC428 = 0;
    qword_2CCC438 = 0;
    __cxa_guard_release(&byte_2CCC408);
    v11 = *(_QWORD *)(v1 + 72);
    v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
LABEL_7:
  v11 = *(_QWORD *)(v1 + 72);
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_8:
    v12 = &qword_2CCC420;
    goto LABEL_9;
  }
LABEL_17:
  v14 = (v11 >> 1) & 3;
  if ( v14 != 1 )
  {
    if ( v14 != 2 )
      goto LABEL_9;
LABEL_28:
    v12 = (__int64 *)v12[1];
    goto LABEL_9;
  }
  v15 = v12[9];
  v12 = nullptr;
  if ( v15 )
  {
    v12 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    if ( ((v15 >> 1) & 3) == 2 )
    {
      if ( v12 )
        goto LABEL_28;
    }
  }
LABEL_9:
  sub_E6B8F0(v2, (__int64)v12, v10, v5, v6, v7);
}
