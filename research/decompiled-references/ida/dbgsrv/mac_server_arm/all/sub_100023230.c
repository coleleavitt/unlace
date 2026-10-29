/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023230
// Address: 0x0000000100023230

//----- (0000000100023230) ----------------------------------------------------
__int64 __fastcall sub_100023230(__int64 a1)
{
  _QWORD *v2; // x20
  char *v3; // x0
  char *v4; // x0
  char *v5; // x21

  *(_BYTE *)(a1 + 220) = 0;
  sub_10002CBA4(*(_QWORD **)(a1 + 200), 1, *(_WORD *)(a1 + 120));
  if ( *(unsigned __int8 *)(a1 + 212) != 175 )
    sub_100023320(a1);
  sub_10002CE24(*(_QWORD *)(a1 + 192) + 32LL, (_QWORD *)(a1 + 392));
  if ( *(_QWORD *)(a1 + 184) )
  {
    v2 = *(_QWORD **)(a1 + 192);
    v3 = v2[1] ? (char *)*v2 : &byte_100075A30;
    v4 = strchr(v3, 46);
    if ( v4 )
    {
      v5 = v4;
      if ( !strcmp(v4 + 1, "__getattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 56LL) = sub_10002D858(*(__int64 **)(a1 + 104), (__int64)v2);
      }
      else if ( !strcmp(v5 + 1, "__setattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 60LL) = sub_10002D858(*(__int64 **)(a1 + 104), (__int64)v2);
      }
    }
  }
  sub_100021658(a1);
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
