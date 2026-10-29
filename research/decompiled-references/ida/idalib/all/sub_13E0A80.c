void __fastcall sub_13E0A80(__int64 a1, int a2)
{
  unsigned __int8 *v4; // r8
  __int64 v5; // rax
  unsigned __int8 v6; // r9
  __int64 v7; // rsi
  unsigned __int8 *v8; // rdi
  unsigned __int8 *v9; // rdx
  unsigned __int8 v10; // r8
  unsigned __int8 *v11; // rbx
  __int64 v12; // rcx
  char *v13; // rsi
  char v14; // r9
  __int64 v15; // r10
  __int64 v16; // rax
  unsigned __int8 *i; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  int v20; // eax
  void **v21; // rbp
  unsigned __int64 v22; // rax
  void **v23; // r13
  void **v24; // rbx
  void **v25; // rdi
  void **v26; // rdi
  void **v27; // rbx
  void **v28; // r13
  __int64 v29; // rbx
  int v30; // eax
  unsigned __int8 *v31; // rbx
  _BOOL8 v32; // r14
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r15
  __int64 v41; // r13
  void *v42; // rdi
  void *v43; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v44; // [rsp+8h] [rbp-80h]
  __int64 v45; // [rsp+10h] [rbp-78h]
  void *v46; // [rsp+20h] [rbp-68h]
  __int64 v47; // [rsp+30h] [rbp-58h] BYREF
  __int16 v48; // [rsp+40h] [rbp-48h]

  v4 = *(unsigned __int8 **)(a1 + 56);
  v5 = *v4;
  v6 = *v4;
  if ( (byte_2411740[2 * v5] & 0x18) == 0 )
  {
    if ( (_BYTE)v5 != 46 )
      goto LABEL_19;
    goto LABEL_23;
  }
  if ( (_BYTE)v5 == 101 || (_BYTE)v5 == 69 )
    goto LABEL_4;
  v13 = *(char **)(a1 + 56);
  if ( sub_13E0580(*(_QWORD *)(a1 + 8), v13, *(_QWORD *)(a1 + 32) - (_QWORD)v4) )
  {
    if ( v14 != 46 )
      return;
LABEL_23:
    sub_13E0640(a1, a2, v4, 1);
    v16 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 64) = 10;
    *(_BYTE *)(a1 + 69) = 1;
    *(_QWORD *)(a1 + 56) = v16 + 1;
    sub_13E0640(a1, a2, (_BYTE *)(v16 + 1), 0);
    v4 = *(unsigned __int8 **)(a1 + 56);
    for ( i = *(unsigned __int8 **)(a1 + 32); i != v4; ++v4 )
    {
      v18 = *v4;
      if ( (byte_2411740[2 * v18] & 8) == 0 && (_BYTE)v18 != 39 )
        break;
    }
    *(_QWORD *)(a1 + 56) = v4;
    v6 = *v4;
LABEL_19:
    if ( (v6 & 0xDF) != 0x45 )
      return;
LABEL_4:
    sub_13E0640(a1, a2, v4, 1);
    v7 = *(_QWORD *)(a1 + 56);
    v8 = *(unsigned __int8 **)(a1 + 32);
    *(_DWORD *)(a1 + 64) = 10;
    *(_BYTE *)(a1 + 68) = 1;
    v9 = (unsigned __int8 *)(v7 + 1);
    *(_QWORD *)(a1 + 56) = v7 + 1;
    if ( (unsigned __int8 *)(v7 + 1) != v8 )
    {
      v10 = *(_BYTE *)(v7 + 1);
      if ( ((v10 - 43) & 0xFD) != 0 )
        goto LABEL_8;
      v9 = (unsigned __int8 *)(v7 + 2);
      *(_QWORD *)(a1 + 56) = v7 + 2;
      if ( v8 != (unsigned __int8 *)(v7 + 2) )
      {
        v10 = *(_BYTE *)(v7 + 2);
LABEL_8:
        if ( (byte_2411740[2 * v10] & 8) != 0 || v10 == 39 )
        {
          v11 = v9;
          while ( v8 != ++v11 )
          {
            v12 = *v11;
            if ( (byte_2411740[2 * v12] & 8) == 0 && (_BYTE)v12 != 39 )
              break;
          }
          if ( v11 != v9 && (v11 != v9 + 1 || v10 != 39) )
          {
            sub_13E0640(a1, a2, v9, 0);
            *(_QWORD *)(a1 + 56) = v11;
            return;
          }
        }
      }
    }
    if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
    {
      v19 = *(_QWORD *)(a1 + 16);
      v20 = sub_13D1C70(a2, (int)v7 - *(_DWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
      sub_FC70B0((__int64)&v43, v19, v20 + a2, 1040);
      if ( (_BYTE)v48 )
      {
        sub_FC7790(v45, (__int64 *)&v43, SHIBYTE(v48));
        v45 = 0;
        v48 = 0;
      }
      if ( v46 != &v47 )
        operator delete(v46);
      v21 = (void **)v43;
      if ( v43 )
      {
        v22 = v44;
        if ( v44 )
        {
          if ( (unsigned __int64)v43 < v44 || (unsigned __int64)v43 > v44 + 14848 )
          {
            v23 = *((void ***)v43 + 66);
            v24 = &v23[8 * (unsigned __int64)*((unsigned int *)v43 + 134)];
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
                    goto LABEL_40;
                }
              }
              while ( v23 != v24 );
LABEL_40:
              v24 = (void **)v21[66];
            }
            if ( v24 != v21 + 68 )
              free(v24);
            v26 = (void **)v21[52];
            v27 = v21 + 52;
            if ( v26 != v21 + 54 )
              free(v26);
            v28 = v21 + 12;
            do
            {
              while ( 1 )
              {
                v27 -= 4;
                if ( *v27 == v27 + 2 )
                  break;
                operator delete(*v27);
                if ( v27 == v28 )
                  goto LABEL_48;
              }
            }
            while ( v27 != v28 );
LABEL_48:
            operator delete(v21, 0x3A0u);
          }
          else
          {
            v35 = *(unsigned int *)(v44 + 14976);
            *(_DWORD *)(v44 + 14976) = v35 + 1;
            *(_QWORD *)(v22 + 8 * v35 + 14848) = v21;
          }
        }
      }
      *(_BYTE *)(a1 + 128) |= 1u;
    }
    return;
  }
  v29 = *(_QWORD *)(a1 + 16);
  v30 = sub_13D1C70(a2, (int)v13 - *(_DWORD *)(a1 + 24), *(_QWORD *)a1, v15);
  sub_FC70B0((__int64)&v43, v29, v30 + a2, 1049);
  sub_AEC220((unsigned __int8 **)&v43, *(_BYTE **)(a1 + 56), 1);
  v31 = (unsigned __int8 *)v43;
  v32 = *(_DWORD *)(a1 + 64) == 8;
  if ( !v43 )
  {
    v36 = v44;
    v37 = *(_DWORD *)(v44 + 14976);
    if ( v37 )
    {
      v38 = (unsigned int)(v37 - 1);
      *(_DWORD *)(v44 + 14976) = v38;
      v31 = *(unsigned __int8 **)(v36 + 8 * v38 + 14848);
      v39 = *((unsigned int *)v31 + 134);
      *v31 = 0;
      v40 = *((_QWORD *)v31 + 66);
      *((_DWORD *)v31 + 106) = 0;
      v41 = v40 + (v39 << 6);
      while ( v40 != v41 )
      {
        while ( 1 )
        {
          v41 -= 64;
          v42 = *(void **)(v41 + 24);
          if ( v42 == (void *)(v41 + 40) )
            break;
          operator delete(v42);
          if ( v40 == v41 )
            goto LABEL_65;
        }
      }
LABEL_65:
      *((_DWORD *)v31 + 134) = 0;
    }
    else
    {
      v31 = (unsigned __int8 *)operator new(0x3A0u);
      *v31 = 0;
      *((_QWORD *)v31 + 12) = v31 + 112;
      *((_QWORD *)v31 + 16) = v31 + 144;
      *((_QWORD *)v31 + 20) = v31 + 176;
      *((_QWORD *)v31 + 24) = v31 + 208;
      *((_QWORD *)v31 + 28) = v31 + 240;
      *((_QWORD *)v31 + 32) = v31 + 272;
      *((_QWORD *)v31 + 36) = v31 + 304;
      *((_QWORD *)v31 + 40) = v31 + 336;
      *((_QWORD *)v31 + 44) = v31 + 368;
      *((_QWORD *)v31 + 48) = v31 + 400;
      *((_QWORD *)v31 + 52) = v31 + 432;
      *((_QWORD *)v31 + 13) = 0;
      v31[112] = 0;
      *((_QWORD *)v31 + 17) = 0;
      v31[144] = 0;
      *((_QWORD *)v31 + 21) = 0;
      v31[176] = 0;
      *((_QWORD *)v31 + 25) = 0;
      v31[208] = 0;
      *((_QWORD *)v31 + 29) = 0;
      v31[240] = 0;
      *((_QWORD *)v31 + 33) = 0;
      v31[272] = 0;
      *((_QWORD *)v31 + 37) = 0;
      v31[304] = 0;
      *((_QWORD *)v31 + 41) = 0;
      v31[336] = 0;
      *((_QWORD *)v31 + 45) = 0;
      v31[368] = 0;
      *((_QWORD *)v31 + 49) = 0;
      v31[400] = 0;
      *((_QWORD *)v31 + 53) = 0x800000000LL;
      *((_QWORD *)v31 + 66) = v31 + 544;
      *((_QWORD *)v31 + 67) = 0x600000000LL;
    }
    v43 = v31;
  }
  v31[*v31 + 1] = 2;
  v33 = v43;
  v34 = *(unsigned __int8 *)v43;
  *(_BYTE *)v43 = v34 + 1;
  v33[v34 + 2] = v32;
  sub_AEA040((__int64)&v43);
  *(_BYTE *)(a1 + 128) |= 1u;
}
