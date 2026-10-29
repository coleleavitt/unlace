void __fastcall sub_9908C0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 **v4; // rax
  unsigned __int8 **v5; // rbp
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rdi
  __int64 (__fastcall *v9)(__int64); // rdx
  __int64 v10; // rax
  unsigned __int8 *v11; // rbx
  _BYTE *v12; // r15
  double v13; // r12
  double *v14; // rax
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  size_t v19; // rsi
  unsigned __int8 *v20; // rbp
  double *v21; // rdi
  __m128 v22; // xmm0
  __int64 v23; // rax
  double v24; // rcx
  double *v25; // rdi
  unsigned __int8 *v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // r13
  void *v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-88h] BYREF
  double v34; // [rsp+8h] [rbp-80h]
  void *src[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v36; // [rsp+20h] [rbp-68h] BYREF
  void *v37; // [rsp+30h] [rbp-58h] BYREF
  size_t v38; // [rsp+38h] [rbp-50h]
  double v39[9]; // [rsp+40h] [rbp-48h] BYREF

  v33 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
  {
    sub_A2E1B0(a1, &v33, 110, 0);
    return;
  }
  v4 = (unsigned __int8 **)sub_A2E1B0(a1, &v33, 2217, 0);
  v5 = v4;
  if ( v4 )
  {
    sub_8356A0(v4, 0, 2u);
    sub_8356A0(v5, 0, 2u);
  }
  v6 = *(_QWORD **)(a1 + 24);
  v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 104LL);
  if ( v7 != sub_8D7E60 )
  {
LABEL_27:
    v10 = v7((__int64)v6);
    goto LABEL_8;
  }
  v8 = (_QWORD *)v6[3];
  v9 = *(__int64 (__fastcall **)(__int64))(*v8 + 104LL);
  if ( v9 == v7 )
  {
    v6 = (_QWORD *)v8[3];
    v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 104LL);
    if ( v7 == v9 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6[3] + 104LL))(v6[3]);
      goto LABEL_8;
    }
    goto LABEL_27;
  }
  v10 = v9((__int64)v8);
LABEL_8:
  sub_C64680(src, *(_QWORD *)(v10 + 17360), a3);
  if ( v5 )
  {
    v11 = *v5;
    v12 = src[0];
    v13 = *(double *)&src[1];
    if ( !*v5 )
    {
      v26 = v5[1];
      v27 = *((_DWORD *)v26 + 3744);
      if ( v27 )
      {
        v28 = (unsigned int)(v27 - 1);
        *((_DWORD *)v26 + 3744) = v28;
        v11 = *(unsigned __int8 **)&v26[8 * v28 + 14848];
        v29 = *((unsigned int *)v11 + 134);
        *v11 = 0;
        v30 = *((_QWORD *)v11 + 66);
        *((_DWORD *)v11 + 106) = 0;
        v31 = v30 + (v29 << 6);
        while ( v30 != v31 )
        {
          while ( 1 )
          {
            v31 -= 64;
            v32 = *(void **)(v31 + 24);
            if ( v32 == (void *)(v31 + 40) )
              break;
            operator delete(v32, *(_QWORD *)(v31 + 40) + 1LL);
            if ( v30 == v31 )
              goto LABEL_46;
          }
        }
LABEL_46:
        *((_DWORD *)v11 + 134) = 0;
      }
      else
      {
        v11 = (unsigned __int8 *)operator new(0x3A0u);
        *v11 = 0;
        *((_QWORD *)v11 + 12) = v11 + 112;
        *((_QWORD *)v11 + 16) = v11 + 144;
        *((_QWORD *)v11 + 20) = v11 + 176;
        *((_QWORD *)v11 + 24) = v11 + 208;
        *((_QWORD *)v11 + 28) = v11 + 240;
        *((_QWORD *)v11 + 32) = v11 + 272;
        *((_QWORD *)v11 + 36) = v11 + 304;
        *((_QWORD *)v11 + 40) = v11 + 336;
        *((_QWORD *)v11 + 44) = v11 + 368;
        *((_QWORD *)v11 + 48) = v11 + 400;
        *((_QWORD *)v11 + 13) = 0;
        v11[112] = 0;
        *((_QWORD *)v11 + 17) = 0;
        v11[144] = 0;
        *((_QWORD *)v11 + 21) = 0;
        v11[176] = 0;
        *((_QWORD *)v11 + 25) = 0;
        v11[208] = 0;
        *((_QWORD *)v11 + 29) = 0;
        v11[240] = 0;
        *((_QWORD *)v11 + 33) = 0;
        v11[272] = 0;
        *((_QWORD *)v11 + 37) = 0;
        v11[304] = 0;
        *((_QWORD *)v11 + 41) = 0;
        v11[336] = 0;
        *((_QWORD *)v11 + 45) = 0;
        v11[368] = 0;
        *((_QWORD *)v11 + 49) = 0;
        v11[400] = 0;
        *((_QWORD *)v11 + 52) = v11 + 432;
        *((_QWORD *)v11 + 53) = 0x800000000LL;
        *((_QWORD *)v11 + 66) = v11 + 544;
        *((_QWORD *)v11 + 67) = 0x600000000LL;
      }
      *v5 = v11;
    }
    v11[*v11 + 1] = 0;
    v37 = v39;
    if ( v12 )
    {
      v34 = v13;
      if ( *(_QWORD *)&v13 > 0xFu )
      {
        v37 = (void *)std::string::_M_create();
        v25 = (double *)v37;
        v39[0] = v34;
        goto LABEL_29;
      }
    }
    else
    {
      if ( v13 != 0.0 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v34 = 0.0;
    }
    if ( *(_QWORD *)&v13 == 1 )
    {
      LOBYTE(v39[0]) = *v12;
      goto LABEL_14;
    }
    if ( v13 == 0.0 )
    {
LABEL_14:
      v14 = v39;
      goto LABEL_15;
    }
    v25 = v39;
LABEL_29:
    memcpy(v25, v12, *(size_t *)&v13);
    v13 = v34;
    v14 = (double *)v37;
LABEL_15:
    v38 = *(_QWORD *)&v13;
    *((_BYTE *)v14 + *(_QWORD *)&v13) = 0;
    v15 = *v5;
    v16 = **v5;
    *v15 = v16 + 1;
    v17 = (unsigned __int8)v16;
    v18 = 32 * v16;
    v19 = v38;
    v20 = &v15[v18];
    v21 = *(double **)&v15[v18 + 96];
    if ( v21 == (double *)&v15[v18 + 112] )
    {
      if ( v37 != v39 )
      {
        *((_QWORD *)v20 + 12) = v37;
        *(__m128 *)&v15[32 * v17 + 104] = _mm_loadh_ps(v39);
        goto LABEL_34;
      }
    }
    else if ( v37 != v39 )
    {
      v22 = _mm_loadh_ps(v39);
      v23 = 32LL * v17;
      v24 = *(double *)&v15[v23 + 112];
      *((_QWORD *)v20 + 12) = v37;
      *(__m128 *)&v15[v23 + 104] = v22;
      if ( v21 )
      {
        v37 = v21;
        v39[0] = v24;
        goto LABEL_19;
      }
LABEL_34:
      v37 = v39;
      v21 = v39;
LABEL_19:
      v38 = 0;
      *(_BYTE *)v21 = 0;
      if ( v37 != v39 )
        operator delete(v37, *(_QWORD *)&v39[0] + 1LL);
      goto LABEL_21;
    }
    if ( &v37 == (void **)&v15[v18 + 96] )
    {
      v21 = (double *)v37;
    }
    else
    {
      if ( v38 )
      {
        if ( v38 == 1 )
          *(_BYTE *)v21 = LOBYTE(v39[0]);
        else
          memcpy(v21, v39, v38);
        v19 = v38;
        v21 = *((double **)v20 + 12);
      }
      *((_QWORD *)v20 + 13) = v19;
      *((_BYTE *)v21 + v19) = 0;
      v21 = (double *)v37;
    }
    goto LABEL_19;
  }
LABEL_21:
  if ( src[0] != &v36 )
    operator delete(src[0], v36 + 1);
}

