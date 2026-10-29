void ***__fastcall sub_215FAF0(void ***a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // r14
  unsigned __int64 v11; // r13
  void **v12; // rbp
  _BYTE *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void **v17; // rax
  __int64 v18; // [rsp+8h] [rbp-D0h]
  const char *v19; // [rsp+10h] [rbp-C8h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+18h] [rbp-C0h]
  void *v21[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-A8h] BYREF
  __m128 v23; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-88h]
  int v25; // [rsp+58h] [rbp-80h]
  void **v26; // [rsp+60h] [rbp-78h] BYREF
  int v27; // [rsp+68h] [rbp-70h]
  __int128 v28; // [rsp+70h] [rbp-68h]
  __int64 v29; // [rsp+80h] [rbp-58h]
  char v30; // [rsp+88h] [rbp-50h]
  int v31; // [rsp+8Ch] [rbp-4Ch]
  void **v32; // [rsp+90h] [rbp-48h]

  v5 = *(_QWORD *)(a2 + 80);
  if ( !v5
    || ((v6 = *(_QWORD *)(a2 + 64)) == 0 ? (v7 = (_DWORD *)(*(_QWORD *)(a2 + 72) + 108LL)) : (v7 = (_DWORD *)(v6 + 92)),
        *v7 <= 9u || v5 == -72 || (v8 = *(unsigned int *)(v5 + 72), !(_DWORD)v8)) )
  {
LABEL_7:
    *a1 = nullptr;
    return a1;
  }
  v10 = *(unsigned int *)(v5 + 76);
  v11 = (-(__int64)(*(_QWORD *)(a2 + 72) == 0) & 0xFFFFFFFFFFFFFFF0LL) + 40;
  if ( v10 == v11 )
  {
    v23.m128_u64[0] = 0;
    sub_215F120(&v26, (void **)a2, *(_DWORD *)(v5 + 72), (__int64 (__fastcall **)())&v23, (__int64)"TLS directory");
    v17 = v26;
    if ( v26
      || (sub_215ED20(
            &v26,
            v23.m128_u64[0],
            *(unsigned int *)(v5 + 76),
            v14,
            v15,
            v16,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 24)),
          (v17 = v26) != nullptr) )
    {
      *a1 = v17;
      return a1;
    }
    if ( *(_QWORD *)(a2 + 72) )
      *(_QWORD *)(a2 + 200) = v23.m128_u64[0];
    else
      *(_QWORD *)(a2 + 192) = v23.m128_u64[0];
    goto LABEL_7;
  }
  v18 = sub_2195B10(a1, a2, v8, a4);
  v28 = 0;
  v21[0] = v22;
  v26 = (void **)&off_2BEBE68;
  v20 = &off_2BEBE68;
  v32 = v21;
  v21[1] = nullptr;
  v22[0] = 0;
  v27 = 0;
  v30 = 0;
  v31 = 1;
  v29 = 0;
  sub_227B8B0(&v26, 0, 0, 0);
  v24 = v11;
  v25 = v10;
  v19 = "TLS Directory size (%u) is not the expected size (%lu).";
  v23 = _mm_loadh_ps((const double *)&v19);
  sub_227C560(&v26, &v23);
  v26 = (void **)v20;
  sub_227B7A0(&v26);
  v26 = v21;
  LOWORD(v29) = 260;
  v12 = (void **)operator new(0x40u);
  sub_2220590(v12, &v26, 3, v18);
  v13 = v21[0];
  *a1 = v12;
  if ( v13 != v22 )
    operator delete(v13);
  return a1;
}
