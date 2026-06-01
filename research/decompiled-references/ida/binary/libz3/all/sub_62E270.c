__int64 __fastcall sub_62E270(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int *v6; // rdi
  char *v7; // rcx
  char *v8; // rax
  __int64 v9; // rdx
  int v11; // [rsp+0h] [rbp-B8h]
  int v12[2]; // [rsp+8h] [rbp-B0h] BYREF
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  void *v14; // [rsp+18h] [rbp-A0h]
  int v15[38]; // [rsp+20h] [rbp-98h] BYREF

  sub_633BE0((int)v12, (int)&ptr, a2, a4, a5, a6, v11, *(_QWORD *)(a1 + 8), (int)v15, (void *)0x1000000000LL);
  v6 = (int *)ptr;
  v7 = (char *)ptr + 8 * (unsigned int)v14;
  if ( ptr != v7 )
  {
    v8 = (char *)ptr;
    do
    {
      v9 = *(_QWORD *)v8;
      v8 += 8;
      *(_BYTE *)(v9 + 6) &= ~1u;
    }
    while ( v7 != v8 );
  }
  LODWORD(v14) = 0;
  if ( v6 && v6 != v15 )
    sub_186B220(v6);
  return 0;
}

