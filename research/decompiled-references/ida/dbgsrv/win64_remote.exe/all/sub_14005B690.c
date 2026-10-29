/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B690
// Address: 0x000000014005B690

//----- (000000014005B690) ----------------------------------------------------
__int64 __fastcall sub_14005B690(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // r8
  unsigned __int16 v3; // r10
  unsigned int v6; // r9d
  __int64 result; // rax
  unsigned __int16 v8; // cx
  unsigned __int8 *v9; // rdx
  __int16 v10; // ax
  __int16 v11; // r10
  unsigned __int16 v12; // dx
  unsigned __int8 *v13; // rax
  unsigned __int16 v14; // r10

  v2 = (unsigned __int8 *)*a1;
  v3 = 0;
  v6 = 0;
  if ( *a1 < a2 )
    v6 = *v2++;
  result = v6;
  if ( (v6 & 0x80u) != 0 )
  {
    if ( (v6 & 0xC0) == 0xC0 )
    {
      if ( (v6 & 0xE0) == 0xE0 )
      {
        v8 = 0;
        v9 = v2;
        if ( (unsigned __int64)v2 < a2 )
        {
          v9 = v2 + 1;
          v8 = *v2 << 8;
          if ( (unsigned __int64)(v2 + 1) < a2 )
          {
            v10 = *v9;
            v9 = v2 + 2;
            v8 |= v10;
          }
        }
        v2 = v9;
        if ( (unsigned __int64)v9 < a2 )
        {
          v11 = *v9;
          v2 = v9 + 1;
          goto LABEL_14;
        }
      }
      else if ( (unsigned __int64)v2 >= a2 )
      {
        v8 = 0;
      }
      else
      {
        v12 = *v2 + ((v6 & 0x3F) << 8);
        v13 = v2 + 1;
        v2 = v13;
        v8 = v12;
        if ( (unsigned __int64)v13 < a2 )
        {
          v11 = *v13;
          v2 = v13 + 1;
LABEL_14:
          v3 = v11 << 8;
          if ( (unsigned __int64)v2 < a2 )
          {
            v14 = *v2 | v3;
            *a1 = (unsigned __int64)(v2 + 1);
            return v14 + (v8 << 16);
          }
        }
      }
      *a1 = (unsigned __int64)v2;
      return v3 + (v8 << 16);
    }
    if ( (unsigned __int64)v2 < a2 )
    {
      result = ((v6 & 0xFFFFFF7F) << 8) + *v2;
      *a1 = (unsigned __int64)(v2 + 1);
      return result;
    }
    result = v6;
  }
  *a1 = (unsigned __int64)v2;
  return result;
}
