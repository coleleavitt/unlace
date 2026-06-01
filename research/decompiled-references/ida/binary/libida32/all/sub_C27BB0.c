__int64 __fastcall sub_C27BB0(unsigned __int64 a1, size_t *a2, __int64 a3, _QWORD *a4, __int64 a5, int a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r9d
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // r9
  size_t v17; // rax
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rdx
  char v22; // al
  unsigned __int32 v23; // edx
  char v24; // al
  unsigned int v25; // edx
  int v26; // eax
  size_t v27; // rsi
  size_t v28; // r12
  _BYTE *v29; // r13
  _BYTE *v30; // rax
  size_t v31; // rax
  unsigned __int8 v32; // [rsp+0h] [rbp-148h]
  char v33; // [rsp+0h] [rbp-148h]
  unsigned int v34; // [rsp+0h] [rbp-148h]
  unsigned __int8 v35; // [rsp+0h] [rbp-148h]
  size_t v36; // [rsp+0h] [rbp-148h]
  unsigned __int8 v37; // [rsp+0h] [rbp-148h]
  unsigned __int8 v38; // [rsp+0h] [rbp-148h]
  size_t i; // [rsp+8h] [rbp-140h]
  char v40; // [rsp+1Fh] [rbp-129h]
  unsigned __int64 v41; // [rsp+20h] [rbp-128h]
  void *v43; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-110h]
  char v45; // [rsp+3Ch] [rbp-10Ch]
  __m128i v46; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-F8h]
  char v48; // [rsp+54h] [rbp-F4h]
  _QWORD v49[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+90h] [rbp-B8h]
  char v51; // [rsp+98h] [rbp-B0h]
  __int64 v52; // [rsp+A8h] [rbp-A0h]
  void *ptr; // [rsp+B0h] [rbp-98h]
  __int64 v54; // [rsp+B8h] [rbp-90h]
  _BYTE v55[136]; // [rsp+C0h] [rbp-88h] BYREF

  v49[0] = 0;
  ptr = v55;
  v49[1] = 0;
  v50 = 0;
  v51 |= 1u;
  v52 = 0;
  v54 = 0x800000000LL;
  v55[65] = 0;
  v46.m128i_i64[0] = a3;
  v46.m128i_i64[1] = (__int64)v49;
  LOBYTE(v47) = 0;
  v11 = sub_C24FB0(&v46, a1, a3, (__int64)a4, a5, a6);
  if ( (_BYTE)v11 )
  {
    v13 = sub_F44710(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a1, v8, v9, v10);
    if ( v49[0]
      && (v49[0] & 3) == 1
      && (v14 = v49[0] & 0xFFFFFFFFFFFFFFFCLL, (v49[0] & 0xFFFFFFFFFFFFFFFCLL) != 0)
      && (*(_WORD *)v14 & 0x1FF) == 9
      && v50 >= 0
      && (v15 = *(_DWORD *)(v14 + 16) * ((*(_WORD *)(v14 + 2) >> 6) & 7u),
          LOBYTE(v11) = v15 >= v50 && ((*(_WORD *)(v14 + 2) >> 6) & 7) == 1,
          (_BYTE)v11)
      && *(_QWORD *)(*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(a3 + 16) + 18648LL) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v27 = v15 - v50;
      v28 = v27;
      v29 = (_BYTE *)(v14 + v50 + 4LL * *(unsigned int *)(v14 + 4) + 20);
      if ( v27 == -1 || v27 )
      {
        v37 = v11;
        v30 = memchr(v29, 0, v27);
        v11 = v37;
        if ( v30 )
        {
          v31 = v30 - v29;
          if ( v31 != -1 && v27 > v31 )
            v28 = v31;
        }
      }
      *a2 = v28;
      if ( a4 )
      {
        v38 = v11;
        sub_978080(a4, 0, a4[1], v29, v28);
        v11 = v38;
      }
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        v46.m128i_i8[4] &= ~1u;
        v46.m128i_i32[0] = 0;
        v24 = sub_C12830(a3, (_DWORD *)a1, v13, (__int64)v49, (__int64)&v46, 0);
        v23 = v46.m128i_i32[0];
        if ( !v24 || v46.m128i_i32[0] != 2 )
          break;
        v25 = v47;
        if ( v47 <= 0x40 )
        {
          LOBYTE(v11) = v46.m128i_i64[1] == 0;
          if ( !v46.m128i_i64[1] )
          {
LABEL_36:
            *a2 = i;
LABEL_37:
            v35 = v11;
            sub_A2BBA0(v46.m128i_i32);
            v11 = v35;
            goto LABEL_2;
          }
        }
        else
        {
          v34 = v47;
          v26 = sub_21E2A40(&v46.m128i_u64[1]);
          v25 = v34;
          LOBYTE(v11) = v34 == v26;
          if ( v34 == v26 )
            goto LABEL_36;
        }
        if ( a4 )
        {
          if ( v48 )
          {
            LOBYTE(v16) = v46.m128i_i8[8];
            if ( v25 > 0x40 )
              v16 = *(_QWORD *)v46.m128i_i64[1];
          }
          else if ( v25 > 0x40 )
          {
            LOBYTE(v16) = *(_BYTE *)v46.m128i_i64[1];
          }
          else
          {
            LOBYTE(v16) = 0;
            if ( v25 )
              v16 = v46.m128i_i64[1] << (64 - (unsigned __int8)v25) >> (64 - (unsigned __int8)v25);
          }
          v17 = a4[1];
          v18 = (_QWORD *)*a4;
          v19 = v17 + 1;
          if ( (_QWORD *)*a4 == a4 + 2 )
            v20 = 15;
          else
            v20 = a4[2];
          if ( v19 > v20 )
          {
            v41 = v17 + 1;
            v40 = v16;
            v36 = a4[1];
            sub_974DF0((__int64)a4, v36, 0, nullptr, 1u);
            v18 = (_QWORD *)*a4;
            v19 = v41;
            LOBYTE(v16) = v40;
            v17 = v36;
          }
          *((_BYTE *)v18 + v17) = v16;
          v21 = (_QWORD *)*a4;
          a4[1] = v19;
          *((_BYTE *)v21 + v17 + 1) = 0;
        }
        v44 = 64;
        v43 = &dword_0 + 1;
        v45 = 0;
        v22 = sub_BF65F0(a3, a1, (__int64)v49, v13, (__int64)&v43);
        if ( v44 > 0x40 && v43 )
        {
          v33 = v22;
          operator delete[](v43);
          v22 = v33;
        }
        v23 = v46.m128i_i32[0];
        if ( !v22 )
          break;
        if ( v46.m128i_i32[0] > 1u )
          sub_A2BBA0(v46.m128i_i32);
      }
      v11 = 0;
      if ( v23 > 1 )
        goto LABEL_37;
    }
  }
LABEL_2:
  if ( ptr != v55 )
  {
    v32 = v11;
    free(ptr);
    return v32;
  }
  return v11;
}

