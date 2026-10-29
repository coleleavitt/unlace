/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407858
// Address: 0x0000000000407858

//----- (0000000000407858) ----------------------------------------------------
__int64 __fastcall sub_407858(__int64 a1, int a2, char *a3, size_t a4)
{
  int v4; // w19
  unsigned int v7; // w25
  unsigned int v8; // w0
  int v10; // [xsp+4Ch] [xbp-24h] BYREF
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  __int64 v12; // [xsp+58h] [xbp-18h]
  __int64 v13; // [xsp+60h] [xbp-10h]

  v4 = a2;
  v7 = (unsigned __int8)sub_4075E0(a2, a3, a4);
  if ( !v7 )
  {
    ptr = nullptr;
    v12 = 0;
    v13 = 0;
    do
    {
      if ( !sub_4076F8(&v10, (__int64)&ptr, v4) || (v4 = v10, v10 == 1) )
      {
        *a3 = 0;
        goto LABEL_7;
      }
      v8 = (unsigned __int8)sub_4075E0(v10, a3, a4);
    }
    while ( !v8 );
    v7 = v8;
LABEL_7:
    if ( ptr )
    {
      v12 = 0;
      j__free(ptr);
    }
  }
  return v7;
}
