void __fastcall sub_1A1C9E0(unsigned int *a1, void **a2, _QWORD *a3, __int64 *a4, __int64 a5, __m128 a6, __m128 a7)
{
  void **v9; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  bool v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // r12
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 (__fastcall *v36)(__int64); // rdx
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // eax
  __int64 v44; // r13
  __int64 v45; // rdi
  int v46; // eax
  int v47; // ecx
  __int64 *v48; // r14
  unsigned int v49; // eax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 *v66; // [rsp+10h] [rbp-180h]
  __int64 *v67; // [rsp+10h] [rbp-180h]
  unsigned int v68; // [rsp+10h] [rbp-180h]
  __int64 v69; // [rsp+10h] [rbp-180h]
  __int64 v70; // [rsp+18h] [rbp-178h]
  bool v71; // [rsp+37h] [rbp-159h] BYREF
  unsigned int v72; // [rsp+38h] [rbp-158h] BYREF
  int v73; // [rsp+3Ch] [rbp-154h] BYREF
  __int64 v74; // [rsp+40h] [rbp-150h] BYREF
  _DWORD v75[2]; // [rsp+48h] [rbp-148h] BYREF
  char v76; // [rsp+50h] [rbp-140h]
  __int64 v77; // [rsp+54h] [rbp-13Ch]
  char v78; // [rsp+5Ch] [rbp-134h]
  void *v79; // [rsp+60h] [rbp-130h]
  __int64 v80; // [rsp+68h] [rbp-128h]
  _BYTE v81[24]; // [rsp+70h] [rbp-120h] BYREF
  __int64 v82; // [rsp+88h] [rbp-108h] BYREF
  char v83; // [rsp+90h] [rbp-100h]
  __int64 v84; // [rsp+94h] [rbp-FCh]
  char v85; // [rsp+9Ch] [rbp-F4h]
  void *v86; // [rsp+A0h] [rbp-F0h]
  __int64 v87; // [rsp+A8h] [rbp-E8h]
  _BYTE v88[24]; // [rsp+B0h] [rbp-E0h] BYREF
  _QWORD v89[2]; // [rsp+C8h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+D8h] [rbp-B8h]
  unsigned __int8 *v91; // [rsp+E8h] [rbp-A8h] BYREF
  char v92; // [rsp+140h] [rbp-50h]
  unsigned int v93; // [rsp+148h] [rbp-48h]
  char v94; // [rsp+14Ch] [rbp-44h]

  v9 = a2;
  v72 = 0;
  v73 = 0;
  sub_1A1BB30(a1, a2, (unsigned __int64)a3, a4, 1, (int *)&v72, a6, a7, (_QWORD *)a5, &v73, 1u);
  if ( a5 )
  {
    v89[0] = *a4;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v89[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) > 4u )
    {
      a2 = *(void ***)(*(_QWORD *)a1 + 248LL);
      v89[0] = sub_F67970(v89, (__int64)a2);
    }
    v16 = v89[0];
    if ( !*((_BYTE *)a1 + 9) )
      a3[1] = v89[0];
    *(_QWORD *)(a5 + 8) = v16;
  }
  if ( !*((_BYTE *)a1 + 8) )
  {
    if ( v72 < (unsigned int)((__int64)(a3[3] - a3[2]) >> 3) || *((_QWORD *)a1 + 5) )
    {
      a2 = nullptr;
      v17 = sub_F62670(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v12, v13, v14, v15);
      if ( !v17 )
      {
        v18 = *(_QWORD *)a1;
        v19 = *(_QWORD *)(*(_QWORD *)a1 + 232LL);
        if ( (*(_BYTE *)(v19 + 1) & 8) != 0 )
        {
          v17 = 1;
        }
        else if ( (*(_BYTE *)(v19 + 47) & 0x20) != 0 )
        {
          v17 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                             & 0xFFFFFFFFFFFFFFF0LL)
                                                 + 16LL)
              - 57 <= 1;
        }
        v20 = *((_BYTE *)a1 + 9) == 0;
        *((_BYTE *)a1 + 8) = v17;
        if ( !v20 )
          return;
        if ( v73 == 1
          && (a2 = (void **)*a4, v21 = **(_QWORD **)(a5 + 16), (v22 = sub_A72040(*(_QWORD **)(v18 + 248), *a4)) != 0)
          && (a2 = (void **)v22, !(unsigned int)sub_1A0A380(v21, v22)) )
        {
          v66 = (__int64 *)(*(_QWORD *)a1 + 8LL);
          v23 = sub_EEB7E0(*(_QWORD *)(a3[2] + 8LL * v72), (__int64)v66, *(double *)a6.m128_u64);
          sub_168B9F0((__int64)v89, v66, v23, !v17 ? 5548 : 3743, 0);
          a2 = (void **)&v82;
          v82 = sub_EEC8C0(*(_QWORD *)(a3[2] + 8LL * v72), (__int64)v66, *(double *)a6.m128_u64);
          sub_1587DB0((__int64)v89, &v82);
          sub_15F7200(v89);
        }
        else if ( sub_F58260(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          v67 = (__int64 *)(*(_QWORD *)a1 + 8LL);
          v43 = sub_EEB7E0(*(_QWORD *)(a3[2] + 8LL * v72), (__int64)v67, *(double *)a6.m128_u64);
          sub_168B9F0((__int64)v89, v67, v43, !v17 ? 5547 : 3742, 0);
          v44 = sub_1605D30((__int64)v89, a4);
          a2 = (void **)&v82;
          v82 = sub_EEC8C0(*(_QWORD *)(a3[2] + 8LL * v72), (__int64)a4, *(double *)a6.m128_u64);
          sub_1587DB0(v44, &v82);
          sub_15F7200(v89);
        }
        else
        {
          v70 = 0;
          v45 = *(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL);
          v46 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( (unsigned __int8)(v46 - 2) > 4u )
          {
            v70 = 1;
            if ( (unsigned int)(v46 - 57) > 1 )
            {
              v70 = 2;
              if ( !sub_F61140(v45, (__int64)a2, (unsigned int)(v46 - 2), v40, v41, v42) )
                v70 = !sub_F61420(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v62, v63, v64, v65) + 3LL;
            }
          }
          v47 = -!v17;
          v48 = (__int64 *)(*(_QWORD *)a1 + 8LL);
          v68 = (v47 & 0x70D) + 3741;
          v49 = sub_EEB7E0(*(_QWORD *)(a3[2] + 8LL * v72), (__int64)a2, *(double *)a6.m128_u64);
          v50 = (__int64)v48;
          sub_168B9F0((__int64)v89, v48, v49, v68, 0);
          if ( v92 )
          {
            v50 = v70;
            sub_AE9DF0(&v91, v70, 2u);
          }
          else if ( v94 )
          {
            v56 = sub_168B9E0(v89);
            v60 = v90;
            if ( v90 )
            {
              v69 = v56;
              v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 32LL))(v90);
              v56 = v69;
            }
            v82 = v60;
            v61 = sub_1587BC0(v56, &v82, v56, v57, v58, v59);
            v50 = v70;
            sub_AE9DF0((unsigned __int8 **)(*v61 + 32LL * v93 + 8), v70, 2u);
          }
          v51 = sub_EEC8C0(*(_QWORD *)(a3[2] + 8LL * v72), v50, *(double *)a6.m128_u64);
          a2 = (void **)&v82;
          v82 = v51;
          sub_1587DB0((__int64)v89, &v82);
          sub_15F7200(v89);
        }
      }
    }
    if ( !*((_BYTE *)a1 + 9) )
    {
      if ( sub_F61140(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v12, v13, v14, v15) )
      {
        v24 = a3[2];
        if ( (unsigned int)((a3[3] - v24) >> 3) == 1 && (**(_WORD **)v24 & 0x1FF) != 0x35 )
        {
          v52 = sub_EEC8C0((unsigned __int64)a3, (__int64)a2, *(double *)a6.m128_u64);
          v24 = *(_QWORD *)a1;
          v74 = v52;
          if ( *(_DWORD *)(v24 + 11320) <= *(_DWORD *)(v24 + 12596) )
          {
            v25 = *(unsigned int *)v9;
            if ( (unsigned int)v25 <= 0x15 && (((1LL << v25) & 0x28908E) != 0 || ((1LL << v25) & 0x40) != 0 && v9[1]) )
            {
              sub_168B9F0((__int64)v89, (__int64 *)(v24 + 8), v74, 0x19E6u, 0);
              v71 = sub_F58260(*(_QWORD *)((unsigned __int64)v9[2] & 0xFFFFFFFFFFFFFFF0LL));
              v53 = sub_1588420((__int64)v89, (unsigned __int8 *)&v71);
              v54 = sub_15884C0(v53, &v74);
              v86 = v88;
              LODWORD(v82) = v74;
              HIDWORD(v82) = v74;
              v84 = 0;
              v85 = 0;
              v87 = 0;
              v88[0] = 0;
              v88[16] = 0;
              v83 = 1;
              v55 = sub_1589170(v54, &v82);
              a2 = (void **)v75;
              v77 = 0;
              v78 = 0;
              v79 = v81;
              v80 = 0;
              v81[0] = 0;
              v81[16] = 0;
              v75[0] = HIDWORD(v74);
              v75[1] = HIDWORD(v74);
              v76 = 1;
              sub_1589170(v55, v75);
              if ( v79 != v81 )
                operator delete(v79);
              if ( v86 != v88 )
                operator delete(v86);
              sub_15F7200(v89);
            }
          }
        }
      }
      v28 = sub_F63270(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v24, v25, v26, v27);
      v33 = v28;
      if ( v28 )
      {
        sub_7052B0((__int64 *)(v28[13] + 96LL), v28[13], v29, v30, v31, v32);
        if ( (*(_BYTE *)v33[16] & 1) != 0 )
        {
          v34 = *(_QWORD *)a1;
          if ( (unsigned int)((__int64)(a3[3] - a3[2]) >> 3) )
          {
LABEL_31:
            v38 = sub_BFB1C0((unsigned __int64)a3);
            sub_168B9F0((__int64)v89, (__int64 *)(v34 + 8), v38, 0x1A5Du, 0);
            v82 = sub_EEC8C0((unsigned __int64)a3, v34 + 8, *(double *)a6.m128_u64);
            v39 = sub_1587DB0((__int64)v89, &v82);
            sub_1605D30(v39, a4);
            sub_15F7200(v89);
            return;
          }
          v35 = sub_1A69F50(*(_QWORD *)a1, v33);
          if ( !v35
            || ((v36 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL), v36 != sub_B94CC0)
              ? (v37 = v36(v35))
              : (v37 = sub_B709C0(v35)),
                (*(_BYTE *)(v37 + 82) & 0x40) != 0) )
          {
            v34 = *(_QWORD *)a1;
            goto LABEL_31;
          }
        }
      }
    }
  }
}
