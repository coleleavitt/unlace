/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024CF0
// Address: 0x0000000100024CF0

//----- (0000000100024CF0) ----------------------------------------------------
void __fastcall sub_100024CF0(_QWORD **a1, __int64 a2)
{
  __int64 v3; // x8
  char *v4; // x1
  bool v5; // cf
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x2
  int *v8; // x20
  __int64 v9; // x8
  size_t v10; // x21
  _QWORD *v11; // x1
  _QWORD *v12; // x8
  char *v13; // x8
  char *v14; // x23
  unsigned __int64 v15; // x22
  unsigned __int64 v16; // x8
  size_t v17; // x20
  _QWORD *v18; // x8
  _QWORD *v19; // x9
  char *v20; // x9
  char *v21; // x22
  unsigned __int64 v22; // x21
  __int64 v23; // x24
  _QWORD *v24; // x0
  char *v25; // x1
  char *v26; // x0
  void *v27; // [xsp+0h] [xbp-50h] BYREF
  __int64 v28; // [xsp+8h] [xbp-48h]
  __int64 v29; // [xsp+10h] [xbp-40h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  if ( *(_BYTE *)(a2 + 40) == 1 )
  {
    v27 = nullptr;
    v28 = 0;
    v29 = 0;
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 )
      v4 = *(char **)a2;
    else
      v4 = &byte_10007AE40;
    v5 = v3 != 0;
    v6 = v3 - 1;
    if ( v5 )
      v7 = v6;
    else
      v7 = 0;
    if ( (utf8_utf16(&v27, v4, v7) & 1) == 0 )
    {
      if ( under_debugger != 1 )
        goto LABEL_36;
      while ( 1 )
      {
        __break(1u);
LABEL_36:
        interr(274);
      }
    }
    if ( v28 )
      v8 = (int *)v27;
    else
      v8 = &dword_10007AF04;
    v9 = v28 - 1;
    if ( !v28 )
      v9 = 0;
    v10 = 2 * v9;
    v11 = *a1;
    v12 = a1[1];
    v5 = v12 != nullptr;
    v13 = (char *)v12 - 1;
    if ( v5 )
      v14 = v13;
    else
      v14 = nullptr;
    v15 = (unsigned __int64)&v14[v10 + 1];
    if ( (unsigned __int64)a1[2] < v15 )
    {
      v11 = qvector_reserve(a1, v11, (unsigned __int64)&v14[v10 + 1], 1u);
      *a1 = v11;
    }
    a1[1] = (_QWORD *)v15;
    v14[v10 + (_QWORD)v11] = 0;
    memmove(&v14[(_QWORD)*a1], v8, v10);
    if ( v27 )
    {
      v28 = 0;
      qfree(v27);
    }
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 8);
    if ( v16 )
      v17 = v16 - 1;
    else
      v17 = 0;
    if ( v16 >= 2 )
    {
      v18 = *a1;
      v19 = a1[1];
      v5 = v19 != nullptr;
      v20 = (char *)v19 - 1;
      if ( v5 )
        v21 = v20;
      else
        v21 = nullptr;
      v22 = (unsigned __int64)&v21[v17 + 1];
      if ( (unsigned __int64)a1[2] < v22 )
      {
        v23 = a2;
        v24 = qvector_reserve(a1, *a1, (unsigned __int64)&v21[v17 + 1], 1u);
        a2 = v23;
        v18 = v24;
        *a1 = v24;
      }
      a1[1] = (_QWORD *)v22;
      v21[v17 + (_QWORD)v18] = 0;
      v25 = *(char **)a2;
      v26 = &v21[(_QWORD)*a1];
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      memcpy(v26, v25, v17);
    }
  }
}
// 10007AE40: using guessed type char byte_10007AE40;
// 10007AF04: using guessed type int dword_10007AF04;
// 1000A590D: using guessed type char under_debugger;
