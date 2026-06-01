/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438BC8
// Address: 0x0000000000438BC8

//----- (0000000000438BC8) ----------------------------------------------------
__int64 __fastcall sub_438BC8(__int64 a1, char *a2, int a3)
{
  __int64 v6; // x0
  __int64 v7; // x19
  __int64 v8; // x24
  int v9; // w25
  __int64 v10; // x1
  _BYTE *v11; // x0
  int v12; // w0
  int v13; // w1
  unsigned int v14; // w19
  const char **v15; // x3
  __int64 v17; // x22
  __int64 v18; // x1
  _BYTE *v19; // x0
  int v20; // w0
  unsigned __int16 v21; // w19
  __int64 (__fastcall ***v22)(_QWORD, char *); // x0
  unsigned __int64 v23; // x19
  __int64 v24; // x19
  __int64 v25; // x1
  _BYTE *v26; // x0
  __int64 v27; // x1
  _BYTE *v28; // x0
  unsigned __int16 v29; // w2
  unsigned int v30; // [xsp+44h] [xbp-Ch] BYREF

  sub_437FB8((__int64 *)a1, a2, (int *)&v30);
  if ( v30 )
  {
    if ( v30 <= 3 )
    {
      v14 = sub_4388A8(a1, a2, 0, 0);
      if ( v14 )
        return v14;
      v17 = *(_QWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -92;
      v18 = *(_QWORD *)(v17 + 8);
      if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(v17 + 16) )
      {
        v19 = sub_491288(v17, *(void **)v17, v18 + 1, 1u);
        *(_QWORD *)v17 = v19;
        v18 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        v19 = *(_BYTE **)v17;
      }
      v19[v18] = -92;
      goto LABEL_23;
    }
    if ( v30 == 5 )
    {
      v6 = sub_43E590(*(_QWORD *)(a1 + 104), a2);
      v7 = v6;
      if ( v6 )
      {
        v8 = *(_QWORD *)(a1 + 200);
        v9 = *(_DWORD *)(v6 + 52);
        *(_BYTE *)(a1 + 212) = -16;
        v10 = *(_QWORD *)(v8 + 8);
        if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(v8 + 16) )
        {
          v11 = sub_491288(v8, *(void **)v8, v10 + 1, 1u);
          *(_QWORD *)v8 = v11;
          v10 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_BYTE **)v8;
        }
        v11[v10] = -16;
        ++*(_QWORD *)(v8 + 8);
        ++*(_DWORD *)(a1 + 208);
        sub_436010(a1, v9);
        while ( 1 )
        {
          v13 = sub_444508(v7, v7 + 56);
          if ( v13 != -1 )
            break;
          v12 = *(_DWORD *)(v7 + 48);
          if ( !v12 )
            goto LABEL_26;
          v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * v12);
        }
        if ( !sub_438AE8(*(_QWORD **)(a1 + 104), v13, a3 + 1) )
        {
LABEL_12:
          sub_486A58(0, a2);
          return (unsigned int)sub_4869C8(56);
        }
      }
      else
      {
        if ( !under_debugger )
          sub_492270(272);
        __break(0x3E8u);
LABEL_26:
        if ( a3 )
          goto LABEL_12;
      }
      return 0;
    }
  }
  v15 = sub_43E0A8(a2);
  if ( !v15 )
  {
    v20 = sub_43DE50(*(__int64 **)(a1 + 104), a2);
    v21 = v20;
    if ( v20 != -1 )
    {
      if ( sub_438AE8(*(_QWORD **)(a1 + 104), v20, a3) )
      {
        v29 = v21;
        v14 = 0;
        sub_4370A8(a1, 0x10u, v29);
        return v14;
      }
      goto LABEL_12;
    }
    v22 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 416);
    if ( v22 && (v23 = (**v22)(v22, a2), v23 != -1) && (sub_47DB48() & 0x800) != 0 )
    {
      sub_437490(a1, v23);
    }
    else
    {
      sub_436CF8(a1, a2, 0);
      v24 = *(_QWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -82;
      v25 = *(_QWORD *)(v24 + 8);
      if ( (unsigned __int64)(v25 + 1) > *(_QWORD *)(v24 + 16) )
      {
        v26 = sub_491288(v24, *(void **)v24, v25 + 1, 1u);
        *(_QWORD *)v24 = v26;
        v25 = *(_QWORD *)(v24 + 8);
      }
      else
      {
        v26 = *(_BYTE **)v24;
      }
      v26[v25] = -82;
      ++*(_QWORD *)(v24 + 8);
      ++*(_DWORD *)(a1 + 208);
    }
    v17 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -92;
    v27 = *(_QWORD *)(v17 + 8);
    if ( (unsigned __int64)(v27 + 1) > *(_QWORD *)(v17 + 16) )
    {
      v28 = sub_491288(v17, *(void **)v17, v27 + 1, 1u);
      *(_QWORD *)v17 = v28;
      v27 = *(_QWORD *)(v17 + 8);
    }
    else
    {
      v28 = *(_BYTE **)v17;
    }
    v14 = 0;
    v28[v27] = -92;
LABEL_23:
    ++*(_QWORD *)(v17 + 8);
    ++*(_DWORD *)(a1 + 208);
    return v14;
  }
  if ( *(_BYTE *)(a1 + 452) || (*((_DWORD *)v15 + 9) & 4) != 0 )
  {
    v14 = 0;
    sub_4370A8(a1, 0, -13107 * (((char *)v15 - (char *)off_520150) >> 3));
  }
  else
  {
    sub_486A58(0, (char *)*v15);
    return (unsigned int)sub_4869C8(143);
  }
  return v14;
}
// 438BC8: could not find valid save-restore pair for x24
// 438BC8: could not find valid save-restore pair for x25
// 520150: using guessed type _UNKNOWN **off_520150;
// 52451C: using guessed type char under_debugger;
