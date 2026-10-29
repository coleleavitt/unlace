/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002927C
// Address: 0x000000010002927C

//----- (000000010002927C) ----------------------------------------------------
__int64 __fastcall sub_10002927C(__int64 a1, char *a2, int a3, int a4)
{
  unsigned __int64 v8; // x0
  __int64 v9; // x22
  _QWORD *v10; // x1
  __int64 v11; // x8
  unsigned int v12; // w2
  unsigned int v13; // w1
  __int64 (__fastcall ***v15)(_QWORD, char *); // x0
  unsigned __int64 v16; // x0
  char v17; // w1
  __int64 v18; // x22
  _QWORD *v19; // x1
  __int64 v20; // x8
  _QWORD *v21; // x0
  __int64 v22; // x21
  _QWORD *v23; // x1
  __int64 v24; // x8
  char *v25; // x1
  unsigned __int16 v26; // w0
  char v27; // w8
  char v28; // w9
  __int64 v29; // x0
  char *v30; // x1
  int v31; // w2
  int v32; // [xsp+0h] [xbp-40h] BYREF
  int v33; // [xsp+4h] [xbp-3Ch] BYREF

  v8 = sub_100027CC8((__int64 *)a1, a2, &v32);
  if ( v32 <= 2 )
  {
    if ( v32 )
    {
      if ( v32 == 1 )
      {
        if ( a3 )
          v13 = 64;
        else
          v13 = 96;
      }
      else
      {
        if ( v32 != 2 )
          goto LABEL_59;
        if ( a3 )
        {
          v13 = 80;
          if ( *(_QWORD *)(a1 + 184) && !v8 )
            return 1539;
        }
        else
        {
          v13 = 112;
        }
      }
      v12 = (unsigned __int16)v8;
      v21 = (_QWORD *)a1;
      goto LABEL_41;
    }
LABEL_20:
    v15 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 416);
    if ( !v15 || (v16 = (**v15)(v15, a2), v16 == -1) )
    {
      set_error_string(0);
      return 53;
    }
    else
    {
      sub_100023D70((_QWORD *)a1, v16);
      return 0;
    }
  }
  if ( v32 > 4 )
  {
    if ( v32 != 5 )
    {
      if ( v32 == 6 )
      {
        if ( (a3 & 1) != 0 )
          return 53;
        sub_100023924(a1, a2, 0);
        *(_BYTE *)(a1 + 212) = -82;
        v22 = *(_QWORD *)(a1 + 200);
        v23 = *(_QWORD **)v22;
        v24 = *(_QWORD *)(v22 + 8);
        if ( *(_QWORD *)(v22 + 16) < (unsigned __int64)(v24 + 1) )
        {
          v23 = qvector_reserve(*(_QWORD **)(a1 + 200), v23, v24 + 1, 1u);
          *(_QWORD *)v22 = v23;
          v24 = *(_QWORD *)(v22 + 8);
        }
        *((_BYTE *)v23 + v24) = -82;
        ++*(_QWORD *)(v22 + 8);
        ++*(_DWORD *)(a1 + 208);
        goto LABEL_42;
      }
LABEL_59:
      if ( under_debugger == 1 )
        __break(1u);
      interr(271);
      return sub_100029638(v29, v30, v31);
    }
    goto LABEL_20;
  }
  if ( v32 == 3 )
  {
    if ( a3 )
      v17 = -39;
    else
      v17 = -43;
    sub_100023A70((_QWORD *)a1, v17, (unsigned __int16)v8);
    goto LABEL_42;
  }
  if ( a3 )
  {
    if ( dword_1000A4A4C < 1 )
      return 1611;
    *(_BYTE *)(a1 + 212) = -44;
    v9 = *(_QWORD *)(a1 + 200);
    v10 = *(_QWORD **)v9;
    v11 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(v9 + 16) < (unsigned __int64)(v11 + 1) )
    {
      v10 = qvector_reserve(*(_QWORD **)(a1 + 200), v10, v11 + 1, 1u);
      *(_QWORD *)v9 = v10;
      v11 = *(_QWORD *)(v9 + 8);
    }
    *((_BYTE *)v10 + v11) = -44;
    ++*(_QWORD *)(v9 + 8);
    ++*(_DWORD *)(a1 + 208);
    sub_100023924(a1, a2, 0);
    v12 = (unsigned __int16)dword_1000A4A4C;
  }
  else
  {
    if ( dword_1000A4A48 < 1 )
      return 1610;
    *(_BYTE *)(a1 + 212) = -86;
    v18 = *(_QWORD *)(a1 + 200);
    v19 = *(_QWORD **)v18;
    v20 = *(_QWORD *)(v18 + 8);
    if ( *(_QWORD *)(v18 + 16) < (unsigned __int64)(v20 + 1) )
    {
      v19 = qvector_reserve(*(_QWORD **)(a1 + 200), v19, v20 + 1, 1u);
      *(_QWORD *)v18 = v19;
      v20 = *(_QWORD *)(v18 + 8);
    }
    *((_BYTE *)v19 + v20) = -86;
    ++*(_QWORD *)(v18 + 8);
    ++*(_DWORD *)(a1 + 208);
    sub_100023924(a1, a2, 0);
    v12 = (unsigned __int16)dword_1000A4A48;
  }
  v21 = (_QWORD *)a1;
  v13 = 0;
LABEL_41:
  sub_100023BC8(v21, v13, v12);
LABEL_42:
  if ( !a4 )
    return 0;
  if ( *(_QWORD *)(a1 + 48) )
    v25 = *(char **)(a1 + 40);
  else
    v25 = &byte_10007AE40;
  v26 = sub_100027CC8((__int64 *)a1, v25, &v33);
  switch ( v33 )
  {
    case 3:
      v27 = -35;
      v28 = -37;
      break;
    case 2:
      v27 = -58;
      v28 = -62;
      break;
    case 1:
      v27 = -60;
      v28 = -64;
      break;
    default:
      return set_qerrno();
  }
  if ( a4 > 0 )
    v27 = v28;
  sub_100023A70((_QWORD *)a1, v27, v26);
  return 0;
}
// 1000292E0: conditional instruction was optimized away because %var_40.4==4
// 100029635: variable 'v29' is possibly undefined
// 100029635: variable 'v30' is possibly undefined
// 100029635: variable 'v31' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A4A48: using guessed type int dword_1000A4A48;
// 1000A4A4C: using guessed type int dword_1000A4A4C;
// 1000A590D: using guessed type char under_debugger;
