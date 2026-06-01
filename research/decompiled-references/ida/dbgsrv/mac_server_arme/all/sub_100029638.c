/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100029638
// Address: 0x0000000100029638

//----- (0000000100029638) ----------------------------------------------------
__int64 __fastcall sub_100029638(__int64 a1, char *a2, int a3)
{
  __int64 result; // x0
  __int64 v7; // x20
  _QWORD *v8; // x1
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x22
  int v12; // w24
  __int64 v13; // x23
  _QWORD *v14; // x1
  __int64 v15; // x8
  unsigned int v16; // w0
  __int64 v17; // x8
  char **v18; // x0
  _QWORD *v19; // x8
  __int64 v20; // x8
  int v21; // w19
  int v22; // w8
  unsigned int v23; // w2
  _QWORD *v24; // x0
  unsigned int v25; // w1
  int v26; // w0
  _QWORD *v27; // x8
  __int64 v28; // x8
  int v29; // w22
  int v30; // w8
  unsigned __int64 v31; // x8
  char **v32; // x8
  __int64 (__fastcall ***v33)(_QWORD, char *); // x0
  __int64 v34; // x0
  unsigned __int64 v35; // x21
  unsigned __int64 v36; // x8
  char **v37; // x8
  __int16 v38; // w23
  __int64 v39; // x0
  __int64 v40; // x1
  int v41; // w2
  int v42; // w3
  int v43; // [xsp+0h] [xbp-50h] BYREF
  char v44; // [xsp+6h] [xbp-4Ah] BYREF
  char v45; // [xsp+7h] [xbp-49h] BYREF

  sub_100027CC8((__int64 *)a1, a2, &v43);
  if ( (unsigned int)(v43 - 1) < 3 )
  {
    result = sub_10002927C(a1, a2, 0, 0);
    if ( (_DWORD)result )
      return result;
    goto LABEL_3;
  }
  if ( v43 != 5 )
  {
    v18 = sub_10002EF28((char **)a2);
    if ( v18 )
    {
      if ( (*(_BYTE *)(a1 + 452) & 1) == 0 && (*((_BYTE *)v18 + 36) & 4) == 0 )
        goto LABEL_46;
      v23 = (unsigned __int16)(-13107 * ((unsigned int)((_DWORD)v18 - (_DWORD)off_1000A4A08) >> 3));
      v24 = (_QWORD *)a1;
      v25 = 0;
    }
    else
    {
      v26 = sub_10002EC20(*(_QWORD **)(a1 + 104), a2);
      if ( v26 == -1 )
      {
        v33 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 416);
        if ( v33 && (v34 = (**v33)(v33, a2), v34 != -1) && (v35 = v34, (get_aflags() & 0x800) != 0) )
        {
          sub_100023D70((_QWORD *)a1, v35);
        }
        else
        {
          sub_100023924(a1, a2, 0);
          sub_1000239F4((_BYTE *)a1, 174);
        }
LABEL_3:
        *(_BYTE *)(a1 + 212) = -92;
        v7 = *(_QWORD *)(a1 + 200);
        v8 = *(_QWORD **)v7;
        v9 = *(_QWORD *)(v7 + 8);
        if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
        {
          v8 = qvector_reserve(*(_QWORD **)(a1 + 200), v8, v9 + 1, 1u);
          *(_QWORD *)v7 = v8;
          v9 = *(_QWORD *)(v7 + 8);
        }
        *((_BYTE *)v8 + v9) = -92;
        ++*(_QWORD *)(v7 + 8);
        ++*(_DWORD *)(a1 + 208);
        return 0;
      }
      v27 = *(_QWORD **)(a1 + 104);
      v45 = 0;
      if ( v26 < 0 )
      {
        v36 = -v26;
        if ( qword_1000A4A00 <= v36 )
        {
LABEL_46:
          set_error_string(0);
          return set_qerrno();
        }
        v37 = &off_1000A4A08[5 * (int)v36];
        v29 = *((_DWORD *)v37 + 8);
        v38 = v26;
        v30 = sub_10002FA88(v37[2], &v45);
        LOWORD(v26) = v38;
      }
      else
      {
        if ( v26 == 0x7FFFFFFF || v27[1] <= (unsigned __int64)(v26 & 0x7FFFFFFF) )
          goto LABEL_46;
        v28 = *(_QWORD *)(*v27 + 8LL * (v26 & 0x7FFFFFFF));
        v29 = *(_DWORD *)(v28 + 72);
        v30 = *(_DWORD *)(v28 + 24);
      }
      if ( v29 + a3 < v30 || v30 < a3 && (v45 & 1) == 0 )
        goto LABEL_46;
      v23 = (unsigned __int16)v26;
      v24 = (_QWORD *)a1;
      v25 = 16;
    }
    sub_100023BC8(v24, v25, v23);
    return 0;
  }
  v10 = sub_10002F330(*(_QWORD *)(a1 + 104), a2);
  if ( v10 )
  {
    v11 = v10;
    v12 = *(_DWORD *)(v10 + 28);
    *(_BYTE *)(a1 + 212) = -16;
    v13 = *(_QWORD *)(a1 + 200);
    v14 = *(_QWORD **)v13;
    v15 = *(_QWORD *)(v13 + 8);
    if ( *(_QWORD *)(v13 + 16) < (unsigned __int64)(v15 + 1) )
    {
      v14 = qvector_reserve(*(_QWORD **)(a1 + 200), v14, v15 + 1, 1u);
      *(_QWORD *)v13 = v14;
      v15 = *(_QWORD *)(v13 + 8);
    }
    *((_BYTE *)v14 + v15) = -16;
    ++*(_QWORD *)(v13 + 8);
    ++*(_DWORD *)(a1 + 208);
    sub_10002385C((_QWORD *)a1, v12);
    while ( 1 )
    {
      v16 = sub_1000360A8(v11, (_QWORD *)(v11 + 32));
      if ( v16 != -1 )
        break;
      v17 = *(int *)(v11 + 24);
      if ( !(_DWORD)v17 )
      {
        if ( a3 )
          goto LABEL_46;
        return 0;
      }
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v17);
    }
    v19 = *(_QWORD **)(a1 + 104);
    v44 = 0;
    if ( (v16 & 0x80000000) != 0 )
    {
      v31 = -v16;
      if ( qword_1000A4A00 <= v31 )
        goto LABEL_46;
      v32 = &off_1000A4A08[5 * (int)v31];
      v21 = *((_DWORD *)v32 + 8);
      v22 = sub_10002FA88(v32[2], &v44);
    }
    else
    {
      if ( v16 == 0x7FFFFFFF || v19[1] <= (unsigned __int64)v16 )
        goto LABEL_46;
      v20 = *(_QWORD *)(*v19 + 8LL * v16);
      v21 = *(_DWORD *)(v20 + 72);
      v22 = *(_DWORD *)(v20 + 24);
    }
    if ( v21 + a3 + 1 < v22 )
      goto LABEL_46;
    result = 0;
    if ( v22 < a3 + 1 && (v44 & 1) == 0 )
      goto LABEL_46;
  }
  else
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(272);
    return sub_100029A64(v39, v40, v41, v42);
  }
  return result;
}
// 100029A61: variable 'v39' is possibly undefined
// 100029A61: variable 'v40' is possibly undefined
// 100029A61: variable 'v41' is possibly undefined
// 100029A61: variable 'v42' is possibly undefined
// 1000A4A00: using guessed type __int64 qword_1000A4A00;
// 1000A4A08: using guessed type char **off_1000A4A08;
// 1000A590D: using guessed type char under_debugger;
