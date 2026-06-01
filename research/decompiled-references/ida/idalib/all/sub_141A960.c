__int64 __fastcall sub_141A960(__int64 a1, unsigned int *a2, int a3, __int64 *a4, unsigned __int8 a5)
{
  unsigned __int64 v8; // rbp
  _BYTE *v10; // rsi
  char *v11; // rdi
  char *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // r8d
  _BYTE *v17; // rcx
  __int64 v18; // rdi
  __int64 i; // rsi
  unsigned __int8 v20; // al
  unsigned int v21; // eax
  void *v22; // rdi
  int v24; // r12d
  int v25; // eax
  unsigned __int8 v27; // [rsp+Eh] [rbp-FAh]
  unsigned __int8 v28; // [rsp+Fh] [rbp-F9h]
  unsigned __int8 v29; // [rsp+17h] [rbp-F1h] BYREF
  _BYTE *v30; // [rsp+18h] [rbp-F0h] BYREF
  unsigned __int8 *v31[10]; // [rsp+20h] [rbp-E8h] BYREF
  void *ptr; // [rsp+70h] [rbp-98h] BYREF
  __m128i si128; // [rsp+78h] [rbp-90h]
  _BYTE v34[128]; // [rsp+88h] [rbp-80h] BYREF

  if ( *(_WORD *)(a1 + 16) != 7 )
  {
    sub_FC70B0((__int64)&ptr, a4[6], *(_DWORD *)a1, a3);
    sub_AEA040((__int64)&ptr);
    v16 = 1;
    if ( *(_WORD *)(a1 + 16) != 2 )
    {
      sub_141A820((__int64)a4, (unsigned int *)&ptr);
      return 1;
    }
    return v16;
  }
  v8 = *(unsigned int *)(a1 + 4);
  v10 = v34;
  ptr = v34;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  if ( v8 )
  {
    v11 = v34;
    if ( v8 > 0x40 )
    {
      sub_2236E10(&ptr, v34, v8, 1);
      v10 = ptr;
      v12 = (char *)ptr + v8;
      v11 = (char *)ptr + si128.m128i_i64[0];
      if ( (char *)ptr + v8 == (char *)ptr + si128.m128i_i64[0] )
        goto LABEL_6;
    }
    else
    {
      v12 = &v34[v8];
      if ( &v34[v8] == v34 )
      {
LABEL_6:
        si128.m128i_i64[0] = v8;
        goto LABEL_7;
      }
    }
    memset(v11, 0, v12 - v11);
    v10 = ptr;
    goto LABEL_6;
  }
LABEL_7:
  v13 = a4[7];
  v14 = a4[11];
  v30 = v10;
  v29 = 0;
  v15 = sub_13D1B40(a1, (__int64 *)&v30, v14, v13, &v29);
  v16 = v29;
  if ( !v29 )
  {
    *a2 = 0;
    v17 = v30;
    if ( v15 )
    {
      v18 = (unsigned int)(v15 - 1);
      for ( i = 0; ; ++i )
      {
        v20 = v17[i];
        if ( v20 != 39 )
        {
          if ( (byte_2411740[2 * v20] & 8) == 0 )
          {
            v24 = *(_DWORD *)a1;
            v25 = sub_13D1C70(*(_DWORD *)a1, i, a4[11], a4[7]);
            sub_FC70B0((__int64)v31, a4[6], v24 + v25, 1146);
            sub_AE9DF0(v31, a5, 2u);
            sub_AEA040((__int64)v31);
            sub_141A820((__int64)a4, (unsigned int *)v31);
            v22 = ptr;
            v16 = 1;
            if ( ptr != v34 )
              goto LABEL_20;
            return v16;
          }
          v21 = (char)v20 + 10 * *a2 - 48;
          if ( *a2 > v21 )
          {
            sub_FC70B0((__int64)v31, a4[6], *(_DWORD *)a1, a3);
            sub_AEA040((__int64)v31);
            sub_141A820((__int64)a4, (unsigned int *)v31);
            v22 = ptr;
            v16 = 1;
            if ( ptr != v34 )
              goto LABEL_20;
            return v16;
          }
          *a2 = v21;
        }
        if ( v18 == i )
        {
          if ( *v17 == 48 && *a2 )
          {
            v28 = v16;
            sub_FC70B0((__int64)v31, a4[6], *(_DWORD *)a1, 1380);
            sub_AE9DF0(v31, a5, 2u);
            sub_AEA040((__int64)v31);
            v16 = v28;
          }
          break;
        }
      }
    }
  }
  v22 = ptr;
  if ( ptr != v34 )
  {
LABEL_20:
    v27 = v16;
    free(v22);
    return v27;
  }
  return v16;
}
