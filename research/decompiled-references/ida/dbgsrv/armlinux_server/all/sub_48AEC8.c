/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48AEC8
// Address: 0x000000000048AEC8

//----- (000000000048AEC8) ----------------------------------------------------
__int64 *sub_48AEC8()
{
  size_t v1; // x21
  void *v2; // x22
  char *v3; // x1
  __int64 v4; // x3
  char *v5; // x0
  pthread_mutex_t *v6; // [xsp+38h] [xbp-28h] BYREF
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  size_t v8; // [xsp+48h] [xbp-18h]
  __int64 v9; // [xsp+50h] [xbp-10h]

  sub_494748(&v6);
  if ( qword_5224E8 )
    goto LABEL_6;
  ptr = nullptr;
  v8 = 0;
  v9 = 0;
  if ( (unsigned __int8)sub_4950A8("IDAUSR", (__int64)&ptr) )
  {
    sub_48AC78((__int64)&qword_5224E0, (char *)ptr);
    if ( qword_5224E8 )
      goto LABEL_4;
  }
  else if ( qword_5224E8 )
  {
    goto LABEL_4;
  }
  if ( (unsigned __int8)sub_48AA60((__int64)&ptr) )
  {
    v1 = v8;
    v2 = nullptr;
    if ( v8 )
    {
      v2 = sub_491248(v8);
      memcpy(v2, ptr, v1);
    }
    v3 = (char *)qword_5224E0;
    v4 = qword_5224E8;
    if ( qword_5224E8 + 1 > (unsigned __int64)qword_5224F0 )
    {
      v3 = (char *)sub_491288((__int64)&qword_5224E0, (void *)qword_5224E0, qword_5224E8 + 1, 0x18u);
      qword_5224E0 = (__int64)v3;
      v4 = qword_5224E8;
    }
    v5 = &v3[24 * v4];
    *(_QWORD *)v5 = v2;
    *((_QWORD *)v5 + 1) = v1;
    *((_QWORD *)v5 + 2) = v1;
    if ( ++qword_5224E8 )
      goto LABEL_4;
LABEL_10:
    sub_40A608(
      "IDA could not find a valid user directory.\n"
      "Please make sure that the HOME or IDAUSR environment variables are set.\n");
  }
  if ( !qword_5224E8 )
    goto LABEL_10;
LABEL_4:
  if ( ptr )
  {
    v8 = 0;
    j__free(ptr);
  }
LABEL_6:
  sub_494760(v6);
  return &qword_5224E0;
}
// 48AEC8: could not find valid save-restore pair for x21
// 5224E0: using guessed type __int64 qword_5224E0;
// 5224E8: using guessed type __int64 qword_5224E8;
// 5224F0: using guessed type __int64 qword_5224F0;
