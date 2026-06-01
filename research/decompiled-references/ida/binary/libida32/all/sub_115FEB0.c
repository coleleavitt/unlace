__int64 __fastcall sub_115FEB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // r15
  __int64 v4; // rbx
  unsigned __int64 v5; // r15
  void *v6; // rdi
  void *v7; // rdi
  void **v8; // rdi
  void **v9; // r12
  void **v10; // rbp
  void *v11; // rdi
  void *v12; // rdi
  __int64 *v13; // r15
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r15
  signed __int64 v18; // r13
  _QWORD *v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // r13
  __int64 v22; // r10
  _BYTE *v23; // rsi
  signed __int64 v24; // r12
  __int64 v25; // r14
  _BYTE *v26; // rax
  unsigned __int64 v28; // r13
  void *v29; // rdi
  _QWORD *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  void *v33; // rdi
  void *v34; // rdi
  void **v35; // rdi
  void **v36; // r14
  void **v37; // rbp
  void *v38; // rdi
  void *v39; // rdi
  __int64 v40; // r14
  __int64 v41; // rbp
  __int64 v42; // r15
  __int64 v43; // r13
  void *v44; // rdi
  _QWORD *v45; // rdi
  __m128i src; // [rsp+0h] [rbp-68h] BYREF
  __int64 v47; // [rsp+10h] [rbp-58h]
  unsigned int v48; // [rsp+1Ch] [rbp-4Ch]
  __int64 v49[8]; // [rsp+28h] [rbp-40h] BYREF

  v47 = a1;
  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a1 + 8);
    v4 = *(_QWORD *)a1;
    v48 = *(_DWORD *)(a2 + 8);
    v2 = v48;
    if ( v48 <= v3 )
    {
      v31 = v4;
      if ( v48 )
      {
        v40 = *(_QWORD *)a2;
        v41 = v4;
        v42 = 192LL * v48;
        v43 = *(_QWORD *)a2 + v42;
        do
        {
          sub_9CAB60(v41, v40);
          sub_9CAB60(v41 + 32, v40 + 32);
          sub_9CAB60(v41 + 64, v40 + 64);
          sub_10F4C70(v41 + 96, (__int64 *)(v40 + 96));
          sub_9CAB60(v41 + 120, v40 + 120);
          v45 = (_QWORD *)(v41 + 152);
          if ( *(_BYTE *)(v41 + 184) )
          {
            if ( *(_BYTE *)(v40 + 184) )
            {
              sub_9CAB60((__int64)v45, v40 + 152);
            }
            else
            {
              v44 = *(void **)(v41 + 152);
              *(_BYTE *)(v41 + 184) = 0;
              if ( v44 != (void *)(v41 + 168) )
                operator delete(v44);
            }
          }
          else if ( *(_BYTE *)(v40 + 184) )
          {
            *(_QWORD *)(v41 + 152) = v41 + 168;
            sub_115A670(v45, *(_BYTE **)(v40 + 152), *(_QWORD *)(v40 + 152) + *(_QWORD *)(v40 + 160));
            *(_BYTE *)(v41 + 184) = 1;
          }
          v40 += 192;
          v41 += 192;
        }
        while ( v40 != v43 );
        v4 += v42;
        v31 = *(_QWORD *)v47;
        v3 = *(unsigned int *)(v47 + 8);
      }
      v32 = v31 + 192 * v3;
      while ( v4 != v32 )
      {
        v32 -= 192LL;
        if ( *(_BYTE *)(v32 + 184) )
        {
          v33 = *(void **)(v32 + 152);
          if ( v33 != (void *)(v32 + 168) )
            operator delete(v33);
        }
        v34 = *(void **)(v32 + 120);
        if ( v34 != (void *)(v32 + 136) )
          operator delete(v34);
        v35 = *(void ***)(v32 + 96);
        v36 = *(void ***)(v32 + 104);
        v37 = v35;
        if ( v36 != v35 )
        {
          do
          {
            while ( *v37 != v37 + 2 )
            {
              operator delete(*v37);
              v37 += 4;
              if ( v37 == v36 )
                goto LABEL_74;
            }
            v37 += 4;
          }
          while ( v36 != v37 );
LABEL_74:
          v35 = *(void ***)(v32 + 96);
        }
        if ( v35 )
          operator delete(v35);
        v38 = *(void **)(v32 + 64);
        if ( v38 != (void *)(v32 + 80) )
          operator delete(v38);
        v39 = *(void **)(v32 + 32);
        if ( v39 != (void *)(v32 + 48) )
          operator delete(v39);
        if ( *(_QWORD *)v32 != v32 + 16 )
          operator delete(*(void **)v32);
      }
    }
    else
    {
      if ( v48 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v16 = *(_QWORD *)a2;
        if ( v3 )
        {
          v3 *= 192LL;
          v28 = v4 + v3;
          do
          {
            sub_9CAB60(v4, v16);
            sub_9CAB60(v4 + 32, v16 + 32);
            sub_9CAB60(v4 + 64, v16 + 64);
            sub_10F4C70(v4 + 96, (__int64 *)(v16 + 96));
            sub_9CAB60(v4 + 120, v16 + 120);
            v30 = (_QWORD *)(v4 + 152);
            if ( *(_BYTE *)(v4 + 184) )
            {
              if ( *(_BYTE *)(v16 + 184) )
              {
                sub_9CAB60((__int64)v30, v16 + 152);
              }
              else
              {
                v29 = *(void **)(v4 + 152);
                *(_BYTE *)(v4 + 184) = 0;
                if ( v29 != (void *)(v4 + 168) )
                  operator delete(v29);
              }
            }
            else if ( *(_BYTE *)(v16 + 184) )
            {
              *(_QWORD *)(v4 + 152) = v4 + 168;
              sub_115A670(v30, *(_BYTE **)(v16 + 152), *(_QWORD *)(v16 + 152) + *(_QWORD *)(v16 + 160));
              *(_BYTE *)(v4 + 184) = 1;
            }
            v4 += 192;
            v16 += 192;
          }
          while ( v4 != v28 );
          v2 = *(unsigned int *)(a2 + 8);
          v16 = *(_QWORD *)a2;
          v4 = v3 + *(_QWORD *)v47;
        }
      }
      else
      {
        v5 = v4 + 192 * v3;
        while ( v5 != v4 )
        {
          while ( 1 )
          {
            v5 -= 192LL;
            if ( *(_BYTE *)(v5 + 184) )
            {
              v6 = *(void **)(v5 + 152);
              if ( v6 != (void *)(v5 + 168) )
                operator delete(v6);
            }
            v7 = *(void **)(v5 + 120);
            if ( v7 != (void *)(v5 + 136) )
              operator delete(v7);
            v8 = *(void ***)(v5 + 96);
            v9 = *(void ***)(v5 + 104);
            v10 = v8;
            if ( v9 != v8 )
            {
              do
              {
                while ( *v10 != v10 + 2 )
                {
                  operator delete(*v10);
                  v10 += 4;
                  if ( v10 == v9 )
                    goto LABEL_14;
                }
                v10 += 4;
              }
              while ( v9 != v10 );
LABEL_14:
              v8 = *(void ***)(v5 + 96);
            }
            if ( v8 )
              operator delete(v8);
            v11 = *(void **)(v5 + 64);
            if ( v11 != (void *)(v5 + 80) )
              operator delete(v11);
            v12 = *(void **)(v5 + 32);
            if ( v12 != (void *)(v5 + 48) )
              operator delete(v12);
            if ( *(_QWORD *)v5 == v5 + 16 )
              break;
            operator delete(*(void **)v5);
            if ( v5 == v4 )
              goto LABEL_23;
          }
        }
LABEL_23:
        v13 = (__int64 *)v47;
        *(_DWORD *)(v47 + 8) = 0;
        v4 = sub_22136C0(v13, v13 + 2, v2, 192, v49);
        sub_115E4A0(v13, v4);
        v14 = v49[0];
        if ( v13 + 2 != (__int64 *)*v13 )
          free((void *)*v13);
        v15 = v47;
        v3 = 0;
        *(_QWORD *)v47 = v4;
        v16 = *(_QWORD *)a2;
        *(_DWORD *)(v15 + 12) = v14;
        v2 = *(unsigned int *)(a2 + 8);
      }
      v17 = v16 + v3;
      src.m128i_i64[1] = v16 + 192 * v2;
      if ( v17 != src.m128i_i64[1] )
      {
        while ( 1 )
        {
          *(_QWORD *)v4 = v4 + 16;
          sub_115A670((_QWORD *)v4, *(_BYTE **)v17, *(_QWORD *)v17 + *(_QWORD *)(v17 + 8));
          *(_QWORD *)(v4 + 32) = v4 + 48;
          sub_115A670((_QWORD *)(v4 + 32), *(_BYTE **)(v17 + 32), *(_QWORD *)(v17 + 32) + *(_QWORD *)(v17 + 40));
          *(_QWORD *)(v4 + 64) = v4 + 80;
          sub_115A670((_QWORD *)(v4 + 64), *(_BYTE **)(v17 + 64), *(_QWORD *)(v17 + 64) + *(_QWORD *)(v17 + 72));
          v18 = *(_QWORD *)(v17 + 104) - *(_QWORD *)(v17 + 96);
          *(_OWORD *)(v4 + 96) = 0;
          *(_QWORD *)(v4 + 112) = 0;
          if ( v18 >> 5 )
          {
            if ( (unsigned __int64)(v18 >> 5) > 0x7FFFFFFFFFFFFFFLL )
              std::__throw_bad_alloc();
            v19 = (_QWORD *)operator new(v18);
          }
          else
          {
            v19 = nullptr;
          }
          src.m128i_i64[0] = (__int64)v19;
          v20 = _mm_loadl_epi64(&src);
          *(_QWORD *)(v4 + 112) = (char *)v19 + v18;
          *(__m128i *)(v4 + 96) = _mm_unpacklo_epi64(v20, v20);
          v21 = *(_QWORD *)(v17 + 104);
          v22 = *(_QWORD *)(v17 + 96);
          if ( v21 != v22 )
            break;
LABEL_41:
          *(_QWORD *)(v4 + 104) = v19;
          *(_QWORD *)(v4 + 120) = v4 + 136;
          sub_115A670((_QWORD *)(v4 + 120), *(_BYTE **)(v17 + 120), *(_QWORD *)(v17 + 120) + *(_QWORD *)(v17 + 128));
          *(_BYTE *)(v4 + 184) = 0;
          if ( *(_BYTE *)(v17 + 184) )
          {
            *(_QWORD *)(v4 + 152) = v4 + 168;
            sub_115A670((_QWORD *)(v4 + 152), *(_BYTE **)(v17 + 152), *(_QWORD *)(v17 + 152) + *(_QWORD *)(v17 + 160));
            *(_BYTE *)(v4 + 184) = 1;
          }
          v17 += 192LL;
          v4 += 192;
          if ( v17 == src.m128i_i64[1] )
            goto LABEL_44;
        }
        *v19 = v19 + 2;
        v23 = *(_BYTE **)v22;
        v24 = *(_QWORD *)(v22 + 8);
        if ( v24 + *(_QWORD *)v22 && !v23 )
LABEL_40:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        v25 = v22 + 32;
        while ( (unsigned __int64)v24 <= 0xF )
        {
          v26 = (_BYTE *)*v19;
          if ( v24 == 1 )
          {
            *v26 = *v23;
            v26 = (_BYTE *)*v19;
          }
          else if ( v24 )
          {
            goto LABEL_61;
          }
LABEL_37:
          v19[1] = v24;
          v19 += 4;
          v26[v24] = 0;
          if ( v25 == v21 )
            goto LABEL_41;
          v25 += 32;
          *v19 = v19 + 2;
          v23 = *(_BYTE **)(v25 - 32);
          v24 = *(_QWORD *)(v25 - 24);
          if ( &v23[v24] && !v23 )
            goto LABEL_40;
        }
        if ( v24 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        src.m128i_i64[0] = (__int64)v23;
        v26 = (_BYTE *)operator new(v24 + 1);
        v19[2] = v24;
        v23 = (_BYTE *)src.m128i_i64[0];
        *v19 = v26;
LABEL_61:
        memcpy(v26, v23, v24);
        v26 = (_BYTE *)*v19;
        goto LABEL_37;
      }
    }
LABEL_44:
    *(_DWORD *)(v47 + 8) = v48;
  }
  return v47;
}

