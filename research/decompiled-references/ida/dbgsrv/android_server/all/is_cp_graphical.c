/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_cp_graphical
// Address: 0x00000000000ABC5C

//----- (00000000000ABC5C) ----------------------------------------------------
__int64 __fastcall is_cp_graphical(pthread_mutex_t *a1)
{
  int v1; // w19
  __int64 v2; // x0

  v1 = (int)a1;
  v2 = sub_ABB20(a1);
  if ( (v1 | 1) == 0x2029
    || BYTE2(v2) < 2u
    || (unsigned __int16)v2 == 270
    || (unsigned __int16)v2 == 290
    || (unsigned int)(v1 - 8206) < 2
    || v1 == 1564 )
  {
    return 0;
  }
  else
  {
    return (BYTE2(v2) != 5) & (unsigned __int8)((unsigned int)(v1 - 8234) > 4);
  }
}
