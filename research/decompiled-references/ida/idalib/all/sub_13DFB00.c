__int64 __fastcall sub_13DFB00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  unsigned int v13; // r15d
  int v14; // eax
  int v15; // r15d
  int v16; // eax
  _QWORD *v17; // rbx
  unsigned int v18; // r14d
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  void **v23; // r12
  unsigned __int64 v24; // rax
  void **v25; // r13
  void **v26; // rbx
  void **v27; // rdi
  void **v28; // rdi
  void **v29; // rbx
  void **v30; // r13
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  int v34; // eax
  _BYTE *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // r13
  void *v40; // rdi
  __int64 v41; // [rsp+8h] [rbp-A0h]
  int v42; // [rsp+1Ch] [rbp-8Ch]
  void *v43; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-80h]
  __int64 v45; // [rsp+30h] [rbp-78h]
  void *v46; // [rsp+40h] [rbp-68h]
  __int64 v47; // [rsp+50h] [rbp-58h] BYREF
  __int16 v48; // [rsp+60h] [rbp-48h]

  v13 = a7 - a6;
  v14 = sub_13D1C70(a4, (int)a7 - a6, a5, a3);
  sub_FC70B0((__int64)&v43, a2, v14 + a4, a9);
  v15 = a4 + sub_13D1C70(a4, v13, a5, a3);
  v16 = sub_13D1C70(v15, (int)a8 - (int)a7, a5, a3);
  v17 = v43;
  v18 = v15 + v16;
  if ( v43 )
  {
    v19 = *((unsigned int *)v43 + 106);
    v20 = *((unsigned int *)v43 + 107);
    v21 = v19 + 1;
  }
  else
  {
    v33 = v44;
    v34 = *(_DWORD *)(v44 + 14976);
    if ( v34 )
    {
      v36 = (unsigned int)(v34 - 1);
      *(_DWORD *)(v44 + 14976) = v36;
      v17 = *(_QWORD **)(v33 + 8 * v36 + 14848);
      v37 = *((unsigned int *)v17 + 134);
      *(_BYTE *)v17 = 0;
      v38 = v17[66];
      *((_DWORD *)v17 + 106) = 0;
      v39 = v38 + (v37 << 6);
      if ( v38 == v39 )
      {
        v21 = 1;
        v19 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v39 -= 64;
            v40 = *(void **)(v39 + 24);
            if ( v40 == (void *)(v39 + 40) )
              break;
            v41 = v38;
            operator delete(v40);
            v38 = v41;
            if ( v41 == v39 )
              goto LABEL_37;
          }
        }
        while ( v38 != v39 );
LABEL_37:
        v19 = *((unsigned int *)v17 + 106);
        v21 = v19 + 1;
      }
      *((_DWORD *)v17 + 134) = 0;
      v20 = *((unsigned int *)v17 + 107);
    }
    else
    {
      v35 = (_BYTE *)operator new(0x3A0u);
      v21 = 1;
      v19 = 0;
      v17 = v35;
      *v35 = 0;
      *((_QWORD *)v35 + 12) = v35 + 112;
      *((_QWORD *)v35 + 16) = v35 + 144;
      *((_QWORD *)v35 + 20) = v35 + 176;
      *((_QWORD *)v35 + 24) = v35 + 208;
      *((_QWORD *)v35 + 28) = v35 + 240;
      *((_QWORD *)v35 + 32) = v35 + 272;
      *((_QWORD *)v35 + 36) = v35 + 304;
      *((_QWORD *)v35 + 40) = v35 + 336;
      *((_QWORD *)v35 + 44) = v35 + 368;
      *((_QWORD *)v35 + 48) = v35 + 400;
      *((_QWORD *)v35 + 52) = v35 + 432;
      *((_QWORD *)v35 + 13) = 0;
      v35[112] = 0;
      *((_QWORD *)v35 + 17) = 0;
      v35[144] = 0;
      *((_QWORD *)v35 + 21) = 0;
      v35[176] = 0;
      *((_QWORD *)v35 + 25) = 0;
      v35[208] = 0;
      *((_QWORD *)v35 + 29) = 0;
      v35[240] = 0;
      *((_QWORD *)v35 + 33) = 0;
      v35[272] = 0;
      *((_QWORD *)v35 + 37) = 0;
      v35[304] = 0;
      *((_QWORD *)v35 + 41) = 0;
      v35[336] = 0;
      *((_QWORD *)v35 + 45) = 0;
      v35[368] = 0;
      *((_QWORD *)v35 + 49) = 0;
      v35[400] = 0;
      *((_QWORD *)v35 + 53) = 0x800000000LL;
      *((_QWORD *)v35 + 66) = v35 + 544;
      *((_QWORD *)v35 + 67) = 0x600000000LL;
      v20 = 8;
    }
    v43 = v17;
  }
  LOBYTE(v42) = 0;
  if ( v21 > v20 )
  {
    sub_2237220(v17 + 52, v17 + 54, v21, 12);
    v19 = *((unsigned int *)v17 + 106);
  }
  v22 = v17[52] + 12 * v19;
  *(_QWORD *)v22 = __PAIR64__(v18, v15);
  *(_DWORD *)(v22 + 8) = v42;
  ++*((_DWORD *)v17 + 106);
  sub_FC70F0(a1, (__int64)&v43);
  if ( (_BYTE)v48 )
  {
    sub_FC7790(v45, (__int64 *)&v43, SHIBYTE(v48));
    v45 = 0;
    v48 = 0;
  }
  if ( v46 != &v47 )
    operator delete(v46);
  v23 = (void **)v43;
  if ( v43 )
  {
    v24 = v44;
    if ( v44 )
    {
      if ( (unsigned __int64)v43 < v44 || (unsigned __int64)v43 > v44 + 14848 )
      {
        v25 = *((void ***)v43 + 66);
        v26 = &v25[8 * (unsigned __int64)*((unsigned int *)v43 + 134)];
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
                goto LABEL_15;
            }
          }
          while ( v25 != v26 );
LABEL_15:
          v26 = (void **)v23[66];
        }
        if ( v26 != v23 + 68 )
          free(v26);
        v28 = (void **)v23[52];
        if ( v28 != v23 + 54 )
          free(v28);
        v29 = v23 + 48;
        v30 = v23 + 8;
        do
        {
          while ( *v29 != v29 + 2 )
          {
            operator delete(*v29);
            v29 -= 4;
            if ( v29 == v30 )
              goto LABEL_23;
          }
          v29 -= 4;
        }
        while ( v29 != v30 );
LABEL_23:
        operator delete(v23, 0x3A0u);
      }
      else
      {
        v32 = *(unsigned int *)(v44 + 14976);
        *(_DWORD *)(v44 + 14976) = v32 + 1;
        *(_QWORD *)(v24 + 8 * v32 + 14848) = v23;
      }
    }
  }
  return a1;
}
