__int64 __fastcall sub_120C0D0(__int64 a1, __int64 a2)
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
  _BYTE *v12; // rsi
  void *v13; // r14
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  void **v18; // r13
  _BYTE *v19; // rdi
  __int64 v20; // rax
  void **v21; // rbp
  unsigned __int64 v22; // rax
  void **v23; // r12
  void **v24; // rbx
  void **v25; // rdi
  void **v26; // rdi
  void **v27; // rbx
  void **v28; // r12
  size_t v29; // rdx
  unsigned __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // r13
  void *v36; // rdi
  __int64 v37; // rdx
  _BYTE *v38; // [rsp+8h] [rbp-D0h]
  void *v39[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+20h] [rbp-B8h] BYREF
  void *src; // [rsp+30h] [rbp-A8h] BYREF
  size_t n; // [rsp+38h] [rbp-A0h]
  _QWORD v43[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v44; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-80h]
  __int64 v46; // [rsp+60h] [rbp-78h]
  void *v47; // [rsp+70h] [rbp-68h]
  __int64 v48; // [rsp+80h] [rbp-58h] BYREF
  __int16 v49; // [rsp+90h] [rbp-48h]

  LODWORD(v44) = 3306;
  v2 = sub_21B6DA0(a2, &v44, 1);
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
        sub_FC70B0((__int64)&v44, **(_QWORD **)(a1 + 8), 0, 397);
        sub_21B5FF0(v39, v7, a2);
        v11 = (unsigned __int8 *)v44;
        v12 = v39[0];
        v13 = v39[1];
        if ( !v44 )
        {
          v30 = v45;
          v31 = *(_DWORD *)(v45 + 14976);
          if ( v31 )
          {
            v32 = (unsigned int)(v31 - 1);
            *(_DWORD *)(v45 + 14976) = v32;
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
                operator delete(v36);
                if ( v34 == v35 )
                  goto LABEL_65;
              }
            }
LABEL_65:
            *((_DWORD *)v11 + 134) = 0;
          }
          else
          {
            v38 = v39[0];
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
            v12 = v38;
            *((_QWORD *)v11 + 66) = v11 + 544;
            *((_QWORD *)v11 + 67) = 0x600000000LL;
          }
          v44 = v11;
        }
        v11[*v11 + 1] = 0;
        src = v43;
        sub_120B6A0(&src, v12, (__int64)v13 + (_QWORD)v12);
        v14 = v44;
        v15 = *(unsigned __int8 *)v44;
        *(_BYTE *)v44 = v15 + 1;
        v16 = (unsigned __int8)v15;
        v17 = 4 * (v15 + 3);
        v18 = (void **)&v14[v17];
        v19 = (_BYTE *)v14[v17];
        if ( src == v43 )
        {
          v29 = n;
          if ( n )
          {
            if ( n == 1 )
              *v19 = v43[0];
            else
              memcpy(v19, src, n);
            v29 = n;
            v19 = *v18;
          }
          v18[1] = (void *)v29;
          v19[v29] = 0;
          v19 = src;
        }
        else
        {
          if ( v19 == (_BYTE *)&v14[v17 + 2] )
          {
            *v18 = src;
            v18[1] = (void *)n;
            v18[2] = (void *)v43[0];
          }
          else
          {
            v20 = v14[4 * v16 + 14];
            *v18 = src;
            v18[1] = (void *)n;
            v18[2] = (void *)v43[0];
            if ( v19 )
            {
              src = v19;
              v43[0] = v20;
              goto LABEL_21;
            }
          }
          v19 = v43;
          src = v43;
        }
LABEL_21:
        n = 0;
        *v19 = 0;
        if ( src != v43 )
          operator delete(src);
        if ( v39[0] != &v40 )
          operator delete(v39[0]);
        if ( (_BYTE)v49 )
        {
          sub_FC7790(v46, (__int64 *)&v44, SHIBYTE(v49));
          v46 = 0;
          v49 = 0;
        }
        if ( v47 != &v48 )
          operator delete(v47);
        v21 = (void **)v44;
        if ( v44 )
        {
          v22 = v45;
          if ( v45 )
          {
            if ( (unsigned __int64)v44 >= v45 && (unsigned __int64)v44 <= v45 + 14848 )
            {
              v37 = *(unsigned int *)(v45 + 14976);
              *(_DWORD *)(v45 + 14976) = v37 + 1;
              *(_QWORD *)(v22 + 8 * v37 + 14848) = v21;
            }
            else
            {
              v23 = *((void ***)v44 + 66);
              v24 = &v23[8 * (unsigned __int64)*((unsigned int *)v44 + 134)];
              if ( v23 != v24 )
              {
                do
                {
                  while ( 1 )
                  {
                    v24 -= 8;
                    v25 = (void **)v24[3];
                    if ( v25 == v24 + 5 )
                      break;
                    operator delete(v25);
                    if ( v23 == v24 )
                      goto LABEL_36;
                  }
                }
                while ( v23 != v24 );
LABEL_36:
                v24 = (void **)v21[66];
              }
              if ( v24 != v21 + 68 )
                free(v24);
              v26 = (void **)v21[52];
              if ( v26 != v21 + 54 )
                free(v26);
              v27 = v21 + 48;
              v28 = v21 + 8;
              do
              {
                while ( *v27 != v27 + 2 )
                {
                  operator delete(*v27);
                  v27 -= 4;
                  if ( v27 == v28 )
                    goto LABEL_44;
                }
                v27 -= 4;
              }
              while ( v28 != v27 );
LABEL_44:
              operator delete(v21, 0x3A0u);
            }
          }
        }
      }
    }
  }
  return 0;
}
