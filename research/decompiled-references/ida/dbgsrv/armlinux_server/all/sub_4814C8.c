/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4814C8
// Address: 0x00000000004814C8

//----- (00000000004814C8) ----------------------------------------------------
char *__fastcall sub_4814C8(char *result, __int64 *a2, __int64 a3)
{
  __int64 v3; // x20
  __int64 v6; // x22
  __int64 v7; // x3
  char *v8; // x0
  __int64 v9; // [xsp+38h] [xbp-28h]
  __int64 v10; // [xsp+40h] [xbp-20h]
  __int64 v11; // [xsp+48h] [xbp-18h]
  __int64 v12; // [xsp+50h] [xbp-10h]
  __int64 v13; // [xsp+58h] [xbp-8h]

  if ( a3 )
  {
    v3 = (__int64)result;
    v6 = 0;
    v7 = *((_QWORD *)result + 1);
    do
    {
      v9 = *a2;
      v10 = a2[1];
      v11 = a2[2];
      v12 = a2[3];
      ++v6;
      v13 = a2[4];
      v8 = *(char **)v3;
      if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(v3 + 16) )
      {
        v8 = (char *)sub_491288(v3, *(void **)v3, v7 + 1, 0x28u);
        v7 = *(_QWORD *)(v3 + 8);
        *(_QWORD *)v3 = v8;
      }
      result = &v8[40 * v7];
      a2 += 5;
      *(_QWORD *)result = v9;
      *((_QWORD *)result + 1) = v10;
      *((_QWORD *)result + 2) = v11;
      *((_QWORD *)result + 3) = v12;
      *((_QWORD *)result + 4) = v13;
      v7 = *(_QWORD *)(v3 + 8) + 1LL;
      *(_QWORD *)(v3 + 8) = v7;
    }
    while ( a3 != v6 );
  }
  return result;
}
