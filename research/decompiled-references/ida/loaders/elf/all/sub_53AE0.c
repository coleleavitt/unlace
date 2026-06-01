unsigned __int64 __fastcall sub_53AE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rax
  int *v10; // rdx
  int *v11; // r13
  bool v12; // bp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rax
  _QWORD *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rsi
  unsigned int v26; // ecx
  int v27; // eax
  __int64 v28; // rdi
  __int64 *v29; // rdx
  unsigned __int64 v30; // r12
  __int64 v31; // rbp
  unsigned __int64 v32; // r13
  unsigned __int64 (__fastcall *v33)(__int64, __int64, __int64); // rax
  __int64 v34; // r8
  _QWORD *v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 *v39; // r15
  _QWORD *v40; // r8
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rsi
  unsigned int v44; // ecx
  int v45; // eax
  __int64 v46; // rdi
  __int64 *v47; // rdx
  unsigned __int16 v48; // dx
  char v49; // dl
  __int64 v50; // r13
  _QWORD **v51; // r12
  __int64 v52; // rbp
  void *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  _QWORD *v61; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // [rsp+8h] [rbp-140h]
  __int64 v67; // [rsp+28h] [rbp-120h]
  _QWORD *v68; // [rsp+30h] [rbp-118h]
  __int64 v69; // [rsp+38h] [rbp-110h]
  __int64 v70; // [rsp+58h] [rbp-F0h]
  __int16 v71; // [rsp+6Eh] [rbp-DAh] BYREF
  __int64 v72; // [rsp+70h] [rbp-D8h] BYREF
  unsigned __int16 *v73; // [rsp+78h] [rbp-D0h] BYREF
  _BYTE v74[2]; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int16 v75; // [rsp+82h] [rbp-C6h] BYREF
  unsigned int v76; // [rsp+84h] [rbp-C4h] BYREF
  unsigned int v77; // [rsp+88h] [rbp-C0h] BYREF
  unsigned int v78; // [rsp+8Ch] [rbp-BCh] BYREF
  _BYTE v79[4]; // [rsp+90h] [rbp-B8h] BYREF
  char v80[2]; // [rsp+94h] [rbp-B4h] BYREF
  __int16 v81; // [rsp+96h] [rbp-B2h] BYREF
  unsigned int v82; // [rsp+98h] [rbp-B0h] BYREF
  unsigned int v83; // [rsp+9Ch] [rbp-ACh] BYREF
  char v84[8]; // [rsp+A0h] [rbp-A8h] BYREF
  int v85; // [rsp+A8h] [rbp-A0h] BYREF
  _QWORD *v86; // [rsp+B0h] [rbp-98h]
  int *v87; // [rsp+B8h] [rbp-90h]
  int *v88; // [rsp+C0h] [rbp-88h]
  __int64 v89; // [rsp+C8h] [rbp-80h]
  char v90[8]; // [rsp+D0h] [rbp-78h] BYREF
  int v91; // [rsp+D8h] [rbp-70h] BYREF
  void *v92; // [rsp+E0h] [rbp-68h]
  int *v93; // [rsp+E8h] [rbp-60h]
  int *v94; // [rsp+F0h] [rbp-58h]
  __int64 v95; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v96; // [rsp+108h] [rbp-40h]

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 472);
  v96 = __readfsqword(0x28u);
  v67 = a2;
  v8 = qlseek(v6, 0, 1) - *(_QWORD *)(v5 + 480);
  v87 = &v85;
  v88 = &v85;
  v70 = v8;
  v65 = a2 + a3;
  v85 = 0;
  v86 = nullptr;
  v89 = 0;
  if ( v67 + a3 <= v67 )
  {
LABEL_63:
    v61 = nullptr;
  }
  else
  {
    while ( 1 )
    {
      v9 = sub_30DC0((__int64)v84, v67);
      v11 = v10;
      if ( !v10 )
        break;
      v12 = v10 == &v85 || v9 != nullptr;
      if ( !v12 )
        v12 = v67 < *((_QWORD *)v10 + 4);
      v13 = operator new(0x28u);
      *(_QWORD *)(v13 + 32) = v67;
      std::_Rb_tree_insert_and_rebalance(v12, v13, v11, &v85);
      v14 = *(_QWORD *)(v5 + 480);
      v15 = *(_QWORD *)(v5 + 472);
      ++v89;
      if ( qlseek(v15, v67 + v14, 0) == -1 )
        break;
      v16 = *(_QWORD *)(a1 + 8);
      if ( (int)sub_396B0(v16, (__int64)v74, 2, 1) < 0
        || (int)sub_396B0(v16, (__int64)&v75, 2, 1) < 0
        || (int)sub_396B0(v16, (__int64)&v76, 4, 1) < 0
        || (int)sub_396B0(v16, (__int64)&v77, 4, 1) < 0
        || (int)sub_396B0(v16, (__int64)&v78, 4, 1) < 0 )
      {
        break;
      }
      v69 = v3 + 1;
      v17 = **(__int64 (__fastcall ***)(__int64, __int64, __int64))a1;
      if ( v17 == sub_464B0 )
      {
        v18 = *(_QWORD **)(a1 + 16);
        v19 = v18[4];
        v20 = v18[3];
        if ( v18[5] < (unsigned __int64)(v19 + 1) )
        {
          v64 = qvector_reserve(v18 + 3, v20, v19 + 1, 40);
          v18[3] = v64;
          v19 = v18[4];
          v20 = v64;
        }
        v21 = v20 + 40 * v19;
        *(_QWORD *)(v21 + 16) = 0;
        *(_OWORD *)(v21 + 24) = 0;
        ++v18[4];
        *(_QWORD *)v21 = v67 - a2;
        *(_QWORD *)(v21 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
        v22 = *(_QWORD **)(a1 + 16);
        v23 = v22[11];
        v24 = v22[10];
        if ( v22[12] < (unsigned __int64)(v23 + 1) )
        {
          v63 = qvector_reserve(v22 + 10, v24, v23 + 1, 24);
          v22[10] = v63;
          v23 = v22[11];
          v24 = v63;
        }
        v25 = v24 + 24 * v23;
        *(_QWORD *)v25 = 0;
        v26 = v76;
        *(_OWORD *)(v25 + 8) = 0;
        ++v22[11];
        v27 = *(_DWORD *)(a1 + 24);
        v28 = *(_QWORD *)(a1 + 8);
        if ( v27 == 1 )
        {
          v29 = (__int64 *)(v28 + 320);
        }
        else
        {
          if ( v27 != 2 )
          {
            if ( !under_debugger )
              interr(20086);
            goto LABEL_66;
          }
          v29 = (__int64 *)(v28 + 352);
        }
        sub_461E0(v28, (__int64 *)v25, v29, v26);
      }
      else
      {
        ((void (__fastcall *)(__int64, _BYTE *, __int64, __int64))v17)(a1, v74, v67 - a2, v3);
      }
      v30 = 0;
      v91 = 0;
      v92 = nullptr;
      v95 = 0;
      v31 = v67 + v77;
      v93 = &v91;
      v94 = &v91;
      v72 = v31;
      if ( v31 < v65 )
      {
        while ( 1 )
        {
          sub_531A0((__int64)v90, &v72);
          if ( !v49 )
            break;
          if ( v30 >= v75 )
            break;
          if ( qlseek(*(_QWORD *)(v5 + 472), v31 + *(_QWORD *)(v5 + 480), 0) == -1 )
            break;
          v50 = *(_QWORD *)(a1 + 8);
          if ( (int)sub_396B0(v50, (__int64)v79, 4, 1) < 0
            || (int)sub_396B0(v50, (__int64)v80, 2, 1) < 0
            || (int)sub_396B0(v50, (__int64)&v81, 2, 1) < 0
            || (int)sub_396B0(v50, (__int64)&v82, 4, 1) < 0
            || (int)sub_396B0(v50, (__int64)&v83, 4, 1) < 0 )
          {
            break;
          }
          v32 = v30 + 1;
          v33 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
          v34 = v31 - a2;
          if ( v33 == sub_46660 )
          {
            v35 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL)
                           + 40LL * *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL)
                           - 40);
            v36 = v35[3];
            v37 = v35[2];
            v38 = v36 + 1;
            if ( v35[4] < (unsigned __int64)(v36 + 1) )
            {
              v55 = qvector_reserve(v35 + 2, v37, v36 + 1, 24);
              v36 = v35[3];
              v34 = v31 - a2;
              v35[2] = v55;
              v37 = v55;
              v38 = v36 + 1;
            }
            v35[3] = v38;
            v39 = (__int64 *)(v37 + 24 * v36);
            *v39 = v34;
            v39[1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
            v40 = *(_QWORD **)(a1 + 16);
            v41 = v40[14];
            v42 = v40[13];
            if ( v40[15] < (unsigned __int64)(v41 + 1) )
            {
              v68 = *(_QWORD **)(a1 + 16);
              v54 = qvector_reserve(v40 + 13, v42, v41 + 1, 24);
              v40 = v68;
              v42 = v54;
              v68[13] = v54;
              v41 = v68[14];
            }
            v43 = v42 + 24 * v41;
            *(_QWORD *)v43 = 0;
            *(_OWORD *)(v43 + 8) = 0;
            v44 = v82;
            ++v40[14];
            v45 = *(_DWORD *)(a1 + 24);
            v46 = *(_QWORD *)(a1 + 8);
            if ( v45 == 1 )
            {
              v47 = (__int64 *)(v46 + 320);
            }
            else
            {
              if ( v45 != 2 )
              {
                if ( !under_debugger )
                {
                  interr(20086);
                  goto LABEL_63;
                }
LABEL_66:
                BUG();
              }
              v47 = (__int64 *)(v46 + 352);
            }
            sub_461E0(v46, (__int64 *)v43, v47, v44);
            v48 = v81 & 0x7FFF;
            v71 = v81 & 0x7FFF;
            if ( (v81 & 0x7FFF) != 0 )
            {
              v56 = *(_QWORD *)(a1 + 16);
              v57 = *(_QWORD *)(v56 + 144);
              v58 = v56 + 136;
              if ( !v57 )
                goto LABEL_54;
              do
              {
                while ( 1 )
                {
                  v59 = *(_QWORD *)(v57 + 16);
                  v60 = *(_QWORD *)(v57 + 24);
                  if ( *(_WORD *)(v57 + 32) < v48 )
                    break;
                  v58 = v57;
                  v57 = *(_QWORD *)(v57 + 16);
                  if ( !v59 )
                    goto LABEL_52;
                }
                v57 = *(_QWORD *)(v57 + 24);
              }
              while ( v60 );
LABEL_52:
              if ( v58 == v56 + 136 || v48 < *(_WORD *)(v58 + 32) )
              {
LABEL_54:
                v73 = (unsigned __int16 *)&v71;
                v58 = sub_310C0((_QWORD *)(v56 + 128), v58, &v73);
              }
              *(_QWORD *)(v58 + 40) = v35[1];
              *(_QWORD *)(v58 + 48) = v39[1];
            }
          }
          else
          {
            ((void (__fastcall *)(__int64, _BYTE *, __int64, unsigned __int64))v33)(a1, v79, v31 - a2, v30);
          }
          v31 += v83;
          v72 = v31;
          if ( v31 >= v65 )
            break;
          v30 = v32;
        }
        v51 = (_QWORD **)v92;
        v52 = v78;
        if ( v92 )
        {
          do
          {
            sub_32A20(v51[3]);
            v53 = v51;
            v51 = (_QWORD **)v51[2];
            operator delete(v53, 0x28u);
          }
          while ( v51 );
        }
        v67 += v52;
      }
      else
      {
        v67 += v78;
      }
      if ( v65 <= v67 )
        break;
      v3 = v69;
    }
    v61 = v86;
  }
  sub_32A20(v61);
  qlseek(*(_QWORD *)(v5 + 472), *(_QWORD *)(v5 + 480) + v70, 0);
  return v96 - __readfsqword(0x28u);
}

