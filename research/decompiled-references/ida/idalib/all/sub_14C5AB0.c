void __fastcall sub_14C5AB0(__int64 a1, _DWORD **a2)
{
  unsigned __int8 *v2; // rbx
  _BOOL8 v3; // r13
  _QWORD *v4; // rdx
  __int64 v5; // rax
  void **v6; // rbp
  unsigned __int64 v7; // rax
  void **v8; // r12
  void **v9; // rbx
  void **v10; // rdi
  void **v11; // rdi
  void **v12; // rbx
  void **v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // r12
  void *v21; // rdi
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h]
  void *vars20; // [rsp+20h] [rbp+20h]
  __int64 _30; // [rsp+30h] [rbp+30h] BYREF
  __int16 vars40; // [rsp+40h] [rbp+40h]

  sub_1564820(
    &vars0,
    a1,
    *(unsigned int *)(a1 + 16),
    (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x40) == 0 ? 1998 : 2084);
  v2 = (unsigned __int8 *)vars0;
  v3 = **a2 == 2;
  if ( !vars0 )
  {
    v15 = vars8;
    v16 = *(_DWORD *)(vars8 + 14976);
    if ( v16 )
    {
      v17 = (unsigned int)(v16 - 1);
      *(_DWORD *)(vars8 + 14976) = v17;
      v2 = *(unsigned __int8 **)(v15 + 8 * v17 + 14848);
      v18 = *((unsigned int *)v2 + 134);
      *v2 = 0;
      v19 = *((_QWORD *)v2 + 66);
      *((_DWORD *)v2 + 106) = 0;
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
            goto LABEL_35;
        }
      }
LABEL_35:
      *((_DWORD *)v2 + 134) = 0;
    }
    else
    {
      v2 = (unsigned __int8 *)operator new(0x3A0u);
      *v2 = 0;
      *((_QWORD *)v2 + 12) = v2 + 112;
      *((_QWORD *)v2 + 16) = v2 + 144;
      *((_QWORD *)v2 + 20) = v2 + 176;
      *((_QWORD *)v2 + 24) = v2 + 208;
      *((_QWORD *)v2 + 28) = v2 + 240;
      *((_QWORD *)v2 + 32) = v2 + 272;
      *((_QWORD *)v2 + 36) = v2 + 304;
      *((_QWORD *)v2 + 40) = v2 + 336;
      *((_QWORD *)v2 + 44) = v2 + 368;
      *((_QWORD *)v2 + 48) = v2 + 400;
      *((_QWORD *)v2 + 52) = v2 + 432;
      *((_QWORD *)v2 + 13) = 0;
      v2[112] = 0;
      *((_QWORD *)v2 + 17) = 0;
      v2[144] = 0;
      *((_QWORD *)v2 + 21) = 0;
      v2[176] = 0;
      *((_QWORD *)v2 + 25) = 0;
      v2[208] = 0;
      *((_QWORD *)v2 + 29) = 0;
      v2[240] = 0;
      *((_QWORD *)v2 + 33) = 0;
      v2[272] = 0;
      *((_QWORD *)v2 + 37) = 0;
      v2[304] = 0;
      *((_QWORD *)v2 + 41) = 0;
      v2[336] = 0;
      *((_QWORD *)v2 + 45) = 0;
      v2[368] = 0;
      *((_QWORD *)v2 + 49) = 0;
      v2[400] = 0;
      *((_QWORD *)v2 + 53) = 0x800000000LL;
      *((_QWORD *)v2 + 66) = v2 + 544;
      *((_QWORD *)v2 + 67) = 0x600000000LL;
    }
    vars0 = v2;
  }
  v2[*v2 + 1] = 2;
  v4 = vars0;
  v5 = *(unsigned __int8 *)vars0;
  *(_BYTE *)vars0 = v5 + 1;
  v4[v5 + 2] = v3;
  if ( (_BYTE)vars40 )
  {
    sub_FC7790(vars10, (__int64 *)&vars0, SHIBYTE(vars40));
    vars10 = 0;
    vars40 = 0;
  }
  if ( vars20 != &_30 )
    operator delete(vars20);
  v6 = (void **)vars0;
  if ( vars0 )
  {
    v7 = vars8;
    if ( vars8 )
    {
      if ( (unsigned __int64)vars0 < vars8 || (unsigned __int64)vars0 > vars8 + 14848 )
      {
        v8 = *((void ***)vars0 + 66);
        v9 = &v8[8 * (unsigned __int64)*((unsigned int *)vars0 + 134)];
        if ( v8 != v9 )
        {
          do
          {
            while ( 1 )
            {
              v9 -= 8;
              v10 = (void **)v9[3];
              if ( v10 == v9 + 5 )
                break;
              operator delete(v10);
              if ( v8 == v9 )
                goto LABEL_12;
            }
          }
          while ( v8 != v9 );
LABEL_12:
          v9 = (void **)v6[66];
        }
        if ( v9 != v6 + 68 )
          free(v9);
        v11 = (void **)v6[52];
        if ( v11 != v6 + 54 )
          free(v11);
        v12 = v6 + 48;
        v13 = v6 + 8;
        do
        {
          while ( *v12 != v12 + 2 )
          {
            operator delete(*v12);
            v12 -= 4;
            if ( v12 == v13 )
            {
              operator delete(v6, 0x3A0u);
              return;
            }
          }
          v12 -= 4;
        }
        while ( v12 != v13 );
        operator delete(v6, 0x3A0u);
      }
      else
      {
        v14 = *(unsigned int *)(vars8 + 14976);
        *(_DWORD *)(vars8 + 14976) = v14 + 1;
        *(_QWORD *)(v7 + 8 * v14 + 14848) = v6;
      }
    }
  }
}
