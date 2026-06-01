unsigned __int64 __fastcall sub_1851110(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rdx
  int v15; // eax
  __int64 *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-120h] BYREF
  __int64 v32; // [rsp+10h] [rbp-118h] BYREF
  __int64 v33; // [rsp+18h] [rbp-110h] BYREF
  __int64 v34; // [rsp+20h] [rbp-108h] BYREF
  char v35; // [rsp+28h] [rbp-100h]
  __int64 v36; // [rsp+2Ch] [rbp-FCh]
  char v37; // [rsp+34h] [rbp-F4h]
  void *v38; // [rsp+38h] [rbp-F0h]
  __int64 v39; // [rsp+40h] [rbp-E8h]
  _BYTE v40[16]; // [rsp+48h] [rbp-E0h] BYREF
  char v41; // [rsp+58h] [rbp-D0h]
  __m128 v42; // [rsp+60h] [rbp-C8h] BYREF
  int v43; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v44; // [rsp+80h] [rbp-A8h] BYREF
  char v45; // [rsp+D8h] [rbp-50h]
  char v46; // [rsp+E4h] [rbp-44h]

  v31 = sub_1E5F010(*(_QWORD *)(a2 + 64), 0);
  v6 = sub_F6AC00(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v6 )
  {
    v7 = v6;
    sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 80), 0x15A0u, 0);
    v8 = sub_1605D30((__int64)&v42, &v31);
    LOBYTE(v34) = (*(_BYTE *)(*(_QWORD *)(v7 + 32) + 28LL) & 0x7F) == 65;
    sub_1588420(v8, (unsigned __int8 *)&v34);
    sub_15F7200(&v42);
  }
  else
  {
    v26 = sub_F6A860(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v26 && (*(_BYTE *)(v26 + 18) & 8) != 0 )
    {
      sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 80), 0x15A0u, 0);
      v27 = sub_1605D30((__int64)&v42, &v31);
      LODWORD(v34) = 1;
      sub_1587D10(v27, (int *)&v34);
      sub_15F7200(&v42);
    }
  }
  v9 = *(_BYTE *)(a2 + 720) & 1;
  if ( *a4 == 2 )
  {
    if ( !v9 && ((**(_DWORD **)a2 >> 12) & 0x7F) != 0x45 )
    {
      sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 80), 0xE5Fu, 0);
      if ( v45 )
      {
        sub_AE9DF0(&v44, (__int64)"static", 1u);
      }
      else if ( v46 )
      {
        sub_18510A0((__int64)&v42, (__int64)"static");
      }
      LODWORD(v32) = *(_DWORD *)(*(_QWORD *)a2 + 168LL);
      HIDWORD(v32) = v32;
      v21 = sub_1587DB0((__int64)&v42, &v32);
      LODWORD(v33) = *(_DWORD *)(a2 + 80);
      HIDWORD(v33) = v33;
      v22 = sub_1587DB0(v21, &v33);
      v23 = *(_DWORD *)(*(_QWORD *)a2 + 168LL);
      v37 = 0;
      v36 = 0;
      v38 = v40;
      v39 = 0;
      v40[0] = 0;
      v41 = 0;
      LODWORD(v34) = v23;
      HIDWORD(v34) = v23;
      v35 = 1;
      sub_1589170(v22, &v34);
      if ( v38 != v40 )
        operator delete(v38);
      sub_15F7200(&v42);
    }
    *a4 = 0;
    v9 = *(_BYTE *)(a2 + 720) & 1;
  }
  if ( !v9 )
  {
    v10 = *(_QWORD *)a2;
    if ( ((**(_DWORD **)a2 >> 12) & 0x7F) != 0x45 )
    {
      if ( ((**(_DWORD **)a2 >> 12) & 0x7F) != 0
        || *(_BYTE *)v10 >> 6
        || (v11 = *(_BYTE *)(v10 + 1), (v11 & 3) != 0)
        || (v11 & 0xC) != 0 )
      {
        sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 80), 0xE67u, 0);
        LODWORD(v33) = *(_DWORD *)(*(_QWORD *)a2 + 192LL);
        HIDWORD(v33) = v33;
        v20 = sub_1587DB0((__int64)&v42, &v33);
        LODWORD(v34) = *(_DWORD *)(a2 + 80);
        HIDWORD(v34) = v34;
        sub_1587DB0(v20, &v34);
        sub_15F7200(&v42);
      }
      else if ( ((*(_BYTE *)(v10 + 3) >> 2) & 0x1F) != 0 )
      {
        sub_1E6B070(
          a1,
          3687,
          (*(_BYTE *)(v10 + 3) >> 2) & 0x1F,
          0,
          *(_DWORD *)(v10 + 220),
          *(_DWORD *)(v10 + 228),
          *(_DWORD *)(v10 + 224),
          *(_DWORD *)(v10 + 232),
          0);
        *(_BYTE *)(a2 + 720) |= 1u;
      }
    }
  }
  sub_1839D60(a1, a2, 4055);
  sub_184AFF0(a1, a2, 1u);
  v42.m128_i32[0] = 0;
  sub_147B3A0(a2, &v42);
  v13 = *(_QWORD *)(a2 + 128) + 144LL * v42.m128_u32[0];
  v14 = *(unsigned int *)(v13 + 80);
  if ( (_DWORD)v14 )
  {
    sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), v14, 0x1339u, 0);
    LODWORD(v33) = (*(_BYTE *)(v13 + 56) & 8) != 0;
    v24 = sub_1588370((__int64)&v42, (unsigned int *)&v33);
    v25 = *(_DWORD *)(v13 + 80);
    v36 = 0;
    v37 = 0;
    v38 = v40;
    v39 = 0;
    v40[0] = 0;
    v41 = 0;
    LODWORD(v34) = v25;
    HIDWORD(v34) = v25;
    v35 = 1;
    sub_1589170(v24, &v34);
    if ( v38 != v40 )
      operator delete(v38);
    sub_15F7200(&v42);
    *(_BYTE *)(a2 + 720) |= 1u;
  }
  v15 = *(_DWORD *)(v13 + 72);
  if ( v15 )
  {
    if ( v15 == 1 && (*(_BYTE *)(v13 + 56) & 2) == 0 )
    {
      v28 = *(_QWORD **)(v13 + 96);
      if ( !*v28 )
      {
        v29 = v28[2];
        if ( v29 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v30 + 16) == 13 && ((*(_WORD *)(v30 + 18) >> 3) & 0x1FF) == 0x1B3 )
            goto LABEL_18;
        }
      }
    }
    sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 80), 0xE6Au, 0);
    sub_15F7200(&v42);
    sub_183A990(v13 + 56);
    *(_BYTE *)(a2 + 720) |= 1u;
  }
  if ( (*(_BYTE *)(v13 + 56) & 2) != 0 )
  {
    sub_168B9F0((__int64)&v42, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 80), 0xE69u, 0);
    sub_15F7200(&v42);
    *(_BYTE *)(a2 + 720) |= 1u;
  }
LABEL_18:
  if ( (*(_BYTE *)(a2 + 720) & 1) == 0 && ((**(_DWORD **)a2 >> 12) & 0x7F) != 0x45 )
    return a3;
  v17 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *v17;
  if ( *(_BYTE *)(*v17 + 16) != 26 )
    v18 = sub_F63050(*v17, v18, v14, v12);
  sub_A5E110(&v42, v18);
  v19 = *(_QWORD *)(a1 + 248);
  v42.m128_i8[2] &= ~1u;
  v42.m128_u64[1] = 0;
  v43 = 0;
  return sub_A73610(v19, *(_QWORD *)(v19 + 18632), nullptr, 0, (const __m128i *)&v42, 0);
}
