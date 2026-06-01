__int64 __fastcall sub_84BEB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  int v7; // edx
  unsigned int v8; // r12d
  unsigned int v9; // r12d
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  _BYTE *v12; // rdi
  __int64 (*v13)(void); // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 (*v16)(); // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 **v19; // rbp
  __int64 v20; // r15
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // rbp
  unsigned __int8 **v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // r12
  void *v34; // rdi
  __int64 v35; // [rsp+0h] [rbp-40h]

  if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
    return 0;
  if ( (*(_BYTE *)(a3 + 128) & 1) != 0 )
  {
    v27 = (unsigned __int8 **)sub_A2E240(a1, a2, 2259, 0);
    if ( v27 )
      sub_823450(v27, 1);
    *(_BYTE *)(a3 + 24) |= 1u;
    *(_DWORD *)(a3 + 56) = 0;
    return 0;
  }
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) == 41
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 && (v6 = sub_B0D320(v6)) != 0 )
  {
    v5 = *(_QWORD *)(v6 + 32);
  }
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a3 + 56);
  if ( v8 < v7 + (*(_DWORD *)(a3 + 24) >> 4) )
  {
    v25 = (unsigned __int8 **)sub_A2E240(a1, a2, 2216, 0);
    v26 = v25;
    if ( v25 )
    {
      sub_8356A0(v25, *(_QWORD *)(a3 + 40), 8u);
      sub_8356A0(v26, v5, 8u);
    }
    return 0;
  }
  v9 = v8 - v7;
  v10 = sub_B0E910(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
  if ( *(_DWORD *)(a3 + 24) >> 4 == v9 )
  {
    v12 = (_BYTE *)sub_B0E910(*(_QWORD *)(*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF0LL));
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * (v9 - 1));
    v12 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v11 <= 7 || (v12[28] & 0x7Fu) - 57 > 2 )
      BUG();
  }
  v13 = *(__int64 (**)(void))(*(_QWORD *)v12 + 32LL);
  if ( v13 == sub_6A41B0 )
    v14 = sub_777E10((__int64)v12);
  else
    v14 = v13();
  v15 = v14;
  v35 = v14;
  v16 = *(__int64 (**)())(*(_QWORD *)v10 + 32LL);
  if ( v16 == sub_6A41B0 )
    v17 = sub_777E10(v10);
  else
    v17 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 (*)()))v16)(v10, a2, v15, sub_6A41B0);
  if ( v17 != v35 )
  {
    v18 = sub_A2E240(a1, a2, 2216, 0);
    v19 = (unsigned __int8 **)v18;
    if ( v18 )
    {
      v20 = *(_QWORD *)(a3 + 40);
      v21 = *(unsigned __int8 **)v18;
      if ( !*(_QWORD *)v18 )
      {
        v28 = *(_QWORD *)(v18 + 8);
        v29 = *(_DWORD *)(v28 + 14976);
        if ( v29 )
        {
          v30 = (unsigned int)(v29 - 1);
          *(_DWORD *)(v28 + 14976) = v30;
          v21 = *(unsigned __int8 **)(v28 + 8 * v30 + 14848);
          v31 = *((unsigned int *)v21 + 134);
          *v21 = 0;
          v32 = *((_QWORD *)v21 + 66);
          *((_DWORD *)v21 + 106) = 0;
          v33 = v32 + (v31 << 6);
          while ( v32 != v33 )
          {
            while ( 1 )
            {
              v33 -= 64;
              v34 = *(void **)(v33 + 24);
              if ( v34 == (void *)(v33 + 40) )
                break;
              operator delete(v34, *(_QWORD *)(v33 + 40) + 1LL);
              if ( v32 == v33 )
                goto LABEL_36;
            }
          }
LABEL_36:
          *((_DWORD *)v21 + 134) = 0;
        }
        else
        {
          v21 = (unsigned __int8 *)operator new(0x3A0u);
          *v21 = 0;
          *((_QWORD *)v21 + 12) = v21 + 112;
          *((_QWORD *)v21 + 16) = v21 + 144;
          *((_QWORD *)v21 + 20) = v21 + 176;
          *((_QWORD *)v21 + 24) = v21 + 208;
          *((_QWORD *)v21 + 28) = v21 + 240;
          *((_QWORD *)v21 + 32) = v21 + 272;
          *((_QWORD *)v21 + 36) = v21 + 304;
          *((_QWORD *)v21 + 40) = v21 + 336;
          *((_QWORD *)v21 + 44) = v21 + 368;
          *((_QWORD *)v21 + 48) = v21 + 400;
          *((_QWORD *)v21 + 13) = 0;
          v21[112] = 0;
          *((_QWORD *)v21 + 17) = 0;
          v21[144] = 0;
          *((_QWORD *)v21 + 21) = 0;
          v21[176] = 0;
          *((_QWORD *)v21 + 25) = 0;
          v21[208] = 0;
          *((_QWORD *)v21 + 29) = 0;
          v21[240] = 0;
          *((_QWORD *)v21 + 33) = 0;
          v21[272] = 0;
          *((_QWORD *)v21 + 37) = 0;
          v21[304] = 0;
          *((_QWORD *)v21 + 41) = 0;
          v21[336] = 0;
          *((_QWORD *)v21 + 45) = 0;
          v21[368] = 0;
          *((_QWORD *)v21 + 49) = 0;
          v21[400] = 0;
          *((_QWORD *)v21 + 52) = v21 + 432;
          *((_QWORD *)v21 + 53) = 0x800000000LL;
          *((_QWORD *)v21 + 66) = v21 + 544;
          *((_QWORD *)v21 + 67) = 0x600000000LL;
        }
        *v19 = v21;
      }
      v21[*v21 + 1] = 8;
      v22 = *v19;
      v23 = **v19;
      *v22 = v23 + 1;
      *(_QWORD *)&v22[8 * v23 + 16] = v20;
      sub_8356A0(v19, v5, 8u);
    }
    return 0;
  }
  return sub_82B240(a1, a2, a3, v10, v9);
}

