void __fastcall sub_15EFF10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8)
{
  bool v9; // zf
  __int64 v10; // rax
  size_t v11; // rcx
  char v12; // al
  void **v13; // rdi
  unsigned int *v14; // rsi
  unsigned int *i; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  char vars10; // [rsp+10h] [rbp+10h] BYREF

  ptr = &vars10;
  v9 = *(_BYTE *)(a7 + 1) == 87;
  vars8 = 0x10000000000LL;
  v10 = a8;
  v11 = 0;
  if ( a8 > 1 )
  {
    v11 = a8 - 2;
    v10 = 2;
  }
  v12 = sub_FD40E0(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 240LL) + 48LL) + 32LL),
          !v9,
          (const void *)(v10 + a7),
          v11,
          (__int64)&ptr);
  v13 = (void **)ptr;
  if ( !v12 )
  {
    v14 = (unsigned int *)((char *)ptr + 4 * (unsigned int)vars8);
    if ( ptr != v14 )
    {
      for ( i = (unsigned int *)ptr; v14 != i; ++i )
      {
        while ( 1 )
        {
          v16 = *i;
          v17 = *(_QWORD *)(a1 + 8);
          if ( *i == 7497 )
          {
LABEL_19:
            *(_BYTE *)(v17 + 392) |= 2u;
            goto LABEL_8;
          }
          if ( v16 > 0x1D49 )
            break;
          if ( v16 == 6858 )
          {
            *(_BYTE *)(v17 + 392) |= 4u;
          }
          else if ( v16 == 7495 )
          {
            goto LABEL_19;
          }
LABEL_8:
          if ( v14 == ++i )
            goto LABEL_15;
        }
        if ( v16 < 0x1D4C )
          goto LABEL_8;
        if ( v16 <= 0x1D4D )
          goto LABEL_19;
        if ( v16 != 7541 )
          goto LABEL_8;
        *(_BYTE *)(v17 + 392) |= 8u;
      }
    }
  }
LABEL_15:
  if ( v13 != &ptr )
    free(v13);
}
