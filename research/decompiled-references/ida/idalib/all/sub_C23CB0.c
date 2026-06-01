void __fastcall sub_C23CB0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // r12

  *a1 = &off_2B4B4E0;
  --*(_DWORD *)(a1[1] + 40LL);
  *(_QWORD *)(a1[1] + 32LL) = a1[2];
  operator delete(a1[21], 16LL * *((unsigned int *)a1 + 46), 8);
  v2 = (_QWORD *)a1[17];
  if ( v2 != a1 + 19 )
    free(v2);
  v3 = a1[11];
  if ( v3 )
  {
    while ( 1 )
    {
      sub_C23B90((__int64)(a1 + 9), *(_QWORD *)(v3 + 24));
      v4 = *(_QWORD *)(v3 + 16);
      if ( *(_DWORD *)(v3 + 48) > 1u )
      {
        sub_A4F8E0((int *)(v3 + 48));
        operator delete((void *)v3);
        if ( !v4 )
          break;
      }
      else
      {
        operator delete((void *)v3);
        if ( !v4 )
          break;
      }
      v3 = v4;
    }
  }
  operator delete(a1, 0xD0u);
}
