void __fastcall sub_EE4E90(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  const char *v14; // rax
  size_t v15; // rdx
  __int64 v16; // rax
  const char *v17; // rax
  size_t v18; // rdx
  void *v19[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h] BYREF

  v8 = a2[5];
  v9 = (v8 >> 1) & 3;
  if ( v9 == 1 )
  {
    sub_971800(*a1, "super.");
    v11 = *a1;
  }
  else
  {
    if ( v9 )
    {
      v11 = *a1;
      if ( (_DWORD)v9 != 2 )
        goto LABEL_5;
      v13 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v13 )
        goto LABEL_5;
      v14 = sub_971A10(v13);
      v16 = sub_9717A0(v11, v14, v15);
      sub_971800(v16, ".");
      goto LABEL_4;
    }
    v10 = (char *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v10 )
    {
LABEL_4:
      v11 = *a1;
      goto LABEL_5;
    }
    sub_EE16F0(a1, v10, a3, a4, a5, a6, a7);
    sub_971800(*a1, ".");
    v11 = *a1;
  }
LABEL_5:
  v12 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a2[2] & 4) != 0 )
  {
    if ( v12 )
    {
      v19[0] = *(void **)(v12 + 40);
      sub_FBB170(v19, v11);
    }
    else
    {
      sub_FBB960(v19, *(_QWORD *)((a2[3] & 0xFFFFFFFFFFFFFFF8LL) + 40));
      sub_22581D0(v11, v19[0], v19[1]);
      if ( v19[0] != &v20 )
        operator delete(v19[0]);
    }
  }
  else
  {
    v17 = sub_971A10(v12);
    sub_9717A0(v11, v17, v18);
  }
}

