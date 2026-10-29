/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4399D0
// Address: 0x00000000004399D0

//----- (00000000004399D0) ----------------------------------------------------
__int64 __fastcall sub_4399D0(__int64 a1, const char *a2)
{
  pthread_mutex_t *v2; // r12
  __int64 v3; // rbx
  __int64 v4; // r13
  const char *v5; // rdi
  __int64 v6; // rbx

  if ( !a2 )
    return 0;
  v2 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v3 = *(_QWORD *)(a1 + 88);
  v4 = v3 + 56LL * *(_QWORD *)(a1 + 96);
  if ( v4 == v3 )
  {
LABEL_10:
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = s1;
      if ( *(_QWORD *)(v3 + 8) )
        v5 = *(const char **)v3;
      if ( !strcmp(v5, a2) )
        break;
      v3 += 56;
      if ( v4 == v3 )
        goto LABEL_10;
    }
    v6 = v3 + 24;
  }
  sub_482F10(v2);
  return v6;
}
