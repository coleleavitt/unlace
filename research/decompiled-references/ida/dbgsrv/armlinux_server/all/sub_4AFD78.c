/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFD78
// Address: 0x00000000004AFD78

//----- (00000000004AFD78) ----------------------------------------------------
__int64 __fastcall sub_4AFD78(__int64 result, unsigned __int8 **a2)
{
  unsigned __int64 v2; // x2
  _BYTE *v3; // x22
  __int64 v4; // x23
  size_t v5; // x21
  __int64 v7; // x19
  unsigned __int8 *v8; // x1
  _BYTE *v9; // x22
  __int64 v10; // [xsp+48h] [xbp-8h] BYREF

  if ( (unsigned __int8 **)result != a2 )
  {
    v2 = 15;
    v4 = result + 16;
    v3 = *(_BYTE **)result;
    v5 = (size_t)a2[1];
    if ( result + 16 != *(_QWORD *)result )
      v2 = *(_QWORD *)(result + 16);
    v7 = result;
    if ( v2 < v5 )
    {
      v10 = (__int64)a2[1];
      v3 = sub_4AFA78(result, (unsigned __int64 *)&v10, v2);
      if ( v4 != *(_QWORD *)v7 )
        j__free_0(*(void **)v7);
      result = v10;
      *(_QWORD *)v7 = v3;
      *(_QWORD *)(v7 + 16) = result;
      if ( !v5 )
        goto LABEL_8;
    }
    else if ( !v5 )
    {
LABEL_8:
      *(_QWORD *)(v7 + 8) = v5;
      v3[v5] = 0;
      return result;
    }
    v8 = *a2;
    if ( v5 == 1 )
    {
      result = *v8;
      *v3 = result;
      v3 = *(_BYTE **)v7;
      goto LABEL_8;
    }
    result = (__int64)memcpy(v3, v8, v5);
    v9 = *(_BYTE **)v7;
    *(_QWORD *)(v7 + 8) = v5;
    v9[v5] = 0;
  }
  return result;
}
