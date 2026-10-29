__int64 __fastcall sub_1971F90(__int64 *a1, __int64 a2, unsigned int a3, __m128 a4, __m128 a5)
{
  __int64 *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // r8
  _QWORD *v12; // rsi
  __int64 v13; // r8
  __int64 *v14; // r9
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __m128 si128; // xmm0
  __int64 v21; // rax
  __m128i *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v25; // rax
  __m128 v26; // xmm0
  unsigned __int64 v27; // r15
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned int *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128i v35; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v36; // [rsp+10h] [rbp-A8h]
  unsigned int v37; // [rsp+1Ch] [rbp-9Ch]
  __int64 v38; // [rsp+20h] [rbp-98h] BYREF
  unsigned int *v39; // [rsp+28h] [rbp-90h]
  __m128 v40; // [rsp+30h] [rbp-88h] BYREF
  void *v41; // [rsp+40h] [rbp-78h] BYREF
  __m128 v42; // [rsp+48h] [rbp-70h]
  _DWORD v43[9]; // [rsp+58h] [rbp-60h] BYREF
  char v44; // [rsp+7Ch] [rbp-3Ch]

  v8 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v8 = (__int64 *)v8[4];
  if ( !a3 || *(_BYTE *)(*(_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 38 )
  {
    v9 = (__int64)sub_19425F0(a1, (__int64)v8, a4, a5);
    goto LABEL_6;
  }
  v38 = *v8;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v39 = (unsigned int *)(v8 + 1);
  v41 = v43;
  v42 = si128;
  v43[8] = 0;
  v44 = 0;
  if ( (unsigned int)sub_F6C560(*v8) > si128.m128_u64[0] )
    sub_1EA60C0(&v41);
  v21 = sub_1743190((__int64)&v38);
  v36 = sub_193F4E0(a1, (__int64)&v41, v21, v22, v23, v24, si128, a5);
  if ( (v36 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v37 = *v39;
    v25.m128i_i64[0] = sub_1743190((__int64)&v38);
    v35 = v25;
    v26 = (__m128)_mm_load_si128(&v35);
    v35.m128i_i64[0] = (__int64)&v40;
    v40 = v26;
    v27 = (unsigned __int64)(unsigned int)sub_F6CE20((__int64 *)&v40) << 32;
    v28 = sub_F6CCB0((__int64 *)v35.m128i_i64[0], v26);
    v29 = sub_1E503F0(*a1, v36, v27 | v28, v37, a3);
    v30 = v29;
    if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      sub_1EA6140(&v41, v29, 4, 4);
      *v31 = *v39;
      v9 = (__int64)sub_18C0B80(&v41, *(_QWORD **)(*a1 + 248), v30, v32, v33, v34);
      if ( v41 && v41 != v43 )
        operator delete[](v41);
LABEL_6:
      if ( !v9 )
        return v9;
      if ( v8 == (__int64 *)v9 )
        return a2;
      v10 = *(_QWORD *)(a2 + 16);
      v11 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
        v11 = 0;
      v12 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v10 & 4) != 0 )
        v12 = (_QWORD *)*v12;
      v9 = sub_B74530(
             *(_QWORD *)(*a1 + 248),
             (__int64)v12,
             *(_DWORD *)(a2 + 64),
             *(_DWORD *)(a2 + 24),
             v11,
             *(_QWORD *)v9,
             v9,
             *(_BYTE *)(a2 + 96) & 7,
             0);
      v15 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
      if ( v15 == 255 )
      {
        v15 = sub_B74880(a2);
        LOBYTE(v16) = 0;
        if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
          goto LABEL_15;
      }
      else
      {
        LOBYTE(v16) = 0;
        if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
        {
LABEL_15:
          v17 = *(_DWORD *)(v9 + 96) & 0xFFF01FFF;
          v18 = (unsigned int)v17 | ((v16 & 0x7F) << 13);
          *(_DWORD *)(v9 + 96) = v18;
          if ( v15 > 0xFE )
            sub_B74850(v9, v15);
          else
            *(_WORD *)(v9 + 98) = *(_WORD *)(v9 + 98) & 0xF00F | (16 * (unsigned __int8)v15);
          v41 = (void *)a2;
          *sub_1742A40((__int64)(a1 + 1), (__int64 *)&v41, v18, v17, v13, v14) = v9;
          return v9;
        }
      }
      v16 = (*(_DWORD *)(a2 + 96) >> 13) & 0x7F;
      goto LABEL_15;
    }
  }
  if ( v41 != v43 && v41 )
    operator delete[](v41);
  return 0;
}
