void __fastcall sub_9C8E70(_QWORD *a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r12
  __int64 v3; // rbx
  void **v4; // r13

  if ( a1 )
  {
    operator delete(a1[3], 16LL * *((unsigned int *)a1 + 10), 8);
    v1 = *((unsigned int *)a1 + 4);
    if ( (_DWORD)v1 )
    {
      v2 = (_QWORD *)*a1;
      v3 = *a1 + 16 * v1;
      do
      {
        if ( *v2 != -8192 && *v2 != -4096 )
        {
          v4 = (void **)v2[1];
          if ( v4 )
          {
            if ( *v4 != v4 + 2 )
              free(*v4);
            operator delete(v4, 0x38u);
          }
        }
        v2 += 2;
      }
      while ( (_QWORD *)v3 != v2 );
      v1 = *((unsigned int *)a1 + 4);
    }
    operator delete(*a1, 16 * v1, 8);
    operator delete(a1, 0x30u);
  }
}
