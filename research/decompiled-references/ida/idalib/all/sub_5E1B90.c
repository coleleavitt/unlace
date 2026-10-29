unsigned __int64 __fastcall sub_5E1B90(void **a1)
{
  _BYTE *v1; // rdx
  _BYTE *v2; // rsi
  char v3; // al
  _BYTE v5[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v6; // [rsp+408h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v1 = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    if ( *v1 == 95 )
    {
      do
      {
        v3 = v2[1];
        if ( !v3 )
          break;
        ++v2;
      }
      while ( v3 == 95 );
      if ( v1 != v2 )
      {
        qstrncpy(v5, v2, 1024);
        qfree(*a1);
        *a1 = (void *)qstrdup(v5);
      }
    }
  }
  return v6 - __readfsqword(0x28u);
}
