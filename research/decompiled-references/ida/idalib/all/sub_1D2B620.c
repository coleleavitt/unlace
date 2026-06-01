__int64 __fastcall sub_1D2B620(__int64 **a1, __int64 a2, __int64 a3, void **a4, __m128 a5, __m128 a6)
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
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  bool v27; // al
  __int64 *v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-80h]
  __int64 v34; // [rsp+10h] [rbp-78h]
  _QWORD *v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+18h] [rbp-70h]
  __int128 v38; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h]
  __int128 v40; // [rsp+40h] [rbp-48h]

  v6 = a3;
  v9 = (unsigned int *)(a4 + 2);
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1D190C0(
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
  v17 = sub_1D23E30(a1, v15, a4[1], 0, 0);
  v33 = v18;
  v34 = v17;
  if ( !v17 )
    return 0;
  v19 = sub_F61C10(v6);
  v22 = v34;
  v23 = v19;
  if ( !v19 )
  {
    v25 = 0;
    goto LABEL_7;
  }
  v37 = v34;
  v35 = v19;
  v24 = sub_1D1B120((__int64)a1, (__int64)v19, a5, a6, (__int64)v19, v20, v22, v21);
  v23 = v35;
  v22 = v37;
  v25 = v24;
  if ( !v24 )
    return 0;
LABEL_7:
  v26 = *((unsigned int *)*a1 + 3158);
  if ( (_DWORD)v26
    || (v27 = v16 != *(_QWORD *)(v6 + 32), (LODWORD(v26) = v27 || v15 != v22) != 0)
    || (_QWORD *)v25 != v23 )
  {
    v36 = v25;
    v38 = 0;
    *(_OWORD *)ptr = 0;
    v40 = 0;
    sub_15AB8B0((__int64)&v38, v22, v33);
    v26 = v16;
    v6 = sub_1E72060(*a1, v16, &v38, v36, *(unsigned int *)a4, 0);
    v28 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
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
    v28 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v29 = *v28;
  if ( *(_BYTE *)(*v28 + 16) == 33
    || (v32 = *(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v32 + 16) == 33)
    && (v29 = sub_F63050(*v28, v26, v32, v25)) != 0 )
  {
    v30 = *(_QWORD *)(v29 + 32);
    if ( v16 != v30 )
      sub_1EA6140(a2, v30, 0, 1);
  }
  sub_1EA6140(a2, v6, 16, 8);
  *(_DWORD *)v31 = *(_DWORD *)a4;
  *(_QWORD *)(v31 + 8) = v33;
  return v6;
}
