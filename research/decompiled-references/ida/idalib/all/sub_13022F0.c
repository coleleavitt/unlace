__int64 __fastcall sub_13022F0(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  const char **v7; // rax
  size_t v8; // rsi
  const char *v9; // r12
  __int64 *v11; // rax
  unsigned __int8 *v12; // rbx
  __int64 v13; // r14
  unsigned __int8 *v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // r13
  void *v23; // rdi
  void *v24[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int8 *v26; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+28h] [rbp-80h]

  v5 = sub_13021E0(a2, a1);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(const char ***)(v5 + 48);
    v8 = 0;
    v9 = *v7;
    if ( *v7 )
      v8 = strlen(*v7);
    if ( !(unsigned __int8)sub_2247A50(v9, v8, 0, &v26) && v26 == (unsigned __int8 *)(int)v26 )
      return (unsigned int)v26 | 0x100000000LL;
    sub_FC70B0((__int64)&v26, a3, 0, 382);
    sub_21B5FF0(v24, v6, a2);
    sub_AEC220(&v26, (_BYTE *)v24[0], (signed __int64)v24[1]);
    v11 = *(__int64 **)(v6 + 48);
    v12 = v26;
    v13 = *v11;
    if ( !v26 )
    {
      v17 = v27;
      v18 = *(_DWORD *)(v27 + 14976);
      if ( v18 )
      {
        v19 = (unsigned int)(v18 - 1);
        *(_DWORD *)(v27 + 14976) = v19;
        v12 = *(unsigned __int8 **)(v17 + 8 * v19 + 14848);
        v20 = *((unsigned int *)v12 + 134);
        *v12 = 0;
        v21 = *((_QWORD *)v12 + 66);
        *((_DWORD *)v12 + 106) = 0;
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
              goto LABEL_17;
          }
        }
LABEL_17:
        *((_DWORD *)v12 + 134) = 0;
      }
      else
      {
        v12 = (unsigned __int8 *)operator new(0x3A0u);
        *v12 = 0;
        *((_QWORD *)v12 + 12) = v12 + 112;
        *((_QWORD *)v12 + 16) = v12 + 144;
        *((_QWORD *)v12 + 20) = v12 + 176;
        *((_QWORD *)v12 + 24) = v12 + 208;
        *((_QWORD *)v12 + 28) = v12 + 240;
        *((_QWORD *)v12 + 32) = v12 + 272;
        *((_QWORD *)v12 + 36) = v12 + 304;
        *((_QWORD *)v12 + 40) = v12 + 336;
        *((_QWORD *)v12 + 44) = v12 + 368;
        *((_QWORD *)v12 + 48) = v12 + 400;
        *((_QWORD *)v12 + 52) = v12 + 432;
        *((_QWORD *)v12 + 13) = 0;
        v12[112] = 0;
        *((_QWORD *)v12 + 17) = 0;
        v12[144] = 0;
        *((_QWORD *)v12 + 21) = 0;
        v12[176] = 0;
        *((_QWORD *)v12 + 25) = 0;
        v12[208] = 0;
        *((_QWORD *)v12 + 29) = 0;
        v12[240] = 0;
        *((_QWORD *)v12 + 33) = 0;
        v12[272] = 0;
        *((_QWORD *)v12 + 37) = 0;
        v12[304] = 0;
        *((_QWORD *)v12 + 41) = 0;
        v12[336] = 0;
        *((_QWORD *)v12 + 45) = 0;
        v12[368] = 0;
        *((_QWORD *)v12 + 49) = 0;
        v12[400] = 0;
        *((_QWORD *)v12 + 53) = 0x800000000LL;
        *((_QWORD *)v12 + 66) = v12 + 544;
        *((_QWORD *)v12 + 67) = 0x600000000LL;
      }
      v26 = v12;
    }
    v12[*v12 + 1] = 1;
    v14 = v26;
    v15 = *v26;
    *v26 = v15 + 1;
    v16 = (__int64 *)v24[0];
    *(_QWORD *)&v14[8 * v15 + 16] = v13;
    if ( v16 != &v25 )
      operator delete(v16);
    sub_AEA040((__int64)&v26);
  }
  return 0;
}
