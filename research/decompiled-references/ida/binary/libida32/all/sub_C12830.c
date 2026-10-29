__int64 __fastcall sub_C12830(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v7; // r9
  __int64 v11; // r13
  unsigned __int64 v12; // r13
  int v13; // eax
  unsigned int v14; // r11d
  __int16 v16; // si
  bool v17; // al
  unsigned __int64 v18; // rcx
  unsigned __int8 **v19; // rax
  unsigned __int64 v20; // rbx
  _QWORD *v21; // rdi
  bool v22; // r11
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 *v27; // r12
  __int8 v28; // r13
  unsigned int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int16 v32; // ax
  unsigned int v33; // eax
  unsigned __int64 v34; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+8h] [rbp-A8h]
  bool v36; // [rsp+17h] [rbp-99h]
  __m128i v37; // [rsp+18h] [rbp-98h] BYREF
  __int64 v38; // [rsp+30h] [rbp-80h]
  void *v39[2]; // [rsp+38h] [rbp-78h] BYREF
  __int64 v40; // [rsp+48h] [rbp-68h] BYREF
  int v41; // [rsp+50h] [rbp-60h]

  if ( (*(_BYTE *)(a4 + 24) & 1) == 0 )
  {
    v7 = a3;
    v11 = *(_QWORD *)a4;
    v35 = a5;
    if ( !v11
      || (v11 & 3) != 1
      || (v12 = v11 & 0xFFFFFFFFFFFFFFFCLL) == 0
      || (v34 = a3, v13 = sub_A2B770(a4), v7 = v34, v13)
      || (v34 & 4) != 0
      || (byte_8[v34 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0
      || (v16 = *(_WORD *)v12 & 0x1FF, v16 != 18 && v16 != 9) )
    {
      sub_BF8730(&v37, a1, a2, a6, (__m128i *)a4, v7);
      if ( (v38 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v41 = a6;
        v34 = (unsigned __int64)a2;
        v40 = v35;
        *(__m128 *)v39 = _mm_loadh_ps((const double *)&v34);
        return (unsigned int)sub_C11960(a1, (unsigned __int64)a2, &v37, a4 + 24, (__int64)v39);
      }
      return 0;
    }
    if ( !*(_DWORD *)(a4 + 56) )
    {
LABEL_19:
      sub_E0FED0(a1, a2, 108, 0);
      return 0;
    }
    v36 = v16 == 18 || v16 == 9;
    v34 = v12;
    v17 = sub_BEC880(a4 + 24);
    v18 = v12;
    if ( v17 )
    {
      if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) != 0 )
      {
        v19 = (unsigned __int8 **)sub_E0FED0(a1, a2, 2370, 0);
        if ( v19 )
          sub_BED5E0(v19, a6);
        return 0;
      }
      goto LABEL_19;
    }
    v20 = **(_QWORD **)(a4 + 48);
    if ( v16 == 37 )
    {
      LOBYTE(v40) = 0;
      v21 = *(_QWORD **)(a1 + 16);
      LOBYTE(v34) = v36;
      v39[0] = &v40;
      v39[1] = nullptr;
      sub_A89F70(v21, **(_QWORD **)(v12 + 16), v39, 0, nullptr);
      v22 = v36;
      v23 = *((char *)v39[0] + v20);
      v37.m128i_i8[12] = 1;
      v37.m128i_i32[2] = 64;
      v37.m128i_i64[0] = v23;
      if ( v39[0] != &v40 )
      {
        operator delete(v39[0]);
        v22 = v34;
      }
      goto LABEL_23;
    }
    if ( v16 == 18 )
    {
      if ( *(char *)(v12 + 2) >= 0 )
        BUG();
      v18 = *(_QWORD *)(v12 + 16);
    }
    v24 = *(_QWORD **)(a1 + 16);
    v25 = *(_QWORD *)(v18 + 8);
    v34 = v18;
    v26 = sub_A4E300(v24, v25);
    if ( !v26 || (unsigned int)*(unsigned __int8 *)(v26 + 16) - 2 > 1 )
      BUG();
    v27 = (__int64 *)(*(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v28 = sub_F41620(*v27);
    v29 = sub_A73FE0(*(_QWORD *)(a1 + 16), *v27);
    v30 = v34;
    v22 = v36;
    LODWORD(v39[1]) = v29;
    if ( v29 > 0x40 )
    {
      sub_21E1730(v39, 0, 0);
      v22 = v36;
      v30 = v34;
    }
    else
    {
      v39[0] = nullptr;
    }
    v31 = *(unsigned int *)(v30 + 16);
    BYTE4(v39[1]) = v28;
    if ( v20 >= v31 )
    {
LABEL_36:
      v37.m128i_i8[12] = v28;
      v37.m128i_i32[2] = (__int32)v39[1];
      v37.m128i_i64[0] = (__int64)v39[0];
LABEL_23:
      LOBYTE(v34) = v22;
      sub_B72A30((__int64)v39, v37.m128i_i64);
      sub_A2BFE0(v35, (__int64)v39);
      v14 = (unsigned __int8)v34;
      if ( LODWORD(v39[0]) > 1 )
      {
        sub_A2BBA0((int *)v39);
        v14 = (unsigned __int8)v34;
      }
      if ( v37.m128i_i32[2] > 0x40u && v37.m128i_i64[0] )
      {
        LOBYTE(v34) = v14;
        operator delete[]((void *)v37.m128i_i64[0]);
        return (unsigned __int8)v34;
      }
      return v14;
    }
    v32 = (*(_WORD *)(v30 + 2) >> 6) & 7;
    if ( ((*(_WORD *)(v30 + 2) >> 6) & 7) != 2 )
    {
      if ( (_BYTE)v32 == 4 )
      {
        v33 = *(_DWORD *)(v30 + 4 * (*(unsigned int *)(v30 + 4) + v20) + 20);
LABEL_41:
        LOBYTE(v34) = v22;
        sub_BF2840(v39, v33);
        v28 = BYTE4(v39[1]);
        v22 = v34;
        goto LABEL_36;
      }
      if ( (_BYTE)v32 == 1 )
      {
        v33 = *(unsigned __int8 *)(v20 + v30 + 4LL * *(unsigned int *)(v30 + 4) + 20);
        goto LABEL_41;
      }
    }
    v33 = *(unsigned __int16 *)(v30 + 2 * v20 + 4LL * *(unsigned int *)(v30 + 4) + 20);
    goto LABEL_41;
  }
  return 0;
}

