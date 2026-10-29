/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000150D4
// Address: 0x00000001000150D4

//----- (00000001000150D4) ----------------------------------------------------
__int64 __fastcall sub_1000150D4(
        char *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(_QWORD *, __int64, const char *, _QWORD *),
        __int64 a4)
{
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  size_t v13; // x24
  void *v14; // x0
  size_t v15; // x0
  size_t v16; // x23
  void *v17; // x1
  unsigned __int64 v18; // x25
  size_t v19; // x26
  unsigned __int64 v20; // x24
  __int64 result; // x0
  __int64 v22; // x19
  size_t v23; // x0
  size_t v24; // x23
  unsigned __int64 v25; // x24
  void *v26; // x1
  char *v27; // x22
  char *v28; // x8
  unsigned __int64 v29; // x22
  unsigned __int64 v30; // x9
  char *v31; // x23
  char *v32; // x0
  __int64 v33; // x1
  size_t v35; // x0
  size_t v36; // x23
  void *v37; // x1
  unsigned __int64 v38; // x26
  size_t v39; // x27
  unsigned __int64 v40; // x24
  char *v41; // x23
  char *v42; // x8
  void *__dst; // [xsp+30h] [xbp-470h] BYREF
  unsigned __int64 v44; // [xsp+38h] [xbp-468h]
  unsigned __int64 v45; // [xsp+40h] [xbp-460h]
  char __s[1024]; // [xsp+48h] [xbp-458h] BYREF

  qbasename(a1);
  __dst = nullptr;
  v44 = 0;
  v45 = 0;
  if ( a1 )
  {
    v13 = strlen(a1);
    if ( v13 == -1 )
    {
      v14 = nullptr;
    }
    else
    {
      v14 = qvector_reserve(&__dst, nullptr, v13 + 1, 1u);
      __dst = v14;
    }
    v44 = v13 + 1;
    memmove(v14, a1, v13);
    *((_BYTE *)__dst + v13) = 0;
  }
  qmakepath(__s, 1024, ".dSYM", v8, v9, v10, v11, v12, "Contents");
  v15 = strlen(__s);
  v16 = v15;
  v17 = __dst;
  if ( v44 )
    v18 = v44 - 1;
  else
    v18 = 0;
  v19 = v18 + v15;
  v20 = v18 + v15 + 1;
  if ( v45 < v20 )
  {
    v17 = qvector_reserve(&__dst, __dst, v20, 1u);
    __dst = v17;
  }
  v44 = v20;
  *((_BYTE *)v17 + v19) = 0;
  memmove((char *)__dst + v18, __s, v16);
  result = sub_100015478((const char *)__dst, a2, a3, a4);
  if ( (result & 0x80000000) != 0 )
  {
    if ( a1 && (v23 = strlen(a1)) != 0 )
    {
      v24 = v23;
      v25 = v23 + 1;
      v26 = __dst;
      if ( v45 < v23 + 1 )
      {
        v26 = qvector_reserve(&__dst, __dst, v25, 1u);
        __dst = v26;
      }
      v44 = v25;
      memmove(v26, a1, v24);
      *((_BYTE *)__dst + v24) = 0;
      v27 = v44 ? (char *)__dst : &byte_100075A30;
    }
    else
    {
      v44 = 0;
      v27 = &byte_100075A30;
    }
    v28 = strrchr(v27, 46);
    result = 0xFFFFFFFFLL;
    if ( v28 )
    {
      v29 = v28 - v27;
      if ( v29 != -1 )
      {
        while ( 1 )
        {
          v30 = v44 - 1;
          if ( !v44 )
            v30 = 0;
          if ( v30 < v29 )
            break;
          v31 = v44 ? (char *)__dst : &byte_100075A30;
          v32 = strchr(&v31[v29], 47);
          v33 = v32 - v31;
          if ( !v32 || v33 == -1 )
            break;
          sub_10001115C((_QWORD **)&__dst, v33);
          v35 = strlen(__s);
          v36 = v35;
          v37 = __dst;
          if ( v44 )
            v38 = v44 - 1;
          else
            v38 = 0;
          v39 = v38 + v35;
          v40 = v38 + v35 + 1;
          if ( v45 < v40 )
          {
            v37 = qvector_reserve(&__dst, __dst, v40, 1u);
            __dst = v37;
          }
          v44 = v40;
          *((_BYTE *)v37 + v39) = 0;
          memmove((char *)__dst + v38, __s, v36);
          result = sub_100015478((const char *)__dst, a2, a3, a4);
          if ( (result & 0x80000000) == 0 )
            goto LABEL_12;
          sub_10001115C((_QWORD **)&__dst, v29);
          v41 = v44 ? (char *)__dst : &byte_100075A30;
          v42 = strrchr(v41, 47);
          result = 0xFFFFFFFFLL;
          if ( !v42 || v42 - v41 == -1 )
            goto LABEL_12;
          sub_10001115C((_QWORD **)&__dst, v42 - v41);
        }
        result = 0xFFFFFFFFLL;
      }
    }
  }
LABEL_12:
  if ( __dst )
  {
    v44 = 0;
    v22 = result;
    qfree(__dst);
    return v22;
  }
  return result;
}
// 1000151A8: variable 'v8' is possibly undefined
// 1000151A8: variable 'v9' is possibly undefined
// 1000151A8: variable 'v10' is possibly undefined
// 1000151A8: variable 'v11' is possibly undefined
// 1000151A8: variable 'v12' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
