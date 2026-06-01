__int64 __fastcall sub_10085A0(int a1, __int64 a2)
{
  unsigned __int8 *v2; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  void **v5; // rbp
  unsigned __int64 v6; // rax
  void **v7; // r12
  void **v8; // rbx
  void **v9; // rdi
  void **v10; // rdi
  void **v11; // rbx
  void **v12; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // r12
  void *v21; // rdi
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h]
  void *vars20; // [rsp+20h] [rbp+20h]
  __int64 _30; // [rsp+30h] [rbp+30h] BYREF
  __int16 vars40; // [rsp+40h] [rbp+40h]

  sub_FA3370((__int64)&vars0, a2, 0, 51);
  v2 = (unsigned __int8 *)vars0;
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
  v2[*v2 + 1] = 1;
  v3 = vars0;
  v4 = *(unsigned __int8 *)vars0;
  *(_BYTE *)vars0 = v4 + 1;
  v3[v4 + 2] = "cf-protection=branch";
  if ( (_BYTE)vars40 )
  {
    sub_FA3A50(vars10, (__int64)&vars0, SHIBYTE(vars40));
    vars10 = 0;
    vars40 = 0;
  }
  if ( vars20 != &_30 )
    operator delete(vars20);
  v5 = (void **)vars0;
  if ( vars0 )
  {
    v6 = vars8;
    if ( vars8 )
    {
      if ( (unsigned __int64)vars0 < vars8 || (unsigned __int64)vars0 > vars8 + 14848 )
      {
        v7 = *((void ***)vars0 + 66);
        v8 = &v7[8 * (unsigned __int64)*((unsigned int *)vars0 + 134)];
        if ( v7 != v8 )
        {
          do
          {
            while ( 1 )
            {
              v8 -= 8;
              v9 = (void **)v8[3];
              if ( v9 == v8 + 5 )
                break;
              operator delete(v9);
              if ( v7 == v8 )
                goto LABEL_12;
            }
          }
          while ( v7 != v8 );
LABEL_12:
          v8 = (void **)v5[66];
        }
        if ( v8 != v5 + 68 )
          free(v8);
        v10 = (void **)v5[52];
        if ( v10 != v5 + 54 )
          free(v10);
        v11 = v5 + 48;
        v12 = v5 + 8;
        do
        {
          while ( *v11 != v11 + 2 )
          {
            operator delete(*v11);
            v11 -= 4;
            if ( v11 == v12 )
              goto LABEL_20;
          }
          v11 -= 4;
        }
        while ( v11 != v12 );
LABEL_20:
        operator delete(v5, 0x3A0u);
      }
      else
      {
        v14 = *(unsigned int *)(vars8 + 14976);
        *(_DWORD *)(vars8 + 14976) = v14 + 1;
        *(_QWORD *)(v6 + 8 * v14 + 14848) = v5;
      }
    }
  }
  return 0;
}

