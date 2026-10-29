/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004EEDC
// Address: 0x000000010004EEDC

//----- (000000010004EEDC) ----------------------------------------------------
char **__fastcall sub_10004EEDC(__int64 a1, _QWORD **a2, unsigned __int64 *a3)
{
  int v5; // w21
  unsigned __int64 v6; // x19
  int v7; // w28
  char *v8; // x23
  const char *v9; // x25
  _BYTE *v10; // x9
  _QWORD *v12; // x24
  size_t v13; // x0
  size_t v14; // x26
  unsigned __int64 v15; // x27
  _QWORD *v16; // x1
  int v17; // w0
  unsigned __int64 v18; // x1
  unsigned __int8 *v19; // x8
  unsigned __int64 v20; // x25
  int v21; // t1
  unsigned __int64 v22; // x9
  char *v23; // x8
  const void *v24; // x8
  unsigned __int64 v25; // x9
  void *v26; // x0
  unsigned __int64 v27; // x0
  unsigned int v28; // w21
  void *v31; // [xsp+20h] [xbp-90h] BYREF
  __int64 v32; // [xsp+28h] [xbp-88h]
  __int64 v33; // [xsp+30h] [xbp-80h]
  unsigned int v34; // [xsp+3Ch] [xbp-74h] BYREF
  char *v35[3]; // [xsp+40h] [xbp-70h] BYREF

  memset(v35, 0, sizeof(v35));
  v5 = unpack_dd(a3, a3[1]);
  sub_10004F27C((unsigned __int64 *)v35, v5);
  if ( v5 >= 1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = v35[0];
    do
    {
      v8[424] = 0;
      v6 = v6 + unpack_dq(a3, a3[1]) - 1;
      *(_QWORD *)v8 = v6;
      v9 = (const char *)*a3;
      v10 = (_BYTE *)*a3;
      do
      {
        if ( (unsigned __int64)v10 >= a3[1] )
        {
          v12 = v8 + 8;
LABEL_13:
          *((_QWORD *)v8 + 2) = 0;
          goto LABEL_14;
        }
      }
      while ( *v10++ );
      *a3 = (unsigned __int64)v10;
      v12 = v8 + 8;
      if ( !v9 )
        goto LABEL_13;
      v13 = strlen(v9);
      if ( !v13 )
        goto LABEL_13;
      v14 = v13;
      v15 = v13 + 1;
      v16 = *((_QWORD **)v8 + 1);
      if ( *((_QWORD *)v8 + 3) < v13 + 1 )
      {
        v16 = qvector_reserve((_QWORD *)v8 + 1, v16, v15, 1u);
        *v12 = v16;
      }
      *((_QWORD *)v8 + 2) = v15;
      memmove(v16, v9, v14);
      *(_BYTE *)(*((_QWORD *)v8 + 1) + v14) = 0;
LABEL_14:
      if ( v12[1] >= 2u )
      {
        *((_DWORD *)v8 + 107) = 0;
        v17 = unpack_dd(a3, a3[1]);
        *((_DWORD *)v8 + 8) = v17;
        if ( v17 != 4 )
          *((_DWORD *)v8 + 107) = unpack_dd(a3, a3[1]);
        v19 = (unsigned __int8 *)*a3;
        v18 = a3[1];
        if ( *a3 < v18 )
        {
          v21 = *v19;
          v20 = *v19;
          *a3 = (unsigned __int64)(v19 + 1);
          if ( v21 )
          {
            v22 = *((_QWORD *)v8 + 6);
            if ( v22 >= v20 )
            {
              if ( v22 != v20 )
              {
                LOBYTE(v31) = 0;
                sub_10001B764((_QWORD **)v8 + 5, v20, &v31);
              }
            }
            else
            {
              v23 = *((char **)v8 + 5);
              if ( *((_QWORD *)v8 + 7) < v20 )
              {
                v23 = (char *)qvector_reserve((_QWORD *)v8 + 5, *((_QWORD **)v8 + 5), v20, 1u);
                *((_QWORD *)v8 + 5) = v23;
                v22 = *((_QWORD *)v8 + 6);
              }
              bzero(&v23[v22], v20 - v22);
              *((_QWORD *)v8 + 6) = v20;
            }
            v24 = (const void *)*a3;
            v18 = a3[1];
            v25 = *a3 + v20;
            if ( v25 >= *a3 && v25 <= v18 )
            {
              v26 = *((void **)v8 + 5);
              *a3 = v25;
              memcpy(v26, v24, v20);
              v18 = a3[1];
            }
          }
        }
        v27 = unpack_dq(a3, v18);
        *((_QWORD *)v8 + 10) = v27 - 1;
        if ( v27 )
          j__deserialize_insn(v8 + 64, a3);
      }
      if ( *(_BYTE *)(a1 + 184) == 1 )
        sub_100000B44();
      ++v7;
      v8 += 432;
    }
    while ( v7 != v5 );
  }
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  v28 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 440) + 352LL))(
          *(_QWORD *)(a1 + 440),
          &v34);
  if ( *(_BYTE *)(a1 + 184) == 1 )
    sub_100000B44();
  sub_10002E2F0(a2, v28);
  sub_10002E2F0(a2, v34);
  if ( v28 != 1 )
    sub_10004ED18(a2, (__int64)&v31);
  if ( v31 )
  {
    v32 = 0;
    qfree(v31);
  }
  return sub_1000579A4(v35);
}
// 10005FB88: using guessed type __int64 __fastcall j__deserialize_insn(_QWORD, _QWORD);
