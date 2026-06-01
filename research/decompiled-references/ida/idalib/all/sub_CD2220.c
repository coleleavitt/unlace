__int64 __fastcall sub_CD2220(__int64 a1, __int64 *a2, int a3, unsigned __int8 a4, __int64 a5, int a6, __int32 a7)
{
  int v8; // r11d
  int v10; // r9d
  _QWORD *v12; // rdi
  __int64 v13; // rbp
  int v14; // ebp
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __m128i v22; // xmm1
  __int64 v23; // rdi
  __int64 v24; // rbx
  __m128i *(__fastcall *v26)(__int64, const __m128i *); // rax
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // r12
  _QWORD *v38; // rdx
  void *v39; // rdi
  __int32 v40; // r15d
  __m128i v41; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+10h] [rbp-98h]
  int v43; // [rsp+18h] [rbp-90h]
  int v44; // [rsp+1Ch] [rbp-8Ch]
  __m128i v45; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v46; // [rsp+30h] [rbp-78h] BYREF
  __m128i v47; // [rsp+38h] [rbp-70h] BYREF
  __m128i v48[5]; // [rsp+50h] [rbp-58h] BYREF

  v8 = a3;
  v10 = a4;
  v12 = *(_QWORD **)(a1 + 1272);
  v13 = *a2 >> 1;
  v12[26] += 88LL;
  v41.m128i_i32[0] = a7;
  v14 = v13 & 1;
  v15 = v12[16];
  v16 = (v15 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v12[17] >= v16 + 88 && v15 )
  {
    v12[16] = v16 + 88;
  }
  else
  {
    v44 = a3;
    v42 = 0x100000010LL;
    v43 = a4;
    v35 = sub_986170((__int64)(v12 + 16), 88, 88, 4, 0x100000010LL, a4);
    v8 = v44;
    v16 = v35;
    v10 = v43;
  }
  sub_CEE970(v16, (_DWORD)a2, 0, v8, 16, v10, v14, 0, 0);
  *(_BYTE *)(v16 + 62) = v41.m128i_i8[0];
  v45.m128i_i32[0] = sub_CFF2C0(a1, v16);
  v19 = *a2;
  v45.m128i_i64[1] = v20;
  if ( v19 )
  {
    if ( (v19 & 2) == 0 )
    {
      v21 = v19 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v21 )
      {
        if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 26 <= 0x1A )
        {
          v22 = _mm_load_si128(&v45);
          v46 = v21;
          v47 = v22;
          sub_CBBCC0(v48, a1 + 1280, (__int64 *)&v46, &v47, v17, v18);
        }
      }
    }
  }
  v23 = *(_QWORD *)(a1 + 1328);
  if ( !a5 )
  {
    if ( v23 )
    {
      if ( a6 == *(_DWORD *)(v23 + 32) )
      {
        v32 = *(_QWORD *)(a1 + 1328);
      }
      else
      {
        v32 = *(_QWORD *)(v23 + 16);
        if ( !v32 )
          goto LABEL_16;
        while ( a6 != *(_DWORD *)(v32 + 32) )
        {
          v32 = *(_QWORD *)(v32 + 16);
          if ( !v32 )
            goto LABEL_16;
        }
      }
      (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v32 + 16LL))(v32, &v45);
      return v45.m128i_u32[0];
    }
LABEL_16:
    (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v23 + 16LL))(v23, &v45);
    return v45.m128i_u32[0];
  }
  if ( v23 )
  {
    if ( a5 != *(_QWORD *)(v23 + 24) )
    {
      v24 = *(_QWORD *)(v23 + 16);
      if ( v24 )
      {
        v23 = *(_QWORD *)(v23 + 16);
        while ( a5 != *(_QWORD *)(v23 + 24) )
        {
          v23 = *(_QWORD *)(v23 + 16);
          if ( !v23 )
            goto LABEL_19;
        }
      }
    }
    goto LABEL_16;
  }
  v24 = 0x1003E0003LL;
LABEL_19:
  v26 = *(__m128i *(__fastcall **)(__int64, const __m128i *))(*(_QWORD *)v24 + 16LL);
  if ( v26 == sub_CBE7F0 )
  {
    v27 = *(_QWORD *)(v24 + 8);
    v28 = v27;
    if ( !*(_BYTE *)(v24 + 40) )
    {
      v33 = *(unsigned int *)(v27 + 72);
      *(_BYTE *)(v24 + 40) = 1;
      *(_DWORD *)(v24 + 36) = v33;
      if ( *(_DWORD *)(v27 + 76) <= (unsigned int)v33 )
      {
        v37 = sub_2237400(v27 + 64, v27 + 80, 0, 144, v48);
        v38 = (_QWORD *)(v37 + 144LL * *(unsigned int *)(v27 + 72));
        *v38 = v38 + 2;
        v38[1] = 0x800000000LL;
        sub_CBE6C0(v27 + 64, v37);
        v39 = *(void **)(v27 + 64);
        v40 = v48[0].m128i_i32[0];
        if ( (void *)(v27 + 80) != v39 )
          free(v39);
        *(_QWORD *)(v27 + 64) = v37;
        *(_DWORD *)(v27 + 76) = v40;
        ++*(_DWORD *)(v27 + 72);
        v27 = *(_QWORD *)(v24 + 8);
      }
      else
      {
        v34 = (_QWORD *)(*(_QWORD *)(v27 + 64) + 144 * v33);
        v34[1] = 0x800000000LL;
        *v34 = v34 + 2;
        ++*(_DWORD *)(v27 + 72);
      }
      v48[0].m128i_i64[0] = 0;
      sub_D069A0(v27, *(unsigned int *)(v24 + 36), v48);
      v28 = *(_QWORD *)(v24 + 8);
    }
    v29 = *(_QWORD *)(v28 + 64) + 144LL * *(unsigned int *)(v24 + 36);
    v30 = *(unsigned int *)(v29 + 8);
    v31 = *(unsigned int *)(v29 + 12);
    if ( v30 >= v31 )
    {
      v36 = _mm_load_si128(&v45);
      if ( v31 < v30 + 1 )
      {
        v41 = v36;
        sub_2237220(v29, v29 + 16, v30 + 1, 16);
        v30 = *(unsigned int *)(v29 + 8);
        v36 = _mm_load_si128(&v41);
      }
      *(__m128i *)(*(_QWORD *)v29 + 16 * v30) = v36;
      ++*(_DWORD *)(v29 + 8);
    }
    else
    {
      *(__m128i *)(*(_QWORD *)v29 + 16 * v30) = _mm_load_si128(&v45);
      ++*(_DWORD *)(v29 + 8);
    }
  }
  else
  {
    v26(v24, &v45);
  }
  return v45.m128i_u32[0];
}
