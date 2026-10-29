__int64 __fastcall sub_910820(_QWORD *ptr)
{
  _QWORD *v1; // rsi
  void (__fastcall *v2)(_QWORD); // rbp
  __int64 v3; // r12

  if ( ptr )
  {
    v1 = (_QWORD *)ptr[4];
    v2 = (void (__fastcall *)(_QWORD))ptr[756];
    v3 = ptr[757];
    if ( ptr >= v1 && (unsigned __int64)ptr < ptr[5] )
    {
      *((_OWORD *)ptr + 2) = 0;
      *((_OWORD *)ptr + 3) = 0;
      *((_OWORD *)ptr + 4) = 0;
      *((_OWORD *)ptr + 5) = 0;
      ptr[12] = 0;
      if ( !v1 )
        return 0;
      if ( !v2 )
      {
        free(v1);
        return 0;
      }
LABEL_11:
      ((void (__fastcall *)(__int64, _QWORD *))v2)(v3, v1);
      return 0;
    }
    *((_OWORD *)ptr + 2) = 0;
    *((_OWORD *)ptr + 3) = 0;
    *((_OWORD *)ptr + 4) = 0;
    *((_OWORD *)ptr + 5) = 0;
    ptr[12] = 0;
    if ( v1 )
    {
      if ( v2 )
      {
        v2(v3);
LABEL_10:
        v1 = ptr;
        goto LABEL_11;
      }
      free(v1);
    }
    else if ( v2 )
    {
      goto LABEL_10;
    }
    free(ptr);
    return 0;
  }
  return 0;
}
