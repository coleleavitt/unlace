void __fastcall sub_826690(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  char *v6; // rdi
  char *v7; // rcx
  char *v8; // rax
  __int64 v9; // rdx

  *a1 = &off_1C550C0;
  v2 = (__int64 *)a1[20];
  v3 = &v2[*((unsigned int *)a1 + 42)];
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      v5 = *v4++;
      *(_BYTE *)(v5 + 6) &= ~2u;
    }
    while ( v4 != v3 );
  }
  *((_DWORD *)a1 + 42) = 0;
  if ( v2 != a1 + 22 && v2 )
    sub_186B220(v2);
  v6 = (char *)a1[2];
  v7 = &v6[8 * *((unsigned int *)a1 + 6)];
  if ( v6 != v7 )
  {
    v8 = (char *)a1[2];
    do
    {
      v9 = *(_QWORD *)v8;
      v8 += 8;
      *(_BYTE *)(v9 + 6) &= ~1u;
    }
    while ( v7 != v8 );
  }
  *((_DWORD *)a1 + 6) = 0;
  if ( v6 && v6 != (char *)(a1 + 4) )
    sub_186B220(v6);
  operator delete(a1, 0x130u);
}

