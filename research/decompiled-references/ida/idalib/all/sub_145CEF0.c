void __fastcall sub_145CEF0(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v5; // rcx
  __int64 v6; // rax
  unsigned __int8 *v7; // rbx
  unsigned __int8 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r12
  void *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r12
  void *v23; // rdi
  unsigned __int8 *vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]

  v3 = a3;
  sub_FC70B0((__int64)&vars0, *(_QWORD *)(a1 + 48), *a2, 138);
  v4 = vars0;
  if ( !vars0 )
  {
    v10 = vars8;
    v11 = *(_DWORD *)(vars8 + 14976);
    if ( v11 )
    {
      v14 = (unsigned int)(v11 - 1);
      *(_DWORD *)(vars8 + 14976) = v14;
      v4 = *(unsigned __int8 **)(v10 + 8 * v14 + 14848);
      v15 = *((unsigned int *)v4 + 134);
      *v4 = 0;
      v16 = *((_QWORD *)v4 + 66);
      *((_DWORD *)v4 + 106) = 0;
      v17 = v16 + (v15 << 6);
      while ( v16 != v17 )
      {
        while ( 1 )
        {
          v17 -= 64;
          v18 = *(void **)(v17 + 24);
          if ( v18 == (void *)(v17 + 40) )
            break;
          operator delete(v18);
          if ( v16 == v17 )
            goto LABEL_14;
        }
      }
LABEL_14:
      *((_DWORD *)v4 + 134) = 0;
    }
    else
    {
      v4 = (unsigned __int8 *)operator new(0x3A0u);
      *v4 = 0;
      *((_QWORD *)v4 + 12) = v4 + 112;
      *((_QWORD *)v4 + 16) = v4 + 144;
      *((_QWORD *)v4 + 20) = v4 + 176;
      *((_QWORD *)v4 + 24) = v4 + 208;
      *((_QWORD *)v4 + 28) = v4 + 240;
      *((_QWORD *)v4 + 32) = v4 + 272;
      *((_QWORD *)v4 + 36) = v4 + 304;
      *((_QWORD *)v4 + 40) = v4 + 336;
      *((_QWORD *)v4 + 44) = v4 + 368;
      *((_QWORD *)v4 + 48) = v4 + 400;
      *((_QWORD *)v4 + 52) = v4 + 432;
      *((_QWORD *)v4 + 13) = 0;
      v4[112] = 0;
      *((_QWORD *)v4 + 17) = 0;
      v4[144] = 0;
      *((_QWORD *)v4 + 21) = 0;
      v4[176] = 0;
      *((_QWORD *)v4 + 25) = 0;
      v4[208] = 0;
      *((_QWORD *)v4 + 29) = 0;
      v4[240] = 0;
      *((_QWORD *)v4 + 33) = 0;
      v4[272] = 0;
      *((_QWORD *)v4 + 37) = 0;
      v4[304] = 0;
      *((_QWORD *)v4 + 41) = 0;
      v4[336] = 0;
      *((_QWORD *)v4 + 45) = 0;
      v4[368] = 0;
      *((_QWORD *)v4 + 49) = 0;
      v4[400] = 0;
      *((_QWORD *)v4 + 53) = 0x800000000LL;
      *((_QWORD *)v4 + 66) = v4 + 544;
      *((_QWORD *)v4 + 67) = 0x600000000LL;
    }
    vars0 = v4;
  }
  v4[*v4 + 1] = 3;
  v5 = vars0;
  v6 = *vars0;
  *vars0 = v6 + 1;
  v7 = vars0;
  *(_QWORD *)&v5[8 * v6 + 16] = v3;
  if ( !v7 )
  {
    v12 = vars8;
    v13 = *(_DWORD *)(vars8 + 14976);
    if ( v13 )
    {
      v19 = (unsigned int)(v13 - 1);
      *(_DWORD *)(vars8 + 14976) = v19;
      v7 = *(unsigned __int8 **)(v12 + 8 * v19 + 14848);
      v20 = *((unsigned int *)v7 + 134);
      *v7 = 0;
      v21 = *((_QWORD *)v7 + 66);
      *((_DWORD *)v7 + 106) = 0;
      v22 = v21 + (v20 << 6);
      while ( v21 != v22 )
      {
        while ( 1 )
        {
          v22 -= 64;
          v23 = *(void **)(v22 + 24);
          if ( v23 == (void *)(v22 + 40) )
            break;
          operator delete(v23);
          if ( v21 == v22 )
            goto LABEL_19;
        }
      }
LABEL_19:
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
    vars0 = v7;
  }
  v7[*v7 + 1] = 2;
  v8 = vars0;
  v9 = *vars0;
  *vars0 = v9 + 1;
  *(_QWORD *)&v8[8 * v9 + 16] = 1;
  sub_AEA040((__int64)&vars0);
}
