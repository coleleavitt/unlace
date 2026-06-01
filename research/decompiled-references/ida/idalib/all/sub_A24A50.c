void __fastcall sub_A24A50(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 *v3; // rdi
  void *ptr; // [rsp+8h] [rbp-50h] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h]
  _BYTE v6[64]; // [rsp+18h] [rbp-40h] BYREF

  v1 = *a1;
  a1[1] = 0;
  ptr = v6;
  v5 = 0x200000000LL;
  v2 = v1 + 48LL * *((unsigned int *)a1 + 4);
  if ( v2 != v1 )
  {
    do
    {
      while ( 1 )
      {
        *(_DWORD *)(v1 + 16) = 0;
        *(_DWORD *)(v1 + 20) = 2;
        *(_DWORD *)v1 = -1;
        *(_QWORD *)(v1 + 8) = v1 + 24;
        if ( (_DWORD)v5 )
          break;
        v1 += 48;
        if ( v1 == v2 )
          goto LABEL_6;
      }
      v3 = (__int64 *)(v1 + 8);
      v1 += 48;
      sub_A12810(v3, (__int64 *)&ptr);
    }
    while ( v1 != v2 );
LABEL_6:
    if ( ptr != v6 )
      free(ptr);
  }
}
