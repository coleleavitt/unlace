/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100052060
// Address: 0x0000000100052060

//----- (0000000100052060) ----------------------------------------------------
__int64 __fastcall sub_100052060(__int64 a1, unsigned __int8 *a2, int a3, char *__s, char *a5, int a6, char *a7)
{
  _QWORD **v12; // x19
  __int128 v13; // q0
  size_t v15; // x28
  unsigned __int64 v16; // x20
  void *v17; // x0
  size_t v18; // x28
  unsigned __int64 v19; // x20
  void *v20; // x0
  size_t v21; // x28
  unsigned __int64 v22; // x20
  void *v23; // x0
  char *v24; // x25
  char *i; // x24
  size_t v26; // x26
  void *v27; // x0
  _QWORD *v29; // [xsp+0h] [xbp-490h]
  void *v31; // [xsp+10h] [xbp-480h] BYREF
  size_t v32; // [xsp+18h] [xbp-478h]
  __int64 v33; // [xsp+20h] [xbp-470h]
  const char *v34; // [xsp+28h] [xbp-468h] BYREF
  char __sa[1024]; // [xsp+30h] [xbp-460h] BYREF

  *(_QWORD *)a1 = off_10009AE68;
  v12 = (_QWORD **)(a1 + 1032);
  v29 = (_QWORD *)(a1 + 1056);
  v13 = 0u;
  *(_OWORD *)(a1 + 1032) = 0u;
  *(_OWORD *)(a1 + 1048) = 0u;
  *(_OWORD *)(a1 + 1064) = 0u;
  if ( __s )
  {
    v15 = strlen(__s);
    v16 = v15 + 1;
    if ( v15 == -1 )
    {
      v17 = nullptr;
    }
    else
    {
      v17 = qvector_reserve(v29, nullptr, v16, 1u);
      *v29 = v17;
    }
    *(_QWORD *)(a1 + 1064) = v16;
    memmove(v17, __s, v15);
    *(_BYTE *)(*(_QWORD *)(a1 + 1056) + v15) = 0;
    v13 = 0u;
  }
  *(_QWORD *)(a1 + 1096) = 0;
  *(_OWORD *)(a1 + 1080) = v13;
  if ( a5 )
  {
    v18 = strlen(a5);
    v19 = v18 + 1;
    if ( v18 == -1 )
    {
      v20 = nullptr;
    }
    else
    {
      v20 = qvector_reserve((_QWORD *)(a1 + 1080), nullptr, v19, 1u);
      *(_QWORD *)(a1 + 1080) = v20;
    }
    *(_QWORD *)(a1 + 1088) = v19;
    memmove(v20, a5, v18);
    *(_BYTE *)(*(_QWORD *)(a1 + 1080) + v18) = 0;
  }
  *(_QWORD *)(a1 + 1120) = 0;
  *(_OWORD *)(a1 + 1104) = 0u;
  if ( a7 )
  {
    v21 = strlen(a7);
    v22 = v21 + 1;
    if ( v21 == -1 )
    {
      v23 = nullptr;
    }
    else
    {
      v23 = qvector_reserve((_QWORD *)(a1 + 1104), nullptr, v22, 1u);
      *(_QWORD *)(a1 + 1104) = v23;
    }
    *(_QWORD *)(a1 + 1112) = v22;
    memmove(v23, a7, v21);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + v21) = 0;
  }
  *(_DWORD *)(a1 + 1128) = a6;
  *(_BYTE *)(a1 + 8) = 0;
  if ( a3 )
    v24 = ":";
  else
    v24 = ";";
  qstrncpy(__sa, a2, 1024);
  for ( i = qstrtok(__sa, v24, &v34); i; i = qstrtok(nullptr, v24, &v34) )
  {
    v31 = nullptr;
    v32 = 0;
    v33 = 0;
    v26 = strlen(i);
    v27 = nullptr;
    if ( v26 != -1 )
    {
      v27 = qvector_reserve(&v31, nullptr, v26 + 1, 1u);
      v31 = v27;
    }
    v32 = v26 + 1;
    memmove(v27, i, v26);
    *((_BYTE *)v31 + v26) = 0;
    sub_100013154(v12, &v31);
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
    }
  }
  return a1;
}
// 10009AE68: using guessed type __int64 (__fastcall *off_10009AE68[3])();
