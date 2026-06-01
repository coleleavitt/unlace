__int64 __fastcall sub_C75510(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r13d
  __int64 *v17; // rbp
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // rdi
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rax
  _BYTE *v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v37[7]; // [rsp+8h] [rbp-F0h] BYREF
  __m128i v38; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-A8h]
  char v40; // [rsp+58h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h]
  __int64 v43; // [rsp+78h] [rbp-80h]
  _BYTE v44[120]; // [rsp+80h] [rbp-78h] BYREF

  v8 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) > 1 )
  {
    v9 = ((_BYTE)v8 + 43) & 0x3F;
    if ( (unsigned __int8)v9 <= 0xBu )
    {
      v10 = *a1;
      if ( (_BYTE)v8 == 32 )
      {
        sub_C3FAF0((__int64)v10, *(_QWORD *)(a2 + 16), v9, a4, a5);
        return (unsigned int)sub_C6ACF0(a1, *(_QWORD *)(a2 + 24), v11, v12, v13, v14);
      }
      else
      {
        v17 = (__int64 *)sub_E33C10(v10, a2, 108, 0);
        v18 = sub_EEC8C0(a2);
        if ( v17 )
        {
          v38.m128i_i64[0] = v18;
          v38.m128i_i8[8] = 1;
          sub_AEC610(v17, v38.m128i_i64);
        }
        return 0;
      }
    }
    v22 = sub_21F90B0();
    sub_21FBFD0(&v38, 0.0);
    sub_22023D0(&v36, &v38, v22);
    sub_21F9830(&v38);
    v23 = *(_QWORD *)(a2 + 16);
    v38 = _mm_loadu_si128((const __m128i *)a1);
    v15 = sub_C6ACF0((__int64 **)&v38, v23, v24, v25, v26, v27);
    v32 = *a1;
    if ( (_BYTE)v15 )
    {
      v35 = *(_QWORD *)(a2 + 24);
      v38.m128i_i64[0] = (__int64)*a1;
      v38.m128i_i64[1] = (__int64)&v36;
      if ( (unsigned __int8)sub_C6ACF0((__int64 **)&v38, v35, v28, v29, v30, v31) )
      {
        v15 = sub_C12170((__int64)*a1, a2, a1[1], (*(_WORD *)(a2 + 2) >> 3) & 0x3F, &v36);
        goto LABEL_22;
      }
    }
    else if ( *((_DWORD *)v32 + 12) && (*((_BYTE *)v32 + 914) || *((_BYTE *)v32 + 915)) )
    {
      v33 = (_BYTE *)v32[3];
      *v33 = 1;
      v34 = *(_QWORD *)(a2 + 24);
      v38.m128i_i64[0] = (__int64)v32;
      v38.m128i_i64[1] = (__int64)&v36;
      sub_C6ACF0((__int64 **)&v38, v34, (__int64)v33, v29, v30, v31);
LABEL_22:
      sub_9955A0(&v36);
      return v15;
    }
    v15 = 0;
    goto LABEL_22;
  }
  v19 = *a1;
  v15 = 0;
  v38 = 0u;
  ptr = v44;
  v39 = 0;
  v40 |= 1u;
  v41 = 0;
  v43 = 0x800000000LL;
  v44[65] = 0;
  if ( sub_C5E0F0((__int64)v19, a2, (__int64)&v38, 1u, a5, a6) )
  {
    v20 = *(_QWORD *)(a2 + 8);
    v21 = *a1;
    LODWORD(v36) = 0;
    BYTE4(v36) &= ~1u;
    v15 = sub_C36570((__int64)v21, (_DWORD *)a2, v20, (__int64)&v38, (__int64)&v36, 0);
    if ( (_BYTE)v15 )
      sub_C17220(a1[1], v37);
    if ( (unsigned int)v36 > 1 )
      sub_A4F8E0((int *)&v36);
  }
  if ( ptr != v44 )
    free(ptr);
  return v15;
}
