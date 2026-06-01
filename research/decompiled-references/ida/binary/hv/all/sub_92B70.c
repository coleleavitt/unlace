void __fastcall sub_92B70(__int64 a1)
{
  int v1; // eax

  *(_QWORD *)a1 = &off_164B20;
  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 == 1 )
  {
    sub_92360(*(void **)(a1 + 24));
  }
  else if ( v1 != 2 )
  {
    if ( v1 )
      sub_91EA0();
    sub_92380(*(void **)(a1 + 24));
  }
}

