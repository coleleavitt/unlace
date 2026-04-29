unsigned __int64 __fastcall sub_53260(struct _Unwind_Exception *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // r13
  __int64 v6; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rax
  int *v10; // rdx
  int *v11; // r14
  bool v12; // bp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  _Unwind_Exception_Cleanup_Fn v16; // rbp
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rax
  __int64 *private_1; // rbp
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // rbp
  unsigned __int64 v24; // r15
  unsigned __int64 (__fastcall *v25)(__int64, unsigned int *, __int64); // rax
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // r12
  _QWORD *v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rsi
  unsigned int v36; // ecx
  int v37; // eax
  _Unwind_Exception_Cleanup_Fn v38; // rdi
  __int64 *v39; // rdx
  unsigned __int16 v40; // dx
  char v41; // dl
  _Unwind_Exception_Cleanup_Fn v42; // r15
  _QWORD **v43; // r12
  __int64 v44; // rbp
  void *v45; // rdi
  _QWORD *v46; // rdi
  __int64 v48; // rax
  _QWORD *v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rsi
  unsigned int v53; // ecx
  int private_2; // eax
  _Unwind_Exception_Cleanup_Fn v55; // rdi
  __int64 *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // [rsp+8h] [rbp-140h]
  __int64 v68; // [rsp+28h] [rbp-120h]
  _Unwind_Word v69; // [rsp+30h] [rbp-118h]
  _Unwind_Word v70; // [rsp+30h] [rbp-118h]
  __int64 v71; // [rsp+38h] [rbp-110h]
  __int64 v72; // [rsp+58h] [rbp-F0h]
  unsigned __int16 v73; // [rsp+66h] [rbp-E2h] BYREF
  __int64 v74; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int16 *v75; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v76; // [rsp+78h] [rbp-D0h] BYREF
  unsigned int v77; // [rsp+7Ch] [rbp-CCh] BYREF
  _BYTE v78[2]; // [rsp+80h] [rbp-C8h] BYREF
  int v79; // [rsp+82h] [rbp-C6h] BYREF
  unsigned __int16 v80; // [rsp+86h] [rbp-C2h] BYREF
  char v81[4]; // [rsp+88h] [rbp-C0h] BYREF
  unsigned int v82; // [rsp+8Ch] [rbp-BCh] BYREF
  unsigned int v83[4]; // [rsp+90h] [rbp-B8h] BYREF
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
  exception_cleanup = a1->exception_cleanup;
  v6 = *((_QWORD *)exception_cleanup + 59);
  v96 = __readfsqword(0x28u);
  v68 = a2;
  v8 = qlseek(v6, 0, 1) - *((_QWORD *)exception_cleanup + 60);
  v87 = &v85;
  v88 = &v85;
  v72 = v8;
  v66 = a2 + a3;
  v85 = 0;
  v86 = nullptr;
  v89 = 0;
  if ( v68 + a3 <= v68 )
  {
    v46 = nullptr;
  }
  else
  {
    while ( 1 )
    {
      v9 = sub_30DC0((__int64)v84, v68);
      v11 = v10;
      if ( !v10 )
        break;
      v12 = v10 == &v85 || v9 != nullptr;
      if ( !v12 )
        v12 = v68 < *((_QWORD *)v10 + 4);
      v13 = operator new(0x28u);
      *(_QWORD *)(v13 + 32) = v68;
      std::_Rb_tree_insert_and_rebalance(v12, v13, v11, &v85);
      v14 = *((_QWORD *)exception_cleanup + 60);
      v15 = *((_QWORD *)exception_cleanup + 59);
      ++v89;
      if ( qlseek(v15, v68 + v14, 0) == -1 )
        break;
      v16 = a1->exception_cleanup;
      if ( (int)sub_396B0((__int64)v16, (__int64)v78, 2, 1) < 0
        || (int)sub_396B0((__int64)v16, (__int64)&v79, 2, 1) < 0
        || (int)sub_396B0((__int64)v16, (__int64)&v79 + 2, 2, 1) < 0
        || (int)sub_396B0((__int64)v16, (__int64)&v80, 2, 1) < 0
        || (int)sub_396B0((__int64)v16, (__int64)v81, 4, 1) < 0
        || (int)sub_396B0((__int64)v16, (__int64)&v82, 4, 1) < 0
        || (int)sub_396B0((__int64)v16, (__int64)v83, 4, 1) < 0 )
      {
        break;
      }
      v71 = v3 + 1;
      v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64))a1->exception_class;
      if ( v17 == sub_30BB0 )
      {
        private_1 = (__int64 *)a1->private_1;
        v19 = private_1[1];
        v20 = *private_1;
        if ( private_1[2] < (unsigned __int64)(v19 + 1) )
        {
          v65 = qvector_reserve(a1->private_1, v20, v19 + 1, 40);
          *private_1 = v65;
          v19 = private_1[1];
          v20 = v65;
        }
        v21 = v20 + 40 * v19;
        *(_QWORD *)(v21 + 8) = 0;
        *(_OWORD *)(v21 + 16) = 0;
        ++private_1[1];
        *(_QWORD *)v21 = v68 - a2;
        *(_DWORD *)(v21 + 32) = v79;
      }
      else
      {
        ((void (__fastcall *)(struct _Unwind_Exception *, _BYTE *, __int64, __int64))v17)(a1, v78, v68 - a2, v3);
      }
      v22 = 0;
      v91 = 0;
      v92 = nullptr;
      v95 = 0;
      v23 = v68 + v82;
      v93 = &v91;
      v94 = &v91;
      v74 = v23;
      if ( v23 < v66 )
      {
        while ( 1 )
        {
          sub_531A0((__int64)v90, &v74);
          if ( !v41 )
            break;
          if ( v22 >= v80 )
            break;
          if ( qlseek(*((_QWORD *)exception_cleanup + 59), v23 + *((_QWORD *)exception_cleanup + 60), 0) == -1 )
            break;
          v42 = a1->exception_cleanup;
          if ( (int)sub_396B0((__int64)v42, (__int64)&v76, 4, 1) < 0
            || (int)sub_396B0((__int64)v42, (__int64)&v77, 4, 1) < 0 )
          {
            break;
          }
          v24 = v22 + 1;
          v25 = *(unsigned __int64 (__fastcall **)(__int64, unsigned int *, __int64))(a1->exception_class + 8);
          v26 = v23 - a2;
          if ( v25 == sub_492A0 )
          {
            v27 = *(_QWORD *)a1->private_1 + 40LL * *(_QWORD *)(a1->private_1 + 8) - 40;
            v28 = *(_QWORD *)(v27 + 16);
            v29 = *(_QWORD *)(v27 + 8);
            v30 = v28 + 1;
            if ( *(_QWORD *)(v27 + 24) < (unsigned __int64)(v28 + 1) )
            {
              v57 = qvector_reserve(v27 + 8, v29, v28 + 1, 16);
              v28 = *(_QWORD *)(v27 + 16);
              v26 = v23 - a2;
              *(_QWORD *)(v27 + 8) = v57;
              v29 = v57;
              v30 = v28 + 1;
            }
            *(_QWORD *)(v27 + 16) = v30;
            v31 = (__int64 *)(v29 + 16 * v28);
            *v31 = v26;
            if ( (*(_BYTE *)(v27 + 32) & 1) != 0 )
            {
              *(_QWORD *)(a1->private_1 + 72) = *(_QWORD *)(a1->private_1 + 88);
              v49 = (_QWORD *)a1->private_1;
              v50 = v49[11];
              v51 = v49[10];
              if ( v49[12] < (unsigned __int64)(v50 + 1) )
              {
                v70 = a1->private_1;
                v58 = qvector_reserve(v49 + 10, v51, v50 + 1, 24);
                v49 = (_QWORD *)v70;
                v51 = v58;
                *(_QWORD *)(v70 + 80) = v58;
                v50 = *(_QWORD *)(v70 + 88);
              }
              v52 = v51 + 24 * v50;
              *(_QWORD *)v52 = 0;
              v53 = v76;
              *(_OWORD *)(v52 + 8) = 0;
              ++v49[11];
              private_2 = a1->private_2;
              v55 = a1->exception_cleanup;
              if ( private_2 == 1 )
              {
                v56 = (__int64 *)((char *)v55 + 320);
              }
              else
              {
                if ( private_2 != 2 )
                  goto LABEL_66;
                v56 = (__int64 *)((char *)v55 + 352);
              }
              sub_461E0((__int64)v55, (__int64 *)v52, v56, v53);
            }
            v31[1] = *(_QWORD *)(a1->private_1 + 112);
            v32 = (_QWORD *)a1->private_1;
            v33 = v32[14];
            v34 = v32[13];
            if ( v32[15] < (unsigned __int64)(v33 + 1) )
            {
              v69 = a1->private_1;
              v48 = qvector_reserve(v32 + 13, v34, v33 + 1, 24);
              v32 = (_QWORD *)v69;
              v34 = v48;
              *(_QWORD *)(v69 + 104) = v48;
              v33 = *(_QWORD *)(v69 + 112);
            }
            v35 = v34 + 24 * v33;
            *(_QWORD *)v35 = 0;
            v36 = v76;
            *(_OWORD *)(v35 + 8) = 0;
            ++v32[14];
            v37 = a1->private_2;
            v38 = a1->exception_cleanup;
            if ( v37 == 1 )
            {
              v39 = (__int64 *)((char *)v38 + 320);
            }
            else
            {
              if ( v37 != 2 )
              {
                if ( !under_debugger )
                {
                  interr(20086);
LABEL_66:
                  if ( !under_debugger )
                  {
                    interr(20086);
                    sub_32A20(v92);
                    sub_32A20(v86);
                    sub_A432(*((_QWORD *)exception_cleanup + 59), *((_QWORD *)exception_cleanup + 60), v72);
                    _Unwind_Resume(a1);
                  }
                }
                BUG();
              }
              v39 = (__int64 *)((char *)v38 + 352);
            }
            sub_461E0((__int64)v38, (__int64 *)v35, v39, v36);
            v40 = *(_WORD *)(v27 + 34);
            v73 = v40;
            if ( v40 && *(_QWORD *)(v27 + 16) == 1 )
            {
              v59 = (_QWORD *)a1->private_1;
              v60 = v59[18];
              v61 = (__int64)(v59 + 17);
              if ( !v60 )
                goto LABEL_60;
              do
              {
                while ( 1 )
                {
                  v62 = *(_QWORD *)(v60 + 16);
                  v63 = *(_QWORD *)(v60 + 24);
                  if ( *(_WORD *)(v60 + 32) < v40 )
                    break;
                  v61 = v60;
                  v60 = *(_QWORD *)(v60 + 16);
                  if ( !v62 )
                    goto LABEL_58;
                }
                v60 = *(_QWORD *)(v60 + 24);
              }
              while ( v63 );
LABEL_58:
              if ( (_QWORD *)v61 == v59 + 17 || v40 < *(_WORD *)(v61 + 32) )
              {
LABEL_60:
                v75 = &v73;
                v64 = sub_310C0(v59 + 16, v61, &v75);
                v59 = (_QWORD *)a1->private_1;
                v61 = v64;
              }
              *(_QWORD *)(v61 + 40) = v59[9];
              *(_QWORD *)(v61 + 48) = v31[1];
            }
          }
          else
          {
            ((void (__fastcall *)(struct _Unwind_Exception *, unsigned int *, __int64, unsigned __int64))v25)(
              a1,
              &v76,
              v23 - a2,
              v22);
          }
          v23 += v77;
          v74 = v23;
          if ( v23 >= v66 )
            break;
          v22 = v24;
        }
        v43 = (_QWORD **)v92;
        v44 = v83[0];
        if ( v92 )
        {
          do
          {
            sub_32A20(v43[3]);
            v45 = v43;
            v43 = (_QWORD **)v43[2];
            operator delete(v45, 0x28u);
          }
          while ( v43 );
        }
        v68 += v44;
      }
      else
      {
        v68 += v83[0];
      }
      if ( v66 <= v68 )
        break;
      v3 = v71;
    }
    v46 = v86;
  }
  sub_32A20(v46);
  qlseek(*((_QWORD *)exception_cleanup + 59), *((_QWORD *)exception_cleanup + 60) + v72, 0);
  return v96 - __readfsqword(0x28u);
}
