unsigned __int8 **__fastcall sub_FA2880(unsigned __int8 **a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int128 v5; // rax
  unsigned __int8 *v6; // r12
  _BYTE *v7; // r15
  signed __int64 v8; // r13
  _QWORD *v9; // rax
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  void **v14; // r13
  unsigned __int8 *v15; // rdi
  __int64 v16; // rax
  size_t v18; // rdx
  unsigned __int8 *v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r14
  void *v25; // rdi
  __int64 v26; // [rsp+8h] [rbp-110h]
  void *src[2]; // [rsp+10h] [rbp-108h] BYREF
  __int64 v28; // [rsp+20h] [rbp-F8h] BYREF
  void *v29; // [rsp+30h] [rbp-E8h]
  size_t v30; // [rsp+38h] [rbp-E0h]
  _QWORD v31[2]; // [rsp+40h] [rbp-D8h] BYREF
  _OWORD v32[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-A8h]
  char *v34; // [rsp+80h] [rbp-98h]
  __int64 v35; // [rsp+88h] [rbp-90h]
  __int16 v36; // [rsp+A0h] [rbp-78h]
  __int128 v37; // [rsp+B0h] [rbp-68h] BYREF
  char *v38; // [rsp+C0h] [rbp-58h]
  __int64 v39; // [rsp+C8h] [rbp-50h]
  __int64 v40; // [rsp+D0h] [rbp-48h]

  v34 = "'";
  v36 = 259;
  *(_QWORD *)&v5 = sub_FBBEA0(a2, BYTE1(a2), 259, a4);
  *(_QWORD *)&v32[0] = "'";
  v32[1] = v5;
  LOWORD(v33) = 1283;
  v38 = "'";
  *(_QWORD *)&v37 = v32;
  v39 = v35;
  LOWORD(v40) = 770;
  sub_222F820(src, &v37);
  v6 = *a1;
  v7 = src[0];
  v8 = (signed __int64)src[1];
  if ( !*a1 )
  {
    v19 = a1[1];
    v20 = *((_DWORD *)v19 + 3744);
    if ( v20 )
    {
      v21 = (unsigned int)(v20 - 1);
      *((_DWORD *)v19 + 3744) = v21;
      v6 = *(unsigned __int8 **)&v19[8 * v21 + 14848];
      v22 = *((unsigned int *)v6 + 134);
      v23 = *((_QWORD *)v6 + 66);
      *v6 = 0;
      *((_DWORD *)v6 + 106) = 0;
      v24 = v23 + (v22 << 6);
      while ( v23 != v24 )
      {
        while ( 1 )
        {
          v24 -= 64;
          v25 = *(void **)(v24 + 24);
          if ( v25 == (void *)(v24 + 40) )
            break;
          v26 = v23;
          operator delete(v25);
          v23 = v26;
          if ( v26 == v24 )
            goto LABEL_35;
        }
      }
LABEL_35:
      *((_DWORD *)v6 + 134) = 0;
    }
    else
    {
      v6 = (unsigned __int8 *)operator new(0x3A0u);
      *v6 = 0;
      *((_QWORD *)v6 + 12) = v6 + 112;
      *((_QWORD *)v6 + 16) = v6 + 144;
      *((_QWORD *)v6 + 20) = v6 + 176;
      *((_QWORD *)v6 + 24) = v6 + 208;
      *((_QWORD *)v6 + 28) = v6 + 240;
      *((_QWORD *)v6 + 32) = v6 + 272;
      *((_QWORD *)v6 + 36) = v6 + 304;
      *((_QWORD *)v6 + 40) = v6 + 336;
      *((_QWORD *)v6 + 44) = v6 + 368;
      *((_QWORD *)v6 + 48) = v6 + 400;
      *((_QWORD *)v6 + 52) = v6 + 432;
      *((_QWORD *)v6 + 13) = 0;
      v6[112] = 0;
      *((_QWORD *)v6 + 17) = 0;
      v6[144] = 0;
      *((_QWORD *)v6 + 21) = 0;
      v6[176] = 0;
      *((_QWORD *)v6 + 25) = 0;
      v6[208] = 0;
      *((_QWORD *)v6 + 29) = 0;
      v6[240] = 0;
      *((_QWORD *)v6 + 33) = 0;
      v6[272] = 0;
      *((_QWORD *)v6 + 37) = 0;
      v6[304] = 0;
      *((_QWORD *)v6 + 41) = 0;
      v6[336] = 0;
      *((_QWORD *)v6 + 45) = 0;
      v6[368] = 0;
      *((_QWORD *)v6 + 49) = 0;
      v6[400] = 0;
      *((_QWORD *)v6 + 53) = 0x800000000LL;
      *((_QWORD *)v6 + 66) = v6 + 544;
      *((_QWORD *)v6 + 67) = 0x600000000LL;
    }
    *a1 = v6;
  }
  v6[*v6 + 1] = 0;
  v29 = v31;
  if ( &v7[v8] && !v7 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v8 > 0xF )
  {
    if ( v8 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v9 = (_QWORD *)operator new(v8 + 1);
    v31[0] = v8;
    v29 = v9;
LABEL_20:
    memcpy(v9, v7, v8);
    v9 = v29;
    goto LABEL_7;
  }
  if ( v8 == 1 )
  {
    LOBYTE(v31[0]) = *v7;
    v9 = v31;
    goto LABEL_7;
  }
  v9 = v31;
  if ( v8 )
    goto LABEL_20;
LABEL_7:
  v30 = v8;
  *((_BYTE *)v9 + v8) = 0;
  v10 = *a1;
  v11 = **a1;
  *v10 = v11 + 1;
  v12 = (unsigned __int8)v11;
  v13 = 32 * (v11 + 3);
  v14 = (void **)&v10[v13];
  v15 = *(unsigned __int8 **)&v10[v13];
  if ( v29 == v31 )
  {
    v18 = v30;
    if ( v30 )
    {
      if ( v30 == 1 )
        *v15 = v31[0];
      else
        memcpy(v15, v29, v30);
      v18 = v30;
      v15 = (unsigned __int8 *)*v14;
    }
    v14[1] = (void *)v18;
    v15[v18] = 0;
    v15 = (unsigned __int8 *)v29;
  }
  else
  {
    if ( v15 == &v10[v13 + 16] )
    {
      *v14 = v29;
      v14[1] = (void *)v30;
      v14[2] = (void *)v31[0];
    }
    else
    {
      v16 = *(_QWORD *)&v10[32 * v12 + 112];
      *v14 = v29;
      v14[1] = (void *)v30;
      v14[2] = (void *)v31[0];
      if ( v15 )
      {
        v29 = v15;
        v31[0] = v16;
        goto LABEL_11;
      }
    }
    v15 = (unsigned __int8 *)v31;
    v29 = v31;
  }
LABEL_11:
  v30 = 0;
  *v15 = 0;
  if ( v29 != v31 )
    operator delete(v29);
  if ( src[0] != &v28 )
    operator delete(src[0]);
  return a1;
}

