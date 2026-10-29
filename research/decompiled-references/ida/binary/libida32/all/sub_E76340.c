__int64 __fastcall sub_E76340(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  unsigned __int64 (__fastcall *v7)(__int64); // rax
  unsigned int v8; // ebx
  unsigned __int8 *v9; // rbx
  __int64 v10; // rdx
  unsigned __int8 *v11; // rcx
  __int64 v12; // rax
  unsigned __int8 *v13; // rbx
  __int64 v14; // r14
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r15
  __int64 v26; // rbp
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // r15
  void *v32; // rdi
  unsigned __int64 v33; // [rsp+0h] [rbp-E8h]
  __int64 v34; // [rsp+0h] [rbp-E8h]
  __int64 v35; // [rsp+8h] [rbp-E0h]
  unsigned __int8 *v36; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-D0h]
  unsigned __int8 *v38; // [rsp+60h] [rbp-88h] BYREF
  __int64 v39; // [rsp+68h] [rbp-80h]

  v5 = a2[1];
  v6 = *a2;
  v7 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL);
  if ( v7 == sub_B81AB0 )
  {
    v33 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 48) + 16LL))(*(_QWORD *)(v5 + 48)) >> 32;
    v8 = *(_DWORD *)(*(_QWORD *)(v5 + 56) + 8LL);
  }
  else
  {
    v18 = v7(a2[1]);
    v8 = v18;
    v33 = HIDWORD(v18);
  }
  sub_FA3370(&v38, **(_QWORD **)(v6 + 8), *(unsigned int *)(a2[1] + 24), 2521);
  sub_AC84E0(&v38, **(_BYTE ***)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL));
  v36 = (unsigned __int8 *)__PAIR64__(v33, v8);
  LOBYTE(v37) = 1;
  sub_AC88D0((__int64 *)&v38, (__int64 *)&v36);
  v9 = v38;
  v10 = a3;
  if ( !v38 )
  {
    v21 = v39;
    v22 = *(_DWORD *)(v39 + 14976);
    if ( v22 )
    {
      v28 = (unsigned int)(v22 - 1);
      *(_DWORD *)(v39 + 14976) = v28;
      v9 = *(unsigned __int8 **)(v21 + 8 * v28 + 14848);
      v29 = *((unsigned int *)v9 + 134);
      *v9 = 0;
      v30 = *((_QWORD *)v9 + 66);
      *((_DWORD *)v9 + 106) = 0;
      v31 = v30 + (v29 << 6);
      while ( v30 != v31 )
      {
        while ( 1 )
        {
          v31 -= 64;
          v32 = *(void **)(v31 + 24);
          if ( v32 == (void *)(v31 + 40) )
            break;
          v35 = v30;
          v34 = v10;
          operator delete(v32);
          v30 = v35;
          v10 = v34;
          if ( v35 == v31 )
            goto LABEL_22;
        }
      }
LABEL_22:
      *((_DWORD *)v9 + 134) = 0;
    }
    else
    {
      v9 = (unsigned __int8 *)operator new(0x3A0u);
      *v9 = 0;
      *((_QWORD *)v9 + 12) = v9 + 112;
      *((_QWORD *)v9 + 16) = v9 + 144;
      *((_QWORD *)v9 + 20) = v9 + 176;
      *((_QWORD *)v9 + 24) = v9 + 208;
      *((_QWORD *)v9 + 28) = v9 + 240;
      *((_QWORD *)v9 + 32) = v9 + 272;
      *((_QWORD *)v9 + 36) = v9 + 304;
      *((_QWORD *)v9 + 40) = v9 + 336;
      *((_QWORD *)v9 + 44) = v9 + 368;
      *((_QWORD *)v9 + 48) = v9 + 400;
      *((_QWORD *)v9 + 52) = v9 + 432;
      *((_QWORD *)v9 + 13) = 0;
      v9[112] = 0;
      *((_QWORD *)v9 + 17) = 0;
      v9[144] = 0;
      *((_QWORD *)v9 + 21) = 0;
      v9[176] = 0;
      *((_QWORD *)v9 + 25) = 0;
      v9[208] = 0;
      *((_QWORD *)v9 + 29) = 0;
      v9[240] = 0;
      *((_QWORD *)v9 + 33) = 0;
      v9[272] = 0;
      *((_QWORD *)v9 + 37) = 0;
      v9[304] = 0;
      *((_QWORD *)v9 + 41) = 0;
      v9[336] = 0;
      *((_QWORD *)v9 + 45) = 0;
      v9[368] = 0;
      *((_QWORD *)v9 + 49) = 0;
      v9[400] = 0;
      *((_QWORD *)v9 + 53) = 0x800000000LL;
      v10 = a3;
      *((_QWORD *)v9 + 66) = v9 + 544;
      *((_QWORD *)v9 + 67) = 0x600000000LL;
    }
    v38 = v9;
  }
  v9[*v9 + 1] = 2;
  v11 = v38;
  v12 = *v38;
  *v38 = v12 + 1;
  *(_QWORD *)&v11[8 * v12 + 16] = v10;
  sub_FA33B0(&v36, &v38);
  sub_AC6300((__int64)&v38);
  v13 = v36;
  v14 = a2[1];
  if ( !v36 )
  {
    v19 = v37;
    v20 = *(_DWORD *)(v37 + 14976);
    if ( v20 )
    {
      v23 = (unsigned int)(v20 - 1);
      *(_DWORD *)(v37 + 14976) = v23;
      v13 = *(unsigned __int8 **)(v19 + 8 * v23 + 14848);
      v24 = *((unsigned int *)v13 + 134);
      *v13 = 0;
      v25 = *((_QWORD *)v13 + 66);
      *((_DWORD *)v13 + 106) = 0;
      v26 = v25 + (v24 << 6);
      while ( v25 != v26 )
      {
        while ( 1 )
        {
          v26 -= 64;
          v27 = *(void **)(v26 + 24);
          if ( v27 == (void *)(v26 + 40) )
            break;
          operator delete(v27);
          if ( v25 == v26 )
            goto LABEL_17;
        }
      }
LABEL_17:
      *((_DWORD *)v13 + 134) = 0;
    }
    else
    {
      v13 = (unsigned __int8 *)operator new(0x3A0u);
      *v13 = 0;
      *((_QWORD *)v13 + 12) = v13 + 112;
      *((_QWORD *)v13 + 16) = v13 + 144;
      *((_QWORD *)v13 + 20) = v13 + 176;
      *((_QWORD *)v13 + 24) = v13 + 208;
      *((_QWORD *)v13 + 28) = v13 + 240;
      *((_QWORD *)v13 + 32) = v13 + 272;
      *((_QWORD *)v13 + 36) = v13 + 304;
      *((_QWORD *)v13 + 40) = v13 + 336;
      *((_QWORD *)v13 + 44) = v13 + 368;
      *((_QWORD *)v13 + 48) = v13 + 400;
      *((_QWORD *)v13 + 52) = v13 + 432;
      *((_QWORD *)v13 + 13) = 0;
      v13[112] = 0;
      *((_QWORD *)v13 + 17) = 0;
      v13[144] = 0;
      *((_QWORD *)v13 + 21) = 0;
      v13[176] = 0;
      *((_QWORD *)v13 + 25) = 0;
      v13[208] = 0;
      *((_QWORD *)v13 + 29) = 0;
      v13[240] = 0;
      *((_QWORD *)v13 + 33) = 0;
      v13[272] = 0;
      *((_QWORD *)v13 + 37) = 0;
      v13[304] = 0;
      *((_QWORD *)v13 + 41) = 0;
      v13[336] = 0;
      *((_QWORD *)v13 + 45) = 0;
      v13[368] = 0;
      *((_QWORD *)v13 + 49) = 0;
      v13[400] = 0;
      *((_QWORD *)v13 + 53) = 0x800000000LL;
      *((_QWORD *)v13 + 66) = v13 + 544;
      *((_QWORD *)v13 + 67) = 0x600000000LL;
    }
    v36 = v13;
  }
  v13[*v13 + 1] = 10;
  v15 = v36;
  v16 = *v36;
  *v36 = v16 + 1;
  *(_QWORD *)&v15[8 * v16 + 16] = v14;
  sub_FA33B0(a1, &v36);
  sub_AC6300((__int64)&v36);
  return a1;
}

