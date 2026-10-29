void __fastcall sub_10A71B0(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // r12

  v1 = *(_QWORD **)a1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v1 )
      (*(void (__fastcall **)(_QWORD))(*v1 + 8LL))(*(_QWORD *)a1);
  }
  else if ( v1 )
  {
    v2 = v1[5];
    if ( v2 )
    {
      while ( 1 )
      {
        sub_1050CC0((__int64)(v1 + 3), *(_QWORD **)(v2 + 24));
        v3 = *(void **)(v2 + 32);
        v4 = *(_QWORD *)(v2 + 16);
        if ( v3 == (void *)(v2 + 48) )
        {
          operator delete((void *)v2);
          if ( !v4 )
            break;
        }
        else
        {
          operator delete(v3);
          operator delete((void *)v2);
          if ( !v4 )
            break;
        }
        v2 = v4;
      }
    }
    operator delete(v1, 0x48u);
  }
}
