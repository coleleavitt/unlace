__int64 __fastcall sub_9511F0(void *ptr)
{
  void (__fastcall *v1)(__int64); // r12
  __int64 v2; // r13
  void *v3; // rsi
  void **v4; // r14
  void *v6; // rsi

  if ( !ptr )
    return 0;
  if ( !*((_QWORD *)ptr + 3771) )
  {
    v1 = *((void (__fastcall **)(__int64))ptr + 3767);
    v2 = *((_QWORD *)ptr + 3768);
    sub_950D60(*((void ***)ptr + 3773));
    v3 = *((void **)ptr + 3780);
    *((_QWORD *)ptr + 3773) = 0;
    *((_QWORD *)ptr + 3774) = 0;
    *((_DWORD *)ptr + 7552) = 0;
    if ( v3 )
    {
      if ( v1 )
      {
        v1(v2);
        v4 = *((void ***)ptr + 3777);
        *((_QWORD *)ptr + 3780) = 0;
        if ( !v4 )
          goto LABEL_12;
        if ( !*v4 )
          goto LABEL_8;
        goto LABEL_7;
      }
      free(v3);
      v4 = *((void ***)ptr + 3777);
      *((_QWORD *)ptr + 3780) = 0;
      if ( !v4 )
        goto LABEL_11;
      v6 = *v4;
      if ( *v4 )
LABEL_24:
        free(v6);
    }
    else
    {
      v4 = *((void ***)ptr + 3777);
      if ( !v4 )
      {
LABEL_10:
        if ( !v1 )
        {
LABEL_11:
          free(ptr);
          return 0;
        }
LABEL_12:
        ((void (__fastcall *)(__int64, void *))v1)(v2, ptr);
        return 0;
      }
      v6 = *v4;
      if ( *v4 )
      {
        if ( v1 )
        {
LABEL_7:
          v1(v2);
LABEL_8:
          ((void (__fastcall *)(__int64, void **))v1)(v2, v4);
LABEL_9:
          *((_QWORD *)ptr + 3777) = 0;
          goto LABEL_10;
        }
        goto LABEL_24;
      }
      if ( v1 )
        goto LABEL_8;
    }
    free(v4);
    goto LABEL_9;
  }
  return -64;
}

