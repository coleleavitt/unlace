__int64 __fastcall sub_12B9180(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  const char **v9; // rax
  const char *v10; // rbx
  size_t v11; // rax
  unsigned __int8 *v12; // rbp
  _BYTE *v13; // r15
  signed __int64 v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  void **v20; // r13
  _BYTE *v21; // rdi
  __int64 v22; // rax
  void **v23; // rbp
  unsigned __int64 v24; // rax
  void **v25; // r12
  void **v26; // rbx
  void **v27; // rdi
  void **v28; // rdi
  void **v29; // rbx
  void **v30; // r12
  size_t v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r14
  void *v39; // rdi
  __int64 v40; // [rsp+8h] [rbp-D0h]
  void *src[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+20h] [rbp-B8h] BYREF
  void *v43; // [rsp+30h] [rbp-A8h]
  size_t v44; // [rsp+38h] [rbp-A0h]
  _QWORD v45[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v46; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-80h]
  __int64 v48; // [rsp+60h] [rbp-78h]
  void *v49; // [rsp+70h] [rbp-68h]
  __int64 v50; // [rsp+80h] [rbp-58h] BYREF
  __int16 v51; // [rsp+90h] [rbp-48h]

  LODWORD(v46) = 3306;
  v2 = sub_21B6DA0(a2, &v46, 1);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  if ( v4 == v5 )
    return 0;
  while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 3306) )
  {
    if ( v5 == ++v4 )
      return 0;
  }
  if ( v5 == v4 )
    return 0;
  do
  {
    v7 = *v4;
    v8 = *(_QWORD *)(*v4 + 16LL);
    if ( !v8 )
      v8 = *v4;
    ++v4;
    *(_BYTE *)(v8 + 44) |= 1u;
    if ( v4 == v5 )
      break;
    while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 3306) )
    {
      if ( v5 == ++v4 )
        goto LABEL_13;
    }
  }
  while ( v5 != v4 );
LABEL_13:
  v9 = *(const char ***)(v7 + 48);
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_16;
  v11 = strlen(*v9);
  if ( v11 == 6 )
  {
    if ( *(_DWORD *)v10 == 1667393900 && *((_WORD *)v10 + 2) == 11051 )
      return 0;
LABEL_16:
    sub_FC70B0((__int64)&v46, **(_QWORD **)(a1 + 8), 0, 397);
    sub_21B5FF0(src, v7, a2);
    v12 = (unsigned __int8 *)v46;
    v13 = src[0];
    v14 = (signed __int64)src[1];
    if ( !v46 )
    {
      v33 = v47;
      v34 = *(_DWORD *)(v47 + 14976);
      if ( v34 )
      {
        v35 = (unsigned int)(v34 - 1);
        *(_DWORD *)(v47 + 14976) = v35;
        v12 = *(unsigned __int8 **)(v33 + 8 * v35 + 14848);
        v36 = *((unsigned int *)v12 + 134);
        *v12 = 0;
        v37 = *((_QWORD *)v12 + 66);
        *((_DWORD *)v12 + 106) = 0;
        v38 = v37 + (v36 << 6);
        while ( v37 != v38 )
        {
          while ( 1 )
          {
            v38 -= 64;
            v39 = *(void **)(v38 + 24);
            if ( v39 == (void *)(v38 + 40) )
              break;
            v40 = v37;
            operator delete(v39);
            v37 = v40;
            if ( v40 == v38 )
              goto LABEL_80;
          }
        }
LABEL_80:
        *((_DWORD *)v12 + 134) = 0;
      }
      else
      {
        v12 = (unsigned __int8 *)operator new(0x3A0u);
        *v12 = 0;
        *((_QWORD *)v12 + 12) = v12 + 112;
        *((_QWORD *)v12 + 16) = v12 + 144;
        *((_QWORD *)v12 + 20) = v12 + 176;
        *((_QWORD *)v12 + 24) = v12 + 208;
        *((_QWORD *)v12 + 28) = v12 + 240;
        *((_QWORD *)v12 + 32) = v12 + 272;
        *((_QWORD *)v12 + 36) = v12 + 304;
        *((_QWORD *)v12 + 40) = v12 + 336;
        *((_QWORD *)v12 + 44) = v12 + 368;
        *((_QWORD *)v12 + 48) = v12 + 400;
        *((_QWORD *)v12 + 52) = v12 + 432;
        *((_QWORD *)v12 + 13) = 0;
        v12[112] = 0;
        *((_QWORD *)v12 + 17) = 0;
        v12[144] = 0;
        *((_QWORD *)v12 + 21) = 0;
        v12[176] = 0;
        *((_QWORD *)v12 + 25) = 0;
        v12[208] = 0;
        *((_QWORD *)v12 + 29) = 0;
        v12[240] = 0;
        *((_QWORD *)v12 + 33) = 0;
        v12[272] = 0;
        *((_QWORD *)v12 + 37) = 0;
        v12[304] = 0;
        *((_QWORD *)v12 + 41) = 0;
        v12[336] = 0;
        *((_QWORD *)v12 + 45) = 0;
        v12[368] = 0;
        *((_QWORD *)v12 + 49) = 0;
        v12[400] = 0;
        *((_QWORD *)v12 + 53) = 0x800000000LL;
        *((_QWORD *)v12 + 66) = v12 + 544;
        *((_QWORD *)v12 + 67) = 0x600000000LL;
      }
      v46 = v12;
    }
    v12[*v12 + 1] = 0;
    v43 = v45;
    if ( &v13[v14] && !v13 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v14 > 0xF )
    {
      if ( v14 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v15 = (_QWORD *)operator new(v14 + 1);
      v45[0] = v14;
      v43 = v15;
    }
    else
    {
      if ( v14 == 1 )
      {
        LOBYTE(v45[0]) = *v13;
        v15 = v45;
        goto LABEL_22;
      }
      v15 = v45;
      if ( !v14 )
      {
LABEL_22:
        v44 = v14;
        *((_BYTE *)v15 + v14) = 0;
        v16 = v46;
        v17 = *(unsigned __int8 *)v46;
        *(_BYTE *)v46 = v17 + 1;
        v18 = (unsigned __int8)v17;
        v19 = 4 * (v17 + 3);
        v20 = (void **)&v16[v19];
        v21 = (_BYTE *)v16[v19];
        if ( v43 == v45 )
        {
          v31 = v44;
          if ( v44 )
          {
            if ( v44 == 1 )
              *v21 = v45[0];
            else
              memcpy(v21, v43, v44);
            v31 = v44;
            v21 = *v20;
          }
          v20[1] = (void *)v31;
          v21[v31] = 0;
          v21 = v43;
        }
        else
        {
          if ( v21 == (_BYTE *)&v16[v19 + 2] )
          {
            *v20 = v43;
            v20[1] = (void *)v44;
            v20[2] = (void *)v45[0];
          }
          else
          {
            v22 = v16[4 * v18 + 14];
            *v20 = v43;
            v20[1] = (void *)v44;
            v20[2] = (void *)v45[0];
            if ( v21 )
            {
              v43 = v21;
              v45[0] = v22;
              goto LABEL_26;
            }
          }
          v21 = v45;
          v43 = v45;
        }
LABEL_26:
        v44 = 0;
        *v21 = 0;
        if ( v43 != v45 )
          operator delete(v43);
        if ( src[0] != &v42 )
          operator delete(src[0]);
        if ( (_BYTE)v51 )
        {
          sub_FC7790(v48, (__int64 *)&v46, SHIBYTE(v51));
          v48 = 0;
          v51 = 0;
        }
        if ( v49 != &v50 )
          operator delete(v49);
        v23 = (void **)v46;
        if ( v46 )
        {
          v24 = v47;
          if ( v47 )
          {
            if ( (unsigned __int64)v46 < v47 || (unsigned __int64)v46 > v47 + 14848 )
            {
              v25 = *((void ***)v46 + 66);
              v26 = &v25[8 * (unsigned __int64)*((unsigned int *)v46 + 134)];
              if ( v25 != v26 )
              {
                do
                {
                  while ( 1 )
                  {
                    v26 -= 8;
                    v27 = (void **)v26[3];
                    if ( v27 == v26 + 5 )
                      break;
                    operator delete(v27);
                    if ( v25 == v26 )
                      goto LABEL_40;
                  }
                }
                while ( v25 != v26 );
LABEL_40:
                v26 = (void **)v23[66];
              }
              if ( v26 != v23 + 68 )
                free(v26);
              v28 = (void **)v23[52];
              v29 = v23 + 52;
              if ( v28 != v23 + 54 )
                free(v28);
              v30 = v23 + 12;
              do
              {
                while ( 1 )
                {
                  v29 -= 4;
                  if ( *v29 == v29 + 2 )
                    break;
                  operator delete(*v29);
                  if ( v29 == v30 )
                    goto LABEL_48;
                }
              }
              while ( v29 != v30 );
LABEL_48:
              operator delete(v23, 0x3A0u);
            }
            else
            {
              v32 = *(unsigned int *)(v47 + 14976);
              *(_DWORD *)(v47 + 14976) = v32 + 1;
              *(_QWORD *)(v24 + 8 * v32 + 14848) = v23;
            }
          }
        }
        return 0;
      }
    }
    memcpy(v15, v13, v14);
    v15 = v43;
    goto LABEL_22;
  }
  if ( v11 != 9 )
    goto LABEL_16;
  if ( *(_QWORD *)v10 != 0x2B6364747362696CLL )
    goto LABEL_16;
  result = 1;
  if ( v10[8] != 43 )
    goto LABEL_16;
  return result;
}
