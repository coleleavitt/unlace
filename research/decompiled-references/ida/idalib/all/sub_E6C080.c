void __fastcall sub_E6C080(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  const char *v5; // r14
  size_t v6; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 *v9; // rsi
  unsigned __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v1 = *a1;
  v2 = a1[1];
  v3 = *(_QWORD *)(*a1 + 72LL);
  v4 = (v3 >> 1) & 3;
  if ( v4 == 1 )
  {
    v5 = "inherited from";
    v6 = 14;
    if ( v3 )
      v7 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    else
      v7 = 0;
LABEL_3:
    if ( (_BYTE)byte_2CCC480 )
      goto LABEL_4;
    goto LABEL_10;
  }
  v5 = "previous";
  v6 = 8;
  v7 = 0;
  if ( !v3 )
    goto LABEL_3;
  if ( v4 != 2 )
    goto LABEL_3;
  v10 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v10 )
    goto LABEL_3;
  v7 = *v10;
  if ( (_BYTE)byte_2CCC480 )
    goto LABEL_4;
LABEL_10:
  if ( !__cxa_guard_acquire(&byte_2CCC480) )
  {
LABEL_4:
    v8 = *(_QWORD *)(v1 + 72);
    v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      goto LABEL_12;
LABEL_5:
    v9 = &qword_2CCC4A0;
    goto LABEL_6;
  }
  qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
  qword_2CCC4A8 = 0;
  qword_2CCC4B8 = 0;
  __cxa_guard_release(&byte_2CCC480);
  v8 = *(_QWORD *)(v1 + 72);
  v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_5;
LABEL_12:
  v11 = (v8 >> 1) & 3;
  if ( v11 == 1 )
  {
    v12 = v9[9];
    v9 = nullptr;
    if ( v12 )
    {
      v9 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      if ( ((v12 >> 1) & 3) == 2 )
      {
        if ( v9 )
          goto LABEL_20;
      }
    }
  }
  else if ( v11 == 2 )
  {
LABEL_20:
    v9 = (__int64 *)v9[1];
  }
LABEL_6:
  sub_E6B8F0(v2, (__int64)v9, 0, v7, v5, v6);
}
