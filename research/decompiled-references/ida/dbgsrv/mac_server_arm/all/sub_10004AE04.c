/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004AE04
// Address: 0x000000010004AE04

//----- (000000010004AE04) ----------------------------------------------------
void __fastcall sub_10004AE04(__int64 a1, __int64 a2, unsigned int a3, const char *a4, const char *a5)
{
  __int64 v10; // x8
  void *v11; // x1
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x2
  unsigned __int64 v14; // x23
  size_t v15; // x0
  size_t v16; // x21
  unsigned __int64 v17; // x22
  char *v18; // x8
  unsigned __int64 v19; // x9
  void *v20; // x0
  void *__ptr; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v22; // [xsp+10h] [xbp-50h]
  unsigned __int64 v23; // [xsp+18h] [xbp-48h]
  char v24; // [xsp+27h] [xbp-39h] BYREF

  if ( a3 == 1 )
  {
    v10 = a1 - 192;
    if ( !a1 )
      v10 = 0;
    a4 = (const char *)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 440) + 408LL))(*(_QWORD *)(v10 + 440));
  }
  sub_10005F000(56, (__int64 *)&__ptr);
  sub_1000500AC((_QWORD **)&__ptr, a2 + 1);
  sub_10002CF84((_QWORD **)&__ptr, a3);
  v11 = __ptr;
  v12 = v22;
  v13 = v22 + 1;
  if ( a4 == a5 )
  {
    if ( v23 < v13 )
    {
      v11 = qvector_reserve(&__ptr, __ptr, v13, 1u);
      __ptr = v11;
      v12 = v22;
    }
    *((_BYTE *)v11 + v12) = 1;
    v14 = ++v22;
    if ( !a5 )
      a5 = &byte_10008E2F5;
    v15 = strlen(a5);
    v16 = v15 + 1;
    if ( v15 != -1 )
    {
      if ( __CFADD__(v16, v14) )
        v17 = 0x7FFFFFFFFFFFFFFFLL;
      else
        v17 = v16 + v14;
      if ( v14 >= v17 )
      {
        if ( v14 != v17 )
        {
          v24 = 0;
          sub_100019CE4((_QWORD **)&__ptr, v17, &v24);
        }
      }
      else
      {
        v18 = (char *)__ptr;
        if ( v23 >= v17 )
        {
          v19 = v14;
        }
        else
        {
          v18 = (char *)qvector_reserve(&__ptr, __ptr, v17, 1u);
          __ptr = v18;
          v19 = v22;
        }
        bzero(&v18[v19], v17 - v19);
        v22 = v17;
      }
      memcpy((char *)__ptr + v14, a5, v16);
    }
  }
  else
  {
    if ( v23 < v13 )
    {
      v11 = qvector_reserve(&__ptr, __ptr, v13, 1u);
      __ptr = v11;
      v12 = v22;
    }
    *((_BYTE *)v11 + v12) = 0;
    ++v22;
    sub_1000500AC((_QWORD **)&__ptr, (__int64)(a4 + 1));
  }
  v20 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a1 + 16LL))(a1, 56, &__ptr);
  qfree(v20);
  if ( __ptr )
  {
    v22 = 0;
    qfree(__ptr);
  }
}
// 10008E2F5: using guessed type char byte_10008E2F5;
