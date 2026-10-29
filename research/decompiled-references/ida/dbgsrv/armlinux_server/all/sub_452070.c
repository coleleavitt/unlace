/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452070
// Address: 0x0000000000452070

//----- (0000000000452070) ----------------------------------------------------
char *__fastcall sub_452070(__int64 *a1, char *a2, __int64 a3, __int64 a4, const char *a5, unsigned __int8 a6)
{
  int v11; // w24
  pthread_mutex_t *v12; // x26
  __int64 v13; // x19
  __int64 v14; // x20
  const char *v15; // x0
  unsigned __int8 *v16; // x2
  char *v17; // x0
  char *v18; // x25
  __int64 v20; // x20
  __int64 v21; // x19
  __int64 v22; // x20
  unsigned __int8 *v24; // x2
  char *v25; // x0

  v11 = a6;
  v12 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v13 = a1[3];
  v14 = v13 + 24 * a1[4];
  if ( v14 != v13 )
  {
    if ( !a5 )
      goto LABEL_10;
    while ( 1 )
    {
      v15 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v13 + 8) )
        v15 = *(const char **)v13;
      v13 += 24;
      if ( !strcasecmp(v15, a5) )
        break;
      if ( v13 == v14 )
        goto LABEL_16;
    }
    for ( ; v14 != v13; v13 += 24 )
    {
LABEL_10:
      v16 = (unsigned __int8 *)&qword_4B2D48;
      if ( *(_QWORD *)(v13 + 8) )
        v16 = *(unsigned __int8 **)v13;
      v17 = sub_48F278(a2, a3, v16, a4, 0);
      v18 = v17;
      if ( v11 )
      {
        if ( (unsigned __int8)sub_4504C0(v17, a3) )
          goto LABEL_14;
      }
      else if ( (unsigned __int8)sub_490268(v17) )
      {
        goto LABEL_14;
      }
    }
  }
LABEL_16:
  v20 = a1[1];
  if ( !v20 )
  {
    sub_48B0B8((__int64)a1, "idc", 0);
    v20 = a1[1];
  }
  v21 = *a1;
  v22 = *a1 + 24 * v20;
  if ( *a1 == v22 )
  {
LABEL_27:
    v18 = sub_48B308(a2, a3, a4, nullptr);
  }
  else
  {
    while ( 1 )
    {
      v24 = (unsigned __int8 *)&qword_4B2D48;
      if ( *(_QWORD *)(v21 + 8) )
        v24 = *(unsigned __int8 **)v21;
      v25 = sub_48F278(a2, a3, v24, a4, 0);
      v18 = v25;
      if ( v11 ? sub_4504C0(v25, a3) : (unsigned __int8)sub_490268(v25) )
        break;
      v21 += 24;
      if ( v22 == v21 )
        goto LABEL_27;
    }
  }
LABEL_14:
  sub_494760(v12);
  return v18;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522288: using guessed type __int64 qword_522288;
