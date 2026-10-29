void __fastcall sub_E35E20(void ***a1, char *a2)
{
  void **v2; // rdx

  v2 = nullptr;
  if ( a2 )
    v2 = (void **)strlen(a2);
  sub_E35C20(a1, (void **)a2, v2);
}

