__int64 __fastcall sub_B6AA70(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  _BYTE *v4; // rdi
  char *v5; // r8
  char *v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r13d
  bool v11; // zf
  char *v13; // r9
  __int64 v14; // rcx
  char v15; // [rsp+Fh] [rbp-239h] BYREF
  void *ptr; // [rsp+10h] [rbp-238h] BYREF
  __int64 v17; // [rsp+18h] [rbp-230h]
  _BYTE v18[552]; // [rsp+20h] [rbp-228h] BYREF

  v2 = sub_B68470(a1);
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) != 0 )
    v2 = sub_B68580(v2);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 88) + 18360LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
  *(_BYTE *)(a1 + 8) &= ~0x80u;
  ptr = v18;
  v17 = 0x4000000000LL;
  (*(void (__fastcall **)(__int64, __int64, __int64 (*)(), char *, void **))(*(_QWORD *)v3 + 136LL))(
    v3,
    a1,
    sub_B64010,
    &v15,
    &ptr);
  if ( !(_DWORD)v17 )
  {
    v4 = ptr;
    v10 = 0;
    goto LABEL_15;
  }
  v4 = ptr;
  v5 = (char *)ptr + 8 * (unsigned int)v17;
  if ( (*(_BYTE *)(a1 + 8) & 0x7Fu) - 58 <= 3 && a1 != 64 )
  {
    v6 = (char *)ptr;
    v7 = 0;
    v8 = 0;
    if ( (*(_BYTE *)(a1 + 11) & 8) != 0 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)v6;
        if ( (*(_BYTE *)(*(_QWORD *)v6 + 28LL) & 0x7Fu) - 49 <= 2 )
          goto LABEL_9;
        if ( v8 )
        {
          *(_QWORD *)(v8 + 8) = v9 | *(_QWORD *)(v8 + 8) & 7LL;
          v8 = v9;
LABEL_9:
          v6 += 8;
          if ( v5 == v6 )
            goto LABEL_13;
        }
        else
        {
          v6 += 8;
          v8 = v9;
          v7 = v9;
          if ( v5 == v6 )
            goto LABEL_13;
        }
      }
    }
  }
  v13 = (char *)ptr;
  v7 = 0;
  v14 = 0;
  do
  {
    v8 = *(_QWORD *)v13;
    if ( v14 )
      *(_QWORD *)(v14 + 8) = v8 | *(_QWORD *)(v14 + 8) & 7LL;
    else
      v7 = *(_QWORD *)v13;
    v13 += 8;
    v14 = v8;
  }
  while ( v5 != v13 );
LABEL_13:
  v10 = 1;
  *(_QWORD *)(v8 + 8) = *(_QWORD *)(a1 + 16) | *(_QWORD *)(v8 + 8) & 7LL;
  v11 = *(_QWORD *)(a1 + 24) == 0;
  *(_QWORD *)(a1 + 16) = v7;
  if ( v11 )
    *(_QWORD *)(a1 + 24) = v8;
LABEL_15:
  if ( v4 != v18 )
    free(v4);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3);
  return v10;
}

