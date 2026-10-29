__int64 __fastcall sub_4AFC80(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int *v6; // rdi
  __int64 result; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  int v10[2]; // [rsp+0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  void *v12; // [rsp+18h] [rbp-A0h]
  int v13[38]; // [rsp+20h] [rbp-98h] BYREF

  sub_4AFD20((int)v10, (int)&ptr, *(_QWORD *)(a1 + 32), a4, a5, a6, a1 + 8, a1 + 40, (int)v13, (void *)0x1000000000LL);
  v6 = (int *)ptr;
  result = (unsigned int)v12;
  v8 = (char *)ptr + 8 * (unsigned int)v12;
  if ( ptr != v8 )
  {
    result = (__int64)ptr;
    do
    {
      v9 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v9 + 6) &= ~1u;
    }
    while ( v8 != (char *)result );
  }
  LODWORD(v12) = 0;
  if ( v6 != v13 )
  {
    if ( v6 )
      return sub_186B220(v6);
  }
  return result;
}

