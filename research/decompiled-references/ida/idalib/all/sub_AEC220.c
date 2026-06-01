void __fastcall sub_AEC220(unsigned __int8 **a1, _BYTE *a2, signed __int64 a3)
{
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int8 **v11; // rbp
  unsigned __int8 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // r12
  void *v21; // rdi
  unsigned __int8 *src; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h]
  _QWORD v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *a1;
  if ( !*a1 )
  {
    v15 = a1[1];
    v16 = *((_DWORD *)v15 + 3744);
    if ( v16 )
    {
      v17 = (unsigned int)(v16 - 1);
      *((_DWORD *)v15 + 3744) = v17;
      v5 = *(unsigned __int8 **)&v15[8 * v17 + 14848];
      v18 = *((unsigned int *)v5 + 134);
      *v5 = 0;
      v19 = *((_QWORD *)v5 + 66);
      *((_DWORD *)v5 + 106) = 0;
      v20 = v19 + (v18 << 6);
      while ( v19 != v20 )
      {
        while ( 1 )
        {
          v20 -= 64;
          v21 = *(void **)(v20 + 24);
          if ( v21 == (void *)(v20 + 40) )
            break;
          operator delete(v21);
          if ( v19 == v20 )
            goto LABEL_33;
        }
      }
LABEL_33:
      *((_DWORD *)v5 + 134) = 0;
    }
    else
    {
      v5 = (unsigned __int8 *)operator new(0x3A0u);
      *v5 = 0;
      *((_QWORD *)v5 + 12) = v5 + 112;
      *((_QWORD *)v5 + 16) = v5 + 144;
      *((_QWORD *)v5 + 20) = v5 + 176;
      *((_QWORD *)v5 + 24) = v5 + 208;
      *((_QWORD *)v5 + 28) = v5 + 240;
      *((_QWORD *)v5 + 32) = v5 + 272;
      *((_QWORD *)v5 + 36) = v5 + 304;
      *((_QWORD *)v5 + 40) = v5 + 336;
      *((_QWORD *)v5 + 44) = v5 + 368;
      *((_QWORD *)v5 + 48) = v5 + 400;
      *((_QWORD *)v5 + 52) = v5 + 432;
      *((_QWORD *)v5 + 13) = 0;
      v5[112] = 0;
      *((_QWORD *)v5 + 17) = 0;
      v5[144] = 0;
      *((_QWORD *)v5 + 21) = 0;
      v5[176] = 0;
      *((_QWORD *)v5 + 25) = 0;
      v5[208] = 0;
      *((_QWORD *)v5 + 29) = 0;
      v5[240] = 0;
      *((_QWORD *)v5 + 33) = 0;
      v5[272] = 0;
      *((_QWORD *)v5 + 37) = 0;
      v5[304] = 0;
      *((_QWORD *)v5 + 41) = 0;
      v5[336] = 0;
      *((_QWORD *)v5 + 45) = 0;
      v5[368] = 0;
      *((_QWORD *)v5 + 49) = 0;
      v5[400] = 0;
      *((_QWORD *)v5 + 53) = 0x800000000LL;
      *((_QWORD *)v5 + 66) = v5 + 544;
      *((_QWORD *)v5 + 67) = 0x600000000LL;
    }
    *a1 = v5;
  }
  v5[*v5 + 1] = 0;
  src = (unsigned __int8 *)v24;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v6 = (unsigned __int8 *)operator new(a3 + 1);
    v24[0] = a3;
    src = v6;
LABEL_18:
    memcpy(v6, a2, a3);
    v6 = src;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    LOBYTE(v24[0]) = *a2;
    v6 = (unsigned __int8 *)v24;
    goto LABEL_7;
  }
  v6 = (unsigned __int8 *)v24;
  if ( a3 )
    goto LABEL_18;
LABEL_7:
  n = a3;
  v6[a3] = 0;
  v7 = *a1;
  v8 = **a1;
  *v7 = v8 + 1;
  v9 = (unsigned __int8)v8;
  v10 = 32 * (v8 + 3);
  v11 = (unsigned __int8 **)&v7[v10];
  v12 = *(unsigned __int8 **)&v7[v10];
  if ( src == (unsigned __int8 *)v24 )
  {
    v14 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *v12 = v24[0];
        v14 = 1;
      }
      else
      {
        memcpy(v12, src, n);
        v14 = n;
      }
      v12 = *v11;
    }
    v11[1] = (unsigned __int8 *)v14;
    v12[v14] = 0;
    v12 = src;
  }
  else
  {
    if ( v12 == &v7[v10 + 16] )
    {
      *v11 = src;
      v11[1] = (unsigned __int8 *)n;
      v11[2] = (unsigned __int8 *)v24[0];
    }
    else
    {
      v13 = *(_QWORD *)&v7[32 * v9 + 112];
      *v11 = src;
      v11[1] = (unsigned __int8 *)n;
      v11[2] = (unsigned __int8 *)v24[0];
      if ( v12 )
      {
        src = v12;
        v24[0] = v13;
        goto LABEL_11;
      }
    }
    v12 = (unsigned __int8 *)v24;
    src = (unsigned __int8 *)v24;
  }
LABEL_11:
  *v12 = 0;
  if ( src != (unsigned __int8 *)v24 )
    operator delete(src);
}
