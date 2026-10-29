__int64 __fastcall sub_BC3500(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  char *v7; // rdi
  char *v8; // rsi
  char *i; // rax
  __int64 v10; // rdx
  __int64 v12; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  _BYTE v15[56]; // [rsp+10h] [rbp-38h] BYREF

  v2 = a1[8];
  v14 = 0x200000000LL;
  ptr = v15;
  if ( (((unsigned __int8)v2 | (unsigned __int8)(v2 >> 1)) & 1) != 0 )
  {
    v4 = a1[10];
    if ( v4 )
      return v4;
  }
  else
  {
    do
    {
      v3 = v2 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v3 )
        break;
      v4 = *(_QWORD *)(v3 + 80);
      if ( v4 )
        goto LABEL_17;
      v5 = (unsigned int)v14;
      v6 = (unsigned int)v14 + 1LL;
      if ( v6 > HIDWORD(v14) )
      {
        sub_2237220(&ptr, v15, v6, 8);
        v5 = (unsigned int)v14;
      }
      *((_QWORD *)ptr + v5) = v3;
      v2 = *(_QWORD *)(v3 + 64);
      LODWORD(v14) = v14 + 1;
    }
    while ( (v2 & 3) == 0 );
    v4 = a1[10];
    if ( v4 )
      goto LABEL_8;
  }
  v12 = sub_B8C330((__int64)a1);
  v4 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 104LL))(a1, v12);
LABEL_17:
  a1[10] = v4;
LABEL_8:
  v7 = (char *)ptr;
  v8 = (char *)ptr + 8 * (unsigned int)v14;
  if ( ptr != v8 )
  {
    *(_QWORD *)(*(_QWORD *)ptr + 80LL) = v4;
    for ( i = v7 + 8; v8 != i; *(_QWORD *)(v10 + 80) = a1[10] )
    {
      v10 = *(_QWORD *)i;
      i += 8;
    }
    v4 = a1[10];
  }
  if ( v7 != v15 )
    free(v7);
  return v4;
}
