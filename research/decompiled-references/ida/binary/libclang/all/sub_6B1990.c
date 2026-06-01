__int64 __fastcall sub_6B1990(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int16 v7; // ax
  unsigned int v8; // r15d
  __int64 v9; // rax
  unsigned __int8 *v10; // rbp
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  size_t v13; // rbx
  _BYTE *v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rbp
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  _QWORD *v21; // rbx
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rbx
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  _BYTE *v27; // rax
  _QWORD *v28; // rsi
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // r14
  void *v34; // rdi
  __int64 v35; // rdx
  _BYTE *v36; // [rsp+0h] [rbp-C8h]
  _BYTE *v37; // [rsp+0h] [rbp-C8h]
  _BYTE *v38; // [rsp+0h] [rbp-C8h]
  __int64 v39; // [rsp+8h] [rbp-C0h]
  _BYTE *v40[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD dest[2]; // [rsp+30h] [rbp-98h] BYREF
  void *v42; // [rsp+40h] [rbp-88h] BYREF
  void *v43; // [rsp+48h] [rbp-80h]
  __int64 v44; // [rsp+50h] [rbp-78h]
  __int64 v45; // [rsp+58h] [rbp-70h] BYREF
  __int16 v46; // [rsp+80h] [rbp-48h]

  v2 = *(unsigned __int16 *)(a2 + 18);
  LOWORD(v2) = ((unsigned __int16)v2 >> 3) & 0x1FF;
  if ( (unsigned __int16)v2 > 0x1B1u )
  {
    v3 = (unsigned int)(v2 + 77);
    LOWORD(v3) = v3 & 0x1FF;
    switch ( v3 )
    {
      case 0LL:
        return 66;
      case 1LL:
      case 2LL:
      case 4LL:
        return 67;
      case 3LL:
      case 14LL:
      case 16LL:
        return 105;
      case 5LL:
      case 7LL:
        return 83;
      case 6LL:
      case 8LL:
        return 73;
      case 9LL:
        result = 76;
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 17288) + 30LL) != 32 )
          return 81;
        return result;
      case 10LL:
        return 81;
      case 11LL:
        return 84;
      case 12LL:
      case 13LL:
        return 99;
      case 15LL:
        return 115;
      case 17LL:
        result = 108;
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 17288) + 30LL) != 32 )
          goto LABEL_7;
        return result;
      case 18LL:
LABEL_7:
        result = 113;
        break;
      case 19LL:
        result = 116;
        break;
      case 20LL:
      case 21LL:
      case 22LL:
      case 23LL:
      case 24LL:
      case 25LL:
      case 26LL:
      case 27LL:
      case 28LL:
      case 29LL:
      case 30LL:
      case 31LL:
      case 32LL:
      case 33LL:
      case 34LL:
      case 35LL:
      case 36LL:
      case 37LL:
      case 38LL:
      case 39LL:
      case 40LL:
      case 41LL:
      case 42LL:
      case 43LL:
      case 44LL:
      case 48LL:
      case 49LL:
      case 50LL:
      case 51LL:
        return 32;
      case 45LL:
        result = 102;
        break;
      case 46LL:
        result = 100;
        break;
      case 47LL:
        result = 68;
        break;
      case 52LL:
        result = 42;
        break;
      default:
        result = 118;
        break;
    }
    return result;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 2152) + 8LL);
  v6 = *(_QWORD *)(v5 + 32);
  sub_6A8840((__int64 *)v40, "cannot yet @encode type %0", 0x1Au);
  HIDWORD(v42) = 0;
  HIBYTE(v7) = BYTE1(v42) & 0xFE;
  LOBYTE(v7) = -20;
  LOWORD(v42) = v7;
  std::string::basic_string();
  std::string::_M_dispose();
  v8 = sub_C77120(v6, &v42);
  if ( v43 != &v45 )
    operator delete(v43, v45 + 1);
  sub_C6CF40(&v42, v5, 0, v8);
  v9 = sub_B09200(a2, a1 + 17304);
  v10 = (unsigned __int8 *)v42;
  v11 = (_BYTE *)v9;
  v13 = (size_t)v12;
  v14 = v12;
  if ( !v42 )
  {
    v28 = v43;
    v29 = *((_DWORD *)v43 + 3744);
    if ( v29 )
    {
      v30 = (unsigned int)(v29 - 1);
      *((_DWORD *)v43 + 3744) = v30;
      v10 = (unsigned __int8 *)v28[v30 + 1856];
      v31 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v32 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v33 = v32 + (v31 << 6);
      v39 = v32;
      while ( v39 != v33 )
      {
        v33 -= 64;
        v34 = *(void **)(v33 + 24);
        if ( v34 != (void *)(v33 + 40) )
        {
          v37 = v11;
          operator delete(v34, *(_QWORD *)(v33 + 40) + 1LL);
          v11 = v37;
        }
      }
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v38 = v11;
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 52) = v10 + 432;
      v11 = v38;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    v42 = v10;
  }
  v10[*v10 + 1] = 0;
  v15 = dest;
  v40[0] = dest;
  if ( !v11 && v13 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  if ( v13 > 0xF )
  {
    v36 = v11;
    v27 = (_BYTE *)std::string::_M_create();
    v11 = v36;
    v40[0] = v27;
    v26 = v27;
    dest[0] = v13;
    goto LABEL_53;
  }
  if ( v13 != 1 )
  {
    if ( !v13 )
      goto LABEL_16;
    v26 = dest;
LABEL_53:
    memcpy(v26, v11, v13);
    v14 = (_BYTE *)v13;
    v15 = v40[0];
    goto LABEL_16;
  }
  LOBYTE(dest[0]) = *v11;
LABEL_16:
  v40[1] = v14;
  v14[(_QWORD)v15] = 0;
  v16 = v42;
  v17 = *(unsigned __int8 *)v42;
  *(_BYTE *)v42 = v17 + 1;
  sub_6A7990(&v16[4 * v17 + 12], v40);
  std::string::_M_dispose();
  if ( (_BYTE)v46 )
  {
    sub_C69E80(v44, &v42, HIBYTE(v46));
    v44 = 0;
    v46 = 0;
  }
  std::string::_M_dispose();
  v18 = v42;
  if ( v42 )
  {
    v19 = v43;
    if ( v43 )
    {
      if ( v42 >= v43 && (char *)v43 + 14848 >= v42 )
      {
        v35 = *((unsigned int *)v43 + 3744);
        *((_DWORD *)v43 + 3744) = v35 + 1;
        v19[v35 + 1856] = v18;
      }
      else
      {
        v20 = *((_QWORD **)v42 + 66);
        v21 = &v20[8 * (unsigned __int64)*((unsigned int *)v42 + 134)];
        if ( v20 != v21 )
        {
          do
          {
            v21 -= 8;
            v22 = (_QWORD *)v21[3];
            if ( v22 != v21 + 5 )
              operator delete(v22, v21[5] + 1LL);
          }
          while ( v20 != v21 );
          v21 = (_QWORD *)v18[66];
        }
        if ( v21 != v18 + 68 )
          free(v21);
        v23 = (_QWORD *)v18[52];
        if ( v23 != v18 + 54 )
          free(v23);
        v24 = v18 + 50;
        do
        {
          v25 = (_QWORD *)*(v24 - 2);
          if ( v25 != v24 )
            operator delete(v25, *v24 + 1LL);
          v24 -= 4;
        }
        while ( v24 != v18 + 10 );
        operator delete(v18, 0x3A0u);
      }
    }
  }
  return 32;
}

