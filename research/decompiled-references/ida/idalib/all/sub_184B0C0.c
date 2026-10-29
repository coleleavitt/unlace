__int64 __fastcall sub_184B0C0(
        __int64 *a1,
        _DWORD *a2,
        unsigned int a3,
        _BYTE *a4,
        size_t a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // r15d
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r12
  void *v29; // rax
  _QWORD *v30; // rax
  unsigned __int64 v32; // [rsp+0h] [rbp-1B8h]
  _QWORD *v33; // [rsp+10h] [rbp-1A8h]
  __int64 v34; // [rsp+10h] [rbp-1A8h]
  __int64 *v35; // [rsp+10h] [rbp-1A8h]
  __int64 v36; // [rsp+18h] [rbp-1A0h]
  void *v37; // [rsp+20h] [rbp-198h] BYREF
  unsigned int v38; // [rsp+28h] [rbp-190h]
  void **v39; // [rsp+30h] [rbp-188h] BYREF
  void *v40[2]; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v41[2]; // [rsp+50h] [rbp-168h] BYREF
  unsigned __int8 *v42; // [rsp+60h] [rbp-158h] BYREF
  char v43; // [rsp+B8h] [rbp-100h]
  unsigned int v44; // [rsp+C0h] [rbp-F8h]
  char v45; // [rsp+C4h] [rbp-F4h]
  __int64 v46; // [rsp+D0h] [rbp-E8h] BYREF
  _QWORD *v47; // [rsp+D8h] [rbp-E0h]
  __int64 v48; // [rsp+E0h] [rbp-D8h]
  _OWORD v49[5]; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+138h] [rbp-80h]
  __int64 *v51; // [rsp+140h] [rbp-78h]
  __int64 v52; // [rsp+148h] [rbp-70h]
  unsigned int v53; // [rsp+150h] [rbp-68h]
  __int64 v54; // [rsp+158h] [rbp-60h] BYREF
  __int128 v55; // [rsp+160h] [rbp-58h]
  __int64 v56; // [rsp+170h] [rbp-48h]

  v10 = sub_183D350((__int64)a1);
  if ( v10 )
  {
    v11 = v10;
    v12 = sub_6F3470(a1[30] + 552, a4, a5);
    v47 = v49;
    v48 = 0x800000000LL;
    v49[4] = 0;
    v52 = v12;
    v46 = 0;
    v50 = 0;
    v51 = a1;
    v53 = a3;
    sub_B85890(&v54, v12);
    v55 = 0;
    v56 = 0x101010000LL;
    sub_1A395A0(&v46);
    v13 = sub_1A48440(a1, &v46, v11 + 48, 0);
    if ( (_BYTE)v13 )
    {
      if ( (_DWORD)v46 != 5 )
      {
        v14 = v47;
        if ( (_DWORD)v46 != 2
          || (v33 = v47, v15 = sub_16C47B0(*v47 & 0xFFFFFFFFFFFFFFF8LL),
                         v14 = v33,
                         (*(_BYTE *)(v15 + 28) & 0x7F) != 0x48) )
        {
          *(_WORD *)((char *)&v56 + 3) = 0;
          v32 = *v14 & 0xFFFFFFFFFFFFFFF8LL;
          sub_168B9F0((__int64)v40, a1 + 1, a3, 0x13A8u, 0);
          if ( v43 )
          {
            sub_AEC220(&v42, a4, a5);
          }
          else if ( v45 )
          {
            v28 = sub_168B9E0(v40);
            v29 = (void *)v41[0];
            if ( v41[0] )
              v29 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v41[0] + 32LL))(v41[0]);
            v37 = v29;
            v30 = sub_1587BC0(v28, (__int64 *)&v37, v24, v25, v26, v27);
            sub_AEC220((unsigned __int8 **)(*v30 + 32LL * v44 + 8), a4, a5);
          }
          sub_15F7200(v40);
          sub_168B9F0((__int64)v40, a1 + 1, *(_DWORD *)(v32 + 24), 0x67u, 0);
          sub_15F7200(v40);
          goto LABEL_8;
        }
        v34 = v15;
        sub_F22AA0((unsigned __int64 *)v40, v15);
        v16 = sub_1CDD580(a1, v40[0], a3, a6);
        v17 = v16;
        if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v19 = v34;
          v35 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
          v36 = v19;
          v13 = sub_1E63330(a1, a3, v16, 1, 0);
          if ( !(_BYTE)v13 )
          {
            v23 = sub_F63270(*v35, a3, v20, v21, v22, (__int64)v35);
            if ( v23 )
              v23 += 8;
            sub_1A48440(a1, a2, v23, 0);
            LOBYTE(v13) = *a2 == 5;
            goto LABEL_8;
          }
          if ( a7 )
          {
            sub_1839770(v40, (const __m128i *)(a1[31] + 17464), a6, *(_QWORD *)(v36 + 56));
            v39 = v40;
            v37 = off_2BC6C68;
            v38 = a7;
            sub_1E63C20(a1, a3, v17, 1, &v37);
            if ( v40[0] != v41 )
              operator delete(v40[0]);
            goto LABEL_8;
          }
        }
      }
    }
    else if ( a7 )
    {
      sub_168B9F0((__int64)v40, a1 + 1, a3, a7, 0);
      sub_1839770(&v37, (const __m128i *)(a1[31] + 17464), a6, 0);
      sub_1682AF0((__int64)v40, (__int64)&v37);
      if ( v37 != &v39 )
        operator delete(v37);
      sub_15F7200(v40);
    }
    v13 = 1;
LABEL_8:
    sub_169D230((__int64)&v46);
    return v13;
  }
  v13 = 1;
  if ( a7 )
  {
    sub_168B9F0((__int64)&v46, a1 + 1, a3, a7, 0);
    sub_1839770(v40, (const __m128i *)(a1[31] + 17464), a6, 0);
    sub_1682AF0((__int64)&v46, (__int64)v40);
    if ( v40[0] != v41 )
      operator delete(v40[0]);
    v13 = 1;
    sub_15F7200(&v46);
  }
  return v13;
}
