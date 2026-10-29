/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8437C
// Address: 0x0008437C

//----- (0008437C) --------------------------------------------------------
_DWORD *__fastcall sub_8437C(int a1)
{
  int v2; // r0
  int v3; // r6
  unsigned __int8 *v4; // r5
  int v5; // r2
  __int64 v6; // kr00_8
  int v7; // r1
  bool v8; // zf
  int v9; // r2
  _DWORD *result; // r0
  int v11; // r1
  int v12; // r5

  v2 = sub_84278((unsigned __int8 **)(a1 + 12));
  v3 = v2;
  if ( v2 > 0 )
  {
    v4 = *(unsigned __int8 **)(a1 + 12);
    if ( v2 <= *(_DWORD *)(a1 + 4) - (int)v4 )
    {
      v5 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 12) = &v4[v2];
      if ( (v5 & 4) != 0 && v4[v2] == 36 )
        *(_DWORD *)(a1 + 12) = &v4[v2 + 1];
      v6 = *(_QWORD *)(a1 + 20);
      if ( v2 <= 9 || memcmp(v4, "_GLOBAL_", 8u) )
        goto LABEL_27;
      v7 = v4[8];
      v8 = v7 == 95;
      if ( v7 != 95 )
        v8 = v7 == 46;
      v9 = v8;
      if ( v7 == 36 )
        v9 |= 1u;
      if ( v9 && v4[9] == 78 )
      {
        *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 48) + 22 - v3;
        if ( SHIDWORD(v6) > (int)v6 )
        {
          v12 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 20) = v6 + 1;
          result = (_DWORD *)(v12 + 16 * v6);
          result[1] = 0;
          *result = 0;
          result[2] = "(anonymous namespace)";
          result[3] = 21;
          goto LABEL_19;
        }
      }
      else
      {
LABEL_27:
        if ( SHIDWORD(v6) > (int)v6 )
        {
          v11 = *(_DWORD *)(a1 + 16);
          result = (_DWORD *)(v11 + 16 * v6);
          result[1] = 0;
          *(_DWORD *)(a1 + 20) = v6 + 1;
          if ( v4 )
          {
            result[1] = 0;
            *(_DWORD *)(v11 + 16 * v6) = 0;
            result[2] = v4;
            result[3] = v3;
            goto LABEL_19;
          }
        }
      }
    }
    result = nullptr;
LABEL_19:
    *(_DWORD *)(a1 + 44) = result;
    return result;
  }
  return nullptr;
}
