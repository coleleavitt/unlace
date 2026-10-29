void __fastcall sub_F0ABE0(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  size_t v5; // r13
  void *v6; // rdi
  unsigned __int8 v7; // al
  __int64 v8; // rsi
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+8h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 1096);
  v5 = j__strlen(" ");
  v6 = *(void **)(v4 + 32);
  if ( v5 > *(_QWORD *)(v4 + 24) - (_QWORD)v6 )
  {
    v4 = sub_22581D0(v4, " ", v5);
LABEL_3:
    v7 = *(_BYTE *)(a2 + 19);
    v8 = *(_QWORD *)(a2 + 40);
    if ( (v7 & 2) != 0 )
      goto LABEL_4;
    goto LABEL_11;
  }
  if ( !v5 )
    goto LABEL_3;
  memcpy(v6, " ", v5);
  *(_QWORD *)(v4 + 32) += v5;
  v7 = *(_BYTE *)(a2 + 19);
  v8 = *(_QWORD *)(a2 + 40);
  if ( (v7 & 2) != 0 )
  {
LABEL_4:
    v10 = *(_DWORD *)(v8 + 8);
    if ( (unsigned int)v10 > 0x40 )
      sub_21E17D0(&v9);
    else
      v9 = *(void **)v8;
    goto LABEL_6;
  }
LABEL_11:
  v10 = 8 * ((v7 >> 2) & 0x1F);
  if ( v10 > 64 )
    sub_21E1730(&v9, v8, 0);
  else
    v9 = (void *)v8;
LABEL_6:
  sub_21E8630(&v9, v4, 1);
  if ( (unsigned int)v10 > 0x40 && v9 )
    operator delete[](v9);
  sub_F0AB00(a1, a2);
}

