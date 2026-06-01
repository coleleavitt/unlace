__int64 __fastcall sub_525C60(__int64 *a1, __int64 **a2, const char *a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 *v7; // r14
  _BYTE *v8; // rax
  __int64 v9; // rax
  const char *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v4 = &(*a2)[16 * (_QWORD)a2[1]];
  if ( *a2 == v4 )
    return 0;
  v7 = *a2;
  while ( 1 )
  {
    if ( (*((_BYTE *)v7 + 116) & 0x20) != 0
      || v7[3] && (v8 = (_BYTE *)v7[2], *v8 == 95) && v8[1] == 95 && get_tinfo_property(v7[8], 282) )
    {
      v11 = (_QWORD *)sub_5242C0(a1, v7[8]);
      if ( v11 )
      {
        v12 = a4;
        if ( !*((_BYTE *)a2 + 51) )
          v12 = a4 - *v7;
        if ( (unsigned __int8)sub_525C60(a1, *v11, a3, v12) )
          break;
      }
    }
    v9 = 0;
    if ( !*((_BYTE *)a2 + 51) )
      v9 = *v7;
    if ( v9 != a4 )
    {
      v10 = haystack;
      if ( v7[3] )
        v10 = (const char *)v7[2];
      if ( !strcmp(v10, a3) )
        break;
    }
    v7 += 16;
    if ( v4 == v7 )
      return 0;
  }
  return 1;
}

