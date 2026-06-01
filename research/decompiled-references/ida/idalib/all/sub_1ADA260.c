__int64 __fastcall sub_1ADA260(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r13
  unsigned __int8 *v20; // rbp
  _BYTE *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // rbx
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  unsigned __int8 *v26; // rbp
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // r13
  __int64 v38; // rbp
  void *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // r13
  void *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // r14
  void *v49; // rdi
  __int64 v50; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v51[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v53; // [rsp+30h] [rbp-A8h]
  __int64 v54; // [rsp+38h] [rbp-A0h]
  char v55; // [rsp+88h] [rbp-50h]
  unsigned int v56; // [rsp+90h] [rbp-48h]
  char v57; // [rsp+94h] [rbp-44h]

  result = sub_16EC930(*a1, a2, 1u, a3);
  if ( !(_BYTE)result )
  {
    v8 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 11 )
      return sub_1AD7410(*a1, v8, v5, v6, v7);
    v9 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), v8, a3);
    sub_168B9F0((__int64)v51, a1, v9, 0x123Bu, 0);
    v10 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v11 = v10;
    if ( v10 && (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 >= 6 )
      v11 = 0;
    if ( v55 )
    {
      v26 = v53;
      if ( !v53 )
      {
        v31 = v54;
        v32 = *(_DWORD *)(v54 + 14976);
        if ( v32 )
        {
          v40 = (unsigned int)(v32 - 1);
          *(_DWORD *)(v54 + 14976) = v40;
          v26 = *(unsigned __int8 **)(v31 + 8 * v40 + 14848);
          v41 = *((unsigned int *)v26 + 134);
          *v26 = 0;
          v42 = *((_QWORD *)v26 + 66);
          *((_DWORD *)v26 + 106) = 0;
          v43 = v42 + (v41 << 6);
          while ( v42 != v43 )
          {
            while ( 1 )
            {
              v43 -= 64;
              v44 = *(void **)(v43 + 24);
              if ( v44 == (void *)(v43 + 40) )
                break;
              operator delete(v44);
              if ( v42 == v43 )
                goto LABEL_40;
            }
          }
LABEL_40:
          *((_DWORD *)v26 + 134) = 0;
        }
        else
        {
          v26 = (unsigned __int8 *)operator new(0x3A0u);
          *v26 = 0;
          *((_QWORD *)v26 + 12) = v26 + 112;
          *((_QWORD *)v26 + 16) = v26 + 144;
          *((_QWORD *)v26 + 20) = v26 + 176;
          *((_QWORD *)v26 + 24) = v26 + 208;
          *((_QWORD *)v26 + 28) = v26 + 240;
          *((_QWORD *)v26 + 32) = v26 + 272;
          *((_QWORD *)v26 + 36) = v26 + 304;
          *((_QWORD *)v26 + 40) = v26 + 336;
          *((_QWORD *)v26 + 44) = v26 + 368;
          *((_QWORD *)v26 + 48) = v26 + 400;
          *((_QWORD *)v26 + 52) = v26 + 432;
          *((_QWORD *)v26 + 13) = 0;
          v26[112] = 0;
          *((_QWORD *)v26 + 17) = 0;
          v26[144] = 0;
          *((_QWORD *)v26 + 21) = 0;
          v26[176] = 0;
          *((_QWORD *)v26 + 25) = 0;
          v26[208] = 0;
          *((_QWORD *)v26 + 29) = 0;
          v26[240] = 0;
          *((_QWORD *)v26 + 33) = 0;
          v26[272] = 0;
          *((_QWORD *)v26 + 37) = 0;
          v26[304] = 0;
          *((_QWORD *)v26 + 41) = 0;
          v26[336] = 0;
          *((_QWORD *)v26 + 45) = 0;
          v26[368] = 0;
          *((_QWORD *)v26 + 49) = 0;
          v26[400] = 0;
          *((_QWORD *)v26 + 53) = 0x800000000LL;
          *((_QWORD *)v26 + 66) = v26 + 544;
          *((_QWORD *)v26 + 67) = 0x600000000LL;
        }
        v53 = v26;
      }
      v26[*v26 + 1] = 10;
      v27 = v53;
      v28 = *v53;
      *v53 = v28 + 1;
      *(_QWORD *)&v27[8 * v28 + 16] = v11;
    }
    else
    {
      if ( !v57 )
      {
LABEL_8:
        sub_15F7200(v51);
        return 1;
      }
      v14 = sub_168B9E0(v51);
      v17 = v52;
      if ( v52 )
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
      v50 = v17;
      v18 = sub_1587BC0(v14, &v50, v12, v13, v15, v16);
      v19 = *v18 + 32LL * v56;
      v20 = *(unsigned __int8 **)(v19 + 8);
      if ( !v20 )
      {
        v33 = *(_QWORD *)(v19 + 16);
        v34 = *(_DWORD *)(v33 + 14976);
        if ( v34 )
        {
          v45 = (unsigned int)(v34 - 1);
          *(_DWORD *)(v33 + 14976) = v45;
          v20 = *(unsigned __int8 **)(v33 + 8 * v45 + 14848);
          v46 = *((unsigned int *)v20 + 134);
          *v20 = 0;
          v47 = *((_QWORD *)v20 + 66);
          *((_DWORD *)v20 + 106) = 0;
          v48 = v47 + (v46 << 6);
          while ( v47 != v48 )
          {
            while ( 1 )
            {
              v48 -= 64;
              v49 = *(void **)(v48 + 24);
              if ( v49 == (void *)(v48 + 40) )
                break;
              operator delete(v49);
              if ( v47 == v48 )
                goto LABEL_45;
            }
          }
LABEL_45:
          *((_DWORD *)v20 + 134) = 0;
        }
        else
        {
          v20 = (unsigned __int8 *)operator new(0x3A0u);
          *v20 = 0;
          *((_QWORD *)v20 + 12) = v20 + 112;
          *((_QWORD *)v20 + 16) = v20 + 144;
          *((_QWORD *)v20 + 20) = v20 + 176;
          *((_QWORD *)v20 + 24) = v20 + 208;
          *((_QWORD *)v20 + 28) = v20 + 240;
          *((_QWORD *)v20 + 32) = v20 + 272;
          *((_QWORD *)v20 + 36) = v20 + 304;
          *((_QWORD *)v20 + 40) = v20 + 336;
          *((_QWORD *)v20 + 44) = v20 + 368;
          *((_QWORD *)v20 + 48) = v20 + 400;
          *((_QWORD *)v20 + 52) = v20 + 432;
          *((_QWORD *)v20 + 13) = 0;
          v20[112] = 0;
          *((_QWORD *)v20 + 17) = 0;
          v20[144] = 0;
          *((_QWORD *)v20 + 21) = 0;
          v20[176] = 0;
          *((_QWORD *)v20 + 25) = 0;
          v20[208] = 0;
          *((_QWORD *)v20 + 29) = 0;
          v20[240] = 0;
          *((_QWORD *)v20 + 33) = 0;
          v20[272] = 0;
          *((_QWORD *)v20 + 37) = 0;
          v20[304] = 0;
          *((_QWORD *)v20 + 41) = 0;
          v20[336] = 0;
          *((_QWORD *)v20 + 45) = 0;
          v20[368] = 0;
          *((_QWORD *)v20 + 49) = 0;
          v20[400] = 0;
          *((_QWORD *)v20 + 53) = 0x800000000LL;
          *((_QWORD *)v20 + 66) = v20 + 544;
          *((_QWORD *)v20 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v19 + 8) = v20;
      }
      v20[*v20 + 1] = 10;
      v21 = *(_BYTE **)(v19 + 8);
      v22 = (unsigned __int8)*v21;
      *v21 = v22 + 1;
      *(_QWORD *)&v21[8 * v22 + 16] = v11;
    }
    if ( !v55 )
    {
      if ( v57 )
        sub_1AD78E0(v51, (__int64)"block");
      goto LABEL_8;
    }
    v23 = v53;
    if ( !v53 )
    {
      v29 = v54;
      v30 = *(_DWORD *)(v54 + 14976);
      if ( v30 )
      {
        v35 = (unsigned int)(v30 - 1);
        *(_DWORD *)(v54 + 14976) = v35;
        v23 = *(unsigned __int8 **)(v29 + 8 * v35 + 14848);
        v36 = *((unsigned int *)v23 + 134);
        *v23 = 0;
        v37 = *((_QWORD *)v23 + 66);
        *((_DWORD *)v23 + 106) = 0;
        v38 = v37 + (v36 << 6);
        while ( v37 != v38 )
        {
          while ( 1 )
          {
            v38 -= 64;
            v39 = *(void **)(v38 + 24);
            if ( v39 == (void *)(v38 + 40) )
              break;
            operator delete(v39);
            if ( v37 == v38 )
              goto LABEL_35;
          }
        }
LABEL_35:
        *((_DWORD *)v23 + 134) = 0;
      }
      else
      {
        v23 = (unsigned __int8 *)operator new(0x3A0u);
        *v23 = 0;
        *((_QWORD *)v23 + 12) = v23 + 112;
        *((_QWORD *)v23 + 16) = v23 + 144;
        *((_QWORD *)v23 + 20) = v23 + 176;
        *((_QWORD *)v23 + 24) = v23 + 208;
        *((_QWORD *)v23 + 28) = v23 + 240;
        *((_QWORD *)v23 + 32) = v23 + 272;
        *((_QWORD *)v23 + 36) = v23 + 304;
        *((_QWORD *)v23 + 40) = v23 + 336;
        *((_QWORD *)v23 + 44) = v23 + 368;
        *((_QWORD *)v23 + 48) = v23 + 400;
        *((_QWORD *)v23 + 52) = v23 + 432;
        *((_QWORD *)v23 + 13) = 0;
        v23[112] = 0;
        *((_QWORD *)v23 + 17) = 0;
        v23[144] = 0;
        *((_QWORD *)v23 + 21) = 0;
        v23[176] = 0;
        *((_QWORD *)v23 + 25) = 0;
        v23[208] = 0;
        *((_QWORD *)v23 + 29) = 0;
        v23[240] = 0;
        *((_QWORD *)v23 + 33) = 0;
        v23[272] = 0;
        *((_QWORD *)v23 + 37) = 0;
        v23[304] = 0;
        *((_QWORD *)v23 + 41) = 0;
        v23[336] = 0;
        *((_QWORD *)v23 + 45) = 0;
        v23[368] = 0;
        *((_QWORD *)v23 + 49) = 0;
        v23[400] = 0;
        *((_QWORD *)v23 + 53) = 0x800000000LL;
        *((_QWORD *)v23 + 66) = v23 + 544;
        *((_QWORD *)v23 + 67) = 0x600000000LL;
      }
      v53 = v23;
    }
    v23[*v23 + 1] = 1;
    v24 = v53;
    v25 = *v53;
    *v53 = v25 + 1;
    *(_QWORD *)&v24[8 * v25 + 16] = "block";
    sub_15F7200(v51);
    return 1;
  }
  return result;
}
