__int64 __fastcall sub_1B3CC40(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, __int64 a5, double a6)
{
  unsigned int v7; // r15d
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 *v10; // r10
  __int64 *v11; // rbp
  unsigned __int64 *v12; // r13
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r15d
  _BYTE *v17; // r15
  __int64 v18; // rdx
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  void **v25; // r15
  unsigned __int8 *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // r8
  unsigned __int8 *v35; // rax
  size_t v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned __int8 *v43; // r13
  __int64 v44; // r12
  __int64 v45; // rbx
  void *v46; // rdi
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // r13
  __int64 v54; // r12
  __int64 v55; // rbx
  unsigned __int8 *v56; // r14
  void *v57; // rdi
  size_t v58; // rdx
  _BYTE *v59; // rdi
  __int64 *v60; // [rsp+10h] [rbp-168h]
  __int64 v62; // [rsp+30h] [rbp-148h]
  __int64 *v63; // [rsp+38h] [rbp-140h]
  __int64 v65; // [rsp+50h] [rbp-128h]
  __int64 v66; // [rsp+50h] [rbp-128h]
  unsigned __int64 *v67; // [rsp+50h] [rbp-128h]
  __int64 v68; // [rsp+50h] [rbp-128h]
  __int64 *v69; // [rsp+58h] [rbp-120h]
  unsigned __int64 *v70; // [rsp+58h] [rbp-120h]
  __int64 *v71; // [rsp+60h] [rbp-118h]
  __int64 v72; // [rsp+68h] [rbp-110h]
  unsigned int v73; // [rsp+74h] [rbp-104h] BYREF
  __int64 v74; // [rsp+78h] [rbp-100h] BYREF
  __int64 v75; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v76; // [rsp+88h] [rbp-F0h] BYREF
  void *v77; // [rsp+90h] [rbp-E8h] BYREF
  size_t n; // [rsp+98h] [rbp-E0h]
  _QWORD v79[2]; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v80[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v82; // [rsp+D0h] [rbp-A8h]
  __int64 v83; // [rsp+D8h] [rbp-A0h]
  char v84; // [rsp+128h] [rbp-50h]
  unsigned int v85; // [rsp+130h] [rbp-48h]
  char v86; // [rsp+134h] [rbp-44h]

  v63 = &a2[a3];
  if ( a2 != v63 )
  {
    v7 = 0;
    v60 = a2;
    while ( 1 )
    {
      v8 = *v60;
      if ( *(_DWORD *)(*v60 + 8) == 52 )
      {
        v9 = v8 + 8LL * *(unsigned int *)(v8 + 16) + 64;
        v10 = (__int64 *)(v8 + 64);
        if ( (__int64 *)v9 != v10 )
          break;
      }
LABEL_12:
      if ( v63 == ++v60 )
        return v7;
    }
    v11 = v10;
    v12 = (unsigned __int64 *)&v74;
    v13 = &v76;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *v11;
        v73 = 0;
        v76 = 0;
        v74 = v14;
        v15 = sub_1B31D70(a1, v12, &v73, v13, (__int64)&byte_22F0C30, 0, a6);
        if ( v15 )
        {
          if ( !(unsigned int)sub_1AFA3A0(a5, v15) )
            break;
        }
        if ( (__int64 *)v9 == ++v11 )
          goto LABEL_12;
      }
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL);
      sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), v73, 0x11B5u, 0);
      v17 = (_BYTE *)sub_20EAB70(a4, v16);
      v62 = v18;
      if ( v84 )
        break;
      if ( v86 )
      {
        v28 = sub_168B9E0(v80);
        v32 = v81;
        if ( v81 )
        {
          v65 = v28;
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
          v28 = v65;
        }
        v75 = v32;
        v33 = sub_1587BC0(v28, &v75, v28, v29, v30, v31);
        v34 = *v33 + 32LL * v85;
        v35 = *(unsigned __int8 **)(v34 + 8);
        if ( !v35 )
        {
          v47 = *(_QWORD *)(v34 + 16);
          v48 = *(_DWORD *)(v47 + 14976);
          if ( v48 )
          {
            v49 = (unsigned int)(v48 - 1);
            *(_DWORD *)(v47 + 14976) = v49;
            v35 = *(unsigned __int8 **)(v47 + 8 * v49 + 14848);
            v50 = *((unsigned int *)v35 + 134);
            *v35 = 0;
            v51 = *((_QWORD *)v35 + 66);
            *((_DWORD *)v35 + 106) = 0;
            v52 = v51 + (v50 << 6);
            if ( v51 != v52 )
            {
              v70 = v12;
              v53 = v34;
              v71 = v13;
              v54 = v9;
              v55 = v52;
              v72 = a1;
              v56 = v35;
              do
              {
                while ( 1 )
                {
                  v55 -= 64;
                  v57 = *(void **)(v55 + 24);
                  if ( v57 == (void *)(v55 + 40) )
                    break;
                  operator delete(v57);
                  if ( v51 == v55 )
                    goto LABEL_44;
                }
              }
              while ( v51 != v55 );
LABEL_44:
              v9 = v54;
              v34 = v53;
              v35 = v56;
              v12 = v70;
              v13 = v71;
              a1 = v72;
            }
            *((_DWORD *)v35 + 134) = 0;
          }
          else
          {
            v68 = v34;
            v35 = (unsigned __int8 *)operator new(0x3A0u);
            *v35 = 0;
            *((_QWORD *)v35 + 12) = v35 + 112;
            *((_QWORD *)v35 + 16) = v35 + 144;
            *((_QWORD *)v35 + 20) = v35 + 176;
            *((_QWORD *)v35 + 24) = v35 + 208;
            *((_QWORD *)v35 + 28) = v35 + 240;
            *((_QWORD *)v35 + 32) = v35 + 272;
            *((_QWORD *)v35 + 36) = v35 + 304;
            *((_QWORD *)v35 + 40) = v35 + 336;
            *((_QWORD *)v35 + 44) = v35 + 368;
            *((_QWORD *)v35 + 48) = v35 + 400;
            *((_QWORD *)v35 + 52) = v35 + 432;
            *((_QWORD *)v35 + 13) = 0;
            v35[112] = 0;
            *((_QWORD *)v35 + 17) = 0;
            v35[144] = 0;
            *((_QWORD *)v35 + 21) = 0;
            v35[176] = 0;
            *((_QWORD *)v35 + 25) = 0;
            v35[208] = 0;
            *((_QWORD *)v35 + 29) = 0;
            v35[240] = 0;
            *((_QWORD *)v35 + 33) = 0;
            v35[272] = 0;
            *((_QWORD *)v35 + 37) = 0;
            v35[304] = 0;
            *((_QWORD *)v35 + 41) = 0;
            v35[336] = 0;
            *((_QWORD *)v35 + 45) = 0;
            v35[368] = 0;
            *((_QWORD *)v35 + 49) = 0;
            v35[400] = 0;
            *((_QWORD *)v35 + 53) = 0x800000000LL;
            v34 = v68;
            *((_QWORD *)v35 + 66) = v35 + 544;
            *((_QWORD *)v35 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v34 + 8) = v35;
        }
        v66 = v34;
        v35[*v35 + 1] = 0;
        v77 = v79;
        sub_1AEB960(&v77, v17, (__int64)&v17[v62]);
        v21 = *(unsigned __int8 **)(v66 + 8);
        goto LABEL_16;
      }
LABEL_11:
      ++v11;
      v7 = 1;
      sub_15F7200(v80);
      if ( (__int64 *)v9 == v11 )
        goto LABEL_12;
    }
    v20 = v82;
    if ( !v82 )
    {
      v37 = v83;
      v38 = *(_DWORD *)(v83 + 14976);
      if ( v38 )
      {
        v39 = (unsigned int)(v38 - 1);
        *(_DWORD *)(v83 + 14976) = v39;
        v20 = *(unsigned __int8 **)(v37 + 8 * v39 + 14848);
        v40 = *((unsigned int *)v20 + 134);
        *v20 = 0;
        v41 = *((_QWORD *)v20 + 66);
        *((_DWORD *)v20 + 106) = 0;
        v42 = v41 + (v40 << 6);
        if ( v41 != v42 )
        {
          v67 = v12;
          v43 = v20;
          v69 = v13;
          v44 = v9;
          v45 = v42;
          do
          {
            while ( 1 )
            {
              v45 -= 64;
              v46 = *(void **)(v45 + 24);
              if ( v46 == (void *)(v45 + 40) )
                break;
              operator delete(v46);
              if ( v41 == v45 )
                goto LABEL_37;
            }
          }
          while ( v41 != v45 );
LABEL_37:
          v9 = v44;
          v20 = v43;
          v12 = v67;
          v13 = v69;
        }
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
      v82 = v20;
    }
    v20[*v20 + 1] = 0;
    v77 = v79;
    sub_1AEB960(&v77, v17, (__int64)&v17[v62]);
    v21 = v82;
LABEL_16:
    v22 = *v21;
    *v21 = v22 + 1;
    v23 = (unsigned __int8)v22;
    v24 = 32 * (v22 + 3);
    v25 = (void **)&v21[v24];
    v26 = *(unsigned __int8 **)&v21[v24];
    if ( v77 != v79 )
    {
      if ( v26 == &v21[v24 + 16] )
      {
        *v25 = v77;
        v25[1] = (void *)n;
        v25[2] = (void *)v79[0];
      }
      else
      {
        v27 = *(_QWORD *)&v21[32 * v23 + 112];
        *v25 = v77;
        v25[1] = (void *)n;
        v25[2] = (void *)v79[0];
        if ( v26 )
        {
          v77 = v26;
          v79[0] = v27;
          goto LABEL_20;
        }
      }
      v77 = v79;
      v26 = (unsigned __int8 *)v79;
LABEL_20:
      n = 0;
      *v26 = 0;
      if ( v77 != v79 )
        operator delete(v77);
      goto LABEL_11;
    }
    v36 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *v26 = v79[0];
        v58 = n;
        v59 = *v25;
        v25[1] = (void *)n;
        v59[v58] = 0;
        v26 = (unsigned __int8 *)v77;
        goto LABEL_20;
      }
      memcpy(v26, v79, n);
      v36 = n;
      v26 = (unsigned __int8 *)*v25;
    }
    v25[1] = (void *)v36;
    v26[v36] = 0;
    v26 = (unsigned __int8 *)v77;
    goto LABEL_20;
  }
  return 0;
}
