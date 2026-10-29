__int64 __fastcall sub_128F760(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v7; // r15
  __int64 v8; // rax
  const char **v9; // rax
  const char *v10; // rbx
  unsigned __int8 *v11; // rbp
  _BYTE *v12; // r15
  signed __int64 v13; // r13
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  void **v19; // r13
  _BYTE *v20; // rdi
  __int64 v21; // rax
  void **v22; // rbp
  unsigned __int64 v23; // rax
  void **v24; // r12
  void **v25; // rbx
  void **v26; // rdi
  void **v27; // rdi
  void **v28; // rbx
  void **v29; // r12
  unsigned __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // r14
  void *v36; // rdi
  size_t v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // [rsp+8h] [rbp-D0h]
  void *src[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+20h] [rbp-B8h] BYREF
  void *v42; // [rsp+30h] [rbp-A8h]
  size_t v43; // [rsp+38h] [rbp-A0h]
  _QWORD v44[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v45; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-80h]
  __int64 v47; // [rsp+60h] [rbp-78h]
  void *v48; // [rsp+70h] [rbp-68h]
  __int64 v49; // [rsp+80h] [rbp-58h] BYREF
  __int16 v50; // [rsp+90h] [rbp-48h]

  LODWORD(v45) = 3306;
  v2 = sub_21B6DA0(a2, &v45, 1);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  if ( v4 != v5 )
  {
    while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 3306) )
    {
      if ( v5 == ++v4 )
        return 0;
    }
    if ( v5 != v4 )
    {
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
      if ( !*v9 || strlen(*v9) != 6 || *(_DWORD *)v10 != 1667393900 || *((_WORD *)v10 + 2) != 11051 )
      {
        sub_FC70B0((__int64)&v45, **(_QWORD **)(a1 + 8), 0, 397);
        sub_21B5FF0(src, v7, a2);
        v11 = (unsigned __int8 *)v45;
        v12 = src[0];
        v13 = (signed __int64)src[1];
        if ( !v45 )
        {
          v30 = v46;
          v31 = *(_DWORD *)(v46 + 14976);
          if ( v31 )
          {
            v32 = (unsigned int)(v31 - 1);
            *(_DWORD *)(v46 + 14976) = v32;
            v11 = *(unsigned __int8 **)(v30 + 8 * v32 + 14848);
            v33 = *((unsigned int *)v11 + 134);
            *v11 = 0;
            v34 = *((_QWORD *)v11 + 66);
            *((_DWORD *)v11 + 106) = 0;
            v35 = v34 + (v33 << 6);
            while ( v34 != v35 )
            {
              while ( 1 )
              {
                v35 -= 64;
                v36 = *(void **)(v35 + 24);
                if ( v36 == (void *)(v35 + 40) )
                  break;
                v39 = v34;
                operator delete(v36);
                v34 = v39;
                if ( v39 == v35 )
                  goto LABEL_61;
              }
            }
LABEL_61:
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
            *((_QWORD *)v11 + 52) = v11 + 432;
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
            *((_QWORD *)v11 + 53) = 0x800000000LL;
            *((_QWORD *)v11 + 66) = v11 + 544;
            *((_QWORD *)v11 + 67) = 0x600000000LL;
          }
          v45 = v11;
        }
        v11[*v11 + 1] = 0;
        v42 = v44;
        if ( &v12[v13] && !v12 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v13 > 0xF )
        {
          if ( v13 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v14 = (_QWORD *)operator new(v13 + 1);
          v44[0] = v13;
          v42 = v14;
        }
        else
        {
          if ( v13 == 1 )
          {
            LOBYTE(v44[0]) = *v12;
            v14 = v44;
            goto LABEL_22;
          }
          v14 = v44;
          if ( !v13 )
          {
LABEL_22:
            v43 = v13;
            *((_BYTE *)v14 + v13) = 0;
            v15 = v45;
            v16 = *(unsigned __int8 *)v45;
            *(_BYTE *)v45 = v16 + 1;
            v17 = (unsigned __int8)v16;
            v18 = 4 * (v16 + 3);
            v19 = (void **)&v15[v18];
            v20 = (_BYTE *)v15[v18];
            if ( v42 == v44 )
            {
              v37 = v43;
              if ( v43 )
              {
                if ( v43 == 1 )
                  *v20 = v44[0];
                else
                  memcpy(v20, v42, v43);
                v37 = v43;
                v20 = *v19;
              }
              v19[1] = (void *)v37;
              v20[v37] = 0;
              v20 = v42;
            }
            else
            {
              if ( v20 == (_BYTE *)&v15[v18 + 2] )
              {
                *v19 = v42;
                v19[1] = (void *)v43;
                v19[2] = (void *)v44[0];
              }
              else
              {
                v21 = v15[4 * v17 + 14];
                *v19 = v42;
                v19[1] = (void *)v43;
                v19[2] = (void *)v44[0];
                if ( v20 )
                {
                  v42 = v20;
                  v44[0] = v21;
                  goto LABEL_26;
                }
              }
              v20 = v44;
              v42 = v44;
            }
LABEL_26:
            v43 = 0;
            *v20 = 0;
            if ( v42 != v44 )
              operator delete(v42);
            if ( src[0] != &v41 )
              operator delete(src[0]);
            if ( (_BYTE)v50 )
            {
              sub_FC7790(v47, (__int64 *)&v45, SHIBYTE(v50));
              v47 = 0;
              v50 = 0;
            }
            if ( v48 != &v49 )
              operator delete(v48);
            v22 = (void **)v45;
            if ( v45 )
            {
              v23 = v46;
              if ( v46 )
              {
                if ( (unsigned __int64)v45 < v46 || (unsigned __int64)v45 > v46 + 14848 )
                {
                  v24 = *((void ***)v45 + 66);
                  v25 = &v24[8 * (unsigned __int64)*((unsigned int *)v45 + 134)];
                  if ( v24 != v25 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v25 -= 8;
                        v26 = (void **)v25[3];
                        if ( v26 == v25 + 5 )
                          break;
                        operator delete(v26);
                        if ( v24 == v25 )
                          goto LABEL_40;
                      }
                    }
                    while ( v24 != v25 );
LABEL_40:
                    v25 = (void **)v22[66];
                  }
                  if ( v25 != v22 + 68 )
                    free(v25);
                  v27 = (void **)v22[52];
                  if ( v27 != v22 + 54 )
                    free(v27);
                  v28 = v22 + 48;
                  v29 = v22 + 8;
                  do
                  {
                    while ( *v28 != v28 + 2 )
                    {
                      operator delete(*v28);
                      v28 -= 4;
                      if ( v28 == v29 )
                        goto LABEL_48;
                    }
                    v28 -= 4;
                  }
                  while ( v29 != v28 );
LABEL_48:
                  operator delete(v22, 0x3A0u);
                }
                else
                {
                  v38 = *(unsigned int *)(v46 + 14976);
                  *(_DWORD *)(v46 + 14976) = v38 + 1;
                  *(_QWORD *)(v23 + 8 * v38 + 14848) = v22;
                }
              }
            }
            return 0;
          }
        }
        memcpy(v14, v12, v13);
        v14 = v42;
        goto LABEL_22;
      }
    }
  }
  return 0;
}
