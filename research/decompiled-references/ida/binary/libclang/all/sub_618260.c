__int64 __fastcall sub_618260(__m128i *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 *v16; // rbp
  unsigned int v17; // r14d
  char *v19; // r13
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 *v33; // r15
  __int64 v34; // rbx
  unsigned __int64 v35; // rsi
  __int64 v36; // r14
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  _QWORD *v39; // r13
  _QWORD *v40; // r15
  _QWORD *v41; // rbx
  __int64 v42; // r14
  unsigned int v43; // eax
  unsigned __int64 v44; // rdx
  unsigned int v45; // [rsp+2Ch] [rbp-14Ch]
  __int64 v46; // [rsp+30h] [rbp-148h]
  __int64 *v47; // [rsp+38h] [rbp-140h]
  __int64 *v48; // [rsp+40h] [rbp-138h]
  __m128i v49; // [rsp+50h] [rbp-128h] BYREF
  __m128i v50; // [rsp+60h] [rbp-118h] BYREF
  void *ptr; // [rsp+70h] [rbp-108h] BYREF
  __int64 v52; // [rsp+78h] [rbp-100h]
  _BYTE v53[248]; // [rsp+80h] [rbp-F8h] BYREF

  v2 = a2;
  if ( a1[6].m128i_i64[0] || a1[7].m128i_i64[0] )
  {
    ptr = v53;
    v52 = 0x1800000000LL;
    v3 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2) >> 32;
    v46 = *(_QWORD *)(a1->m128i_i64[1] + 32);
    if ( v3 )
    {
      v4 = a1[6].m128i_i64[0];
      if ( v4 )
      {
        v5 = (_QWORD *)a1[6].m128i_i64[1];
        v6 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v5 != v6 && *(_QWORD *)(*(_QWORD *)v4 + 8LL) > 7u )
        {
          while ( 1 )
          {
            v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
            a2 = v7;
            if ( !v7 || !(unsigned __int8)sub_CB1620(v46, v7) )
              break;
            *(_QWORD *)v4 = v6;
            v37 = (unsigned int)v52 + 1LL;
            if ( HIDWORD(v52) < v37 )
            {
              a2 = (__int64)v53;
              sub_25D6060(&ptr, v53, v37, 8);
            }
            *((_QWORD *)ptr + (unsigned int)v52) = v6;
            v8 = v52 + 1;
            LODWORD(v52) = v52 + 1;
            v38 = v6[1];
            v6 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v38 <= 7 || v5 == v6 )
              goto LABEL_9;
          }
        }
      }
      else
      {
        v39 = (_QWORD *)a1[7].m128i_i64[0];
        v40 = (_QWORD *)a1[7].m128i_i64[1];
        v41 = (_QWORD *)(*v39 + 8LL);
        if ( v40 != v41 )
        {
          while ( 1 )
          {
            v42 = *v41;
            if ( !*v41 )
              break;
            v43 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42 + 16LL))(*v41);
            a2 = v43;
            if ( !v43 || !(unsigned __int8)sub_CB1620(v46, v43) )
              break;
            *v39 = v41;
            v44 = (unsigned int)v52 + 1LL;
            if ( HIDWORD(v52) < v44 )
            {
              a2 = (__int64)v53;
              ++v41;
              sub_25D6060(&ptr, v53, v44, 8);
              *((_QWORD *)ptr + (unsigned int)v52) = v42;
              LODWORD(v52) = v52 + 1;
              if ( v40 == v41 )
                break;
            }
            else
            {
              ++v41;
              *((_QWORD *)ptr + (unsigned int)v52) = v42;
              LODWORD(v52) = v52 + 1;
              if ( v40 == v41 )
                break;
            }
          }
        }
      }
    }
    v8 = v52;
LABEL_9:
    if ( v8 )
    {
      v9 = v2 + 48;
      v10 = (_QWORD *)sub_79C190(v9);
      if ( v10 )
      {
        do
        {
          v12 = v10[2] & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v10[2] & 4) != 0 )
            v12 = *(_QWORD *)(v12 + 8);
          if ( v9 == v12 && (*(unsigned int (__fastcall **)(_QWORD *, __int64))(*v10 + 16LL))(v10, a2) )
          {
            v13 = (unsigned int)v52;
            v14 = (unsigned int)v52 + 1LL;
            if ( HIDWORD(v52) < v14 )
            {
              a2 = (__int64)v53;
              sub_25D6060(&ptr, v53, v14, 8);
              v13 = (unsigned int)v52;
            }
            *((_QWORD *)ptr + v13) = v10;
            LODWORD(v52) = v52 + 1;
          }
          v11 = v10[1];
          v10 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
        }
        while ( v11 > 7 );
      }
      v19 = (char *)ptr;
      v20 = 8LL * (unsigned int)v52;
      v16 = (__int64 *)((char *)ptr + v20);
      if ( ptr == (char *)ptr + v20 )
        goto LABEL_52;
      _BitScanReverse64(&v21, v20 >> 3);
      sub_5FEBD0((__m128i *)ptr, (__int64 *)((char *)ptr + v20), 2LL * (int)v21, v46);
      if ( (unsigned __int64)v20 > 0x80 )
      {
        v48 = (__int64 *)(v19 + 128);
        sub_5F95B0(v19, (unsigned __int64)(v19 + 128), v46);
        do
        {
          v33 = v48;
          v34 = *v48;
          while ( 1 )
          {
            v36 = *(v33 - 1);
            v47 = v33;
            v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
            if ( v45 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36) )
            {
              (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
              v35 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34) >> 32;
            }
            else
            {
              v35 = v45;
            }
            --v33;
            if ( !(unsigned __int8)sub_CB1620(v46, v35) )
              break;
            v33[1] = *v33;
          }
          ++v48;
          *v47 = v34;
        }
        while ( v16 != v48 );
      }
      else
      {
        sub_5F95B0(v19, (unsigned __int64)v16, v46);
      }
      v16 = (__int64 *)ptr;
      v23 = (__int64 *)((char *)ptr + 8 * (unsigned int)v52);
      if ( v23 == ptr )
      {
LABEL_52:
        v17 = 0;
      }
      else
      {
        while ( 1 )
        {
          v24 = *v16;
          sub_639160(&v49, *v16, a1->m128i_i64[0], *(__int64 *)((char *)a1[5].m128i_i64 + 4), 1, v22);
          v29 = sub_602300(
                  (__int64)a1,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28,
                  (__int128)_mm_load_si128(&v49),
                  (__int128)_mm_load_si128(&v50));
          v32 = v29;
          if ( BYTE1(v29) )
          {
            v17 = v29;
            if ( !(_BYTE)v29 )
              break;
            LOWORD(v32) = BYTE1(v29);
            v17 = sub_617930(
                    (__int64)a1,
                    1,
                    v30,
                    v32,
                    v31,
                    v22,
                    (__int128)_mm_load_si128(&v49),
                    (__int128)_mm_load_si128(&v50));
            if ( (_BYTE)v17 )
              break;
          }
          if ( ++v16 == v23 )
          {
            v16 = (__int64 *)ptr;
            v17 = 0;
            goto LABEL_21;
          }
        }
        v16 = (__int64 *)ptr;
      }
    }
    else
    {
      v15 = sub_618190(a1, v2 + 48);
      v16 = (__int64 *)ptr;
      v17 = v15;
    }
LABEL_21:
    if ( v16 != (__int64 *)v53 )
      free(v16);
    return v17;
  }
  else
  {
    if ( a2 )
      v2 = a2 + 48;
    return sub_618190(a1, v2);
  }
}

