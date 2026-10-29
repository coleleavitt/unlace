__int64 __fastcall sub_406680(void *a1, const char *a2)
{
  __int64 (*v2)(void); // rax
  void *v3; // rax

  v2 = (__int64 (*)(void))dlsym(a1, a2);
  if ( v2 && (v3 = (void *)v2()) != nullptr )
    return sub_48DF10(v3, 0xFFFFFFFF);
  else
    return 0;
}

