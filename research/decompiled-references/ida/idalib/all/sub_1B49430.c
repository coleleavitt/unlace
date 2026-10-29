void __fastcall sub_1B49430(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 *v9; // rbx
  __int64 *i; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int16 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rsi

  v7 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
  v8 = v7 + 8LL * *(unsigned int *)(a2 + 16);
  v9 = (__int64 *)(a2 + v7);
  for ( i = (__int64 *)(a2 + v8); i != v9; ++v9 )
  {
    if ( *v9 )
      sub_1B48300(a1, *v9, a3, a4, a5, a6);
  }
  v11 = *(_QWORD *)(a2 + 32);
  if ( v11 )
  {
    v12 = (unsigned __int16 *)sub_BFBAE0(v11);
    v16 = *v12;
    LOWORD(v16) = v16 & 0x1FF;
    if ( (_WORD)v16 == 46 )
    {
      v17 = *((_QWORD *)v12 + 2);
LABEL_8:
      sub_1B48300(a1, v17, v16, v13, v14, v15);
      return;
    }
    if ( (_WORD)v16 == 71 )
    {
      v17 = (__int64)v12;
      goto LABEL_8;
    }
  }
}
