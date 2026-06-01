__int64 sub_11E43A0()
{
  char *v0; // rax
  unsigned int v1; // edx

  v0 = getenv("RC_DEBUG_OPTIONS");
  v1 = 0;
  if ( v0 )
    LOBYTE(v1) = *v0 != 0;
  return v1;
}
