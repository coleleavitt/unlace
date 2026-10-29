void __fastcall sub_21B7F70(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 *v10; // r15
  __int64 v11; // rax
  unsigned int v12[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v12[0] = a3;
  v5 = sub_21B6DA0(a1, (int *)v12, 1);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (__int64 *)(v6 + 8LL * (unsigned int)v5);
  v8 = (__int64 *)(v6 + 8 * HIDWORD(v5));
  if ( v7 != v8 )
  {
    if ( a3 )
    {
      do
      {
        if ( *v7 && (unsigned __int8)sub_21B9810(*v7, a3) )
          break;
        ++v7;
      }
      while ( v8 != v7 );
    }
    else
    {
      v7 += ((unsigned __int64)((char *)(v8 - 1) - (char *)v7) >> 3) + 1;
    }
  }
  while ( v8 != v7 )
  {
    v9 = *v7;
    v10 = v7 + 1;
    v11 = *(_QWORD *)(*v7 + 16);
    if ( !v11 )
      v11 = *v7;
    *(_BYTE *)(v11 + 44) |= 1u;
    sub_21B5A40(v9, a1, a2);
    if ( v10 == v8 )
      break;
    if ( a3 )
    {
      while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, a3) )
      {
        if ( v8 == ++v10 )
          return;
      }
      v7 = v10;
    }
    else
    {
      v7 = &v10[((unsigned __int64)((char *)(v8 - 2) - (char *)v7) >> 3) + 1];
    }
  }
}
