/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448EA0
// Address: 0x0000000000448EA0

//----- (0000000000448EA0) ----------------------------------------------------
__int64 __fastcall sub_448EA0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  _QWORD *v4; // x24
  __int64 v5; // x25
  _QWORD *v7; // x0
  __int64 v8; // x1
  _QWORD *v9; // x21
  unsigned int v10; // w22
  _QWORD *v11; // x0
  _QWORD *v12; // x20
  size_t v13; // x23
  void *v14; // x0
  const char *v15; // x0

  if ( a3 != a2 )
  {
    v3 = a2;
    v4 = (_QWORD *)result;
    v5 = result + 8;
    while ( 1 )
    {
      v7 = sub_445280(v4, v4 + 1, (const char **)(v3 + 32));
      v9 = (_QWORD *)v8;
      if ( v8 )
        break;
LABEL_4:
      result = sub_49F6E8(v3);
      v3 = result;
      if ( a3 == result )
        return result;
    }
    v10 = v7 != nullptr;
    if ( v5 == v8 )
      v10 = 1;
    if ( v10 )
    {
LABEL_9:
      v11 = sub_49E050(0x58u);
      v11[4] = 0;
      v11[5] = 0;
      v12 = v11;
      v11[6] = 0;
      v13 = *(_QWORD *)(v3 + 40);
      if ( v13 )
      {
        v14 = sub_491248(*(_QWORD *)(v3 + 40));
        v12[4] = v14;
        v12[6] = v13;
        memcpy(v14, *(const void **)(v3 + 32), v13);
        v12[5] = v13;
      }
      *((_BYTE *)v12 + 56) = 2;
      v12[8] = 0;
      v12[9] = 0;
      v12[10] = 0;
      sub_4488B8(v12 + 7, (__int64 *)(v3 + 56));
      sub_49F830(v10, (__int64)v12, v9, v4 + 1);
      ++v4[5];
      goto LABEL_4;
    }
    v15 = (const char *)&qword_4B2D48;
    if ( *(_QWORD *)(v3 + 40) )
    {
      v15 = *(const char **)(v3 + 32);
      if ( !*(_QWORD *)(v8 + 40) )
        goto LABEL_14;
    }
    else if ( !*(_QWORD *)(v8 + 40) )
    {
LABEL_14:
      v10 = (unsigned int)strcmp(v15, (const char *)&qword_4B2D48) >> 31;
      goto LABEL_9;
    }
    v10 = (unsigned int)strcmp(v15, *(const char **)(v8 + 32)) >> 31;
    goto LABEL_9;
  }
  return result;
}
// 448F44: variable 'v8' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
