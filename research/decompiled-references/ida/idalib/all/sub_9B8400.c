void __fastcall sub_9B8400(_DWORD **a1)
{
  _DWORD *v1; // rdi

  v1 = *a1;
  if ( v1 )
  {
    if ( v1[17]-- == 1 )
      sub_9B7D80(v1);
  }
}
