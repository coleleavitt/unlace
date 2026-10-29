/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448A08
// Address: 0x0000000000448A08

//----- (0000000000448A08) ----------------------------------------------------
__int64 *__fastcall sub_448A08(__int64 *a1, char a2)
{
  __int64 *v2; // x21
  __int64 v5; // x22
  __int64 *v6; // x19
  __int64 *v7; // x0
  __int64 **v8; // x3
  __int64 **v9; // x0
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  __int64 v11; // [xsp+48h] [xbp-18h]
  unsigned __int64 v12; // [xsp+50h] [xbp-10h]

  v2 = a1;
  if ( !a1 )
  {
    sub_4869C8(1563);
    return v2;
  }
  if ( *(_BYTE *)a1 == 10 )
  {
    ptr = nullptr;
    v11 = 0;
    v12 = 0;
    v5 = sub_43CF60();
    v6 = v2;
    while ( 1 )
    {
      v7 = (__int64 *)sub_444718(v6 + 1, v5);
      v6 = v7;
      if ( !v7 )
        break;
      if ( *(_BYTE *)v7 != 10 || (a2 & 1) != 0 )
      {
        if ( (a2 & 2) == 0 )
        {
          v2 = v7;
LABEL_18:
          if ( ptr )
          {
            v11 = 0;
            j__free(ptr);
          }
          return v2;
        }
        *(_BYTE *)v2 = 2;
        if ( !(unsigned int)sub_4488B8(v2, v7) )
          goto LABEL_18;
LABEL_17:
        v2 = nullptr;
        goto LABEL_18;
      }
      v8 = (__int64 **)((char *)ptr + 8 * v11);
      if ( ptr != v8 )
      {
        if ( v7 == *(__int64 **)ptr )
          break;
        v9 = (__int64 **)ptr;
        while ( v8 != ++v9 )
        {
          if ( v6 == *v9 )
            goto LABEL_16;
        }
      }
      if ( v11 + 1 > v12 )
      {
        ptr = sub_491288((__int64)&ptr, ptr, v11 + 1, 8u);
        v8 = (__int64 **)((char *)ptr + 8 * v11);
      }
      *v8 = v6;
      ++v11;
    }
LABEL_16:
    sub_4869C8(1563);
    goto LABEL_17;
  }
  return v2;
}
