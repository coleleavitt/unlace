__int64 __fastcall sub_18ADF40(__int64 *a1, __int64 a2, _QWORD *a3, int a4, __m128 a5)
{
  __int64 v5; // r14
  __int64 *v7; // rbp
  __int64 result; // rax
  char v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbx
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rdx
  unsigned __int64 v33; // rax
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // rdi
  __int64 *v39; // r13
  __int64 *v40; // rbx
  _QWORD *v41; // rbp
  __int64 v42; // rax
  __int64 v43; // r12
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // r14
  __int64 (__fastcall *v48)(__int64); // rax
  __int64 v49; // rdx
  __int64 *ptr; // [rsp+0h] [rbp-198h]
  __int64 v52; // [rsp+20h] [rbp-178h]
  unsigned __int64 v53; // [rsp+28h] [rbp-170h]
  __int64 v54; // [rsp+28h] [rbp-170h]
  __int64 v55; // [rsp+28h] [rbp-170h]
  __int64 *v56; // [rsp+40h] [rbp-158h]
  __int64 *v57; // [rsp+40h] [rbp-158h]
  __int64 *v58; // [rsp+48h] [rbp-150h]
  _QWORD *v59; // [rsp+50h] [rbp-148h]
  __int64 v60; // [rsp+58h] [rbp-140h]
  unsigned __int64 v61; // [rsp+60h] [rbp-138h] BYREF
  unsigned __int64 v62; // [rsp+68h] [rbp-130h] BYREF
  _BYTE v63[8]; // [rsp+70h] [rbp-128h] BYREF
  __int64 v64; // [rsp+78h] [rbp-120h]
  unsigned int v65; // [rsp+88h] [rbp-110h]
  __int64 *v66; // [rsp+90h] [rbp-108h]
  int v67; // [rsp+98h] [rbp-100h]
  __int64 v68; // [rsp+A0h] [rbp-F8h] BYREF
  __m128 v69; // [rsp+D0h] [rbp-C8h] BYREF
  unsigned int v70; // [rsp+E8h] [rbp-B0h]
  void *v71; // [rsp+F0h] [rbp-A8h]
  unsigned int v72; // [rsp+F8h] [rbp-A0h]
  char v73; // [rsp+100h] [rbp-98h] BYREF

  v5 = a2;
  v7 = a1;
  result = sub_168B6C0((__int64)a1);
  v52 = result;
  if ( a2 )
  {
    v9 = 0;
    sub_18ADCB0((__int64)v63, *a1, a2);
    v13 = v66;
    ptr = &v66[v67];
    if ( v66 != ptr )
    {
      do
      {
        v14 = *v13;
        if ( !v9 )
        {
          v15 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
            v15 = *(_QWORD *)v15;
          if ( (*(_BYTE *)(v15 + 8) & 0x7F) == 0x13
            || ((v16 = *(_QWORD *)(sub_BA85D0(*v13) + 96),
                 v17 = *(__int64 (__fastcall **)(__int64))(*a3 + 32LL),
                 v17 != sub_A55E60)
              ? (v55 = v16, v18 = v17((__int64)a3), v16 = v55)
              : (v18 = a3[12]),
                v16 != v18 || (*(_BYTE *)(v14 + 60) & 0x10) != 0) )
          {
            v9 = 1;
            sub_189CEB0(v7, a2, v14, v10, v11, v12);
          }
          else
          {
            v31 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
              v31 = *(_QWORD *)v31;
            if ( (*(_BYTE *)(v31 + 8) & 0x7Fu) - 21 <= 1 )
            {
              v69.m128_u64[0] = *(_QWORD *)(a2 + 40);
              v53 = sub_1897570((__int64)(v7 + 8), (__int64 *)&v69);
              v32 = (_QWORD *)(v7[8] + 40LL * *((unsigned int *)v7 + 20));
              sub_171EC50(&v69, v32, v32, (__int64)(v7 + 8), 1);
              if ( v69.m128_u64[0] != v53 )
              {
                v33 = v53 + 24;
                if ( (*(_BYTE *)(a2 + 58) & 2) != 0 )
                  v33 = v53 + 8;
                v34 = (*(__int64 *)(v33 + 8) >> 1) & 3;
                if ( v34 )
                {
                  if ( v34 != 1 )
                    goto LABEL_53;
                  v35 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
                    v35 = *(_QWORD *)v35;
                  if ( (*(_BYTE *)(v35 + 8) & 0x7F) != 0x16 )
                  {
LABEL_53:
                    sub_18ADCB0((__int64)&v69, *v7, v14);
                    v38 = (char *)v71;
                    if ( (char *)v71 + 8 * v72 != v71 )
                    {
                      v39 = (__int64 *)((char *)v71 + 8 * v72);
                      v57 = v13;
                      v40 = (__int64 *)v71;
                      v58 = v7;
                      v41 = a3;
                      v54 = v14;
                      do
                      {
                        v43 = *v40;
                        v44 = *(_QWORD *)(*v40 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                        v45 = *(_QWORD *)(*v40 + 16) & 4LL;
                        if ( (*(_QWORD *)(*v40 + 16) & 4) != 0 )
                          v44 = *(_QWORD *)v44;
                        if ( (*(_BYTE *)(v44 + 8) & 0x7F) == 0x13
                          || ((v46 = sub_BA85D0(*v40),
                               v45 = (__int64)sub_A55E60,
                               v47 = *(_QWORD *)(v46 + 96),
                               v48 = *(__int64 (__fastcall **)(__int64))(*v41 + 32LL),
                               v48 == sub_A55E60)
                            ? (v42 = v41[12])
                            : (v42 = v48((__int64)v41)),
                              v47 != v42) )
                        {
                          v49 = v43;
                          a3 = v41;
                          v7 = v58;
                          v14 = v54;
                          v13 = v57;
                          v9 = 1;
                          sub_189CEB0(v58, a2, v49, v45, v36, v37);
                          *(_BYTE *)(v54 + 60) |= 0x10u;
                          v38 = (char *)v71;
                          goto LABEL_66;
                        }
                        ++v40;
                      }
                      while ( v39 != v40 );
                      a3 = v41;
                      v9 = 0;
                      v14 = v54;
                      v13 = v57;
                      v7 = v58;
                      v38 = (char *)v71;
                    }
LABEL_66:
                    if ( v38 != &v73 )
                      free(v38);
                    operator delete(v69.m128_u64[1], 8LL * v70, 8);
                  }
                }
              }
            }
          }
        }
        if ( a4 != 1 && (*(_BYTE *)(v14 + 60) & 2) != 0 )
          *(_BYTE *)(a2 + 60) |= 2u;
        sub_17C6CF0((__int64 *)*v7, a2, v14);
        if ( (*(_BYTE *)(a2 + 29) & 2) == 0 || (*(_BYTE *)(v14 + 29) & 2) == 0 )
        {
          v19 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v19 = *(_QWORD *)v19;
          if ( ((*(_BYTE *)(v19 + 8) + 108) & 0x7Fu) <= 1 )
          {
            v20 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
              v20 = *(_QWORD *)v20;
            sub_189EFB0(v7, a2, v14, (*(_BYTE *)(v20 + 8) & 0x7F) == 19, a5);
          }
          if ( a3 )
          {
            v21 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
              v21 = *(_QWORD *)v21;
            if ( (_QWORD *)v21 != a3 + 6 && (*(_BYTE *)(v21 + 8) & 0x7F) == 0x14 && (*(_BYTE *)(v14 + 29) & 2) == 0 )
            {
              v11 = *(_QWORD *)(a2 + 96);
              v22 = *(_QWORD *)(v14 + 96);
              v23 = v11 + 8LL * *(unsigned int *)(a2 + 104);
              if ( v22 + 8LL * *(unsigned int *)(v14 + 104) != v22 && v23 != v11 )
              {
                v60 = v14;
                v24 = v22 + 8LL * *(unsigned int *)(v14 + 104);
                v56 = v13;
                v25 = v22;
                v59 = a3;
                v26 = *(_QWORD *)(a2 + 96);
                do
                {
                  v27 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)v26 + 48LL) & 0xFFFFFFFFFFFFFFF0LL];
                  v61 = v27 & 0xFFFFFFFFFFFFFFF8LL
                      | ((unsigned __int8)v27 | (unsigned __int8)*(_QWORD *)(*(_QWORD *)v26 + 48LL)) & 7;
                  v28 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)v25 + 48LL) & 0xFFFFFFFFFFFFFFF0LL];
                  v62 = v28 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v28 | *(_BYTE *)(*(_QWORD *)v25 + 48LL)) & 7;
                  if ( !sub_AAC110(v52, v61, v62, 0) )
                  {
                    v13 = v56;
                    v29 = *(_DWORD *)(*(_QWORD *)v26 + 24LL);
                    a3 = v59;
                    sub_168B9F0((__int64)&v69, v7, v29, 0x1638u, 0);
                    v30 = sub_1605D30((__int64)&v69, (__int64 *)&v61);
                    sub_1605D30(v30, (__int64 *)&v62);
                    sub_15F7200(&v69);
                    sub_168B9F0((__int64)&v69, v7, *(_DWORD *)(v60 + 24), 0x70u, 0);
                    sub_15F7200(&v69);
                    goto LABEL_28;
                  }
                  v26 += 8;
                  v25 += 8;
                }
                while ( v26 != v23 && v25 != v24 );
                v13 = v56;
                a3 = v59;
              }
            }
          }
        }
LABEL_28:
        ++v13;
      }
      while ( ptr != v13 );
      v5 = a2;
      ptr = v66;
    }
    *(_BYTE *)(v5 + 60) = *(_BYTE *)(v5 + 60) & 0xEF | (16 * v9);
    if ( ptr != &v68 )
      free(ptr);
    return operator delete(v64, 8LL * v65, 8);
  }
  return result;
}
