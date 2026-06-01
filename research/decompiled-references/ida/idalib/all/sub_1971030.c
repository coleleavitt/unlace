__int64 __fastcall sub_1971030(__int64 *a1, __int64 a2, __int64 a3, void **a4, __m128 a5, __m128 a6)
{
  unsigned int *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // [rsp+0h] [rbp-78h]
  __int64 v30; // [rsp+8h] [rbp-70h]
  __int128 v31; // [rsp+10h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-58h]
  __int128 v33; // [rsp+30h] [rbp-48h]

  v9 = (unsigned int *)(a4 + 2);
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_193F4E0(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (__m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v13;
  v16 = sub_1969B50((__int64)a1, *(_QWORD *)(a3 + 40), a4[1], 0, 0);
  v29 = v17;
  v30 = v16;
  if ( !v16 )
    return 0;
  v18 = sub_F61C10(a3);
  v19 = v30;
  v20 = v18;
  if ( v18 )
  {
    v21 = sub_18CBB50((__int64)a1, (__int64)v18);
    v19 = v30;
    v20 = (_QWORD *)v21;
    if ( !v21 )
      return 0;
  }
  v31 = 0;
  *(_OWORD *)ptr = 0;
  v33 = 0;
  sub_15AB8B0((__int64)&v31, v19, v29);
  v23 = sub_1E72060(*a1, v15, &v31, v20, *(unsigned int *)a4, 0);
  v24 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( HIDWORD(ptr[1]) )
      free(ptr[0]);
    v25 = *v24;
    if ( *(_BYTE *)(*v24 + 16) == 33
      || (v28 = *(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v28 + 16) == 33)
      && (v25 = sub_F63050(*v24, v15, v28, v22)) != 0 )
    {
      v26 = *(_QWORD *)(v25 + 32);
      if ( v15 != v26 )
        sub_1EA6140(a2, v26, 0, 1);
    }
    sub_1EA6140(a2, v23, 16, 8);
    *(_DWORD *)v27 = *(_DWORD *)a4;
    *(_QWORD *)(v27 + 8) = v29;
    return v23;
  }
  else
  {
    result = 0;
    if ( HIDWORD(ptr[1]) )
    {
      free(ptr[0]);
      return 0;
    }
  }
  return result;
}
