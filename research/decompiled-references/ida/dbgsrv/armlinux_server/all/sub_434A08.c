/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434A08
// Address: 0x0000000000434A08

//----- (0000000000434A08) ----------------------------------------------------
__int64 __fastcall sub_434A08(__int64 a1)
{
  __int64 v1; // x19
  unsigned int v2; // w2
  __int64 v3; // x20
  __int64 v4; // x1
  _BYTE *v5; // x0
  unsigned int v7; // w0
  __int64 v8; // x21
  unsigned __int64 v9; // x20
  unsigned __int64 v10; // x3
  int v11; // w0
  unsigned int v12; // w0
  char *v13; // x0

  v1 = a1;
  v2 = *(unsigned __int8 *)(a1 + 212);
  if ( v2 == 139 )
    goto LABEL_35;
  if ( v2 > 0x8B )
  {
    if ( v2 != 143 )
    {
      if ( v2 > 0x8F )
      {
        if ( v2 != 218 )
        {
          if ( v2 == 243 )
          {
            sub_43D180(*(__int64 **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 1), -12);
            *(_BYTE *)(v1 + 212) = -87;
            return 0;
          }
          if ( v2 == 217 )
          {
            sub_43D180(*(__int64 **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 2), -41);
            *(_BYTE *)(v1 + 212) = -87;
            return 0;
          }
          goto LABEL_8;
        }
LABEL_31:
        sub_43D180(*(__int64 **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 3), -40);
        *(_BYTE *)(v1 + 212) = -87;
        return 0;
      }
      if ( v2 != 141 )
      {
        v7 = *(_DWORD *)(a1 + 208);
        if ( v7 > 1 )
        {
          v8 = *(_QWORD *)(v1 + 200);
          v9 = v7 - 2;
          goto LABEL_18;
        }
LABEL_28:
        a1 = (unsigned __int8)under_debugger;
        if ( !under_debugger )
          sub_492270(708);
        __break(0x3E8u);
        goto LABEL_31;
      }
    }
    v12 = *(_DWORD *)(a1 + 208);
    if ( v12 <= 2 )
      goto LABEL_28;
    v9 = v12 - 3;
    v8 = *(_QWORD *)(v1 + 200);
LABEL_18:
    *(_DWORD *)(v1 + 208) = v9;
    v10 = *(_QWORD *)(v8 + 8);
    if ( v9 > v10 )
    {
      v13 = *(char **)v8;
      if ( v9 > *(_QWORD *)(v8 + 16) )
      {
        v13 = (char *)sub_491288(v8, *(void **)v8, v9, 1u);
        *(_QWORD *)v8 = v13;
        v10 = *(_QWORD *)(v8 + 8);
      }
      memset(&v13[v10], 0, v9 - v10);
    }
    else if ( v9 >= v10 )
    {
LABEL_20:
      *(_BYTE *)(v1 + 212) = -87;
      return 0;
    }
    *(_QWORD *)(v8 + 8) = v9;
    goto LABEL_20;
  }
  if ( v2 > 0x7F )
  {
    if ( v2 != 137 )
    {
      if ( v2 > 0x89 || v2 == 136 )
      {
        sub_43D180(*(__int64 **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 2), v2 - 4);
        *(_BYTE *)(v1 + 212) = -87;
        return 0;
      }
      goto LABEL_8;
    }
LABEL_35:
    sub_43D180(*(__int64 **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 3), v2 - 4);
    *(_BYTE *)(v1 + 212) = -87;
    return 0;
  }
  if ( v2 >= 0x60 )
  {
    v11 = *(_DWORD *)(a1 + 208);
    if ( !v11 )
      goto LABEL_28;
    v9 = (unsigned int)(v11 - 1);
    v8 = *(_QWORD *)(v1 + 200);
    goto LABEL_18;
  }
  if ( v2 >= 0x40 )
  {
    sub_43D180(*(__int64 **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 1), v2 - 32);
    *(_BYTE *)(v1 + 212) = -87;
    return 0;
  }
LABEL_8:
  v3 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -87;
  v4 = *(_QWORD *)(v3 + 8);
  if ( (unsigned __int64)(v4 + 1) > *(_QWORD *)(v3 + 16) )
  {
    v5 = sub_491288(v3, *(void **)v3, v4 + 1, 1u);
    *(_QWORD *)v3 = v5;
    v4 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    v5 = *(_BYTE **)v3;
  }
  v5[v4] = -87;
  ++*(_QWORD *)(v3 + 8);
  *(_BYTE *)(v1 + 212) = -87;
  ++*(_DWORD *)(v1 + 208);
  return 0;
}
// 52451C: using guessed type char under_debugger;
