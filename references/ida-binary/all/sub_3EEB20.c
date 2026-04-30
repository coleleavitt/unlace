void __fastcall sub_3EEB20(void **a1)
{
  if ( *a1 )
    operator delete(*a1, (_BYTE *)a1[2] - (_BYTE *)*a1);
}
