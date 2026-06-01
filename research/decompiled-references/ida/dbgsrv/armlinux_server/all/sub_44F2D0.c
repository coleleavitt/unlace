/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F2D0
// Address: 0x000000000044F2D0

//----- (000000000044F2D0) ----------------------------------------------------
__int64 __fastcall sub_44F2D0(__int64 a1, __int64 **a2)
{
  __int64 v4; // x0
  unsigned int v5; // w20
  __int64 v7; // x2
  __int64 v8; // x26
  __int64 *v9; // x25
  __int64 v10; // x1
  __int64 v11; // x21
  _DWORD *v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  char *v15; // x4
  __int64 *v16; // x0
  const char *v17; // x22
  __int64 v18; // x0
  char *v19; // x4
  __int64 *v20; // x0
  char *v21; // x0
  char *v22; // x0
  size_t v23; // x0
  size_t v24; // x28
  size_t v25; // x27
  void *ptr; // [xsp+60h] [xbp-60h] BYREF
  __int64 v27; // [xsp+68h] [xbp-58h]
  __int64 v28; // [xsp+70h] [xbp-50h]
  __int64 v29[4]; // [xsp+78h] [xbp-48h] BYREF
  __int64 v30; // [xsp+98h] [xbp-28h] BYREF
  void *v31; // [xsp+A0h] [xbp-20h] BYREF
  size_t v32; // [xsp+A8h] [xbp-18h]
  __int64 v33; // [xsp+B0h] [xbp-10h]

  ptr = nullptr;
  v27 = 0;
  v28 = 0;
  v4 = sub_44A6A8(a1, (__int64 *)&ptr);
  if ( v4 )
  {
    v5 = (unsigned __int8)sub_44EFF8((_QWORD *)a1, v4, (const char **)&ptr, a2);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
    if ( *(_BYTE *)v7 == 2 && dword_5201A0 > 0 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      v9 = *a2;
      *a2 = nullptr;
      v10 = *(_QWORD *)(a1 + 80);
      v11 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(a1 + 88) )
      {
        v12 = sub_491288(a1 + 72, *(void **)(a1 + 72), v10 + 1, 4u);
        *(_QWORD *)(a1 + 72) = v12;
        v10 = *(_QWORD *)(a1 + 80);
      }
      else
      {
        v12 = *(_DWORD **)(a1 + 72);
      }
      v12[v10] = v11;
      LOBYTE(v29[0]) = 2;
      v13 = *(_QWORD *)(a1 + 80);
      v29[1] = v8;
      *(_QWORD *)(a1 + 80) = v13 + 1;
      v29[2] = 0;
      v29[3] = 0;
      v14 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(a1 + 40) )
      {
        v22 = (char *)sub_491288(a1 + 24, *(void **)(a1 + 24), v14 + 1, 0x20u);
        *(_QWORD *)(a1 + 24) = v22;
        v15 = v22;
        v14 = *(_QWORD *)(a1 + 32);
      }
      else
      {
        v15 = *(char **)(a1 + 24);
      }
      v16 = (__int64 *)&v15[32 * v14];
      *(_BYTE *)v16 = 2;
      v16[1] = 0;
      v16[2] = 0;
      v16[3] = 0;
      ++*(_QWORD *)(a1 + 32);
      sub_449520(v16, v29);
      LOBYTE(v30) = 7;
      v31 = nullptr;
      v32 = 0;
      v17 = (const char *)&qword_4B2D48;
      v33 = 0;
      if ( v27 )
        v17 = (const char *)ptr;
      if ( v17 )
      {
        v23 = strlen(v17);
        v24 = v23 + 1;
        v25 = v23;
        v31 = sub_491288((__int64)&v31, nullptr, v23 + 1, 1u);
        v32 = v24;
        memmove(v31, v17, v25);
        *((_BYTE *)v31 + v25) = 0;
      }
      v18 = *(_QWORD *)(a1 + 32);
      v19 = *(char **)(a1 + 24);
      if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(a1 + 40) )
      {
        v21 = (char *)sub_491288(a1 + 24, *(void **)(a1 + 24), v18 + 1, 0x20u);
        *(_QWORD *)(a1 + 24) = v21;
        v19 = v21;
        v18 = *(_QWORD *)(a1 + 32);
      }
      v20 = (__int64 *)&v19[32 * v18];
      *(_BYTE *)v20 = 2;
      v20[1] = 0;
      v20[2] = 0;
      v20[3] = 0;
      ++*(_QWORD *)(a1 + 32);
      sub_449520(v20, &v30);
      v5 = (unsigned __int8)sub_447D60((_QWORD *)a1, v9, nullptr, -dword_5201A0);
      sub_448310(&v30);
      sub_448310(v29);
    }
    else
    {
      sub_44D6D0((_QWORD *)a1);
      v5 = 0;
    }
  }
  if ( ptr )
  {
    v27 = 0;
    j__free(ptr);
  }
  return v5;
}
// 44F2D0: could not find valid save-restore pair for x27
// 44F2D0: could not find valid save-restore pair for x28
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 5201A0: using guessed type int dword_5201A0;
