/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_960EC
// Address: 0x000960EC

//----- (000960EC) --------------------------------------------------------
_DWORD *__fastcall sub_960EC(__int64 *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  __int64 v5; // r0
  __int64 v6; // r0
  int v7; // r5
  int v8; // r2
  int v9; // r3
  __int64 v10; // r0
  _DWORD *v11; // r6
  _DWORD *v12; // r0
  _DWORD *result; // r0
  __int64 v14; // r0
  _DWORD *v15; // [sp+4h] [bp-24h] BYREF
  _DWORD *v16; // [sp+8h] [bp-20h] BYREF

  v16 = nullptr;
  if ( sub_924C8(a1, "srN", (unsigned __int8 *)"") )
  {
    v16 = sub_96E2C(a1, v2, v3, v4);
    if ( v16 )
    {
      v5 = *a1;
      if ( HIDWORD(v5) != (_DWORD)v5 && *(_BYTE *)v5 == 73 )
      {
        v15 = sub_93D60(a1, 0);
        if ( v15 )
        {
          v16 = sub_94038((int)a1, (int *)&v16, (int *)&v15);
          goto LABEL_9;
        }
        return nullptr;
      }
LABEL_9:
      while ( 1 )
      {
        v6 = *a1;
        if ( (_DWORD)v6 != HIDWORD(v6) && *(_BYTE *)v6 == 69 )
          break;
        v15 = sub_96EBC((unsigned __int8 **)a1);
        if ( !v15 )
          return nullptr;
        v16 = sub_96F28((int)a1, (int *)&v16, (int *)&v15);
      }
LABEL_24:
      *(_DWORD *)a1 = v6 + 1;
LABEL_33:
      v15 = sub_96F58((unsigned __int8 **)a1);
      if ( v15 )
        return sub_96F28((int)a1, (int *)&v16, (int *)&v15);
      return nullptr;
    }
    return nullptr;
  }
  v7 = sub_924C8(a1, "gs", (unsigned __int8 *)"");
  if ( sub_924C8(a1, "sr", (unsigned __int8 *)"") )
  {
    v10 = *a1;
    if ( HIDWORD(v10) != (_DWORD)v10 && (unsigned int)*(unsigned __int8 *)v10 - 48 <= 9 )
    {
      v11 = nullptr;
      while ( 1 )
      {
        v12 = sub_96EBC((unsigned __int8 **)a1);
        v15 = v12;
        if ( !v12 )
          return nullptr;
        if ( v11 )
        {
          v12 = sub_96F28((int)a1, (int *)&v16, (int *)&v15);
        }
        else if ( v7 )
        {
          v12 = sub_97064((int)a1, (int *)&v15);
        }
        v11 = v12;
        v16 = v12;
        v6 = *a1;
        if ( (_DWORD)v6 != HIDWORD(v6) && *(_BYTE *)v6 == 69 )
          goto LABEL_24;
      }
    }
    v16 = sub_96E2C(a1, SHIDWORD(v10), v8, v9);
    if ( v16 )
    {
      v14 = *a1;
      if ( HIDWORD(v14) == (_DWORD)v14 || *(_BYTE *)v14 != 73 )
        goto LABEL_33;
      v15 = sub_93D60(a1, 0);
      if ( v15 )
      {
        v16 = sub_94038((int)a1, (int *)&v16, (int *)&v15);
        goto LABEL_33;
      }
    }
    return nullptr;
  }
  result = sub_96F58((unsigned __int8 **)a1);
  v16 = result;
  if ( result && v7 == 1 )
  {
    result = sub_97064((int)a1, (int *)&v16);
    v16 = result;
  }
  return result;
}
// 96118: variable 'v2' is possibly undefined
// 96118: variable 'v3' is possibly undefined
// 96118: variable 'v4' is possibly undefined
// 9620E: variable 'v8' is possibly undefined
// 9620E: variable 'v9' is possibly undefined
