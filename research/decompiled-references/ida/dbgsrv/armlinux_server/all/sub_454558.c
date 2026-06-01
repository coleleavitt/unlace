/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454558
// Address: 0x0000000000454558

//----- (0000000000454558) ----------------------------------------------------
__int64 __fastcall sub_454558(
        __int64 a1,
        char *s,
        const char *a3,
        unsigned int a4,
        char a5,
        bool *a6,
        int a7,
        int a8,
        char a9)
{
  __int64 result; // x0
  __int64 *v16; // x0
  __int64 *v17; // x22
  _QWORD *v18; // x1
  __int64 v19; // x5
  char *v20; // x1
  _QWORD *v21; // x22
  __int64 v22; // x21
  _QWORD *v23; // x20
  __int64 *v24; // x0
  __int64 v25; // x22
  size_t v26; // x0
  size_t v27; // x27
  unsigned int *v28; // x2
  int v29; // w1
  unsigned __int64 v30; // x28
  void *v31; // x0
  __int64 *v32; // [xsp+70h] [xbp-10h] BYREF

  if ( *(_BYTE *)(a1 + 760) )
  {
    *(_BYTE *)(a1 + 760) = 0;
    v16 = (__int64 *)sub_49E050(0x38u);
    *v16 = 0;
    v17 = v16;
    v18 = *(_QWORD **)(a1 + 696);
    v16[1] = v18[1];
    v16[2] = 0;
    v16[3] = v18[3];
    v19 = v18[5];
    v16[4] = v18[4];
    v16[5] = v19;
    v32 = v16;
    v16[6] = 0;
    sub_452DF8((unsigned __int64 *)v16, (__int64)v18);
    *(_QWORD *)(a1 + 696) = v17;
  }
  if ( !s || !*s || a4 > 0x7F )
    return sub_4869C8(38);
  v20 = s;
  v21 = *(_QWORD **)(a1 + 696);
  v22 = v21[3];
  sub_452A08(&v32, v20);
  v23 = sub_454488(v21, &v32);
  v24 = v32 - 3;
  if ( v32 - 3 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v28 = (unsigned int *)(v32 - 1);
      do
        v29 = __ldaxr(v28);
      while ( __stlxr(v29 - 1, v28) );
    }
    else
    {
      v29 = *((_DWORD *)v32 - 2);
      *((_DWORD *)v32 - 2) = v29 - 1;
    }
    if ( v29 <= 0 )
      j__free_0(v24);
  }
  v25 = v21[3];
  if ( a3 && *a3 )
  {
    v26 = strlen(a3);
    v27 = v26;
    if ( v26 )
    {
      v30 = v26 + 1;
      v31 = (void *)*v23;
      if ( v30 > v23[2] )
      {
        v31 = sub_491288((__int64)v23, (void *)*v23, v30, 1u);
        *v23 = v31;
      }
      v23[1] = v30;
      memmove(v31, a3, v27);
      *(_BYTE *)(*v23 + v27) = 0;
    }
    else
    {
      v23[1] = 0;
    }
  }
  else
  {
    v23[1] = 0;
  }
  *((_BYTE *)v23 + 24) = a4;
  result = 0;
  *((_BYTE *)v23 + 25) = a5;
  if ( a6 )
    *a6 = v22 != v25;
  return result;
}
// 454558: could not find valid save-restore pair for x22
// 454558: could not find valid save-restore pair for x27
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
