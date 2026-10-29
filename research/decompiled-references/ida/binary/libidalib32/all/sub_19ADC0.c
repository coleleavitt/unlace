__int64 __fastcall sub_19ADC0(void ***a1, void *a2)
{
  __int64 result; // rax
  void **v3; // rax
  __int64 v4; // rdx

  result = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( *(void **)(TProgram::application + 224LL) == a2 )
      {
        result = unk_2530A9;
        if ( !unk_2530A9 )
          break;
      }
      v3 = *a1;
      v4 = (__int64)&(*a1)[(_QWORD)a1[1]];
      if ( *a1 != (void **)v4 )
      {
        while ( *v3 != a2 )
        {
          if ( (void **)v4 == ++v3 )
            goto LABEL_8;
        }
        if ( (void **)v4 != v3 )
        {
          sub_19A9A0(a1, a2);
          return 1;
        }
      }
LABEL_8:
      a1 = (void ***)a1[15];
      if ( !a1 )
        return 0;
    }
  }
  return result;
}

