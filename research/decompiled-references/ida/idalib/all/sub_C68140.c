__int64 __fastcall sub_C68140(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  int v8; // eax
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 v12; // dx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __m128i *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 *v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // eax
  unsigned __int8 v37; // [rsp+Fh] [rbp-159h]
  unsigned __int8 v38; // [rsp+Fh] [rbp-159h]
  unsigned __int8 v39; // [rsp+Fh] [rbp-159h]
  unsigned __int8 v40; // [rsp+Fh] [rbp-159h]
  unsigned __int8 v41; // [rsp+Fh] [rbp-159h]
  unsigned __int8 v42; // [rsp+Fh] [rbp-159h]
  char v43; // [rsp+1Bh] [rbp-14Dh] BYREF
  int v44; // [rsp+1Ch] [rbp-14Ch] BYREF
  void *v45; // [rsp+20h] [rbp-148h] BYREF
  unsigned int v46; // [rsp+28h] [rbp-140h]
  char v47; // [rsp+2Ch] [rbp-13Ch]
  void *v48; // [rsp+40h] [rbp-128h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-120h]
  __m128i v50; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v51[48]; // [rsp+70h] [rbp-F8h] BYREF
  unsigned __int8 *v52; // [rsp+A0h] [rbp-C8h] BYREF
  void **v53; // [rsp+A8h] [rbp-C0h]
  __int64 v54; // [rsp+B0h] [rbp-B8h]
  char v55; // [rsp+B8h] [rbp-B0h]
  __int64 v56; // [rsp+C8h] [rbp-A0h]
  void *ptr; // [rsp+D0h] [rbp-98h]
  __int64 v58; // [rsp+D8h] [rbp-90h]
  _BYTE v59[136]; // [rsp+E0h] [rbp-88h] BYREF

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = sub_AAE100(*(_QWORD *)(*a1 + 16), v6, a3, a4);
  v12 = *(_WORD *)(a2 + 2);
  v44 = v8;
  v13 = (v12 >> 3) & 0x7F;
  switch ( ((_BYTE)v13 + 124) & 0x7F )
  {
    case 0:
    case 1:
      v19 = *(__m128i **)(a2 + 16);
      if ( (_BYTE)v13 == 5 )
        return sub_C68630(a1, v19);
      v55 |= 1u;
      v52 = nullptr;
      ptr = v59;
      v58 = 0x800000000LL;
      v20 = *a1;
      v53 = nullptr;
      v54 = 0;
      v56 = 0;
      v59[65] = 0;
      v50.m128i_i64[0] = v20;
      v50.m128i_i64[1] = (__int64)&v52;
      v51[0] = 0;
      result = sub_C5C820(&v50, v19, v13, v9, v10, v11);
      if ( (_BYTE)result )
      {
        v21 = *(_QWORD *)(a2 + 16);
        v50.m128i_i8[4] &= ~1u;
        v50.m128i_i32[0] = 0;
        result = sub_C36570(*a1, (_DWORD *)a2, *(_QWORD *)(v21 + 8), (__int64)&v52, (__int64)&v50, 0);
        if ( (_BYTE)result )
          result = sub_C103E0(a1 + 1, (__int64)&v50.m128i_i64[1]);
        if ( v50.m128i_i32[0] > 1u )
        {
          v39 = result;
          sub_A4F8E0(v50.m128i_i32);
          result = v39;
        }
      }
      if ( ptr != v59 )
      {
        v40 = result;
        free(ptr);
        return v40;
      }
      return result;
    case 0x1A:
      sub_C11060((__int64)&v45);
      v22 = (unsigned __int8 *)*a1;
      v53 = &v45;
      v52 = v22;
      v23 = sub_C6ACF0(&v52, v7);
      if ( v23 )
      {
        LODWORD(v52) = sub_AAE100(*(_QWORD *)(*a1 + 16), v6, v24, v25);
        sub_21F6FA0(&v48, &v45, &v52, &v43);
        if ( !v43 )
          goto LABEL_29;
        v26 = *a1;
        if ( *(_BYTE *)(*a1 + 915) )
        {
          v27 = sub_A62AC0(*(_QWORD *)(v26 + 16));
          v31 = sub_C00A40(a2, (__int64)&v45, v28, v29, v30);
          sub_FC70B0(&v52, v27, v31, 2560);
          sub_C16B30(&v50, (__int64)&v48);
          sub_AEC220(&v52, v50.m128i_i64[0], v50.m128i_i64[1]);
          sub_AE9DF0(&v52, *(_QWORD *)(a2 + 8), 8u);
          if ( (_BYTE *)v50.m128i_i64[0] != v51 )
            operator delete((void *)v50.m128i_i64[0]);
          sub_AEA040((__int64)&v52);
          v26 = *a1;
        }
        v23 = sub_C1AB00(v26, a2, (__int64)&v48, *(_QWORD *)(a2 + 8));
        if ( v23 )
LABEL_29:
          v23 = sub_C103E0(a1 + 1, (__int64)&v48);
        if ( v49 > 0x40 && v48 )
        {
          v42 = v23;
          operator delete[](v48);
          v23 = v42;
        }
      }
      v41 = v23;
      sub_9955A0(&v45);
      return v41;
    case 0x1C:
      LODWORD(v52) = sub_AAE100(*(_QWORD *)(*a1 + 16), *(_QWORD *)(v7 + 8), v13, v9);
      sub_C16A40((__int64)&v45, 0, &v52);
      result = sub_C69980(v7, &v45, *a1);
      if ( !(_BYTE)result )
        goto LABEL_3;
      sub_21EDE90(&v48, &v45, &v44, &v43);
      if ( !v43 )
        goto LABEL_10;
      goto LABEL_8;
    case 0x1E:
      v14 = *a1;
      v47 = 0;
      v46 = 1;
      v45 = nullptr;
      result = sub_C47260(v7, (__int64)&v45, v14, v9, v10, v11);
      if ( !(_BYTE)result )
        goto LABEL_3;
      LODWORD(v52) = sub_AAE100(*(_QWORD *)(*a1 + 16), v6, v16, v17);
      sub_21F6EE0(&v48, &v45, &v52, &v43);
      if ( !v43 )
        goto LABEL_10;
LABEL_8:
      v18 = *a1;
      if ( *(_BYTE *)(*a1 + 915) )
      {
        v32 = sub_A62AC0(*(_QWORD *)(v18 + 16));
        v36 = sub_C00A40(a2, (__int64)&v45, v33, v34, v35);
        sub_FC70B0(&v52, v32, v36, 2560);
        sub_C16B30(&v50, (__int64)&v48);
        sub_AEC220(&v52, v50.m128i_i64[0], v50.m128i_i64[1]);
        sub_AE9DF0(&v52, *(_QWORD *)(a2 + 8), 8u);
        if ( (_BYTE *)v50.m128i_i64[0] != v51 )
          operator delete((void *)v50.m128i_i64[0]);
        sub_AEA040((__int64)&v52);
        v18 = *a1;
      }
      result = sub_C1AB00(v18, a2, (__int64)&v48, *(_QWORD *)(a2 + 8));
      if ( (_BYTE)result )
LABEL_10:
        result = sub_C103E0(a1 + 1, (__int64)&v48);
      if ( v49 > 0x40 && v48 )
      {
        v38 = result;
        operator delete[](v48);
        result = v38;
      }
LABEL_3:
      if ( v46 > 0x40 && v45 )
      {
        v37 = result;
        operator delete[](v45);
        return v37;
      }
      return result;
    default:
      return sub_C14310(*a1, a2);
  }
}
