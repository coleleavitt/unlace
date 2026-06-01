__int64 __fastcall sub_1DEE710(__int64 *a1, __int64 a2, __int64 a3, void **a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  unsigned int *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+10h] [rbp-78h]
  _QWORD *v33; // [rsp+10h] [rbp-78h]
  unsigned __int64 v34; // [rsp+10h] [rbp-78h]
  __int64 v35; // [rsp+18h] [rbp-70h]
  __int128 v36; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h]
  __int128 v38; // [rsp+40h] [rbp-48h]

  v6 = a3;
  v9 = (unsigned int *)(a4 + 2);
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1DCE820(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (const __m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          a5,
          a6,
          v11,
          v12);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = *(_QWORD *)(v6 + 40);
  v16 = v13;
  v17 = sub_1DD3CF0((__int64)a1, v15, a4[1], 0, 0);
  v31 = v18;
  v32 = v17;
  if ( !v17 )
    return 0;
  v19 = sub_F61C10(v6);
  v21 = v32;
  v22 = v19;
  if ( !v19 )
  {
    v24 = 0;
    goto LABEL_7;
  }
  v35 = v32;
  v33 = v19;
  v23 = sub_1DD8310((__int64)a1, *(_DWORD *)a4, (__int64)v19, v20, v21, (__int64)v19, a5, a6);
  v22 = v33;
  v21 = v35;
  v24 = v23;
  if ( !v23 )
    return 0;
LABEL_7:
  v25 = *(unsigned int *)(*a1 + 12632);
  if ( (_DWORD)v25 || v16 != *(_QWORD *)(v6 + 32) || v15 != v21 || (_QWORD *)v24 != v22 )
  {
    v34 = v24;
    v36 = 0;
    *(_OWORD *)ptr = 0;
    v38 = 0;
    sub_15AB8B0((__int64)&v36, v21, v31);
    v25 = v16;
    v6 = sub_1E72060(*a1, v16, &v36, v34, *(unsigned int *)a4, a1[6]);
    v26 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
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
  else
  {
    v26 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v27 = *v26;
  if ( *(_BYTE *)(*v26 + 16) == 33
    || (v30 = *(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v30 + 16) == 33)
    && (v27 = sub_F63050(*v26, v25, v30, v24)) != 0 )
  {
    v28 = *(_QWORD *)(v27 + 32);
    if ( v16 != v28 )
      sub_1EA6140(a2, v28, 0, 1);
  }
  sub_1EA6140(a2, v6, 16, 8);
  *(_DWORD *)v29 = *(_DWORD *)a4;
  *(_QWORD *)(v29 + 8) = v31;
  return v6;
}
