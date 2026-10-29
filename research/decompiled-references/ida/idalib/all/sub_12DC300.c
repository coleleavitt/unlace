volatile signed __int32 **__fastcall sub_12DC300(volatile signed __int32 **a1, volatile signed __int32 *a2)
{
  volatile signed __int32 *v3; // rdi

  v3 = *a1;
  if ( v3 != a2 )
  {
    if ( a2 )
    {
      if ( !&_pthread_key_create )
      {
        ++*((_DWORD *)a2 + 2);
        if ( !v3 )
          goto LABEL_7;
        goto LABEL_6;
      }
      _InterlockedAdd(a2 + 2, 1u);
      v3 = *a1;
    }
    if ( !v3 )
    {
LABEL_7:
      *a1 = a2;
      return a1;
    }
LABEL_6:
    sub_4343A0(v3);
    goto LABEL_7;
  }
  return a1;
}
