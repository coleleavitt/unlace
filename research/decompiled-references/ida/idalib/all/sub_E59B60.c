void __fastcall sub_E59B60(void ***a1, char *a2)
{
  void **v2; // rdx

  v2 = nullptr;
  if ( a2 )
    v2 = (void **)strlen(a2);
  sub_E59960(a1, (void **)a2, v2);
}
