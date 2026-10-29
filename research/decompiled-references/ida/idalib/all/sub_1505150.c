void __fastcall sub_1505150(void ***a1)
{
  void **v1; // rbx

  v1 = *a1;
  if ( ((unsigned __int8)*a1 & 1) == 0 && v1 )
  {
    if ( *v1 != v1 + 2 )
      free(*v1);
    operator delete(v1, 0x48u);
  }
}
