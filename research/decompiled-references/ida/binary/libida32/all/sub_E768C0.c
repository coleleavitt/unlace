__int64 __fastcall sub_E768C0(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // r12
  unsigned __int8 *v6; // r15
  unsigned __int8 *v7; // rbx
  __int64 v8; // r15
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  unsigned __int8 *v11; // rbx
  __int64 v12; // r14
  unsigned __int8 *v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r14
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r15
  __int64 v28; // rbp
  void *v29; // rdi
  __int64 v30; // [rsp+8h] [rbp-E0h]
  unsigned __int8 *v31; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-D0h]
  unsigned __int8 *v33[17]; // [rsp+60h] [rbp-88h] BYREF

  v5 = *a2;
  v6 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2[1] + 16LL))(a2[1]);
  sub_FA3370(v33, **(_QWORD **)(v5 + 8), *(unsigned int *)(a2[1] + 24), 2521);
  sub_AC84E0(v33, **(_BYTE ***)v5, *(_QWORD *)(*(_QWORD *)v5 + 8LL));
  v31 = v6;
  LOBYTE(v32) = 1;
  sub_AC88D0((__int64 *)v33, (__int64 *)&v31);
  sub_E74100(v33, a3);
  sub_FA33B0(&v31, v33);
  sub_AC6300((__int64)v33);
  v7 = v31;
  v8 = *((int *)a2 + 4);
  if ( !v31 )
  {
    v16 = v32;
    v17 = *(_DWORD *)(v32 + 14976);
    if ( v17 )
    {
      v20 = (unsigned int)(v17 - 1);
      *(_DWORD *)(v32 + 14976) = v20;
      v7 = *(unsigned __int8 **)(v16 + 8 * v20 + 14848);
      v21 = *((unsigned int *)v7 + 134);
      *v7 = 0;
      v22 = *((_QWORD *)v7 + 66);
      *((_DWORD *)v7 + 106) = 0;
      v23 = v22 + (v21 << 6);
      while ( v22 != v23 )
      {
        while ( 1 )
        {
          v23 -= 64;
          v24 = *(void **)(v23 + 24);
          if ( v24 == (void *)(v23 + 40) )
            break;
          v30 = v22;
          operator delete(v24);
          v22 = v30;
          if ( v30 == v23 )
            goto LABEL_14;
        }
      }
LABEL_14:
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
    v31 = v7;
  }
  v7[*v7 + 1] = 2;
  v9 = v31;
  v10 = *v31;
  *v31 = v10 + 1;
  *(_QWORD *)&v9[8 * v10 + 16] = v8;
  v11 = v31;
  v12 = a2[3];
  if ( !v31 )
  {
    v18 = v32;
    v19 = *(_DWORD *)(v32 + 14976);
    if ( v19 )
    {
      v25 = (unsigned int)(v19 - 1);
      *(_DWORD *)(v32 + 14976) = v25;
      v11 = *(unsigned __int8 **)(v18 + 8 * v25 + 14848);
      v26 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v27 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v28 = v27 + (v26 << 6);
      while ( v27 != v28 )
      {
        while ( 1 )
        {
          v28 -= 64;
          v29 = *(void **)(v28 + 24);
          if ( v29 == (void *)(v28 + 40) )
            break;
          operator delete(v29);
          if ( v27 == v28 )
            goto LABEL_19;
        }
      }
LABEL_19:
      *((_DWORD *)v11 + 134) = 0;
    }
    else
    {
      v11 = (unsigned __int8 *)operator new(0x3A0u);
      *v11 = 0;
      *((_QWORD *)v11 + 12) = v11 + 112;
      *((_QWORD *)v11 + 16) = v11 + 144;
      *((_QWORD *)v11 + 20) = v11 + 176;
      *((_QWORD *)v11 + 24) = v11 + 208;
      *((_QWORD *)v11 + 28) = v11 + 240;
      *((_QWORD *)v11 + 32) = v11 + 272;
      *((_QWORD *)v11 + 36) = v11 + 304;
      *((_QWORD *)v11 + 40) = v11 + 336;
      *((_QWORD *)v11 + 44) = v11 + 368;
      *((_QWORD *)v11 + 48) = v11 + 400;
      *((_QWORD *)v11 + 52) = v11 + 432;
      *((_QWORD *)v11 + 13) = 0;
      v11[112] = 0;
      *((_QWORD *)v11 + 17) = 0;
      v11[144] = 0;
      *((_QWORD *)v11 + 21) = 0;
      v11[176] = 0;
      *((_QWORD *)v11 + 25) = 0;
      v11[208] = 0;
      *((_QWORD *)v11 + 29) = 0;
      v11[240] = 0;
      *((_QWORD *)v11 + 33) = 0;
      v11[272] = 0;
      *((_QWORD *)v11 + 37) = 0;
      v11[304] = 0;
      *((_QWORD *)v11 + 41) = 0;
      v11[336] = 0;
      *((_QWORD *)v11 + 45) = 0;
      v11[368] = 0;
      *((_QWORD *)v11 + 49) = 0;
      v11[400] = 0;
      *((_QWORD *)v11 + 53) = 0x800000000LL;
      *((_QWORD *)v11 + 66) = v11 + 544;
      *((_QWORD *)v11 + 67) = 0x600000000LL;
    }
    v31 = v11;
  }
  v11[*v11 + 1] = 9;
  v13 = v31;
  v14 = *v31;
  *v31 = v14 + 1;
  *(_QWORD *)&v13[8 * v14 + 16] = v12;
  sub_FA33B0(a1, &v31);
  sub_AC6300((__int64)&v31);
  return a1;
}

