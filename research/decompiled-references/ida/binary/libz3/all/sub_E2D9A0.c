__int64 __fastcall sub_E2D9A0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  _BYTE *v4; // rdi
  char *v5; // rcx
  char *v6; // rax
  __int64 v7; // rdx
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-B0h]
  _BYTE v10[168]; // [rsp+10h] [rbp-A8h] BYREF

  v2 = *a1;
  if ( v2 && !*(_BYTE *)(v2 + 306) )
  {
    ptr = v10;
    v9 = 0x1000000000LL;
    sub_E30F60(v2, &ptr, a2);
    v4 = ptr;
    v5 = (char *)ptr + 8 * (unsigned int)v9;
    if ( ptr != v5 )
    {
      v6 = (char *)ptr;
      do
      {
        v7 = *(_QWORD *)v6;
        v6 += 8;
        *(_BYTE *)(v7 + 6) &= ~1u;
      }
      while ( v5 != v6 );
    }
    LODWORD(v9) = 0;
    if ( v4 != v10 && v4 )
      sub_186B220(v4);
  }
  return 1;
}

