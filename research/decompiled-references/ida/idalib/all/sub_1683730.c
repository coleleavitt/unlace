__int64 __fastcall sub_1683730(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r13
  unsigned __int8 *v12; // r12
  _BYTE *v13; // rdx
  __int64 v14; // rax
  unsigned __int8 *v15; // r12
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r13
  void *v24; // rdi
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // r14
  void *v31; // rdi
  __int64 v32; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v33[16]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v35; // [rsp+30h] [rbp-A8h]
  __int64 v36; // [rsp+38h] [rbp-A0h]
  char v37; // [rsp+88h] [rbp-50h]
  unsigned int v38; // [rsp+90h] [rbp-48h]
  char v39; // [rsp+94h] [rbp-44h]

  sub_168B9F0(v33, *(_QWORD *)(a1 + 16) + 8LL, *(unsigned int *)(a2 + 32), 6529, 0);
  v2 = ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 232LL) + 2LL) >> 2) ^ 1) & 1;
  if ( v37 )
  {
    v15 = v35;
    if ( !v35 )
    {
      v18 = v36;
      v19 = *(_DWORD *)(v36 + 14976);
      if ( v19 )
      {
        v20 = (unsigned int)(v19 - 1);
        *(_DWORD *)(v36 + 14976) = v20;
        v15 = *(unsigned __int8 **)(v18 + 8 * v20 + 14848);
        v21 = *((unsigned int *)v15 + 134);
        v22 = *((_QWORD *)v15 + 66);
        *v15 = 0;
        *((_DWORD *)v15 + 106) = 0;
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
              goto LABEL_15;
          }
        }
LABEL_15:
        *((_DWORD *)v15 + 134) = 0;
      }
      else
      {
        v15 = (unsigned __int8 *)operator new(0x3A0u);
        *v15 = 0;
        *((_QWORD *)v15 + 12) = v15 + 112;
        *((_QWORD *)v15 + 16) = v15 + 144;
        *((_QWORD *)v15 + 20) = v15 + 176;
        *((_QWORD *)v15 + 24) = v15 + 208;
        *((_QWORD *)v15 + 28) = v15 + 240;
        *((_QWORD *)v15 + 32) = v15 + 272;
        *((_QWORD *)v15 + 36) = v15 + 304;
        *((_QWORD *)v15 + 40) = v15 + 336;
        *((_QWORD *)v15 + 44) = v15 + 368;
        *((_QWORD *)v15 + 48) = v15 + 400;
        *((_QWORD *)v15 + 52) = v15 + 432;
        *((_QWORD *)v15 + 13) = 0;
        v15[112] = 0;
        *((_QWORD *)v15 + 17) = 0;
        v15[144] = 0;
        *((_QWORD *)v15 + 21) = 0;
        v15[176] = 0;
        *((_QWORD *)v15 + 25) = 0;
        v15[208] = 0;
        *((_QWORD *)v15 + 29) = 0;
        v15[240] = 0;
        *((_QWORD *)v15 + 33) = 0;
        v15[272] = 0;
        *((_QWORD *)v15 + 37) = 0;
        v15[304] = 0;
        *((_QWORD *)v15 + 41) = 0;
        v15[336] = 0;
        *((_QWORD *)v15 + 45) = 0;
        v15[368] = 0;
        *((_QWORD *)v15 + 49) = 0;
        v15[400] = 0;
        *((_QWORD *)v15 + 53) = 0x800000000LL;
        *((_QWORD *)v15 + 66) = v15 + 544;
        *((_QWORD *)v15 + 67) = 0x600000000LL;
      }
      v35 = v15;
    }
    v15[*v15 + 1] = 2;
    v16 = v35;
    v17 = *v35;
    *v35 = v17 + 1;
    *(_QWORD *)&v16[8 * v17 + 16] = v2;
  }
  else if ( v39 )
  {
    v8 = sub_168B9E0(v33);
    v9 = v34;
    if ( v34 )
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
    v32 = v9;
    v10 = sub_1587BC0(v8, &v32, v4, v5, v6, v7);
    v11 = *v10 + 32LL * v38;
    v12 = *(unsigned __int8 **)(v11 + 8);
    if ( !v12 )
    {
      v25 = *(_QWORD *)(v11 + 16);
      v26 = *(_DWORD *)(v25 + 14976);
      if ( v26 )
      {
        v27 = (unsigned int)(v26 - 1);
        *(_DWORD *)(v25 + 14976) = v27;
        v12 = *(unsigned __int8 **)(v25 + 8 * v27 + 14848);
        v28 = *((unsigned int *)v12 + 134);
        v29 = *((_QWORD *)v12 + 66);
        *v12 = 0;
        *((_DWORD *)v12 + 106) = 0;
        v30 = v29 + (v28 << 6);
        while ( v29 != v30 )
        {
          while ( 1 )
          {
            v30 -= 64;
            v31 = *(void **)(v30 + 24);
            if ( v31 == (void *)(v30 + 40) )
              break;
            operator delete(v31);
            if ( v29 == v30 )
              goto LABEL_25;
          }
        }
LABEL_25:
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
      *(_QWORD *)(v11 + 8) = v12;
    }
    v12[*v12 + 1] = 2;
    v13 = *(_BYTE **)(v11 + 8);
    v14 = (unsigned __int8)*v13;
    *v13 = v14 + 1;
    *(_QWORD *)&v13[8 * v14 + 16] = v2;
  }
  sub_15F7200(v33);
  return 1;
}
