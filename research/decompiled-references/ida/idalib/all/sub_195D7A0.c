__int64 __fastcall sub_195D7A0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rax
  char v7; // dl
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r12
  void *v12; // rdx
  __m128 v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdx
  _QWORD *v20; // r9
  __int64 v21; // r14
  _QWORD *v22; // rax
  __int64 result; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-C0h]
  _QWORD *v30; // [rsp+10h] [rbp-B8h]
  _QWORD *v31; // [rsp+10h] [rbp-B8h]
  unsigned int v32; // [rsp+1Ch] [rbp-ACh]
  char v33; // [rsp+27h] [rbp-A1h] BYREF
  __int64 v34; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+30h] [rbp-98h] BYREF
  void *v36[2]; // [rsp+40h] [rbp-88h]
  __int128 v37; // [rsp+50h] [rbp-78h]
  __int128 v38; // [rsp+60h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-58h]
  __int128 v40; // [rsp+80h] [rbp-48h]

  v6 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v6 == 1 )
    return 1;
  v7 = *(_BYTE *)(a2 + 24);
  v8 = *a1;
  v33 = 0;
  v34 = 0;
  v9 = sub_19B0570(
         v8,
         0,
         (unsigned int)v6 & 0xFFFFFFFE,
         *(_DWORD *)(a2 + 28),
         (v7 & 1) == 0 ? 26 : 37,
         (unsigned int)&v34,
         (__int64)&v33);
  if ( v9 == 1 )
    return 1;
  v10 = *(_QWORD *)(a2 + 32);
  v11 = v34;
  v12 = *(void **)(a2 + 40);
  if ( v10 )
  {
    v10 = sub_1949260((__int64)a1, v10, v12, v34, 0);
    if ( !v10 )
      return 1;
  }
  v13 = 0;
  v35 = 0;
  *(_OWORD *)v36 = 0;
  v37 = 0;
  sub_15AB8B0((__int64)&v35, v10, (__int64)v12);
  v14 = *(_QWORD *)(a2 + 64);
  if ( v14 )
  {
    v15 = (v14 >> 2) & 1;
    if ( ((v14 >> 2) & 1) == 0 )
    {
      v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v17 = (__int64)sub_1949040(a1, *(_QWORD *)v16, (unsigned int *)(v16 + 8), v11, 0, (__int64)&v35, 0.0, a4);
          if ( !v17 )
            goto LABEL_32;
        }
LABEL_9:
        sub_C93FF0((__int64)&v38, v17);
        v18 = v38;
        v19 = DWORD2(v38);
        goto LABEL_10;
      }
    }
    v19 = *(unsigned int *)(a2 + 72);
    if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      {
        v24 = 4;
        if ( (v14 & 4) != 0 )
          v24 = v14 & 0xFFFFFFFFFFFFFFF8LL | 4;
        goto LABEL_37;
      }
      v25 = *a1;
      v15 = (v14 >> 2) & 1;
    }
    else
    {
      v25 = *a1;
    }
    v26 = v14 & 0xFFFFFFF8;
    if ( !v15 )
      v26 = 0;
LABEL_24:
    v27 = sub_19BBC70(v25, v26, v19, 0, (unsigned int)&v35, v34, 0);
    if ( !v27 )
    {
LABEL_32:
      result = 1;
      goto LABEL_29;
    }
    v30 = *(_QWORD **)(*a1 + 248);
    v32 = *(_DWORD *)(a2 + 72);
    v28 = sub_1E5F010(v27, 0);
    v17 = (__int64)sub_A81910(v30, v28, v32);
    goto LABEL_9;
  }
  v19 = *(unsigned int *)(a2 + 72);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) == 0
    || (v24 = 4, (*(_BYTE *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0) )
  {
    v25 = *a1;
    v26 = 0;
    goto LABEL_24;
  }
LABEL_37:
  v18 = v24;
LABEL_10:
  v20 = *(_QWORD **)(a2 + 48);
  v21 = v19;
  if ( v20 )
  {
    v13 = 0;
    v38 = 0;
    *(_OWORD *)ptr = 0;
    v40 = 0;
    if ( (*v20 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v22 = sub_1949040(a1, *v20, (unsigned int *)v20 + 2, v11, 0, (__int64)&v38, 0.0, a4);
      v20 = v22;
      if ( !v22 )
      {
        result = 1;
        if ( HIDWORD(ptr[1]) )
        {
          free(ptr[0]);
          result = 1;
        }
        goto LABEL_29;
      }
      if ( HIDWORD(ptr[1]) )
      {
        v31 = v22;
        free(ptr[0]);
        v20 = v31;
      }
    }
  }
  result = sub_18D8440(
             a1,
             v9 & 0xFFFFFFFFFFFFFFFELL,
             *(_DWORD *)(a2 + 28),
             *(_BYTE *)(a2 + 24) & 1,
             (__m128i **)&v35,
             v20,
             v13,
             *(_DWORD *)(a2 + 56),
             *(_DWORD *)(a2 + 60),
             v18,
             v21);
LABEL_29:
  if ( HIDWORD(v36[1]) )
  {
    v29 = result;
    free(v36[0]);
    return v29;
  }
  return result;
}
