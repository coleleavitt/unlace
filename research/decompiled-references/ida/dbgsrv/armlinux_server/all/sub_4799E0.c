/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4799E0
// Address: 0x00000000004799E0

//----- (00000000004799E0) ----------------------------------------------------
bool __fastcall sub_4799E0(__int64 a1, struct sockaddr *sa, socklen_t salen, char a4)
{
  __int64 v7; // x0
  bool v8; // zf
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x20
  __int64 v11; // x23
  _BYTE *v12; // x24
  size_t v13; // x26
  unsigned __int64 v14; // x1
  unsigned __int64 v15; // x27
  __int64 v16; // x23
  unsigned __int64 v17; // x25
  _BOOL8 result; // x0
  __int64 v19; // x1
  size_t v20; // x0
  __int64 v21; // x25
  size_t v22; // x28
  __int64 v23; // x25
  size_t v24; // x27
  _BYTE *v25; // x0
  __int64 v26; // x22
  __int64 v27; // x24
  unsigned __int64 v28; // x23
  _BYTE *v29; // x0
  unsigned __int64 v30; // [xsp+68h] [xbp-418h]
  unsigned __int64 v31; // [xsp+68h] [xbp-418h]
  char host[1024]; // [xsp+78h] [xbp-408h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v8 = v7 == 0;
  v9 = v7 - 1;
  if ( v8 )
    v10 = 0;
  else
    v10 = v9;
  if ( a4 && !getnameinfo(sa, salen, host, 0x400u, nullptr, 0, 8) )
  {
    v20 = strlen(host);
    v21 = *(_QWORD *)(a1 + 8);
    v22 = v20;
    if ( v21 )
    {
      v23 = v21 - 1;
      v24 = v20 + v23;
    }
    else
    {
      v24 = v20;
      v23 = 0;
    }
    v25 = *(_BYTE **)a1;
    if ( v24 + 1 > *(_QWORD *)(a1 + 16) )
    {
      v25 = sub_491288(a1, *(void **)a1, v24 + 1, 1u);
      *(_QWORD *)a1 = v25;
    }
    *(_QWORD *)(a1 + 8) = v24 + 1;
    v25[v24] = 0;
    memmove((void *)(*(_QWORD *)a1 + v23), host, v22);
  }
  if ( !getnameinfo(sa, salen, host, 0x400u, nullptr, 0, 1) )
  {
    v12 = *(_BYTE **)a1;
    v11 = *(_QWORD *)(a1 + 8);
    if ( v11 )
    {
      v15 = v11 - 1;
      if ( v10 < v11 - 1 )
      {
        if ( (unsigned __int64)(v11 + 1) > *(_QWORD *)(a1 + 16) )
        {
          v12 = sub_491288(a1, *(void **)a1, v11 + 1, 1u);
          *(_QWORD *)a1 = v12;
        }
        *(_QWORD *)(a1 + 8) = v11 + 1;
        v12[v15] = 40;
        *(_BYTE *)(*(_QWORD *)a1 + v11) = 0;
        v13 = strlen(host);
        v12 = *(_BYTE **)a1;
        v16 = *(_QWORD *)(a1 + 8);
        v14 = *(_QWORD *)(a1 + 16);
        if ( v16 )
          --v16;
      }
      else
      {
        v31 = *(_QWORD *)(a1 + 16);
        v16 = v11 - 1;
        v13 = strlen(host);
        v14 = v31;
      }
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 16);
      v13 = strlen(host);
      v14 = v30;
      v15 = 0;
      v16 = 0;
    }
    v17 = v16 + v13 + 1;
    if ( v17 > v14 )
    {
      v12 = sub_491288(a1, v12, v16 + v13 + 1, 1u);
      *(_QWORD *)a1 = v12;
    }
    *(_QWORD *)(a1 + 8) = v17;
    v12[v16 + v13] = 0;
    memmove((void *)(*(_QWORD *)a1 + v16), host, v13);
    if ( v10 < v15 )
    {
      v26 = *(_QWORD *)(a1 + 8);
      if ( v26 )
      {
        v27 = v26 - 1;
        v28 = v26 + 1;
      }
      else
      {
        v26 = 1;
        v28 = 2;
        v27 = 0;
      }
      v29 = *(_BYTE **)a1;
      if ( v28 > *(_QWORD *)(a1 + 16) )
      {
        v29 = sub_491288(a1, *(void **)a1, v28, 1u);
        *(_QWORD *)a1 = v29;
      }
      *(_QWORD *)(a1 + 8) = v28;
      v29[v27] = 41;
      *(_BYTE *)(*(_QWORD *)a1 + v26) = 0;
    }
  }
  result = 0;
  v19 = *(_QWORD *)(a1 + 8);
  if ( v19 )
    return v10 < v19 - 1;
  return result;
}
// 4799E0: could not find valid save-restore pair for x25
// 4799E0: could not find valid save-restore pair for x26
// 4799E0: could not find valid save-restore pair for x27
// 4799E0: could not find valid save-restore pair for x28
