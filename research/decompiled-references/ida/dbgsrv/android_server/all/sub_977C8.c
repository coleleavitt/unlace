/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_977C8
// Address: 0x00000000000977C8

//----- (00000000000977C8) ----------------------------------------------------
char *__fastcall sub_977C8(__int64 a1, unsigned __int64 *a2)
{
  void *v4; // x0
  unsigned __int8 *v5; // x9
  unsigned __int64 v6; // x1
  unsigned __int64 v7; // x8
  int v8; // w9
  int v9; // w21
  __int64 v10; // x2
  char *result; // x0
  int v12; // w8
  unsigned __int8 *v13; // x9
  unsigned __int64 v14; // x1
  unsigned __int64 v15; // x8
  int v16; // w9
  int v17; // w22
  __int64 v18; // x2
  unsigned __int64 v19; // x8
  size_t v20; // x22
  char *v21; // x1
  char *v22; // x0
  const void *v23; // x1
  unsigned __int64 v24; // x8
  void *v25; // x0
  unsigned __int64 v26; // x9
  unsigned __int64 v27; // x9
  char *v28; // [xsp+8h] [xbp-48h] BYREF
  char v29; // [xsp+10h] [xbp-40h] BYREF
  _BYTE v30[15]; // [xsp+11h] [xbp-3Fh] BYREF

  *(_QWORD *)&v30[7] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(int *)a1 >= -1 )
  {
    v4 = *(void **)(a1 + 8);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v4);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
  v5 = (unsigned __int8 *)*a2;
  v6 = *a2 + 1;
  if ( v6 < *a2 || (v7 = a2[1], v6 > v7) )
  {
    v29 = 0;
    goto LABEL_14;
  }
  *a2 = v6;
  v8 = *v5;
  v29 = v8;
  if ( (v8 & 0x80) == 0 )
  {
LABEL_14:
    v9 = 1;
    goto LABEL_15;
  }
  if ( (~(_BYTE)v8 & 0xC0) != 0 )
  {
    v9 = 2;
    v10 = 1;
  }
  else
  {
    if ( (~v8 & 0xE0) != 0 )
      v9 = 4;
    else
      v9 = 5;
    v10 = (unsigned int)(v9 - 1);
  }
  v26 = v6 + v10;
  if ( v6 + v10 >= v6 && v26 <= v7 )
  {
    *a2 = v26;
    __memcpy_chk(v30, v6, v10, 4);
  }
LABEL_15:
  v28 = &v29;
  result = (char *)unpack_dd((unsigned __int64 *)&v28, (unsigned __int64)&v30[v9 - 1]);
  v12 = (_DWORD)result - 3;
  *(_DWORD *)a1 = (_DWORD)result - 3;
  if ( (_DWORD)result == 1 )
  {
    result = (char *)sub_97A98(a2);
    *(_QWORD *)(a1 + 8) = result - 1;
    return result;
  }
  if ( !(_DWORD)result )
    return result;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v12;
  if ( v12 <= -2 )
  {
    if ( !under_debugger )
      result = (char *)interr(3216);
    __break(1u);
    sub_39134(result);
  }
  v13 = (unsigned __int8 *)*a2;
  v14 = *a2 + 1;
  if ( v14 < *a2 || (v15 = a2[1], v14 > v15) )
  {
    v29 = 0;
  }
  else
  {
    *a2 = v14;
    v16 = *v13;
    v29 = v16;
    if ( (v16 & 0x80) != 0 )
    {
      if ( (~(_BYTE)v16 & 0xC0) != 0 )
      {
        v17 = 2;
        v18 = 1;
      }
      else
      {
        if ( (~v16 & 0xE0) != 0 )
          v17 = 4;
        else
          v17 = 5;
        v18 = (unsigned int)(v17 - 1);
      }
      v27 = v14 + v18;
      if ( v14 + v18 >= v14 && v27 <= v15 )
      {
        *a2 = v27;
        __memcpy_chk(v30, v14, v18, 4);
      }
      goto LABEL_29;
    }
  }
  v17 = 1;
LABEL_29:
  v28 = &v29;
  result = (char *)unpack_dd((unsigned __int64 *)&v28, (unsigned __int64)&v30[v17 - 1]);
  v19 = *(_QWORD *)(a1 + 16);
  v20 = (int)result;
  if ( v19 < (int)result )
  {
    v21 = *(char **)(a1 + 8);
    if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(int)result )
    {
      v22 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 8), v21, (int)result, 1u);
      v19 = *(_QWORD *)(a1 + 16);
      v21 = v22;
      *(_QWORD *)(a1 + 8) = v22;
    }
    result = (char *)memset(&v21[v19], 0, v20 - v19);
    *(_QWORD *)(a1 + 16) = v20;
    if ( !(_DWORD)v20 )
      return result;
LABEL_37:
    v23 = (const void *)*a2;
    v24 = *a2 + v20;
    if ( v24 >= *a2 && v24 <= a2[1] )
    {
      v25 = *(void **)(a1 + 8);
      *a2 = v24;
      return (char *)memcpy(v25, v23, v20);
    }
    return result;
  }
  if ( v19 != (int)result )
  {
    LOBYTE(v28) = 0;
    result = (char *)sub_5BBF4((pthread_mutex_t *)(a1 + 8), (int)result, (char *)&v28);
  }
  if ( (_DWORD)v20 )
    goto LABEL_37;
  return result;
}
// 97864: conditional instruction was optimized away because w21.4 is in (4..5)
// 9791C: conditional instruction was optimized away because w22.4 is in (4..5)
// 37290: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 168DF0: using guessed type char under_debugger;
