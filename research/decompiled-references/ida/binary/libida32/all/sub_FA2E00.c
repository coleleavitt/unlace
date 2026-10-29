unsigned __int8 **__fastcall sub_FA2E00(unsigned __int8 **a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int8 *v4; // r12
  _BYTE *v5; // r15
  signed __int64 v6; // r13
  _QWORD *v7; // rax
  unsigned __int8 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  void **v12; // r13
  unsigned __int8 *v13; // rdi
  __int64 v14; // rax
  size_t v16; // rdx
  unsigned __int8 *v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r14
  void *v23; // rdi
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+18h] [rbp-80h] BYREF
  void *src[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+30h] [rbp-68h] BYREF
  void *v28; // [rsp+40h] [rbp-58h]
  size_t v29; // [rsp+48h] [rbp-50h]
  _QWORD v30[9]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *a2;
  *a2 = 0;
  v25 = v3;
  sub_21FD4D0(src, &v25);
  v4 = *a1;
  v5 = src[0];
  v6 = (signed __int64)src[1];
  if ( !*a1 )
  {
    v17 = a1[1];
    v18 = *((_DWORD *)v17 + 3744);
    if ( v18 )
    {
      v19 = (unsigned int)(v18 - 1);
      *((_DWORD *)v17 + 3744) = v19;
      v4 = *(unsigned __int8 **)&v17[8 * v19 + 14848];
      v20 = *((unsigned int *)v4 + 134);
      v21 = *((_QWORD *)v4 + 66);
      *v4 = 0;
      *((_DWORD *)v4 + 106) = 0;
      v22 = v21 + (v20 << 6);
      while ( v21 != v22 )
      {
        while ( 1 )
        {
          v22 -= 64;
          v23 = *(void **)(v22 + 24);
          if ( v23 == (void *)(v22 + 40) )
            break;
          v24 = v21;
          operator delete(v23);
          v21 = v24;
          if ( v24 == v22 )
            goto LABEL_37;
        }
      }
LABEL_37:
      *((_DWORD *)v4 + 134) = 0;
    }
    else
    {
      v4 = (unsigned __int8 *)operator new(0x3A0u);
      *v4 = 0;
      *((_QWORD *)v4 + 12) = v4 + 112;
      *((_QWORD *)v4 + 16) = v4 + 144;
      *((_QWORD *)v4 + 20) = v4 + 176;
      *((_QWORD *)v4 + 24) = v4 + 208;
      *((_QWORD *)v4 + 28) = v4 + 240;
      *((_QWORD *)v4 + 32) = v4 + 272;
      *((_QWORD *)v4 + 36) = v4 + 304;
      *((_QWORD *)v4 + 40) = v4 + 336;
      *((_QWORD *)v4 + 44) = v4 + 368;
      *((_QWORD *)v4 + 48) = v4 + 400;
      *((_QWORD *)v4 + 52) = v4 + 432;
      *((_QWORD *)v4 + 13) = 0;
      v4[112] = 0;
      *((_QWORD *)v4 + 17) = 0;
      v4[144] = 0;
      *((_QWORD *)v4 + 21) = 0;
      v4[176] = 0;
      *((_QWORD *)v4 + 25) = 0;
      v4[208] = 0;
      *((_QWORD *)v4 + 29) = 0;
      v4[240] = 0;
      *((_QWORD *)v4 + 33) = 0;
      v4[272] = 0;
      *((_QWORD *)v4 + 37) = 0;
      v4[304] = 0;
      *((_QWORD *)v4 + 41) = 0;
      v4[336] = 0;
      *((_QWORD *)v4 + 45) = 0;
      v4[368] = 0;
      *((_QWORD *)v4 + 49) = 0;
      v4[400] = 0;
      *((_QWORD *)v4 + 53) = 0x800000000LL;
      *((_QWORD *)v4 + 66) = v4 + 544;
      *((_QWORD *)v4 + 67) = 0x600000000LL;
    }
    *a1 = v4;
  }
  v4[*v4 + 1] = 0;
  v28 = v30;
  if ( &v5[v6] && !v5 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v6 > 0xF )
  {
    if ( v6 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v7 = (_QWORD *)operator new(v6 + 1);
    v30[0] = v6;
    v28 = v7;
LABEL_22:
    memcpy(v7, v5, v6);
    v7 = v28;
    goto LABEL_7;
  }
  if ( v6 == 1 )
  {
    LOBYTE(v30[0]) = *v5;
    v7 = v30;
    goto LABEL_7;
  }
  v7 = v30;
  if ( v6 )
    goto LABEL_22;
LABEL_7:
  v29 = v6;
  *((_BYTE *)v7 + v6) = 0;
  v8 = *a1;
  v9 = **a1;
  *v8 = v9 + 1;
  v10 = (unsigned __int8)v9;
  v11 = 32 * (v9 + 3);
  v12 = (void **)&v8[v11];
  v13 = *(unsigned __int8 **)&v8[v11];
  if ( v28 == v30 )
  {
    v16 = v29;
    if ( v29 )
    {
      if ( v29 == 1 )
        *v13 = v30[0];
      else
        memcpy(v13, v28, v29);
      v16 = v29;
      v13 = (unsigned __int8 *)*v12;
    }
    v12[1] = (void *)v16;
    v13[v16] = 0;
    v13 = (unsigned __int8 *)v28;
  }
  else
  {
    if ( v13 == &v8[v11 + 16] )
    {
      *v12 = v28;
      v12[1] = (void *)v29;
      v12[2] = (void *)v30[0];
    }
    else
    {
      v14 = *(_QWORD *)&v8[32 * v10 + 112];
      *v12 = v28;
      v12[1] = (void *)v29;
      v12[2] = (void *)v30[0];
      if ( v13 )
      {
        v28 = v13;
        v30[0] = v14;
        goto LABEL_11;
      }
    }
    v13 = (unsigned __int8 *)v30;
    v28 = v30;
  }
LABEL_11:
  v29 = 0;
  *v13 = 0;
  if ( v28 != v30 )
    operator delete(v28);
  if ( src[0] != &v27 )
    operator delete(src[0]);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  return a1;
}

