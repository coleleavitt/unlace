void __fastcall sub_F094A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // r13
  void *v5; // rdi
  char *v6; // rax
  size_t v7; // rdx
  void *v8; // rdi
  size_t v9; // r13
  size_t v10; // rax
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" '");
  v5 = *(void **)(v3 + 32);
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    v3 = sub_22581D0(v3, " '", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, " '", v4);
    *(_QWORD *)(v3 + 32) += v4;
  }
  v6 = sub_BD69E0((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
  v8 = *(void **)(v3 + 32);
  v9 = v7;
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v8 < v7 )
  {
    v3 = sub_22581D0(v3, v6, v7);
  }
  else if ( v7 )
  {
    memcpy(v8, v6, v7);
    *(_QWORD *)(v3 + 32) += v9;
  }
  v10 = j__strlen("'");
  v11 = *(void **)(v3 + 32);
  v12 = v10;
  if ( v10 > *(_QWORD *)(v3 + 24) - (_QWORD)v11 )
  {
    sub_22581D0(v3, "'", v10);
    if ( (*(_QWORD *)a2 & 0x2000000LL) == 0 )
      return;
  }
  else if ( v10 )
  {
    memcpy(v11, "'", v10);
    *(_QWORD *)(v3 + 32) += v12;
    if ( (*(_QWORD *)a2 & 0x2000000LL) == 0 )
      return;
  }
  else if ( (*(_QWORD *)a2 & 0x2000000LL) == 0 )
  {
    return;
  }
  v13 = 48;
  if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
    v13 = 32;
  sub_F074F0(a1, *(_QWORD *)(a2 + v13));
}

