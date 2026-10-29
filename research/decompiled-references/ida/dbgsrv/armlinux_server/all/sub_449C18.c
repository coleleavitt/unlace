/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449C18
// Address: 0x0000000000449C18

//----- (0000000000449C18) ----------------------------------------------------
__int64 __fastcall sub_449C18(__int64 *a1, __int64 *a2)
{
  unsigned int v4; // w1
  __int64 result; // x0
  __int64 v8; // x0

  if ( !sub_448A08(a1, 2) || !sub_448A08(a2, 2) )
    return 0xFFFFFFFFLL;
  v4 = *(unsigned __int8 *)a1;
  result = *(unsigned __int8 *)a2;
  if ( v4 == (_DWORD)result )
    return result;
  if ( (((_BYTE)v4 - 7) & 0xFD) != 0 && (unsigned __int8)(v4 - 1) > 2u )
    return 0xFFFFFFFFLL;
  if ( (((_BYTE)result - 7) & 0xFD) != 0 && (unsigned __int8)(result - 1) > 2u )
    return 0xFFFFFFFFLL;
  if ( v4 == 3 )
  {
    v8 = sub_449AF8(a2);
    goto LABEL_31;
  }
  if ( v4 <= 3 )
  {
    if ( v4 != 2 )
      goto LABEL_22;
    if ( (_DWORD)result == 3 )
      goto LABEL_40;
    if ( (unsigned int)result > 3 )
    {
      if ( (_DWORD)result == 7 )
      {
        if ( a1[1] )
        {
          v8 = sub_4497A0(a2);
          goto LABEL_31;
        }
        goto LABEL_44;
      }
      if ( (_DWORD)result != 9 )
        goto LABEL_22;
      goto LABEL_39;
    }
    if ( (_DWORD)result != 2 )
      goto LABEL_22;
  }
  else
  {
    if ( v4 != 7 )
    {
      if ( v4 != 9 )
        goto LABEL_22;
      if ( (_DWORD)result != 3 )
      {
        if ( (unsigned int)result > 3 )
        {
          if ( (_DWORD)result != 7 )
          {
            if ( (_DWORD)result == 9 )
              return result;
            goto LABEL_22;
          }
          if ( !a1[1] )
          {
LABEL_44:
            v8 = sub_448E00(a1);
            goto LABEL_31;
          }
          goto LABEL_45;
        }
        if ( (_DWORD)result == 2 )
        {
LABEL_45:
          v8 = sub_4498D8(a2);
          goto LABEL_31;
        }
LABEL_22:
        v8 = 61;
LABEL_23:
        sub_4869C8(v8);
        return 0xFFFFFFFFLL;
      }
LABEL_40:
      v8 = sub_449AF8(a1);
      goto LABEL_31;
    }
    if ( (_DWORD)result == 3 )
      goto LABEL_40;
    if ( (unsigned int)result <= 3 )
    {
      if ( (_DWORD)result != 2 )
        goto LABEL_22;
      if ( a2[1] )
      {
        v8 = sub_4497A0(a1);
LABEL_31:
        if ( !(_DWORD)v8 )
          return *(unsigned __int8 *)a1;
        goto LABEL_23;
      }
      goto LABEL_30;
    }
    if ( (_DWORD)result != 7 )
    {
      if ( (_DWORD)result != 9 )
        goto LABEL_22;
      if ( !a2[1] )
      {
LABEL_30:
        v8 = sub_448E00(a2);
        goto LABEL_31;
      }
LABEL_39:
      v8 = sub_4498D8(a1);
      goto LABEL_31;
    }
  }
  return result;
}
