/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4950A8
// Address: 0x00000000004950A8

//----- (00000000004950A8) ----------------------------------------------------
__int64 __fastcall sub_4950A8(const char *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x19
  char *v5; // x0
  char *v6; // x20
  size_t v7; // x0
  size_t v8; // x22
  unsigned int v10; // w20
  unsigned __int64 v11; // x23
  void *v12; // x0
  char *v13; // x1

  if ( !qword_524530 )
    sub_4944D8();
  v4 = (pthread_mutex_t *)qword_524528;
  sub_494720((pthread_mutex_t *)qword_524528);
  v5 = getenv(a1);
  v6 = v5;
  if ( !v5 || !*v5 )
  {
    v10 = 0;
LABEL_9:
    sub_494760(v4);
    return v10;
  }
  if ( a2 )
  {
    v7 = strlen(v5);
    v8 = v7;
    if ( !v7 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      sub_494760(v4);
      return 1;
    }
    v11 = v7 + 1;
    v12 = *(void **)a2;
    if ( v11 > *(_QWORD *)(a2 + 16) )
    {
      v12 = sub_491288(a2, *(void **)a2, v11, 1u);
      *(_QWORD *)a2 = v12;
    }
    *(_QWORD *)(a2 + 8) = v11;
    v13 = v6;
    v10 = 1;
    memmove(v12, v13, v8);
    *(_BYTE *)(*(_QWORD *)a2 + v8) = 0;
    goto LABEL_9;
  }
  sub_494760(v4);
  return 1;
}
// 523500: using guessed type __int64 qword_523500[512];
// 524528: using guessed type __int64 qword_524528;
// 524530: using guessed type __int64 qword_524530;
