__int64 __fastcall sub_1E4FE10(
        __m128 *a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 *a8,
        int a9)
{
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  int v16; // ebp
  unsigned int v17; // eax
  unsigned __int8 *v18; // rbp
  unsigned __int8 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r13
  unsigned __int8 *v29; // rbp
  _BYTE *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // r13
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // r14
  void *v45; // rdi
  __int64 v46; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v47[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v49; // [rsp+30h] [rbp-A8h]
  __int64 v50; // [rsp+38h] [rbp-A0h]
  char v51; // [rsp+88h] [rbp-50h]
  unsigned int v52; // [rsp+90h] [rbp-48h]
  char v53; // [rsp+94h] [rbp-44h]

  if ( (*(_WORD *)a3 & 0x1FF) == 0x47 && sub_B799A0(*(_QWORD *)(a3 + 16)) )
  {
    v14 = a3;
    v15 = sub_1E4D480(a1, a3, a4, a8, a9, 0, a5, a6, nullptr, 0);
    if ( v15 != 1 )
    {
      v16 = -((*(_BYTE *)(a1[14].m128_u64[1] + 2) & 2) == 0);
      v17 = sub_EEB7E0(v15 & 0xFFFFFFFFFFFFFFFELL, v14, *(double *)a5.m128_u64);
      sub_168B9F0((__int64)v47, &a1->m128_i64[1], v17, (v16 & 0xFFFFFBA9) + 6756, 0);
      sub_15F7200(v47);
    }
    return v15;
  }
  else
  {
    if ( (*(_DWORD *)a3 & 0x40000) == 0 )
    {
      v13 = sub_EEB7E0(a3, a2, *(double *)a5.m128_u64);
      sub_168B9F0((__int64)v47, &a1->m128_i64[1], v13, 0xEA5u, 0);
      if ( v51 )
      {
        v18 = v49;
        if ( !v49 )
        {
          v34 = v50;
          v35 = *(_DWORD *)(v50 + 14976);
          if ( v35 )
          {
            v36 = (unsigned int)(v35 - 1);
            *(_DWORD *)(v50 + 14976) = v36;
            v18 = *(unsigned __int8 **)(v34 + 8 * v36 + 14848);
            v37 = *((unsigned int *)v18 + 134);
            *v18 = 0;
            v38 = *((_QWORD *)v18 + 66);
            *((_DWORD *)v18 + 106) = 0;
            v39 = v38 + (v37 << 6);
            while ( v38 != v39 )
            {
              while ( 1 )
              {
                v39 -= 64;
                v40 = *(void **)(v39 + 24);
                if ( v40 == (void *)(v39 + 40) )
                  break;
                operator delete(v40);
                if ( v38 == v39 )
                  goto LABEL_27;
              }
            }
LABEL_27:
            *((_DWORD *)v18 + 134) = 0;
          }
          else
          {
            v18 = (unsigned __int8 *)operator new(0x3A0u);
            *v18 = 0;
            *((_QWORD *)v18 + 12) = v18 + 112;
            *((_QWORD *)v18 + 16) = v18 + 144;
            *((_QWORD *)v18 + 20) = v18 + 176;
            *((_QWORD *)v18 + 24) = v18 + 208;
            *((_QWORD *)v18 + 28) = v18 + 240;
            *((_QWORD *)v18 + 32) = v18 + 272;
            *((_QWORD *)v18 + 36) = v18 + 304;
            *((_QWORD *)v18 + 40) = v18 + 336;
            *((_QWORD *)v18 + 44) = v18 + 368;
            *((_QWORD *)v18 + 48) = v18 + 400;
            *((_QWORD *)v18 + 52) = v18 + 432;
            *((_QWORD *)v18 + 13) = 0;
            v18[112] = 0;
            *((_QWORD *)v18 + 17) = 0;
            v18[144] = 0;
            *((_QWORD *)v18 + 21) = 0;
            v18[176] = 0;
            *((_QWORD *)v18 + 25) = 0;
            v18[208] = 0;
            *((_QWORD *)v18 + 29) = 0;
            v18[240] = 0;
            *((_QWORD *)v18 + 33) = 0;
            v18[272] = 0;
            *((_QWORD *)v18 + 37) = 0;
            v18[304] = 0;
            *((_QWORD *)v18 + 41) = 0;
            v18[336] = 0;
            *((_QWORD *)v18 + 45) = 0;
            v18[368] = 0;
            *((_QWORD *)v18 + 49) = 0;
            v18[400] = 0;
            *((_QWORD *)v18 + 53) = 0x800000000LL;
            *((_QWORD *)v18 + 66) = v18 + 544;
            *((_QWORD *)v18 + 67) = 0x600000000LL;
          }
          v49 = v18;
        }
        v18[*v18 + 1] = 15;
        v19 = v49;
        v20 = *v49;
        *v49 = v20 + 1;
        *(_QWORD *)&v19[8 * v20 + 16] = a3;
      }
      else if ( v53 )
      {
        v23 = sub_168B9E0(v47);
        v26 = v48;
        if ( v48 )
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
        v46 = v26;
        v27 = sub_1587BC0(v23, &v46, v21, v22, v24, v25);
        v28 = *v27 + 32LL * v52;
        v29 = *(unsigned __int8 **)(v28 + 8);
        if ( !v29 )
        {
          v32 = *(_QWORD *)(v28 + 16);
          v33 = *(_DWORD *)(v32 + 14976);
          if ( v33 )
          {
            v41 = (unsigned int)(v33 - 1);
            *(_DWORD *)(v32 + 14976) = v41;
            v29 = *(unsigned __int8 **)(v32 + 8 * v41 + 14848);
            v42 = *((unsigned int *)v29 + 134);
            *v29 = 0;
            v43 = *((_QWORD *)v29 + 66);
            *((_DWORD *)v29 + 106) = 0;
            v44 = v43 + (v42 << 6);
            while ( v43 != v44 )
            {
              while ( 1 )
              {
                v44 -= 64;
                v45 = *(void **)(v44 + 24);
                if ( v45 == (void *)(v44 + 40) )
                  break;
                operator delete(v45);
                if ( v43 == v44 )
                  goto LABEL_32;
              }
            }
LABEL_32:
            *((_DWORD *)v29 + 134) = 0;
          }
          else
          {
            v29 = (unsigned __int8 *)operator new(0x3A0u);
            *v29 = 0;
            *((_QWORD *)v29 + 12) = v29 + 112;
            *((_QWORD *)v29 + 16) = v29 + 144;
            *((_QWORD *)v29 + 20) = v29 + 176;
            *((_QWORD *)v29 + 24) = v29 + 208;
            *((_QWORD *)v29 + 28) = v29 + 240;
            *((_QWORD *)v29 + 32) = v29 + 272;
            *((_QWORD *)v29 + 36) = v29 + 304;
            *((_QWORD *)v29 + 40) = v29 + 336;
            *((_QWORD *)v29 + 44) = v29 + 368;
            *((_QWORD *)v29 + 48) = v29 + 400;
            *((_QWORD *)v29 + 52) = v29 + 432;
            *((_QWORD *)v29 + 13) = 0;
            v29[112] = 0;
            *((_QWORD *)v29 + 17) = 0;
            v29[144] = 0;
            *((_QWORD *)v29 + 21) = 0;
            v29[176] = 0;
            *((_QWORD *)v29 + 25) = 0;
            v29[208] = 0;
            *((_QWORD *)v29 + 29) = 0;
            v29[240] = 0;
            *((_QWORD *)v29 + 33) = 0;
            v29[272] = 0;
            *((_QWORD *)v29 + 37) = 0;
            v29[304] = 0;
            *((_QWORD *)v29 + 41) = 0;
            v29[336] = 0;
            *((_QWORD *)v29 + 45) = 0;
            v29[368] = 0;
            *((_QWORD *)v29 + 49) = 0;
            v29[400] = 0;
            *((_QWORD *)v29 + 53) = 0x800000000LL;
            *((_QWORD *)v29 + 66) = v29 + 544;
            *((_QWORD *)v29 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v28 + 8) = v29;
        }
        v29[*v29 + 1] = 15;
        v30 = *(_BYTE **)(v28 + 8);
        v31 = (unsigned __int8)*v30;
        *v30 = v31 + 1;
        *(_QWORD *)&v30[8 * v31 + 16] = a3;
      }
      sub_15F7200(v47);
    }
    return 1;
  }
}
