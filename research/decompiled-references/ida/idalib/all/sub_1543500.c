__int64 __fastcall sub_1543500(__int64 a1, int *a2)
{
  __int16 v3; // dx
  __int64 result; // rax
  int v5; // eax
  char *v6; // r14
  unsigned __int8 *v7; // r12
  _QWORD *v8; // rcx
  __int64 v9; // rax
  void **v10; // rbx
  unsigned __int64 v11; // rax
  void **v12; // r14
  void **v13; // r12
  void **v14; // rdi
  void **v15; // rdi
  void **v16; // r14
  void **v17; // r12
  __int64 *v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rdi
  int v27; // eax
  void **v28; // r12
  unsigned __int64 v29; // rax
  void **v30; // r13
  void **v31; // rbp
  void **v32; // rdi
  void **v33; // rdi
  void **v34; // rbp
  void **v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // [rsp+0h] [rbp-98h]
  __int64 v39; // [rsp+8h] [rbp-90h]
  void *v40; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v41; // [rsp+18h] [rbp-80h]
  __int64 v42; // [rsp+20h] [rbp-78h]
  void *v43; // [rsp+30h] [rbp-68h]
  _BYTE v44[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v45; // [rsp+50h] [rbp-48h]

  while ( 1 )
  {
    v3 = *(_WORD *)(a1 + 32);
    if ( v3 == 109 )
    {
      v5 = *a2;
      *a2 |= 1u;
      if ( (v5 & 1) == 0 )
        goto LABEL_29;
      v6 = (char *)"volatile";
      sub_1564820(&v40, a1, *(unsigned int *)(a1 + 16), 1544);
      goto LABEL_8;
    }
    if ( v3 != 157 )
      break;
    v27 = *a2;
    *a2 |= 2u;
    if ( (v27 & 2) == 0 )
      goto LABEL_29;
    v6 = "inline";
    sub_1564820(&v40, a1, *(unsigned int *)(a1 + 16), 1544);
LABEL_8:
    v7 = (unsigned __int8 *)v40;
    if ( !v40 )
      goto LABEL_32;
LABEL_9:
    v7[*v7 + 1] = 1;
    v8 = v40;
    v9 = *(unsigned __int8 *)v40;
    *(_BYTE *)v40 = v9 + 1;
    v8[v9 + 2] = v6;
    if ( (_BYTE)v45 )
    {
      sub_FC7790(v42, (__int64 *)&v40, SHIBYTE(v45));
      v42 = 0;
      v45 = 0;
    }
    if ( v43 != v44 )
      operator delete(v43);
    v10 = (void **)v40;
    if ( v40 )
    {
      v11 = v41;
      if ( v41 )
      {
        if ( (unsigned __int64)v40 >= v41 && (unsigned __int64)v40 <= v41 + 14848 )
        {
          v36 = *(unsigned int *)(v41 + 14976);
          *(_DWORD *)(v41 + 14976) = v36 + 1;
          *(_QWORD *)(v11 + 8 * v36 + 14848) = v10;
        }
        else
        {
          v12 = *((void ***)v40 + 66);
          v13 = &v12[8 * (unsigned __int64)*((unsigned int *)v40 + 134)];
          if ( v12 != v13 )
          {
            do
            {
              while ( 1 )
              {
                v13 -= 8;
                v14 = (void **)v13[3];
                if ( v14 == v13 + 5 )
                  break;
                operator delete(v14);
                if ( v12 == v13 )
                  goto LABEL_20;
              }
            }
            while ( v12 != v13 );
LABEL_20:
            v13 = (void **)v10[66];
          }
          if ( v13 != v10 + 68 )
            free(v13);
          v15 = (void **)v10[52];
          if ( v15 != v10 + 54 )
            free(v15);
          v16 = v10 + 48;
          v17 = v10 + 8;
          do
          {
            while ( *v16 != v16 + 2 )
            {
              operator delete(*v16);
              v16 -= 4;
              if ( v17 == v16 )
                goto LABEL_28;
            }
            v16 -= 4;
          }
          while ( v17 != v16 );
LABEL_28:
          operator delete(v10, 0x3A0u);
        }
      }
    }
LABEL_29:
    v18 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v18, (int *)(a1 + 16));
  }
  if ( v3 == 90 )
  {
    v19 = *a2;
    *a2 |= 4u;
    if ( (v19 & 4) == 0 )
      goto LABEL_29;
    v6 = "goto";
    sub_1564820(&v40, a1, *(unsigned int *)(a1 + 16), 1544);
    v7 = (unsigned __int8 *)v40;
    if ( v40 )
      goto LABEL_9;
LABEL_32:
    v20 = v41;
    v21 = *(_DWORD *)(v41 + 14976);
    if ( v21 )
    {
      v22 = (unsigned int)(v21 - 1);
      *(_DWORD *)(v41 + 14976) = v22;
      v7 = *(unsigned __int8 **)(v20 + 8 * v22 + 14848);
      v23 = *((unsigned int *)v7 + 134);
      v24 = *((_QWORD *)v7 + 66);
      *v7 = 0;
      *((_DWORD *)v7 + 106) = 0;
      v25 = v24 + (v23 << 6);
      while ( v24 != v25 )
      {
        while ( 1 )
        {
          v25 -= 64;
          v26 = *(void **)(v25 + 24);
          if ( v26 == (void *)(v25 + 40) )
            break;
          v39 = v25;
          v38 = v24;
          operator delete(v26);
          v24 = v38;
          v25 = v39;
          if ( v38 == v39 )
            goto LABEL_37;
        }
      }
LABEL_37:
      *((_DWORD *)v7 + 134) = 0;
    }
    else
    {
      v7 = (unsigned __int8 *)operator new(0x3A0u);
      *v7 = 0;
      *((_QWORD *)v7 + 12) = v7 + 112;
      *((_QWORD *)v7 + 16) = v7 + 144;
      *((_QWORD *)v7 + 20) = v7 + 176;
      *((_QWORD *)v7 + 24) = v7 + 208;
      *((_QWORD *)v7 + 28) = v7 + 240;
      *((_QWORD *)v7 + 32) = v7 + 272;
      *((_QWORD *)v7 + 36) = v7 + 304;
      *((_QWORD *)v7 + 40) = v7 + 336;
      *((_QWORD *)v7 + 44) = v7 + 368;
      *((_QWORD *)v7 + 48) = v7 + 400;
      *((_QWORD *)v7 + 52) = v7 + 432;
      *((_QWORD *)v7 + 13) = 0;
      v7[112] = 0;
      *((_QWORD *)v7 + 17) = 0;
      v7[144] = 0;
      *((_QWORD *)v7 + 21) = 0;
      v7[176] = 0;
      *((_QWORD *)v7 + 25) = 0;
      v7[208] = 0;
      *((_QWORD *)v7 + 29) = 0;
      v7[240] = 0;
      *((_QWORD *)v7 + 33) = 0;
      v7[272] = 0;
      *((_QWORD *)v7 + 37) = 0;
      v7[304] = 0;
      *((_QWORD *)v7 + 41) = 0;
      v7[336] = 0;
      *((_QWORD *)v7 + 45) = 0;
      v7[368] = 0;
      *((_QWORD *)v7 + 49) = 0;
      v7[400] = 0;
      *((_QWORD *)v7 + 53) = 0x800000000LL;
      *((_QWORD *)v7 + 66) = v7 + 544;
      *((_QWORD *)v7 + 67) = 0x600000000LL;
    }
    v40 = v7;
    goto LABEL_9;
  }
  result = 0;
  if ( v3 != 22 )
  {
    sub_1564820(&v40, a1, *(unsigned int *)(a1 + 16), 1548);
    if ( (_BYTE)v45 )
    {
      sub_FC7790(v42, (__int64 *)&v40, SHIBYTE(v45));
      v42 = 0;
      v45 = 0;
    }
    if ( v43 != v44 )
      operator delete(v43);
    v28 = (void **)v40;
    if ( v40 )
    {
      v29 = v41;
      if ( v41 )
      {
        if ( (unsigned __int64)v40 >= v41 && (unsigned __int64)v40 <= v41 + 14848 )
        {
          v37 = *(unsigned int *)(v41 + 14976);
          *(_DWORD *)(v41 + 14976) = v37 + 1;
          *(_QWORD *)(v29 + 8 * v37 + 14848) = v28;
        }
        else
        {
          v30 = *((void ***)v40 + 66);
          v31 = &v30[8 * (unsigned __int64)*((unsigned int *)v40 + 134)];
          if ( v30 != v31 )
          {
            do
            {
              while ( 1 )
              {
                v31 -= 8;
                v32 = (void **)v31[3];
                if ( v32 == v31 + 5 )
                  break;
                operator delete(v32);
                if ( v30 == v31 )
                  goto LABEL_55;
              }
            }
            while ( v30 != v31 );
LABEL_55:
            v31 = (void **)v28[66];
          }
          if ( v31 != v28 + 68 )
            free(v31);
          v33 = (void **)v28[52];
          if ( v33 != v28 + 54 )
            free(v33);
          v34 = v28 + 48;
          v35 = v28 + 8;
          do
          {
            while ( *v34 != v34 + 2 )
            {
              operator delete(*v34);
              v34 -= 4;
              if ( v35 == v34 )
                goto LABEL_63;
            }
            v34 -= 4;
          }
          while ( v34 != v35 );
LABEL_63:
          operator delete(v28, 0x3A0u);
        }
      }
    }
    LOWORD(v40) = 23;
    sub_15680D0(a1, &v40, 1, 1);
    return 1;
  }
  return result;
}
