__int64 __fastcall sub_1776E00(__int64 *a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 v4; // r14
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  bool v23; // al
  __int64 *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+10h] [rbp-78h]
  _QWORD *v31; // [rsp+10h] [rbp-78h]
  __int64 v32; // [rsp+10h] [rbp-78h]
  __int64 v33; // [rsp+18h] [rbp-70h]
  __int128 v34; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h]
  __int128 v36; // [rsp+40h] [rbp-48h]

  v4 = a3;
  v7 = (unsigned int *)(a4 + 2);
  v8 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v11 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v4 + 32),
          (const __m128i *)(v8 * (((unsigned __int64)v7 - (v7 != nullptr)) / v8 + (v7 != nullptr))),
          v9,
          v10);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v13 = *(_QWORD *)(v4 + 40);
  v14 = v11;
  v15 = sub_176EE90(a1, v13, a4[1], 0, 0);
  v29 = v16;
  v30 = v15;
  if ( !v15 )
    return 0;
  v17 = sub_F61C10(v4);
  v18 = v30;
  v19 = v17;
  if ( !v17 )
  {
    v21 = 0;
    goto LABEL_7;
  }
  v33 = v30;
  v31 = v17;
  v20 = sub_17473B0((__int64)a1, (__int64)v17);
  v19 = v31;
  v18 = v33;
  v21 = v20;
  if ( !v20 )
    return 0;
LABEL_7:
  v22 = *(unsigned int *)(*a1 + 12632);
  if ( (_DWORD)v22
    || (v23 = v14 != *(_QWORD *)(v4 + 32), (LODWORD(v22) = v23 || v13 != v18) != 0)
    || (_QWORD *)v21 != v19 )
  {
    v32 = v21;
    v34 = 0;
    *(_OWORD *)ptr = 0;
    v36 = 0;
    sub_15AB8B0((__int64)&v34, v18, v29);
    v22 = v14;
    v4 = sub_1E72060(*a1, v14, &v34, v32, *(unsigned int *)a4, 0);
    v24 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
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
    v24 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v25 = *v24;
  if ( *(_BYTE *)(*v24 + 16) == 33
    || (v28 = *(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v28 + 16) == 33)
    && (v25 = sub_F63050(*v24, v22, v28, v21)) != 0 )
  {
    v26 = *(_QWORD *)(v25 + 32);
    if ( v14 != v26 )
      sub_1EA6140(a2, v26, 0, 1);
  }
  sub_1EA6140(a2, v4, 16, 8);
  *(_DWORD *)v27 = *(_DWORD *)a4;
  *(_QWORD *)(v27 + 8) = v29;
  return v4;
}
