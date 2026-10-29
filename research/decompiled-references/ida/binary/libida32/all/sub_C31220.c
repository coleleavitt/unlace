__int64 __fastcall sub_C31220(__int64 a1, __m128i *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  char v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned int v16; // ebp
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  unsigned int v19; // ebp
  __int64 v21; // rax
  char v22; // r9
  __int64 v23; // rdx
  __int64 *v24; // rdi
  bool v25; // r8
  bool v26; // r10
  bool v27; // r11
  unsigned int v28; // ecx
  unsigned __int64 v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // [rsp+0h] [rbp-168h]
  __int64 v37; // [rsp+8h] [rbp-160h]
  __int64 v38; // [rsp+8h] [rbp-160h]
  __int64 v39; // [rsp+10h] [rbp-158h]
  __int64 v40; // [rsp+20h] [rbp-148h]
  __m128i v42; // [rsp+30h] [rbp-138h] BYREF
  __int64 v43; // [rsp+40h] [rbp-128h]
  void *ptr[2]; // [rsp+48h] [rbp-120h] BYREF
  _BYTE v45[72]; // [rsp+58h] [rbp-110h] BYREF
  __m128i v46; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-B8h]
  int v48; // [rsp+B8h] [rbp-B0h]
  __int64 *v49; // [rsp+C0h] [rbp-A8h]
  __int64 v50; // [rsp+C8h] [rbp-A0h]
  void *v51[2]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v52[64]; // [rsp+E0h] [rbp-88h] BYREF
  __int16 v53; // [rsp+120h] [rbp-48h]

  v7 = *(_DWORD *)(a1 + 272);
  if ( a3 >= v7 )
  {
LABEL_32:
    v19 = 1;
    goto LABEL_10;
  }
  v8 = ~a3;
  v9 = (char)a2;
  v10 = v7 - 1;
  v11 = v10 - ((unsigned int)v8 + v7);
  v12 = 32 * v10;
  v13 = *(_QWORD *)(a1 + 264);
  v36 = 32 * v11;
  while ( 1 )
  {
    v14 = v12 + v13;
    if ( !v9 )
    {
      v46.m128i_i8[4] &= ~1u;
      a2 = &v46;
      v46.m128i_i32[0] = 0;
      sub_A2BFE0(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF8LL, (__int64)&v46);
      if ( v46.m128i_i32[0] > 1u )
        sub_A2BBA0(v46.m128i_i32);
      goto LABEL_13;
    }
    v15 = *(_QWORD *)(v14 + 8);
    v16 = 0;
    if ( v15 )
    {
      if ( (v15 & 3) != 0 )
      {
        if ( (*(_QWORD *)(v14 + 8) & 3LL) == 1 )
        {
          v29 = v15 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v29 )
          {
            v38 = v14;
            v30 = sub_BDCD00(v29, (__int64)a2, v14, v8, a5);
            v14 = v38;
            v16 = v30;
          }
        }
      }
      else
      {
        v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v17 )
          v16 = *(_DWORD *)(v17 + 24);
      }
    }
    v18 = _mm_loadu_si128((const __m128i *)(v14 + 8));
    v37 = *(_QWORD *)v14;
    v39 = *(_QWORD *)(v14 + 24);
    if ( **(_BYTE **)(a1 + 24) )
      break;
    LOBYTE(v48) = v48 | 1;
    v51[0] = v52;
    v53 &= 0xFDu;
    v50 = 0;
    v51[1] = (void *)0x800000000LL;
    v46 = v18;
    v47 = 0;
    v42 = v18;
    v21 = sub_A2B5D0(&v42);
    v42.m128i_i32[0] = 0;
    v22 = 0;
    v42.m128i_i64[1] = 0;
    v23 = v21;
    v24 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v43 = 0;
      goto LABEL_17;
    }
    v31 = *v24;
    v32 = (unsigned int)*(unsigned __int8 *)(*v24 + 16) - 43;
    if ( (unsigned int)v32 <= 1 )
    {
LABEL_27:
      while ( 1 )
      {
        v23 = *(_QWORD *)(v31 + 32);
        if ( (*(_BYTE *)(v31 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v31 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
          v33 = (unsigned int)*(unsigned __int8 *)(v31 + 16) - 43;
          if ( (unsigned int)v33 <= 1 )
            break;
          v34 = sub_F3F310(v31, a2, v33, v32);
          v23 = *(_QWORD *)(v34 + 32);
          if ( (*(_BYTE *)(v34 + 18) & 0x10) == 0 )
            goto LABEL_30;
        }
      }
LABEL_30:
      v24 = (__int64 *)v42.m128i_i64[1];
      v22 = v42.m128i_i8[0] & 1;
      v25 = (v42.m128i_i8[0] & 8) != 0;
      v27 = (v42.m128i_i8[0] & 2) != 0;
      v26 = (v42.m128i_i8[0] & 4) != 0;
      v28 = (unsigned __int32)v42.m128i_i32[0] >> 4;
      goto LABEL_31;
    }
    v35 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v35 > 1 )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v24 = nullptr;
      v28 = 0;
    }
    else
    {
      v40 = v23;
      v31 = sub_F3F310(*v24, a2, v23, v35);
      if ( v31 )
        goto LABEL_27;
      v24 = (__int64 *)v42.m128i_i64[1];
      v23 = v40;
      v22 = v42.m128i_i8[0] & 1;
      v25 = (v42.m128i_i8[0] & 8) != 0;
      v27 = (v42.m128i_i8[0] & 2) != 0;
      v26 = (v42.m128i_i8[0] & 4) != 0;
      v28 = (unsigned __int32)v42.m128i_i32[0] >> 4;
    }
LABEL_31:
    v43 = v23;
LABEL_17:
    v49 = v24;
    ptr[1] = (void *)0x800000000LL;
    ptr[0] = v45;
    LOBYTE(v48) = (8 * v25) | (4 * v26) | (2 * v27) & 0xF3 | v22 & 1 | v48 & 0xF0;
    v48 = v48 & 0xF | (16 * v28);
    v50 = v43;
    sub_C00390((char ***)v51, (char ***)ptr);
    if ( ptr[0] != v45 )
      free(ptr[0]);
    v53 &= 0xFEu;
    a2 = (__m128i *)(((unsigned __int64)v16 << 32) | v16);
    v19 = sub_C2F360(a1, (__int64)a2, (__int64)&v46, (_DWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL), v39);
    if ( v51[0] != v52 )
      free(v51[0]);
    if ( !(_BYTE)v19 )
      goto LABEL_10;
LABEL_13:
    v13 = *(_QWORD *)(a1 + 264);
    if ( v36 == v12 )
      goto LABEL_32;
    v12 -= 32;
  }
  v19 = 0;
LABEL_10:
  *(_DWORD *)(a1 + 272) = a3;
  return v19;
}

