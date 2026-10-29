void __fastcall sub_5F7D00(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    if ( *(_QWORD *)v1 )
      operator delete(*(void **)v1, *(_QWORD *)(v1 + 16) - *(_QWORD *)v1);
    operator delete((void *)v1, 0x18u);
  }
}

