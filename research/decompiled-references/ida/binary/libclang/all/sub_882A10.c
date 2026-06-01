__int64 __fastcall sub_882A10(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // r12d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rdi
  unsigned int v14; // r13d
  int v15; // edx
  __int8 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // rbp
  __int64 *v28; // rbx
  __int64 v29; // rsi
  __int64 *v30; // r13
  __int64 *v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  void *v38; // [rsp+0h] [rbp-118h] BYREF
  unsigned __int32 v39; // [rsp+8h] [rbp-110h]
  __m128i v40; // [rsp+10h] [rbp-108h] BYREF
  unsigned int v41; // [rsp+20h] [rbp-F8h]
  void *v42; // [rsp+50h] [rbp-C8h] BYREF
  __int64 *v43; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-B8h]
  void *v45; // [rsp+68h] [rbp-B0h]
  unsigned int v46; // [rsp+70h] [rbp-A8h]
  char v47; // [rsp+74h] [rbp-A4h]
  __int64 v48; // [rsp+78h] [rbp-A0h] BYREF
  void *ptr; // [rsp+80h] [rbp-98h]
  __int64 v50; // [rsp+88h] [rbp-90h]
  __int64 v51; // [rsp+90h] [rbp-88h] BYREF
  __int64 *v52; // [rsp+98h] [rbp-80h]
  char v53; // [rsp+D1h] [rbp-47h]

  v3 = *(_QWORD *)(a2 + 16);
  v4 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  v5 = (((*(_WORD *)(a2 + 2) >> 3) & 0x7F) + 99) & 0x7F;
  switch ( (char)v5 )
  {
    case 0:
      LODWORD(v43) = 1;
      v42 = nullptr;
      BYTE4(v43) = 0;
      if ( (*(_BYTE *)(a2 + 3) & 8) != 0 )
        sub_80C800(a2);
      else
        sub_C8DF90(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2160LL));
      v8 = sub_87D880(v3, (__int64)&v42, *a1, v10, v11, v12);
      if ( (_BYTE)v8 )
        v8 = sub_834DF0(*a1, a2, (__int64)&v42, *(_QWORD *)(a2 + 8), (_QWORD *)a1[1]);
      if ( (unsigned int)v43 <= 0x40 )
        return v8;
      v13 = v42;
      if ( !v42 )
        return v8;
      goto LABEL_21;
    case 2:
      v14 = sub_70B7E0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(v3 + 8));
      v39 = (unsigned __int16)v14;
      v15 = HIBYTE(v14) & 0x20;
      v16 = ((unsigned __int8)v15 >> 5) ^ 1;
      if ( (unsigned __int16)v14 > 0x40u )
      {
        sub_2585A50(&v38, 0, (v14 & 0x20000000) != 0);
        LODWORD(v43) = v39;
        if ( v39 <= 0x40 )
        {
          v40.m128i_i32[2] = v39;
          v40.m128i_i8[12] = v16;
          v40.m128i_i64[0] = (__int64)v38;
          v41 = v14;
        }
        else
        {
          sub_2585B30(&v42);
          v40.m128i_i8[12] = v16;
          v41 = v14;
          v40.m128i_i32[2] = (int)v43;
          v40.m128i_i64[0] = (__int64)v42;
          if ( v39 > 0x40 && v38 )
            operator delete[](v38);
        }
      }
      else
      {
        v40.m128i_i32[2] = (unsigned __int16)v14;
        v40.m128i_i64[0] = 0;
        v40.m128i_i8[12] = ((unsigned __int8)v15 >> 5) ^ 1;
        v41 = v14;
      }
      v8 = sub_8AEA20(v3, &v40, *a1);
      if ( (_BYTE)v8 )
      {
        v17 = sub_6BF060(*(_QWORD **)(*a1 + 16), *(_QWORD *)(a2 + 8));
        sub_2574510(&v42, &v40, v17);
        sub_834250((__int64 *)a1[1], (__int64 *)&v42, v18);
        sub_5FF3B0((__int64 *)&v42);
      }
      if ( v40.m128i_i32[2] <= 0x40u )
        return v8;
      v13 = (void *)v40.m128i_i64[0];
      if ( !v40.m128i_i64[0] )
        return v8;
      goto LABEL_21;
    case 10:
      if ( !(unsigned __int8)sub_883160(a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      return sub_833070(*a1, a2, *(_QWORD *)(a2 + 8), (__int64 *)a1[1]);
    case 16:
      LODWORD(v44) = 1;
      v43 = nullptr;
      BYTE4(v44) = 0;
      v46 = 1;
      v45 = nullptr;
      v47 = 0;
      v19 = sub_2575D40();
      v21 = sub_2575D20(a1, a2, v20);
      v22 = v21;
      if ( v19 == v21 )
      {
        sub_257CDE0(&v48, v21);
        sub_257CDE0(&v51, v22);
      }
      else
      {
        sub_2579610(&v48);
        sub_2579610(&v51);
      }
      v40.m128i_i64[0] = *a1;
      v40.m128i_i64[1] = (__int64)&v42;
      v8 = sub_8811F0(&v40, v3);
      if ( (_BYTE)v8 )
        sub_834130((__int64 *)a1[1], &v48, v23);
      if ( v22 == v51 )
      {
        v30 = v52;
        if ( v52 )
        {
          v31 = &v52[3 * *(v52 - 1)];
          if ( v52 == v31 )
          {
            v32 = 0;
          }
          else
          {
            do
            {
              v31 -= 3;
              sub_5FF3B0(v31);
            }
            while ( v30 != v31 );
            v32 = 24 * *(v30 - 1);
          }
          operator delete[](v30 - 1, v32 + 8);
        }
        v52 = nullptr;
      }
      else
      {
        sub_25769A0(&v51);
      }
      if ( v22 == v48 )
      {
        v27 = (__int64 *)ptr;
        if ( ptr )
        {
          v28 = (__int64 *)((char *)ptr + 24 * *((_QWORD *)ptr - 1));
          if ( ptr == v28 )
          {
            v29 = 0;
          }
          else
          {
            do
            {
              v28 -= 3;
              sub_5FF3B0(v28);
            }
            while ( v27 != v28 );
            v29 = 24 * *(v27 - 1);
          }
          operator delete[](v27 - 1, v29 + 8);
        }
        ptr = nullptr;
      }
      else
      {
        sub_25769A0(&v48);
      }
      if ( v46 > 0x40 && v45 )
        operator delete[](v45);
      if ( (unsigned int)v44 <= 0x40 )
        return v8;
      v13 = v43;
      if ( !v43 )
        return v8;
LABEL_21:
      operator delete[](v13);
      return v8;
    case 36:
      v24 = *a1;
      v25 = *(_QWORD *)(a2 + 16);
      BYTE4(v42) &= ~1u;
      LODWORD(v42) = 0;
      v40.m128i_i64[0] = v24;
      v40.m128i_i64[1] = (__int64)&v42;
      v8 = sub_8A87B0(&v40, v25, v5);
      if ( (_BYTE)v8 )
        sub_834130((__int64 *)a1[1], v43 + 1, v26);
      else
        sub_826A70(*a1, a2, 110);
      goto LABEL_47;
    default:
      if ( (_BYTE)v4 == 19 )
        return sub_883160(a1, *(_QWORD *)(a2 + 16));
      if ( (unsigned __int8)v4 > 0x13u )
      {
        if ( (_BYTE)v4 == 58 || (_BYTE)v4 == 63 )
        {
          BYTE4(v42) &= ~1u;
          LODWORD(v42) = 0;
          v8 = sub_856400((__int64)&v42, *a1, v3);
          if ( (_BYTE)v8 )
            sub_834130((__int64 *)a1[1], (__int64 *)&v43, v33);
LABEL_47:
          if ( (unsigned int)v42 > 1 )
            sub_69F740((__int64)&v42);
          return v8;
        }
        goto LABEL_66;
      }
      if ( (_BYTE)v4 == 4 )
      {
        v34 = *(_QWORD *)(a2 + 16);
        LOBYTE(v45) = (unsigned __int8)v45 | 1;
        v50 = 0x800000000LL;
        v35 = *a1;
        v42 = nullptr;
        v43 = nullptr;
        v44 = 0;
        v48 = 0;
        ptr = &v51;
        v53 = 0;
        v40.m128i_i64[0] = v35;
        v40.m128i_i64[1] = (__int64)&v42;
        LOBYTE(v41) = 0;
        v8 = sub_869D30(&v40, v34);
        if ( (_BYTE)v8 )
        {
          v36 = *(_QWORD *)(a2 + 16);
          v40.m128i_i8[4] &= ~1u;
          v40.m128i_i32[0] = 0;
          v8 = sub_85F440(*a1, (_DWORD *)a2, *(_QWORD *)(v36 + 8), (__int64)&v42, (__int64)&v40, 0);
          if ( (_BYTE)v8 )
            sub_834130((__int64 *)a1[1], &v40.m128i_i64[1], v37);
          if ( v40.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v40);
        }
        if ( ptr != &v51 )
          free(ptr);
        return v8;
      }
      if ( (_BYTE)v4 != 5 )
      {
        if ( (_BYTE)v4 == 3 )
        {
          v6 = *a1;
          v40.m128i_i8[4] &= ~1u;
          BYTE4(v42) &= ~1u;
          v40.m128i_i32[0] = 0;
          LODWORD(v42) = 0;
          if ( (unsigned __int8)sub_856400((__int64)&v42, v6, v3)
            && (v8 = sub_867E00(*a1, (__int64)&v40, (__int64)&v42, a2), (_BYTE)v8) )
          {
            sub_834130((__int64 *)a1[1], &v40.m128i_i64[1], v7);
          }
          else
          {
            v8 = 0;
          }
          if ( (unsigned int)v42 > 1 )
            sub_69F740((__int64)&v42);
          if ( v40.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v40);
          return v8;
        }
LABEL_66:
        sub_826A70(*a1, a2, 110);
        return 0;
      }
      return sub_883160(a1, *(_QWORD *)(a2 + 16));
  }
}

