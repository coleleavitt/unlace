int *__fastcall sub_627A90(__int64 a1, double a2, __m128 a3)
{
  __int64 *v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rax
  const char *v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  const char *v15; // r13
  volatile signed __int32 *v16; // rax
  size_t v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  void *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __m128 v25; // xmm0
  unsigned __int64 v26; // xmm1_8
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rt1
  char v30; // al
  volatile signed __int32 *v31; // rbx
  char v32; // r12
  volatile signed __int32 *v33; // rdx
  signed __int32 v34; // eax
  volatile signed __int32 *v35; // rdi
  int v36; // ebx
  __int64 v37; // r13
  __int64 v38; // r12
  void *v40; // rax
  _QWORD *v41; // rdi
  unsigned int v42; // esi
  unsigned __int64 v43; // rdx
  char *v44; // rcx
  char *v45; // r8
  unsigned int v46; // esi
  unsigned int v47; // esi
  unsigned int v48; // ecx
  __int64 v49; // rdi
  unsigned int *v50; // rbx
  unsigned int *v51; // r12
  __int64 v52; // rax
  void *v53; // rdi
  char v54; // al
  pthread_mutex_t *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // [rsp+10h] [rbp-C8h]
  __int64 v59; // [rsp+18h] [rbp-C0h]
  size_t n; // [rsp+28h] [rbp-B0h]
  __int64 v61; // [rsp+38h] [rbp-A0h]
  __int64 v62; // [rsp+40h] [rbp-98h]
  int *v63; // [rsp+48h] [rbp-90h]
  __int64 v64; // [rsp+50h] [rbp-88h]
  __int64 v65; // [rsp+60h] [rbp-78h] BYREF
  volatile signed __int32 *v66; // [rsp+68h] [rbp-70h] BYREF
  void *v67[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v68[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v69; // [rsp+90h] [rbp-48h]

  v3 = *(__int64 **)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  v63 = *(int **)a1;
  if ( v3 )
  {
    v6 = v3[3];
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = *v3;
    v3[3] = 0;
    v64 = v7;
    if ( (*(_BYTE *)(v7 + 4) & 2) != 0 && !getenv("LIBCLANG_BGPRIO_DISABLE") )
      sub_2648970(1);
    v62 = v3[1];
    nullsub_173(v62 + 2048);
    v8 = operator new(0x18u);
    *(_QWORD *)(v8 + 16) = 0;
    v9 = (__int64 *)v8;
    *(_OWORD *)v8 = 0;
    v61 = 0;
    v10 = sub_25A17C0();
    if ( v10 )
    {
      v11 = operator new(0x30u);
      *(_QWORD *)(v11 + 8) = v10;
      *(_BYTE *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 40) = v9;
      *(_OWORD *)(v11 + 24) = 0;
      v61 = v11;
      *(_QWORD *)v11 = &off_47CFE40;
      sub_25A1980(v10, v11);
    }
    v59 = v5 + 24 * v4;
    if ( v5 != v59 )
    {
      while ( 1 )
      {
        v12 = *(const char **)v5;
        v13 = **(_BYTE **)v5 == 0;
        LOWORD(v69) = 257;
        if ( !v13 )
        {
          v67[0] = (void *)v12;
          LOBYTE(v69) = 3;
        }
        sub_25CCFD0(&v65, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), v67);
        v14 = v65;
        v65 = 0;
        v15 = *(const char **)v5;
        v67[0] = v68;
        v58 = v14;
        if ( !v15 )
          std::__throw_logic_error("basic_string: construction from null is not valid");
        v16 = (volatile signed __int32 *)strlen(v15);
        v66 = v16;
        v17 = (size_t)v16;
        if ( (unsigned __int64)v16 > 0xF )
        {
          n = (size_t)v16;
          v40 = (void *)std::string::_M_create();
          v17 = n;
          v67[0] = v40;
          v41 = v40;
          v68[0] = v66;
        }
        else
        {
          if ( v16 == (int *)((char *)&dword_0 + 1) )
          {
            LOBYTE(v68[0]) = *v15;
LABEL_14:
            v18 = v68;
            goto LABEL_15;
          }
          if ( !v16 )
            goto LABEL_14;
          v41 = v68;
        }
        memcpy(v41, v15, v17);
        v16 = v66;
        v18 = v67[0];
LABEL_15:
        v67[1] = (void *)v16;
        *((_BYTE *)v16 + (_QWORD)v18) = 0;
        v69 = v58;
        v19 = (_QWORD *)v9[1];
        if ( v19 != (_QWORD *)v9[2] )
        {
          v20 = v19 + 2;
          *v19 = v19 + 2;
          if ( v67[0] != v68 )
          {
            *v19 = v67[0];
            v19[2] = v68[0];
            goto LABEL_18;
          }
          v21 = v67[1];
          v42 = LODWORD(v67[1]) + 1;
          if ( (unsigned int)(LODWORD(v67[1]) + 1) < 8 )
          {
            if ( (v42 & 4) != 0 )
            {
              *((_DWORD *)v19 + 4) = v68[0];
              *(_DWORD *)((char *)v20 + v42 - 4) = *(_DWORD *)((char *)&v67[1] + v42 + 4);
              v21 = v67[1];
            }
            else if ( LODWORD(v67[1]) != -1 )
            {
              *((_BYTE *)v19 + 16) = v68[0];
              v21 = v67[1];
              if ( (v42 & 2) != 0 )
              {
                *(_WORD *)((char *)v20 + v42 - 2) = *(_WORD *)((char *)&v67[1] + v42 + 6);
                v21 = v67[1];
              }
            }
          }
          else
          {
            v19[2] = v68[0];
            *(_QWORD *)((char *)v20 + v42 - 8) = *(void **)((char *)&v67[1] + v42);
            v43 = (unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v44 = (char *)v20 - v43;
            v45 = (char *)((char *)v68 - v44);
            v46 = ((_DWORD)v44 + v42) & 0xFFFFFFF8;
            if ( v46 >= 8 )
            {
              v47 = v46 & 0xFFFFFFF8;
              v48 = 0;
              do
              {
                v49 = v48;
                v48 += 8;
                *(_QWORD *)(v43 + v49) = *(_QWORD *)&v45[v49];
              }
              while ( v48 < v47 );
            }
LABEL_18:
            v21 = v67[1];
          }
          v19[1] = v21;
          v19[4] = v69;
          v9[1] += 40;
          goto LABEL_20;
        }
        sub_625D00((__int64)v9, (char **)v67);
        if ( v67[0] == v68 )
        {
LABEL_20:
          v22 = v65;
          if ( !v65 )
            goto LABEL_48;
LABEL_21:
          v5 += 24;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          if ( v59 == v5 )
            break;
        }
        else
        {
          operator delete(v67[0], v68[0] + 1LL);
          v22 = v65;
          if ( v65 )
            goto LABEL_21;
LABEL_48:
          v5 += 24;
          if ( v59 == v5 )
            break;
        }
      }
    }
    v23 = *v9;
    v24 = v9[1];
    v66 = nullptr;
    v25 = (__m128)_mm_loadu_si128((const __m128i *)(v64 + 40));
    v26 = _mm_movehl_ps(a3, v25).m128_u64[0];
    *(__m128 *)v67 = v25;
    v29 = 0xCCCCCCCCCCCCCCCDLL * ((v24 - v23) >> 3);
    v27 = v23;
    v28 = v29;
    if ( v26 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
      else
        ++*(_DWORD *)(v26 + 8);
    }
    v30 = sub_FFCAD0(v62, v67, v27, v28, &v66);
    v31 = (volatile signed __int32 *)v67[1];
    v32 = v30;
    if ( v67[1] )
    {
      v33 = (volatile signed __int32 *)((char *)v67[1] + 8);
      if ( *((_QWORD *)v67[1] + 1) == 0x100000001LL )
      {
        v52 = *(_QWORD *)v67[1];
        v53 = v67[1];
        *((_QWORD *)v67[1] + 1) = 0;
        (*(void (__fastcall **)(void *, void **, volatile signed __int32 *))(v52 + 16))(v53, v67, v33);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 24LL))(v31);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v34 = _InterlockedExchangeAdd(v33, 0xFFFFFFFF);
        }
        else
        {
          v34 = *((_DWORD *)v67[1] + 2);
          *((_DWORD *)v67[1] + 2) = v34 - 1;
        }
        if ( v34 == 1 )
          sub_6111C0(v31);
      }
    }
    v35 = v66;
    if ( v66 && !_InterlockedSub(v66 + 2, 1u) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
    v36 = 0;
    if ( v32 )
    {
      v50 = *(unsigned int **)(v62 + 904);
      v51 = &v50[26 * *(unsigned int *)(v62 + 912)];
      if ( v50 == v51 )
      {
LABEL_74:
        v36 = 1;
      }
      else
      {
        while ( (int)v50[1] <= 3 || (unsigned int)sub_C73000(*v50) != 14 )
        {
          v50 += 26;
          if ( v51 == v50 )
            goto LABEL_74;
        }
        v36 = 4;
      }
    }
    if ( v61 && !*(_BYTE *)(v61 + 16) )
    {
      sub_25A19A0(*(_QWORD *)(v61 + 8), v61);
      v37 = v9[1];
      v38 = *v9;
      if ( v37 != *v9 )
        goto LABEL_38;
    }
    else
    {
      v37 = v9[1];
      v38 = *v9;
      if ( v37 != *v9 )
      {
        do
        {
LABEL_38:
          if ( *(_QWORD *)v38 != v38 + 16 )
            operator delete(*(void **)v38, *(_QWORD *)(v38 + 16) + 1LL);
          v38 += 40;
        }
        while ( v37 != v38 );
        v38 = *v9;
      }
    }
    if ( v38 )
      operator delete((void *)v38, v9[2] - v38);
    operator delete(v9, 0x18u);
    nullsub_174(v62 + 2048);
    goto LABEL_45;
  }
  v54 = sub_5FF160();
  sub_5FF1E0((__int64 *)v67, "clang_reparseTranslationUnit_Impl", 0x21u, v54);
  v55 = (pthread_mutex_t *)v67[0];
  if ( v67[0] )
  {
    sub_5FF0F0((__int64)v67[0] + 136, "called with a bad TU: ");
    sub_5FF0F0((__int64)(&v55[3].__align + 2), "<NULL TU>");
    v13 = v55->__lock-- == 1;
    if ( v13 )
    {
      sub_60C330(v55, (__int64 (*)())"<NULL TU>", v56, v57);
      operator delete(v55, 0xC0u);
    }
  }
  v36 = 3;
LABEL_45:
  *v63 = v36;
  return v63;
}

