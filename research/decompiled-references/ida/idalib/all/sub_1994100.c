__int64 __fastcall sub_1994100(__int64 *a1, __int64 a2, __int64 a3, void **a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  unsigned int *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // [rsp+8h] [rbp-80h]
  __int64 v31; // [rsp+10h] [rbp-78h]
  _QWORD *v32; // [rsp+10h] [rbp-78h]
  __int64 v33; // [rsp+10h] [rbp-78h]
  __int64 v34; // [rsp+18h] [rbp-70h]
  __int128 v35; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h]
  __int128 v37; // [rsp+40h] [rbp-48h]

  v6 = a3;
  v9 = (unsigned int *)(a4 + 2);
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (__m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = *(_QWORD *)(v6 + 40);
  v16 = v13;
  v17 = (_QWORD *)v15;
  v18 = sub_198CB00((__int64)a1, v15, a4[1], 0, 0);
  v30 = v19;
  v31 = v18;
  if ( !v18 )
    return 0;
  v20 = sub_F61C10(v6);
  v21 = v31;
  v22 = v20;
  if ( !v20 )
  {
    v24 = 0;
    goto LABEL_7;
  }
  v17 = v20;
  v34 = v31;
  v32 = v20;
  v23 = sub_18CBE40((__int64)a1, (__int64)v20);
  v22 = v32;
  v21 = v34;
  v24 = v23;
  if ( !v23 )
    return 0;
LABEL_7:
  LOBYTE(v17) = v16 != *(_QWORD *)(v6 + 32) || v21 != v15;
  if ( !(_BYTE)v17 && (_QWORD *)v24 == v22 )
  {
    v25 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v33 = v24;
    v35 = 0;
    *(_OWORD *)ptr = 0;
    v37 = 0;
    sub_15AB8B0((__int64)&v35, v21, v30);
    v17 = (_QWORD *)v16;
    v6 = sub_1E72060(*a1, v16, &v35, v33, *(unsigned int *)a4, 0);
    v25 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      result = 0;
      if ( HIDWORD(ptr[1]) )
      {
        free(ptr[0]);
        return 0;
      }
      return result;
    }
    if ( HIDWORD(ptr[1]) )
      free(ptr[0]);
  }
  v26 = *v25;
  if ( *(_BYTE *)(*v25 + 16) == 33
    || (v29 = *(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v29 + 16) == 33)
    && (v26 = sub_F63050(*v25, v17, v29, v24)) != 0 )
  {
    v27 = *(_QWORD *)(v26 + 32);
    if ( v16 != v27 )
      sub_1EA6140(a2, v27, 0, 1);
  }
  sub_1EA6140(a2, v6, 16, 8);
  *(_DWORD *)v28 = *(_DWORD *)a4;
  *(_QWORD *)(v28 + 8) = v30;
  return v6;
}
