void __fastcall sub_18DB2B0(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, int a5, __m128i a6, double a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edx
  int v18; // eax
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rbp
  size_t v23; // rax
  __int64 v24; // rbp
  size_t v25; // rax
  unsigned __int64 v26; // rbp
  int v27; // ebx
  int v28; // eax
  int v29; // ebp
  size_t v30; // rax
  __int64 v31; // rbx
  size_t v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // [rsp+8h] [rbp-180h]
  unsigned __int16 *v41; // [rsp+10h] [rbp-178h]
  int v42; // [rsp+10h] [rbp-178h]
  int v43; // [rsp+10h] [rbp-178h]
  __int64 *v44; // [rsp+18h] [rbp-170h]
  int v45; // [rsp+24h] [rbp-164h]
  bool v46; // [rsp+3Fh] [rbp-149h] BYREF
  __int64 v47[3]; // [rsp+40h] [rbp-148h] BYREF
  void *v48; // [rsp+58h] [rbp-130h]
  _BYTE v49[24]; // [rsp+68h] [rbp-120h] BYREF
  __int64 v50; // [rsp+80h] [rbp-108h] BYREF
  char v51; // [rsp+88h] [rbp-100h]
  void *v52; // [rsp+98h] [rbp-F0h]
  _BYTE v53[24]; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v54[2]; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-B8h]
  __int64 v56[11]; // [rsp+E0h] [rbp-A8h] BYREF
  char v57; // [rsp+138h] [rbp-50h]
  unsigned int v58; // [rsp+140h] [rbp-48h]
  char v59; // [rsp+144h] [rbp-44h]

  v13 = sub_BFB840(*a2 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*(_WORD *)v13 & 0x1FF) == 4
    && *(_BYTE *)(v13 + 2) >> 3 == 9
    && !sub_BFF300((unsigned __int16 *)(*a3 & 0xFFFFFFFFFFFFFFFELL), 1, v10, v11, v12) )
  {
    v41 = (unsigned __int16 *)sub_BFB840(*(_QWORD *)(v13 + 16));
    if ( !sub_BFF300(v41, 1, v14, v15, v16) )
    {
      v17 = *(_DWORD *)(v13 + 4);
      v44 = (__int64 *)(a1 + 8);
      v46 = (unsigned int)(a5 - 16) <= 2;
      sub_168B9F0((__int64)v54, (__int64 *)(a1 + 8), v17, 0x1BA5u, 0);
      if ( v57 )
      {
        LODWORD(v50) = a4;
        HIDWORD(v50) = a4;
        v51 = 1;
        sub_AEC610(v56, &v50);
      }
      else if ( v59 )
      {
        v33 = sub_168B9E0(v54);
        v37 = v55;
        if ( v55 )
        {
          v40 = v33;
          v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
          v33 = v40;
        }
        v47[0] = v37;
        v38 = sub_1587BC0(v33, v47, v33, v34, v35, v36);
        v39 = *v38 + 32LL * v58;
        LODWORD(v50) = a4;
        HIDWORD(v50) = a4;
        v51 = 1;
        sub_AEC610((__int64 *)(v39 + 8), &v50);
      }
      sub_15890D0((__int64)v54, (unsigned __int8 *)&v46);
      sub_15F7200(v54);
      v42 = sub_EEB7E0((unsigned __int64)v41, (__int64)&v46, *(double *)a6.m128i_i64);
      v18 = sub_EEC140(*a3 & 0xFFFFFFFFFFFFFFFELL);
      v19 = sub_15F0EF0(a1, v18, 0, a6, a7);
      v20 = v19 == 0;
      v45 = v19;
      v21 = 0;
      if ( !v20 )
        v21 = v42;
      v43 = v21;
      sub_168B9F0((__int64)v54, v44, *(_DWORD *)(v13 + 4), 0x17B9u, 0);
      v22 = sub_15890D0((__int64)v54, (unsigned __int8 *)&v46);
      v23 = j__strlen("(");
      sub_9EC740((__int64)v47, v43, "(", v23, 0);
      v24 = sub_1589170(v22, v47);
      v25 = j__strlen(")");
      sub_9EC740((__int64)&v50, v45, ")", v25, 0);
      sub_1589170(v24, &v50);
      if ( v52 != v53 )
        operator delete(v52);
      if ( v48 != v49 )
        operator delete(v48);
      sub_15F7200(v54);
      v26 = *a2 & 0xFFFFFFFFFFFFFFFELL;
      v27 = sub_EEB7E0(v26, (__int64)&v50, *(double *)a6.m128i_i64);
      v28 = sub_EEC140(v26);
      v29 = sub_15F0EF0(a1, v28, 0, a6, a7);
      if ( !v29 )
        v27 = 0;
      sub_168B9F0((__int64)v54, v44, *(_DWORD *)(v13 + 4), 0x17BAu, 0);
      v30 = j__strlen("(");
      sub_9EC740((__int64)v47, v27, "(", v30, 0);
      v31 = sub_1589170((__int64)v54, v47);
      v32 = j__strlen(")");
      sub_9EC740((__int64)&v50, v29, ")", v32, 0);
      sub_1589170(v31, &v50);
      if ( v52 != v53 )
        operator delete(v52);
      if ( v48 != v49 )
        operator delete(v48);
      sub_15F7200(v54);
    }
  }
}
