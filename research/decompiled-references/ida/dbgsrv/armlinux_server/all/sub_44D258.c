/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D258
// Address: 0x000000000044D258

//----- (000000000044D258) ----------------------------------------------------
__int64 __fastcall sub_44D258(__int64 a1, __int64 a2)
{
  unsigned int v4; // w25
  _QWORD *v5; // x0
  __int64 *v6; // x24
  __int64 v7; // x0
  const char *v8; // x23
  int v9; // w4
  int v10; // w5
  int v11; // w6
  int v12; // w7
  size_t v13; // x0
  size_t v14; // x26
  int v15; // w4
  int v16; // w5
  int v17; // w6
  int v18; // w7
  size_t v19; // x0
  size_t v20; // x24
  void *v21; // x23
  int v22; // w4
  int v23; // w5
  int v24; // w6
  int v25; // w7
  void *v26; // x22
  int v27; // w4
  int v28; // w5
  int v29; // w6
  int v30; // w7
  int v32; // w4
  int v33; // w5
  int v34; // w6
  int v35; // w7
  char v36; // [xsp+0h] [xbp-80h]
  char v37; // [xsp+0h] [xbp-80h]
  char v38; // [xsp+0h] [xbp-80h]
  char v39; // [xsp+0h] [xbp-80h]
  int v40; // [xsp+54h] [xbp-2Ch] BYREF
  char v41[8]; // [xsp+58h] [xbp-28h] BYREF
  void *v42; // [xsp+60h] [xbp-20h] BYREF
  size_t v43; // [xsp+68h] [xbp-18h]
  __int64 v44; // [xsp+70h] [xbp-10h]
  __int64 v45; // [xsp+78h] [xbp-8h]

  v41[0] = 2;
  v42 = nullptr;
  v43 = 0;
  v40 = -1;
  v44 = 0;
  v4 = sub_4869A0();
  v5 = *(_QWORD **)(a1 + 104);
  if ( !v5 )
  {
    sub_448310((__int64 *)v41);
    v41[0] = 7;
    v42 = nullptr;
    v43 = 0;
    v44 = 0;
    sub_44D010(a2, "file", (__int64 *)v41, 0, v32, v33, v34, v35, v36);
    sub_448310((__int64 *)v41);
LABEL_13:
    v41[0] = 7;
    v42 = nullptr;
    v43 = 0;
    v44 = 0;
    goto LABEL_10;
  }
  v6 = sub_43DD10(v5, *(_DWORD *)(a1 + 112), (unsigned int *)&v40);
  v7 = *(_QWORD *)(a1 + 104);
  if ( *(_QWORD *)(v7 + 8) )
    v8 = *(const char **)v7;
  else
    v8 = (const char *)&qword_4B2D48;
  sub_448310((__int64 *)v41);
  if ( v6 )
  {
    v13 = strlen((const char *)v6);
    v42 = nullptr;
    v43 = 0;
    v14 = v13;
    v44 = 0;
    v41[0] = 7;
    if ( v13 )
    {
      v42 = sub_491288((__int64)&v42, nullptr, v13 + 1, 1u);
      v43 = v14 + 1;
      memmove(v42, v6, v14);
      *((_BYTE *)v42 + v14) = 0;
    }
  }
  else
  {
    v41[0] = 7;
    v42 = nullptr;
    v43 = 0;
    v44 = 0;
  }
  sub_44D010(a2, "file", (__int64 *)v41, 0, v9, v10, v11, v12, v36);
  sub_448310((__int64 *)v41);
  if ( !v8 )
    goto LABEL_13;
  v19 = strlen(v8);
  v42 = nullptr;
  v43 = 0;
  v20 = v19;
  v44 = 0;
  v41[0] = 7;
  if ( v19 )
  {
    v42 = sub_491288((__int64)&v42, nullptr, v19 + 1, 1u);
    v43 = v20 + 1;
    memmove(v42, v8, v20);
    *((_BYTE *)v42 + v20) = 0;
  }
LABEL_10:
  sub_44D010(a2, "func", (__int64 *)v41, 0, v15, v16, v17, v18, v37);
  v21 = (void *)v40;
  sub_448310((__int64 *)v41);
  v41[0] = 2;
  v42 = v21;
  sub_44D010(a2, "line", (__int64 *)v41, 0, v22, v23, v24, v25, v38);
  v26 = *(void **)(a1 + 112);
  sub_448310((__int64 *)v41);
  v41[0] = 2;
  v42 = v26;
  sub_44D010(a2, "pc", (__int64 *)v41, 0, v27, v28, v29, v30, v39);
  sub_4869C8(v4);
  sub_448310((__int64 *)v41);
  return v45 ^ _stack_chk_guard;
}
// 44D314: variable 'v9' is possibly undefined
// 44D314: variable 'v10' is possibly undefined
// 44D314: variable 'v11' is possibly undefined
// 44D314: variable 'v12' is possibly undefined
// 44D314: variable 'v36' is possibly undefined
// 44D388: variable 'v15' is possibly undefined
// 44D388: variable 'v16' is possibly undefined
// 44D388: variable 'v17' is possibly undefined
// 44D388: variable 'v18' is possibly undefined
// 44D388: variable 'v37' is possibly undefined
// 44D3B8: variable 'v22' is possibly undefined
// 44D3B8: variable 'v23' is possibly undefined
// 44D3B8: variable 'v24' is possibly undefined
// 44D3B8: variable 'v25' is possibly undefined
// 44D3B8: variable 'v38' is possibly undefined
// 44D3E8: variable 'v27' is possibly undefined
// 44D3E8: variable 'v28' is possibly undefined
// 44D3E8: variable 'v29' is possibly undefined
// 44D3E8: variable 'v30' is possibly undefined
// 44D3E8: variable 'v39' is possibly undefined
// 44D460: variable 'v32' is possibly undefined
// 44D460: variable 'v33' is possibly undefined
// 44D460: variable 'v34' is possibly undefined
// 44D460: variable 'v35' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
