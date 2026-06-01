/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4718D0
// Address: 0x00000000004718D0

//----- (00000000004718D0) ----------------------------------------------------
__int64 __fastcall sub_4718D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // x20
  __int64 v5; // x25
  _BYTE *v6; // x0
  size_t v7; // x27
  _BYTE *v8; // x0
  size_t v9; // x27
  const char *v10; // x27
  size_t v11; // x6
  unsigned __int64 v12; // x21
  unsigned __int64 v13; // x28
  const char *v14; // x1
  const char *v15; // x27
  size_t v16; // x28
  unsigned __int64 v17; // x21
  unsigned __int64 v18; // x5
  __int64 v20; // x3
  char *v21; // x0
  __int64 v22; // x3
  char *v23; // x0
  unsigned __int64 v24; // x21
  unsigned __int64 v25; // x28
  unsigned __int64 v26; // x21
  unsigned __int64 v27; // x28
  __int64 v28; // x3
  char *v29; // x0
  __int64 v30; // x3
  char *v31; // x0
  char *v32; // x0
  char *v33; // x0
  unsigned __int64 v34; // [xsp+68h] [xbp-28h]
  unsigned __int64 v35; // [xsp+68h] [xbp-28h]
  size_t v36; // [xsp+68h] [xbp-28h]
  size_t v37; // [xsp+68h] [xbp-28h]
  _BYTE v38[5]; // [xsp+78h] [xbp-18h] BYREF
  _BYTE v39[3]; // [xsp+7Dh] [xbp-13h] BYREF
  _BYTE v40[5]; // [xsp+80h] [xbp-10h] BYREF
  _BYTE v41[11]; // [xsp+85h] [xbp-Bh] BYREF

  if ( a3 > 0 )
  {
    v4 = a2;
    v5 = a2 + 56 + 56LL * (unsigned int)(a3 - 1);
    do
    {
      v6 = sub_48E2D8(v40, (unsigned __int64)v41, *(_DWORD *)v4);
      v7 = v6 - v40;
      if ( v6 == v40 )
        goto LABEL_4;
      v26 = *(_QWORD *)(a1 + 8);
      v27 = v7 + v26;
      if ( v26 <= v7 + v26 )
      {
        if ( v26 >= v7 + v26 )
          goto LABEL_46;
        v28 = *(_QWORD *)(a1 + 8);
        v29 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v27 )
        {
LABEL_54:
          v33 = (char *)sub_491288(a1, v29, v27, 1u);
          *(_QWORD *)a1 = v33;
          memset(&v33[*(_QWORD *)(a1 + 8)], 0, v27 - *(_QWORD *)(a1 + 8));
          *(_QWORD *)(a1 + 8) = v27;
          goto LABEL_46;
        }
      }
      else
      {
        if ( v26 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v26 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_46;
        }
        v27 = 0x7FFFFFFFFFFFFFFFLL;
        v28 = *(_QWORD *)(a1 + 8);
        v29 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
          goto LABEL_54;
      }
      memset(&v29[v28], 0, v27 - v28);
      *(_QWORD *)(a1 + 8) = v27;
LABEL_46:
      memcpy((void *)(*(_QWORD *)a1 + v26), v40, v7);
LABEL_4:
      v8 = sub_48E2D8(v38, (unsigned __int64)v39, *(_DWORD *)(v4 + 4));
      v9 = v8 - v38;
      if ( v8 == v38 )
        goto LABEL_5;
      v24 = *(_QWORD *)(a1 + 8);
      v25 = v9 + v24;
      if ( v24 <= v9 + v24 )
      {
        if ( v24 >= v9 + v24 )
          goto LABEL_50;
        v30 = *(_QWORD *)(a1 + 8);
        v31 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v25 )
        {
LABEL_53:
          v32 = (char *)sub_491288(a1, v31, v25, 1u);
          *(_QWORD *)a1 = v32;
          memset(&v32[*(_QWORD *)(a1 + 8)], 0, v25 - *(_QWORD *)(a1 + 8));
          *(_QWORD *)(a1 + 8) = v25;
          goto LABEL_50;
        }
      }
      else
      {
        if ( v24 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v24 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_50;
        }
        v25 = 0x7FFFFFFFFFFFFFFFLL;
        v30 = *(_QWORD *)(a1 + 8);
        v31 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
          goto LABEL_53;
      }
      memset(&v31[v30], 0, v25 - v30);
      *(_QWORD *)(a1 + 8) = v25;
LABEL_50:
      memcpy((void *)(*(_QWORD *)a1 + v24), v38, v9);
LABEL_5:
      v10 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v4 + 16) )
        v10 = *(const char **)(v4 + 8);
      if ( v10 )
      {
        v11 = strlen(v10) + 1;
      }
      else
      {
        v11 = 1;
        v10 = &byte_4B31F0;
      }
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v12 + v11;
      if ( v12 <= v12 + v11 )
      {
        if ( v12 >= v12 + v11 )
          goto LABEL_13;
      }
      else
      {
        if ( v12 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v12 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_13;
        }
        v13 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v22 = *(_QWORD *)(a1 + 8);
      v23 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v13 )
      {
        v36 = v11;
        v23 = (char *)sub_491288(a1, *(void **)a1, v13, 1u);
        v22 = *(_QWORD *)(a1 + 8);
        v11 = v36;
        *(_QWORD *)a1 = v23;
      }
      v37 = v11;
      memset(&v23[v22], 0, v13 - v22);
      *(_QWORD *)(a1 + 8) = v13;
      v11 = v37;
LABEL_13:
      v14 = v10;
      v15 = (const char *)&qword_4B2D48;
      memcpy((void *)(*(_QWORD *)a1 + v12), v14, v11);
      if ( *(_QWORD *)(v4 + 40) )
        v15 = *(const char **)(v4 + 32);
      if ( v15 )
      {
        v16 = strlen(v15) + 1;
      }
      else
      {
        v16 = 1;
        v15 = &byte_4B31F0;
      }
      v17 = *(_QWORD *)(a1 + 8);
      v18 = v16 + v17;
      if ( v17 <= v16 + v17 )
      {
        if ( v17 < v16 + v17 )
          goto LABEL_24;
      }
      else
      {
        if ( v17 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
          v20 = *(_QWORD *)(a1 + 8);
          v21 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v18 )
          {
            v34 = v18;
            v21 = (char *)sub_491288(a1, *(void **)a1, v18, 1u);
            v20 = *(_QWORD *)(a1 + 8);
            v18 = v34;
            *(_QWORD *)a1 = v21;
          }
          v35 = v18;
          memset(&v21[v20], 0, v18 - v20);
          *(_QWORD *)(a1 + 8) = v35;
          goto LABEL_21;
        }
        if ( (v17 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      }
LABEL_21:
      v4 += 56;
      memcpy((void *)(*(_QWORD *)a1 + v17), v15, v16);
    }
    while ( v5 != v4 );
  }
  return *(_QWORD *)&v41[3] ^ _stack_chk_guard;
}
// 4718D0: could not find valid save-restore pair for x21
// 4718D0: could not find valid save-restore pair for x27
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
