__int64 __fastcall sub_15720A0(__int64 a1, double a2, __m128 a3)
{
  __int64 *v4; // rdi
  unsigned __int8 *v5; // rbx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  void **v8; // rbp
  _QWORD *v9; // rax
  void **v10; // r12
  void **v11; // rbx
  void **v12; // rdi
  void **v13; // rdi
  void **v14; // rbx
  void **v15; // r12
  int v17; // eax
  _QWORD *v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // r12
  void *v24; // rdi
  __int64 v25; // rdx
  void *v26[2]; // [rsp+30h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-68h]
  void *v28[2]; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+60h] [rbp-48h] BYREF
  __int16 v30; // [rsp+70h] [rbp-38h]

  v4 = *(__int64 **)(a1 + 8);
  if ( (*(_BYTE *)(v4[7] + 1) & 8) != 0 )
    return sub_14D2870(a1, 1, a2, a3);
  if ( *(_WORD *)(a1 + 32) == 5 )
  {
    v17 = *(_DWORD *)(a1 + 16);
    *(_OWORD *)v26 = 0;
    *(_DWORD *)(a1 + 40) = v17;
    *(_OWORD *)ptr = 0;
    *(_OWORD *)v28 = 0;
    sub_14634E0(v4, (int *)(a1 + 16));
    return sub_190BE30(*(_QWORD *)(a1 + 96), 0, 0, 0);
  }
  else
  {
    sub_1564840((__int64)v26, a1, (int *)(a1 + 16), 14);
    v5 = (unsigned __int8 *)v26[0];
    if ( !v26[0] )
    {
      v18 = v26[1];
      v19 = *((_DWORD *)v26[1] + 3744);
      if ( v19 )
      {
        v20 = (unsigned int)(v19 - 1);
        *((_DWORD *)v26[1] + 3744) = v20;
        v5 = (unsigned __int8 *)v18[v20 + 1856];
        v21 = *((unsigned int *)v5 + 134);
        *v5 = 0;
        v22 = *((_QWORD *)v5 + 66);
        *((_DWORD *)v5 + 106) = 0;
        v23 = v22 + (v21 << 6);
        while ( v22 != v23 )
        {
          while ( 1 )
          {
            v23 -= 64;
            v24 = *(void **)(v23 + 24);
            if ( v24 == (void *)(v23 + 40) )
              break;
            operator delete(v24);
            if ( v22 == v23 )
              goto LABEL_36;
          }
        }
LABEL_36:
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
      v26[0] = v5;
    }
    v5[*v5 + 1] = 4;
    v6 = v26[0];
    v7 = *(unsigned __int8 *)v26[0];
    *(_BYTE *)v26[0] = v7 + 1;
    v6[v7 + 2] = 5;
    if ( (_BYTE)v30 )
    {
      sub_FC7790((__int64)ptr[0], (__int64 *)v26, SHIBYTE(v30));
      ptr[0] = nullptr;
      v30 = 0;
    }
    if ( v28[0] != &v29 )
      operator delete(v28[0]);
    v8 = (void **)v26[0];
    if ( v26[0] )
    {
      v9 = v26[1];
      if ( v26[1] )
      {
        if ( v26[0] >= v26[1] && v26[0] <= (char *)v26[1] + 14848 )
        {
          v25 = *((unsigned int *)v26[1] + 3744);
          *((_DWORD *)v26[1] + 3744) = v25 + 1;
          v9[v25 + 1856] = v8;
        }
        else
        {
          v10 = *((void ***)v26[0] + 66);
          v11 = &v10[8 * (unsigned __int64)*((unsigned int *)v26[0] + 134)];
          if ( v10 != v11 )
          {
            do
            {
              while ( 1 )
              {
                v11 -= 8;
                v12 = (void **)v11[3];
                if ( v12 == v11 + 5 )
                  break;
                operator delete(v12);
                if ( v10 == v11 )
                  goto LABEL_15;
              }
            }
            while ( v10 != v11 );
LABEL_15:
            v11 = (void **)v8[66];
          }
          if ( v11 != v8 + 68 )
            free(v11);
          v13 = (void **)v8[52];
          v14 = v8 + 52;
          if ( v13 != v8 + 54 )
            free(v13);
          v15 = v8 + 12;
          do
          {
            while ( 1 )
            {
              v14 -= 4;
              if ( *v14 == v14 + 2 )
                break;
              operator delete(*v14);
              if ( v14 == v15 )
                goto LABEL_23;
            }
          }
          while ( v14 != v15 );
LABEL_23:
          operator delete(v8, 0x3A0u);
        }
      }
    }
    return 1;
  }
}
