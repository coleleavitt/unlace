/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4504C0
// Address: 0x00000000004504C0

//----- (00000000004504C0) ----------------------------------------------------
__int64 __fastcall sub_4504C0(char *a1, __int64 a2)
{
  unsigned int v4; // w22
  __int64 v5; // x0
  char *v6; // x19
  _BYTE *v7; // x0
  unsigned __int8 *v8; // x1
  void *v9; // x0
  void *ptr; // [xsp+50h] [xbp-5060h] BYREF
  __int64 v12; // [xsp+58h] [xbp-5058h]
  unsigned __int64 v13; // [xsp+60h] [xbp-5050h]
  _BYTE v14[4]; // [xsp+68h] [xbp-5048h] BYREF
  unsigned __int8 v15[8228]; // [xsp+6Ch] [xbp-5044h] BYREF
  __int64 v16; // [xsp+2090h] [xbp-3020h]
  int v17; // [xsp+209Ch] [xbp-3014h]
  unsigned __int8 v18[4096]; // [xsp+40A8h] [xbp-1008h] BYREF

  v4 = (unsigned __int8)sub_490268(a1);
  if ( v4 )
    return v4;
  ptr = nullptr;
  v12 = 0;
  v13 = 0;
  v18[0] = 0;
  do
  {
    v6 = sub_48F420(a1);
    if ( v12 + 1 <= v13 )
    {
      *((_QWORD *)ptr + v12) = v6;
      v5 = ++v12;
      if ( a1 == v6 )
        goto LABEL_7;
    }
    else
    {
      ptr = sub_491288((__int64)&ptr, ptr, v12 + 1, 8u);
      *((_QWORD *)ptr + v12) = v6;
      v5 = ++v12;
      if ( a1 == v6 )
        goto LABEL_7;
    }
    *(v6 - 1) = 0;
  }
  while ( !(unsigned __int8)sub_4902C8(a1) );
  sub_493350((unsigned __int64)v18, (unsigned __int8 *)a1, 4096);
  v5 = v12;
LABEL_7:
  if ( !v5 )
  {
LABEL_14:
    sub_493350((unsigned __int64)a1, v18, a2);
    v9 = ptr;
    v4 = 1;
    if ( !ptr )
      return v4;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v8 = *((unsigned __int8 **)ptr + v5 - 1);
    v12 = v5 - 1;
    if ( v18[0] )
      sub_48F278((char *)v18, 4096, v18, v8, 0);
    else
      sub_493350((unsigned __int64)v18, v8, 4096);
    v16 = 0;
    v17 = 0;
    if ( (unsigned int)sub_48EBA8(v18, (__int64)v14, (unsigned __int8)(v12 != 0) << 14) )
      break;
    v7 = sub_48F420(v18);
    sub_493350((unsigned __int64)v7, v15, 4096 - (v7 - v18));
    sub_48EBF0((__int64)v14);
    v5 = v12;
    if ( !v12 )
      goto LABEL_14;
  }
  sub_48EBF0((__int64)v14);
  v9 = ptr;
  if ( ptr )
  {
LABEL_15:
    v12 = 0;
    j__free(v9);
  }
  return v4;
}
