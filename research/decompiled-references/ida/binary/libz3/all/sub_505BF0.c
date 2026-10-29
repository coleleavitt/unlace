void __fastcall sub_505BF0(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = &off_1C501B8;
  v2 = (__int64 *)a1[16];
  v3 = &v2[*((unsigned int *)a1 + 34)];
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      v5 = *v4++;
      *(_BYTE *)(v5 + 6) &= ~1u;
    }
    while ( v4 != v3 );
  }
  *((_DWORD *)a1 + 34) = 0;
  if ( v2 != a1 + 18 && v2 )
    sub_186B220(v2);
  v6 = a1[15];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[14];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[13];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[12];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  operator delete(a1, 0x110u);
}

