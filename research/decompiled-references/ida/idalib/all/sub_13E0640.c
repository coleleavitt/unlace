void __fastcall sub_13E0640(__int64 a1, int a2, _BYTE *a3, int a4)
{
  __int64 v4; // rbp
  __int64 v6; // r13
  int v7; // eax
  unsigned __int8 *v8; // r13
  _QWORD *v9; // rdx
  __int64 v10; // rax
  void **v11; // r12
  unsigned __int64 v12; // rax
  void **v13; // r13
  void **v14; // rbp
  void **v15; // rdi
  void **v16; // rdi
  void **v17; // rbp
  void **v18; // r13
  unsigned __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r14
  void *v26; // rdi
  void *v27; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-80h]
  __int64 v29; // [rsp+10h] [rbp-78h]
  void *v30; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int16 v32; // [rsp+40h] [rbp-48h]

  v4 = a4;
  if ( a4 == 1 )
  {
    if ( *(_BYTE **)(a1 + 24) == a3 )
      return;
    if ( *--a3 != 39 )
      return;
  }
  else if ( *(_BYTE **)(a1 + 32) == a3 || *a3 != 39 )
  {
    return;
  }
  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_13D1C70(a2, (int)a3 - *(_DWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  sub_FC70B0((__int64)&v27, v6, a2 + v7, 1036);
  v8 = (unsigned __int8 *)v27;
  if ( !v27 )
  {
    v19 = v28;
    v20 = *(_DWORD *)(v28 + 14976);
    if ( v20 )
    {
      v22 = (unsigned int)(v20 - 1);
      *(_DWORD *)(v28 + 14976) = v22;
      v8 = *(unsigned __int8 **)(v19 + 8 * v22 + 14848);
      v23 = *((unsigned int *)v8 + 134);
      *v8 = 0;
      v24 = *((_QWORD *)v8 + 66);
      *((_DWORD *)v8 + 106) = 0;
      v25 = v24 + (v23 << 6);
      while ( v24 != v25 )
      {
        while ( 1 )
        {
          v25 -= 64;
          v26 = *(void **)(v25 + 24);
          if ( v26 == (void *)(v25 + 40) )
            break;
          operator delete(v26);
          if ( v24 == v25 )
            goto LABEL_41;
        }
      }
LABEL_41:
      *((_DWORD *)v8 + 134) = 0;
    }
    else
    {
      v8 = (unsigned __int8 *)operator new(0x3A0u);
      *v8 = 0;
      *((_QWORD *)v8 + 12) = v8 + 112;
      *((_QWORD *)v8 + 16) = v8 + 144;
      *((_QWORD *)v8 + 20) = v8 + 176;
      *((_QWORD *)v8 + 24) = v8 + 208;
      *((_QWORD *)v8 + 28) = v8 + 240;
      *((_QWORD *)v8 + 32) = v8 + 272;
      *((_QWORD *)v8 + 36) = v8 + 304;
      *((_QWORD *)v8 + 40) = v8 + 336;
      *((_QWORD *)v8 + 44) = v8 + 368;
      *((_QWORD *)v8 + 48) = v8 + 400;
      *((_QWORD *)v8 + 52) = v8 + 432;
      *((_QWORD *)v8 + 13) = 0;
      v8[112] = 0;
      *((_QWORD *)v8 + 17) = 0;
      v8[144] = 0;
      *((_QWORD *)v8 + 21) = 0;
      v8[176] = 0;
      *((_QWORD *)v8 + 25) = 0;
      v8[208] = 0;
      *((_QWORD *)v8 + 29) = 0;
      v8[240] = 0;
      *((_QWORD *)v8 + 33) = 0;
      v8[272] = 0;
      *((_QWORD *)v8 + 37) = 0;
      v8[304] = 0;
      *((_QWORD *)v8 + 41) = 0;
      v8[336] = 0;
      *((_QWORD *)v8 + 45) = 0;
      v8[368] = 0;
      *((_QWORD *)v8 + 49) = 0;
      v8[400] = 0;
      *((_QWORD *)v8 + 53) = 0x800000000LL;
      *((_QWORD *)v8 + 66) = v8 + 544;
      *((_QWORD *)v8 + 67) = 0x600000000LL;
    }
    v27 = v8;
  }
  v8[*v8 + 1] = 2;
  v9 = v27;
  v10 = *(unsigned __int8 *)v27;
  *(_BYTE *)v27 = v10 + 1;
  v9[v10 + 2] = v4;
  if ( (_BYTE)v32 )
  {
    sub_FC7790(v29, (__int64 *)&v27, SHIBYTE(v32));
    v29 = 0;
    v32 = 0;
  }
  if ( v30 != &v31 )
    operator delete(v30);
  v11 = (void **)v27;
  if ( v27 )
  {
    v12 = v28;
    if ( v28 )
    {
      if ( (unsigned __int64)v27 >= v28 && (unsigned __int64)v27 <= v28 + 14848 )
      {
        v21 = *(unsigned int *)(v28 + 14976);
        *(_DWORD *)(v28 + 14976) = v21 + 1;
        *(_QWORD *)(v12 + 8 * v21 + 14848) = v11;
      }
      else
      {
        v13 = *((void ***)v27 + 66);
        v14 = &v13[8 * (unsigned __int64)*((unsigned int *)v27 + 134)];
        if ( v13 != v14 )
        {
          do
          {
            while ( 1 )
            {
              v14 -= 8;
              v15 = (void **)v14[3];
              if ( v15 == v14 + 5 )
                break;
              operator delete(v15);
              if ( v13 == v14 )
                goto LABEL_19;
            }
          }
          while ( v13 != v14 );
LABEL_19:
          v14 = (void **)v11[66];
        }
        if ( v14 != v11 + 68 )
          free(v14);
        v16 = (void **)v11[52];
        if ( v16 != v11 + 54 )
          free(v16);
        v17 = v11 + 48;
        v18 = v11 + 8;
        do
        {
          while ( *v17 != v17 + 2 )
          {
            operator delete(*v17);
            v17 -= 4;
            if ( v17 == v18 )
              goto LABEL_27;
          }
          v17 -= 4;
        }
        while ( v17 != v18 );
LABEL_27:
        operator delete(v11, 0x3A0u);
      }
    }
  }
  *(_BYTE *)(a1 + 128) |= 1u;
}
