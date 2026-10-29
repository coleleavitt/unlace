void __fastcall sub_1CCD5B0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  int v5; // r12d
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int8 *v16; // r12
  __int64 v17; // r13
  unsigned __int8 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r14
  void *v33; // rdi
  __int64 v34; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+18h] [rbp-D0h] BYREF
  unsigned __int64 v36; // [rsp+20h] [rbp-C8h] BYREF
  int v37; // [rsp+28h] [rbp-C0h]
  __int64 v38; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v39; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+48h] [rbp-A0h]
  char v41; // [rsp+98h] [rbp-50h]
  unsigned int v42; // [rsp+A0h] [rbp-48h]
  char v43; // [rsp+A4h] [rbp-44h]

  v34 = a2;
  sub_168B9F0((__int64)&v36, (__int64 *)(a1 + 8), a3, 0x140Bu, 0);
  v4 = sub_17A2D70(a1, a2);
  v5 = v4;
  if ( v41 )
  {
    v16 = v39;
    v17 = v4;
    if ( !v39 )
    {
      v27 = v40;
      v28 = *(_DWORD *)(v40 + 14976);
      if ( v28 )
      {
        v29 = (unsigned int)(v28 - 1);
        *(_DWORD *)(v40 + 14976) = v29;
        v16 = *(unsigned __int8 **)(v27 + 8 * v29 + 14848);
        v30 = *((unsigned int *)v16 + 134);
        v31 = *((_QWORD *)v16 + 66);
        *v16 = 0;
        *((_DWORD *)v16 + 106) = 0;
        v32 = v31 + (v30 << 6);
        while ( v31 != v32 )
        {
          while ( 1 )
          {
            v32 -= 64;
            v33 = *(void **)(v32 + 24);
            if ( v33 == (void *)(v32 + 40) )
              break;
            operator delete(v33);
            if ( v31 == v32 )
              goto LABEL_21;
          }
        }
LABEL_21:
        *((_DWORD *)v16 + 134) = 0;
      }
      else
      {
        v16 = (unsigned __int8 *)operator new(0x3A0u);
        *v16 = 0;
        *((_QWORD *)v16 + 12) = v16 + 112;
        *((_QWORD *)v16 + 16) = v16 + 144;
        *((_QWORD *)v16 + 20) = v16 + 176;
        *((_QWORD *)v16 + 24) = v16 + 208;
        *((_QWORD *)v16 + 28) = v16 + 240;
        *((_QWORD *)v16 + 32) = v16 + 272;
        *((_QWORD *)v16 + 36) = v16 + 304;
        *((_QWORD *)v16 + 40) = v16 + 336;
        *((_QWORD *)v16 + 44) = v16 + 368;
        *((_QWORD *)v16 + 48) = v16 + 400;
        *((_QWORD *)v16 + 52) = v16 + 432;
        *((_QWORD *)v16 + 13) = 0;
        v16[112] = 0;
        *((_QWORD *)v16 + 17) = 0;
        v16[144] = 0;
        *((_QWORD *)v16 + 21) = 0;
        v16[176] = 0;
        *((_QWORD *)v16 + 25) = 0;
        v16[208] = 0;
        *((_QWORD *)v16 + 29) = 0;
        v16[240] = 0;
        *((_QWORD *)v16 + 33) = 0;
        v16[272] = 0;
        *((_QWORD *)v16 + 37) = 0;
        v16[304] = 0;
        *((_QWORD *)v16 + 41) = 0;
        v16[336] = 0;
        *((_QWORD *)v16 + 45) = 0;
        v16[368] = 0;
        *((_QWORD *)v16 + 49) = 0;
        v16[400] = 0;
        *((_QWORD *)v16 + 53) = 0x800000000LL;
        *((_QWORD *)v16 + 66) = v16 + 544;
        *((_QWORD *)v16 + 67) = 0x600000000LL;
      }
      v39 = v16;
    }
    v16[*v16 + 1] = 2;
    v18 = v39;
    v19 = *v39;
    *v39 = v19 + 1;
    *(_QWORD *)&v18[8 * v19 + 16] = v17;
    if ( v41 )
    {
LABEL_9:
      sub_F23A70(&v39, v34);
      goto LABEL_3;
    }
  }
  else
  {
    if ( !v43 )
      goto LABEL_3;
    v13 = sub_168B9E0(&v36);
    v14 = v38;
    if ( v38 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
    v35 = v14;
    v15 = sub_1587BC0(v13, &v35, v9, v10, v11, v12);
    sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * v42 + 8), v5, 2u);
    if ( v41 )
      goto LABEL_9;
  }
  if ( v43 )
  {
    v24 = sub_168B9E0(&v36);
    v25 = v38;
    if ( v38 )
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
    v35 = v25;
    v26 = sub_1587BC0(v24, &v35, v20, v21, v22, v23);
    sub_F23A70((unsigned __int8 **)(*v26 + 32LL * v42 + 8), v34);
  }
LABEL_3:
  sub_15F7200(&v36);
  v6 = sub_F22BD0(&v34, 0);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 56);
    v8 = *(_DWORD *)(v7 + 8);
    LODWORD(v7) = *(_DWORD *)(v7 + 16);
    LOBYTE(v37) = 1;
    v36 = __PAIR64__(v7, v8);
    sub_1CCCAD0(a1, v6, __SPAIR64__(v7, v8), v37);
  }
}
