__int64 __fastcall sub_4AFB60(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int *v8; // rdi
  char *v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  unsigned __int64 *v13; // r13
  unsigned __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 *i; // rcx
  __int64 v17; // rdx
  int v19[2]; // [rsp+0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  void *v21; // [rsp+18h] [rbp-B0h]
  int v22[42]; // [rsp+20h] [rbp-A8h] BYREF

  sub_4AFD20((int)v19, (int)&ptr, *(_QWORD *)(a1 + 32), a4, a5, a6, a1 + 8, a1 + 40, (int)v22, (void *)0x1000000000LL);
  v8 = (int *)ptr;
  v9 = (char *)ptr + 8 * (unsigned int)v21;
  if ( ptr != v9 )
  {
    v10 = (char *)ptr;
    do
    {
      v11 = *(_QWORD *)v10;
      v10 += 8;
      *(_BYTE *)(v11 + 6) &= ~1u;
    }
    while ( v10 != v9 );
  }
  LODWORD(v21) = 0;
  if ( v8 != v22 && v8 )
    sub_186B220(v8);
  v12 = *(unsigned __int64 **)(a2 + 8);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    while ( v13 != v12 )
    {
      v14 = *v12++;
      sub_4AF940(a1, v14, a3);
    }
  }
  v15 = *(__int64 **)(a1 + 40);
  for ( i = &v15[*(unsigned int *)(a1 + 48)]; i != v15; *(_BYTE *)(v17 + 6) &= ~2u )
    v17 = *v15++;
  *(_DWORD *)(a1 + 48) = 0;
  return 1;
}

