__int64 __fastcall sub_79BFC0(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r13d
  __int64 v4; // rbp
  _BYTE *v5; // rdi
  char *v6; // rsi
  char *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  bool v11; // zf
  char *v13; // rdx
  __int64 v14; // r9
  char v15; // [rsp+Fh] [rbp-239h] BYREF
  void *ptr; // [rsp+10h] [rbp-238h] BYREF
  __int64 v17; // [rsp+18h] [rbp-230h]
  _BYTE v18[552]; // [rsp+20h] [rbp-228h] BYREF

  v2 = sub_79A2E0(a1);
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) != 0 )
    v2 = sub_793320(v2);
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 88) + 18200LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4);
  *(_BYTE *)(a1 + 8) &= ~0x80u;
  ptr = v18;
  v17 = 0x4000000000LL;
  (*(void (__fastcall **)(__int64, __int64, __int64 (*)(), char *, void **))(*(_QWORD *)v4 + 128LL))(
    v4,
    a1,
    sub_792DB0,
    &v15,
    &ptr);
  v5 = ptr;
  if ( (_DWORD)v17 )
  {
    v6 = (char *)ptr + 8 * (unsigned int)v17;
    if ( (*(_BYTE *)(a1 + 8) & 0x7Fu) - 56 <= 3 && (*(_BYTE *)(a1 + 11) & 8) != 0 )
    {
      v7 = (char *)ptr;
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)v7;
        if ( (*(_BYTE *)(*(_QWORD *)v7 + 28LL) & 0x7Fu) - 47 <= 2 )
          goto LABEL_8;
        if ( v9 )
        {
          *(_QWORD *)(v9 + 8) = v10 | *(_QWORD *)(v9 + 8) & 7LL;
          v9 = v10;
LABEL_8:
          v7 += 8;
          if ( v7 == v6 )
            goto LABEL_12;
        }
        else
        {
          v7 += 8;
          v9 = v10;
          v8 = v10;
          if ( v7 == v6 )
            goto LABEL_12;
        }
      }
    }
    v13 = (char *)ptr;
    v8 = 0;
    v9 = 0;
    do
    {
      v14 = v9;
      v9 = *(_QWORD *)v13;
      if ( v14 )
        *(_QWORD *)(v14 + 8) = v9 | *(_QWORD *)(v14 + 8) & 7LL;
      else
        v8 = *(_QWORD *)v13;
      v13 += 8;
    }
    while ( v6 != v13 );
LABEL_12:
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(a1 + 16) | *(_QWORD *)(v9 + 8) & 7LL;
    v11 = *(_QWORD *)(a1 + 24) == 0;
    *(_QWORD *)(a1 + 16) = v8;
    if ( v11 )
      *(_QWORD *)(a1 + 24) = v9;
    v3 = 1;
  }
  if ( v5 != v18 )
    free(v5);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
  return v3;
}

