__int64 __fastcall sub_582540(__int64 a1, const void *a2, const void *a3, _QWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 (*v12)(void); // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  void *v16; // rbx
  void *v17; // r12
  __int64 v18; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  void (__fastcall ***v21)(_QWORD); // rbx
  void *v22; // rbx
  void *v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rdi
  _QWORD *v26; // rax
  void (__fastcall ***v27)(_QWORD); // r14
  _QWORD *v28; // rax
  void (__fastcall ***v29)(_QWORD); // rbx
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 *v38; // rdx
  __int64 v39; // rdx
  unsigned int v40; // r12d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // r12d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  char *v48; // rbx
  _QWORD *v49; // rax
  void (__fastcall ***v50)(_QWORD); // r13
  __int64 v51; // rdi
  _QWORD *v52; // rax
  void (__fastcall ***v53)(_QWORD); // r13
  void *v54; // r13
  __int64 v55; // r14
  __int64 v56; // rdi
  __int64 (__fastcall *v57)(__int64, __int64); // rdx
  __int64 v58; // rax
  void *v59; // rbp
  void *v60; // r12
  __int64 v61; // rdi
  __int64 result; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  char *v65; // r13
  _QWORD *v66; // rax
  void (__fastcall ***v67)(_QWORD); // rbp
  __int64 v68; // rbx
  void *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rbp
  char **exception; // rbp
  char **v73; // rbp
  void *v74; // [rsp+0h] [rbp-C8h]
  void *v75; // [rsp+0h] [rbp-C8h]
  void *v76; // [rsp+0h] [rbp-C8h]
  void (__fastcall ***ptr)(_QWORD); // [rsp+8h] [rbp-C0h]
  void *ptra; // [rsp+8h] [rbp-C0h]
  void *v79; // [rsp+10h] [rbp-B8h]
  char *v80; // [rsp+10h] [rbp-B8h]
  __int64 v81; // [rsp+18h] [rbp-B0h]
  __int64 v82; // [rsp+20h] [rbp-A8h]
  __int64 v83; // [rsp+28h] [rbp-A0h]
  _QWORD *v84; // [rsp+30h] [rbp-98h]
  _QWORD *v85; // [rsp+38h] [rbp-90h]
  _QWORD *v86; // [rsp+40h] [rbp-88h]
  _QWORD *v87; // [rsp+48h] [rbp-80h]
  __int64 v88; // [rsp+50h] [rbp-78h]
  _QWORD *v89; // [rsp+58h] [rbp-70h]
  __int64 v90[11]; // [rsp+70h] [rbp-58h] BYREF

  v89 = a4;
  v85 = sub_5790D0(a2);
  v84 = sub_5790D0(a3);
  if ( a4 )
    v89 = __dynamic_cast(
            a4,
            (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
            (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
            0);
  v7 = v85[4];
  if ( v7 && *(_DWORD *)(v7 - 4) )
  {
    v83 = *(unsigned int *)(v7 - 4);
    v86 = nullptr;
    v87 = nullptr;
    v81 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = 8 * v8;
      v88 = *(_QWORD *)(v7 + 8 * v8);
      if ( v89 )
      {
        v10 = *(_QWORD *)(v89[4] + 8 * v8);
        v79 = (void *)v10;
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 8);
          v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 56LL);
          if ( (char *)v12 == (char *)sub_4DDB00 )
            v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 48LL))(
                    v11,
                    v10 + 16,
                    *(unsigned int *)(v10 + 24));
          else
            v13 = v12();
          v79 = (void *)v13;
        }
      }
      else
      {
        v79 = nullptr;
      }
      v82 = 0;
      v14 = 0;
      v74 = nullptr;
      while ( 1 )
      {
        if ( (_DWORD)v81 == (_DWORD)v14 )
          goto LABEL_40;
        v15 = *(_QWORD *)(a1 + 32);
        if ( !*(_QWORD *)(*(_QWORD *)(v15 + v9) + 8 * v14) || !*(_QWORD *)(*(_QWORD *)(v15 + 8 * v14) + v9) )
          goto LABEL_40;
        v16 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 72LL))(v88);
        if ( v79 )
          v17 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v79 + 72LL))(v79);
        else
          v17 = nullptr;
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + v9) + 8 * v14);
        (*(void (__fastcall **)(__int64, void *, _QWORD, void *))(*(_QWORD *)v18 + 16LL))(
          v18,
          v16,
          *(_QWORD *)(v84[4] + 8 * v14),
          v17);
        if ( v16 )
        {
          if ( v74 )
          {
            v19 = sub_4C9400(*(_QWORD *)(a1 + 8), (__int64)v74, (__int64)v16);
            ptr = (void (__fastcall ***)(_QWORD))v19;
            if ( v19 )
            {
              (*(void (__fastcall **)(_QWORD *, void *, void *))(*v19 + 16LL))(v19, v74, v16);
              (**ptr)(ptr);
              sub_186B220(ptr);
            }
            else
            {
              sub_1875640("intersection does not exist", (char)v74);
            }
            sub_4D63B0(v16);
          }
          else
          {
            v74 = v16;
          }
        }
        if ( v17 )
        {
          if ( v82 )
          {
            v20 = sub_4C9400(*(_QWORD *)(a1 + 8), v82, (__int64)v17);
            v21 = (void (__fastcall ***)(_QWORD))v20;
            if ( v20 )
            {
              (*(void (__fastcall **)(_QWORD *, __int64, void *))(*v20 + 16LL))(v20, v82, v17);
              (**v21)(v21);
              sub_186B220(v21);
            }
            else
            {
              sub_1875640("intersection does not exist", (char)v74);
            }
            sub_4D63B0(v17);
          }
          else
          {
            v82 = (__int64)v17;
          }
        }
        v22 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v84[4] + v9) + 72LL))(*(_QWORD *)(v84[4] + v9));
        if ( v79 )
          v23 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v79 + 72LL))(v79);
        else
          v23 = nullptr;
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + v9) + 8 * v14);
        (*(void (__fastcall **)(__int64, void *, _QWORD, void *))(*(_QWORD *)v24 + 16LL))(
          v24,
          v22,
          *(_QWORD *)(v85[4] + 8 * v14),
          v23);
        v25 = *(_QWORD *)(a1 + 8);
        if ( !v22 )
        {
          if ( !v23 )
            goto LABEL_40;
          if ( !v82 )
          {
LABEL_59:
            v82 = (__int64)v23;
            goto LABEL_40;
          }
          goto LABEL_37;
        }
        if ( !v74 )
        {
          if ( !v23 )
            goto LABEL_62;
          if ( !v82 )
          {
            v82 = (__int64)v23;
LABEL_62:
            v74 = v22;
            goto LABEL_40;
          }
          v74 = v22;
          goto LABEL_37;
        }
        v26 = sub_4C9400(v25, (__int64)v74, (__int64)v22);
        v27 = (void (__fastcall ***)(_QWORD))v26;
        if ( v26 )
        {
          (*(void (__fastcall **)(_QWORD *, void *, void *))(*v26 + 16LL))(v26, v74, v22);
          (**v27)(v27);
          sub_186B220(v27);
        }
        else
        {
          sub_1875640("intersection does not exist", (char)v74);
        }
        sub_4D63B0(v22);
        if ( v23 )
        {
          if ( !v82 )
            goto LABEL_59;
          v25 = *(_QWORD *)(a1 + 8);
LABEL_37:
          v28 = sub_4C9400(v25, v82, (__int64)v23);
          v29 = (void (__fastcall ***)(_QWORD))v28;
          if ( v28 )
          {
            (*(void (__fastcall **)(_QWORD *, __int64, void *))(*v28 + 16LL))(v28, v82, v23);
            (**v29)(v29);
            sub_186B220(v29);
          }
          else
          {
            sub_1875640("intersection does not exist", (char)v74);
          }
          sub_4D63B0(v23);
        }
LABEL_40:
        if ( v83 == v14 + 1 )
          break;
        ++v14;
      }
      if ( v87 )
      {
        v30 = *((_DWORD *)v87 - 1);
        if ( v30 == *((_DWORD *)v87 - 2) )
        {
          v44 = (3 * v30 + 1) >> 1;
          v45 = 8 * v44 + 8;
          if ( 8 * v30 + 8 >= (unsigned int)v45 || v30 >= v44 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v90, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v90);
            sub_233E40((__int64)v90);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v46 = (unsigned int *)sub_186B300(v87 - 1, v45);
          v47 = v46[1];
          *v46 = v44;
          v87 = v46 + 2;
          LODWORD(v46) = v47;
          v33 = &v87[v47];
          v32 = (_DWORD)v46 + 1;
        }
        else
        {
          v31 = v30;
          v32 = v30 + 1;
          v33 = &v87[v31];
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x18u);
        *v64 = 2;
        v87 = v64 + 1;
        v33 = v64 + 1;
        v32 = 1;
      }
      *v33 = v74;
      *((_DWORD *)v87 - 1) = v32;
      v34 = v86;
      if ( v86 )
      {
        v35 = *((_DWORD *)v86 - 1);
        if ( v35 == *((_DWORD *)v86 - 2) )
        {
          v40 = (3 * v35 + 1) >> 1;
          v41 = 8 * v40 + 8;
          if ( 8 * v35 + 8 >= (unsigned int)v41 || v35 >= v40 )
          {
            v73 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v90, "Overflow encountered when expanding vector");
            *v73 = (char *)off_1C63128;
            sub_2333C0(v73 + 1, v90);
            sub_233E40((__int64)v90);
            __cxa_throw(v73, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v42 = (unsigned int *)sub_186B300(v86 - 1, v41);
          v43 = v42[1];
          v34 = v42 + 2;
          *v42 = v40;
          v86 = v34;
          LODWORD(v42) = v43;
          v38 = &v34[v43];
          v37 = (_DWORD)v42 + 1;
        }
        else
        {
          v36 = v35;
          v37 = v35 + 1;
          v38 = &v86[v36];
        }
      }
      else
      {
        v63 = (_QWORD *)sub_186B270(0x18u);
        *v63 = 2;
        v86 = v63 + 1;
        v38 = v63 + 1;
        v34 = v63 + 1;
        v37 = 1;
      }
      *v38 = v82;
      *((_DWORD *)v34 - 1) = v37;
      if ( v79 )
        sub_4D63B0(v79);
      v39 = v81 + 1;
      if ( v14 == v81 )
      {
        v48 = nullptr;
        v80 = (char *)(8 * (v14 + 1));
        if ( !v89 )
        {
          v65 = nullptr;
          while ( 1 )
          {
            v68 = *(_QWORD *)&v65[v85[4]];
            v69 = *(void **)&v65[(_QWORD)v87];
            v76 = *(void **)&v65[(_QWORD)v86];
            v70 = *(_QWORD *)&v65[*(_QWORD *)(a1 + 32)];
            v71 = *(_QWORD *)&v65[v70];
            if ( !v71 )
            {
              sub_1872CE0("");
              sub_1873130(114, 707);
            }
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v71 + 16LL))(
              *(_QWORD *)&v65[v70],
              v68,
              *(_QWORD *)&v65[v84[4]],
              0);
            if ( !v69 )
            {
              if ( v76 )
                sub_4D63B0(v76);
              goto LABEL_115;
            }
            v66 = sub_4C9400(*(_QWORD *)(a1 + 8), v68, (__int64)v69);
            v67 = (void (__fastcall ***)(_QWORD))v66;
            if ( !v66 )
              break;
            (*(void (__fastcall **)(_QWORD *, __int64, void *))(*v66 + 16LL))(v66, v68, v69);
            (**v67)(v67);
            sub_186B220(v67);
            if ( v76 )
              goto LABEL_113;
LABEL_114:
            sub_4D63B0(v69);
LABEL_115:
            v65 += 8;
            if ( v65 == v80 )
              goto LABEL_93;
          }
          sub_1875640("intersection does not exist", (char)v76);
          if ( !v76 )
            goto LABEL_114;
LABEL_113:
          sub_4D63B0(v76);
          goto LABEL_114;
        }
        while ( 1 )
        {
LABEL_84:
          ptra = *(void **)&v48[v85[4]];
          v55 = *(_QWORD *)&v48[v89[4]];
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 8);
            v57 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 56LL);
            if ( v57 == sub_4DDB00 )
              v58 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v56 + 48LL))(
                      v56,
                      v55 + 16,
                      *(unsigned int *)(v55 + 24));
            else
              v58 = v57(v56, v55);
            v59 = (void *)v58;
          }
          else
          {
            v59 = nullptr;
          }
          v60 = *(void **)&v48[(_QWORD)v87];
          v75 = *(void **)&v48[(_QWORD)v86];
          v61 = *(_QWORD *)&v48[*(_QWORD *)&v48[*(_QWORD *)(a1 + 32)]];
          if ( !v61 )
          {
            sub_1872CE0("");
            sub_1873130(114, 707);
          }
          (*(void (__fastcall **)(__int64, void *, _QWORD, void *))(*(_QWORD *)v61 + 16LL))(
            v61,
            ptra,
            *(_QWORD *)&v48[v84[4]],
            v59);
          if ( v60 )
            break;
          if ( v59 )
            goto LABEL_76;
          if ( !v75 )
            goto LABEL_83;
          v48 += 8;
          sub_4D63B0(v75);
          if ( v80 == v48 )
          {
LABEL_93:
            sub_186B220(v86 - 1);
            return sub_186B220(v87 - 1);
          }
        }
        v49 = sub_4C9400(*(_QWORD *)(a1 + 8), (__int64)ptra, (__int64)v60);
        v50 = (void (__fastcall ***)(_QWORD))v49;
        if ( v49 )
        {
          (*(void (__fastcall **)(_QWORD *, void *, void *))(*v49 + 16LL))(v49, ptra, v60);
          (**v50)(v50);
          sub_186B220(v50);
          if ( v59 )
            goto LABEL_76;
LABEL_97:
          if ( v75 )
            sub_4D63B0(v75);
          sub_4D63B0(v60);
        }
        else
        {
          sub_1875640("intersection does not exist", (char)v75);
          if ( !v59 )
            goto LABEL_97;
LABEL_76:
          v51 = *(_QWORD *)(a1 + 8);
          if ( v75 )
          {
            v52 = sub_4C9400(v51, (__int64)v59, (__int64)v75);
            v53 = (void (__fastcall ***)(_QWORD))v52;
            if ( v52 )
            {
              (*(void (__fastcall **)(_QWORD *, void *, void *))(*v52 + 16LL))(v52, v59, v75);
              (**v53)(v53);
              sub_186B220(v53);
            }
            else
            {
              sub_1875640("intersection does not exist", (char)v75);
            }
            sub_4D63B0(v75);
            v51 = *(_QWORD *)(a1 + 8);
          }
          v54 = (void *)sub_4C4940(v51, v55, (__int64)v59, 0);
          (*(void (__fastcall **)(void *, __int64, void *, _QWORD))(*(_QWORD *)v54 + 16LL))(v54, v55, v59, 0);
          (**(void (__fastcall ***)(void *))v54)(v54);
          sub_186B220(v54);
          if ( v60 )
            sub_4D63B0(v60);
          sub_4D63B0(v59);
        }
LABEL_83:
        v48 += 8;
        if ( v80 == v48 )
          goto LABEL_93;
        goto LABEL_84;
      }
      ++v81;
      v8 = v39;
      v7 = v85[4];
    }
  }
  result = (__int64)v84;
  if ( !*((_BYTE *)v84 + 28) )
  {
    result = (__int64)v85;
    if ( *((_BYTE *)v85 + 28) )
    {
      *((_BYTE *)v85 + 28) = 0;
      result = (__int64)v89;
      if ( v89 )
        *((_BYTE *)v89 + 28) = 0;
    }
  }
  return result;
}

