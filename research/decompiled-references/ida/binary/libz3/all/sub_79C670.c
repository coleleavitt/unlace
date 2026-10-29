void __fastcall sub_79C670(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 **v6; // r12
  __m128i v7; // kr00_16
  __int64 *v8; // r14
  int v9; // r13d
  __int64 v10; // r8
  __int64 v11; // rax
  void (__fastcall *v12)(__int64 *, __int64, __int64 *, __int64 *); // r9
  bool v13; // zf
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // r14
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // r8
  void (__fastcall *v30)(__int64, __int64, int *, __int64 *); // r9
  int v31; // [rsp-8h] [rbp-108h]
  __int64 v32; // [rsp+0h] [rbp-100h]
  __int64 v33; // [rsp+0h] [rbp-100h]
  int v34[2]; // [rsp+8h] [rbp-F8h]
  int v35[2]; // [rsp+8h] [rbp-F8h]
  __int64 v36; // [rsp+10h] [rbp-F0h]
  int v37; // [rsp+18h] [rbp-E8h]
  __int64 *v38; // [rsp+18h] [rbp-E8h]
  int v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-D8h]
  __int64 v42; // [rsp+28h] [rbp-D8h]
  char v43; // [rsp+30h] [rbp-D0h]
  __int64 v44; // [rsp+30h] [rbp-D0h]
  __int64 v46; // [rsp+38h] [rbp-C8h]
  int v47; // [rsp+40h] [rbp-C0h]
  int v48[2]; // [rsp+40h] [rbp-C0h]
  int v49[2]; // [rsp+40h] [rbp-C0h]
  unsigned int i; // [rsp+48h] [rbp-B8h]
  int v51; // [rsp+48h] [rbp-B8h]
  _DWORD *v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+50h] [rbp-B0h]
  __m128i *v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+60h] [rbp-A0h]
  int v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+68h] [rbp-98h]
  __int64 **v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  int v62; // [rsp+68h] [rbp-98h]
  int v63; // [rsp+68h] [rbp-98h]
  int v64; // [rsp+70h] [rbp-90h]
  int v65; // [rsp+78h] [rbp-88h] BYREF
  int v66; // [rsp+7Ch] [rbp-84h] BYREF
  int v67[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v68; // [rsp+88h] [rbp-78h] BYREF
  __m128i v69; // [rsp+90h] [rbp-70h] BYREF
  int v70[2]; // [rsp+A0h] [rbp-60h] BYREF
  void *v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  void *v73; // [rsp+B8h] [rbp-48h]
  __int64 v74; // [rsp+C0h] [rbp-40h] BYREF
  void *v75; // [rsp+C8h] [rbp-38h]

  v3 = *(_DWORD *)(a2 + 24);
  if ( v3 > 1 )
  {
    *(_QWORD *)v67 = sub_15D1F10(*(_QWORD *)(a2 + 32));
    v5 = *(_QWORD *)(*(_QWORD *)v67 + 24LL);
    if ( *(_DWORD *)(v5 + 24) || *(_QWORD *)(v5 + 32) >= (unsigned __int64)v3 )
    {
      if ( v3 > 0x20 )
      {
        v32 = *(_QWORD *)(a1 + 144);
        v18 = sub_15E2CC0(v32, "distinct-elems");
        v51 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        *(_QWORD *)v34 = *(_QWORD *)(a1 + 144);
        sub_180C5A0(v70, "");
        sub_180C5A0(&v69, "dist-f");
        v19 = sub_15E3D10(
                v34[0],
                (int)&v69,
                (int)v70,
                1,
                (int)v67,
                v51,
                1,
                v31,
                v32,
                v34[0],
                (int)v70,
                v37,
                v39,
                v41,
                v43,
                a3,
                v47,
                v51,
                v53,
                (int)&v69,
                v56,
                v59,
                v64,
                v65,
                v67[0],
                v68,
                v69.m128i_i32[0],
                v69.m128i_i32[2],
                v70[0],
                v71,
                v72,
                (__int64)v73);
        v49[0] = v19;
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        v22 = 0;
        LODWORD(v40) = v3;
        v38 = &v68;
        do
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)(a1 + 144);
            v68 = *(_QWORD *)(a2 + 8 * v22 + 32);
            v24 = sub_15DC610(
                    v23,
                    v49[0],
                    1,
                    (int)v38,
                    v20,
                    v21,
                    v33,
                    v35[0],
                    v36,
                    (int)v38,
                    v40,
                    v42,
                    v44,
                    v23,
                    v49[0],
                    v52);
            v61 = v24;
            if ( v24 )
              ++*(_DWORD *)(v24 + 8);
            v44 = *(_QWORD *)(a1 + 144);
            v25 = sub_15E1890(v44);
            v26 = v25;
            if ( v25 )
              ++*(_DWORD *)(v25 + 8);
            *(_BYTE *)(sub_79AF20(a1, v25, 0, nullptr) + 12) = 1;
            sub_79AD00(v55, a1, v61, v26);
            v42 = v69.m128i_i64[1];
            v27 = v69.m128i_i64[0];
            v28 = sub_79C480(a1, v69.m128i_i64[0]);
            v29 = *(_QWORD *)(a1 + 24);
            v65 = v28;
            v54 = v29;
            v58 = v28;
            sub_7A7070(v36, a1, 1, &v65);
            v66 = v58;
            v30 = *(void (__fastcall **)(__int64, __int64, int *, __int64 *))(*(_QWORD *)v54 + 16LL);
            v72 = *(_QWORD *)v70;
            v73 = v71;
            if ( (char *)v30 == (char *)sub_788610 )
            {
              v74 = *(_QWORD *)v70;
              v75 = v71;
              sub_11C4C20(v54, 1, &v66, &v74, v54, v30);
            }
            else
            {
              v30(v54, 1, &v66, &v72);
            }
            if ( v27 )
            {
              v13 = (*(_DWORD *)(v27 + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v42, v27);
            }
            if ( v26 )
            {
              v13 = (*(_DWORD *)(v26 + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v44, v26);
            }
            if ( v61 )
            {
              v57 = *(_DWORD *)(v61 + 8);
              *(_DWORD *)(v61 + 8) = v57 - 1;
              if ( v57 == 1 )
                break;
            }
            if ( ++v22 == v40 )
              goto LABEL_41;
          }
          ++v22;
          sub_15D7BC0(v46, v61);
        }
        while ( v22 != v40 );
LABEL_41:
        if ( *(_QWORD *)v49 )
        {
          v62 = *(_DWORD *)(*(_QWORD *)v49 + 8LL);
          *(_DWORD *)(*(_QWORD *)v49 + 8LL) = v62 - 1;
          if ( v62 == 1 )
            sub_15D7BC0(*(_QWORD *)v35, *(_QWORD *)v49);
        }
        if ( v52 )
        {
          v63 = v52[2];
          v52[2] = v63 - 1;
          if ( v63 == 1 )
            sub_15D7BC0(v33, v52);
        }
      }
      else
      {
        *(_QWORD *)v48 = 1;
        v6 = (__int64 **)(a3 + 8);
        for ( i = v3 - 2; i != -1; --i )
        {
          v60 = v6;
          sub_79AD00(&v69, a1, **(v6 - 1), **v6);
          while ( 1 )
          {
            v7 = v69;
            v66 = sub_79C480(a1, v69.m128i_i64[0]) ^ 1;
            v8 = *(__int64 **)(a1 + 24);
            v9 = v66;
            sub_7A7070(v70, a1, 1, &v66);
            v11 = *v8;
            LODWORD(v68) = v9;
            v12 = *(void (__fastcall **)(__int64 *, __int64, __int64 *, __int64 *))(v11 + 16);
            v72 = *(_QWORD *)v70;
            v73 = v71;
            if ( (char *)v12 == (char *)sub_788610 )
            {
              v74 = *(_QWORD *)v70;
              v75 = v71;
              sub_11C4C20(v8, 1, &v68, &v74, v10, v12);
            }
            else
            {
              v12(v8, 1, &v68, &v72);
            }
            if ( v7.m128i_i64[0] )
            {
              v13 = (*(_DWORD *)(v7.m128i_i64[0] + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v7.m128i_i64[1], v7.m128i_i64[0]);
            }
            if ( ++v60 == (__int64 **)(a3 + 8 * (*(_QWORD *)v48 + i - 1LL) + 16) )
              break;
            sub_79AD00(&v69, a1, **(v6 - 1), **v60);
          }
          ++*(_QWORD *)v48;
          ++v6;
        }
      }
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 24);
      v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(*(_QWORD *)v14 + 16LL);
      sub_7A6FF0(&v72, a1, 0, 0);
      if ( v15 == sub_788610 )
      {
        v74 = v72;
        v75 = v73;
        sub_11C4C20(v14, 0, 0, &v74, v16, v17);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))v15)(v14, 0, 0, &v72);
      }
    }
  }
}

