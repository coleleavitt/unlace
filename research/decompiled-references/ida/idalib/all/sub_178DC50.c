_BOOL8 __fastcall sub_178DC50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BOOL8 result; // rax
  char v7; // al
  __int64 **v8; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rcx

  result = 0;
  if ( a1 )
  {
    v7 = *(_BYTE *)(a1 + 29);
    if ( (v7 & 1) != 0 )
    {
      v8 = (__int64 **)sub_B8C3D0(a1, a2, a3, a4, a5, a6);
      v9 = *v8;
      v10 = (unsigned __int64)&(*v8)[*((unsigned int *)v8 + 2)];
      if ( (unsigned __int64)v9 < v10 )
      {
        v13 = v9;
        while ( *(_WORD *)(*v13 + 36) != 165 )
        {
          if ( (__int64 *)v10 == ++v13 )
            return (*(_BYTE *)(a1 + 29) & 2) != 0;
        }
        if ( (__int64 *)v10 == v13 )
          return (*(_BYTE *)(a1 + 29) & 2) != 0;
      }
      else
      {
        if ( v9 == (__int64 *)v10 )
          return (*(_BYTE *)(a1 + 29) & 2) != 0;
        if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 165 )
        {
          v11 = (__int64 *)(v10 + 8);
          while ( v9 != v11 )
          {
            v12 = *v11++;
            if ( *(_WORD *)(v12 + 36) == 165 )
              goto LABEL_13;
          }
          return (*(_BYTE *)(a1 + 29) & 2) != 0;
        }
      }
LABEL_13:
      while ( *(_WORD *)(*v9 + 36) != 165 )
        ++v9;
      return (*(_BYTE *)(*v9 + 38) & 4) != 0;
    }
    else
    {
      return (v7 & 2) != 0;
    }
  }
  return result;
}
