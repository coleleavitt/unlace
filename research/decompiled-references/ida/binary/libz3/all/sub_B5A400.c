__int64 __fastcall sub_B5A400(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 *v6; // r15
  __int64 v7; // r9
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 *v11; // rax
  _DWORD *v13; // r12
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  _DWORD *v18; // rbx
  bool v19; // zf
  __int64 v20; // r12
  __int64 v21; // rbx
  void *v22; // rbx
  void *v23; // rdi
  int v24; // eax
  __int64 v25; // r13
  void *v26; // rdi
  int v27; // eax
  int v28; // eax
  __int64 v29; // r13
  void *v30; // rdi
  __int64 v31; // rax
  int v32; // eax
  _QWORD *v33; // rax
  unsigned int v34; // edx
  __int64 v35; // rcx
  int v36; // edx
  __int64 *v37; // rcx
  void *v38; // r12
  void *v39; // rbx
  void *v40; // rbx
  unsigned int v41; // ecx
  size_t v42; // rsi
  __int64 v43; // rdx
  _QWORD *v44; // rax
  char **exception; // rbp
  _QWORD *v46; // [rsp+0h] [rbp-E8h]
  _QWORD *v47; // [rsp+8h] [rbp-E0h]
  void *v48; // [rsp+8h] [rbp-E0h]
  void *v49; // [rsp+8h] [rbp-E0h]
  __int64 v50; // [rsp+10h] [rbp-D8h]
  __int64 v51; // [rsp+18h] [rbp-D0h]
  unsigned int v52; // [rsp+24h] [rbp-C4h]
  __int64 v53; // [rsp+28h] [rbp-C0h]
  _QWORD v54[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v55[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v56[4]; // [rsp+60h] [rbp-88h] BYREF
  __int64 (__fastcall **v57)(); // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+88h] [rbp-60h]
  _QWORD v59[2]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v60[9]; // [rsp+A0h] [rbp-48h] BYREF

  v6 = (__int64 *)a1[21];
  v7 = 2LL * *((unsigned int *)a1 + 44);
  v8 = &v6[v7];
  if ( v6 != &v6[v7] )
  {
    while ( (unsigned __int64)*v6 <= 1 )
    {
      v6 += 2;
      if ( v8 == v6 )
        return 1;
    }
    if ( v8 != v6 )
    {
      v52 = 1;
      v9 = *v6;
      v46 = v54;
      while ( 1 )
      {
        v10 = v6[1];
        if ( !*(_BYTE *)v10 )
          goto LABEL_8;
        v13 = *(_DWORD **)(v9 + 40);
        v54[0] = 0;
        v54[1] = 0;
        v55[0] = 1;
        v55[1] = 0;
        if ( !(unsigned __int8)sub_BE53E0(
                                 (int)a1 + 64,
                                 (_DWORD)v13,
                                 (_DWORD)v46,
                                 a4,
                                 a5,
                                 v7 * 8,
                                 (_DWORD)v46,
                                 (_DWORD)v47,
                                 v50,
                                 v51) )
        {
          v40 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v46);
          sub_182CBA0(v40, v55);
          return 0;
        }
        v17 = a1[3];
        if ( !v17 )
        {
          sub_16669E0(a1 + 2);
          v17 = a1[3];
        }
        v18 = (_DWORD *)sub_166A700(v17, (_DWORD)v46, 1, v14, v15, v16);
        v53 = *a1;
        if ( v13 )
          ++v13[2];
        if ( v18 )
          ++v18[2];
        LODWORD(v47) = sub_966380(a1[1], v13, v18);
        v51 = (unsigned int)v47 >> 1;
        v50 = *(_QWORD *)(a1[1] + 16);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v50 + 7488) + 48LL))(
          *(_QWORD *)(v50 + 7488),
          *(_QWORD *)(*(_QWORD *)(v50 + 8840) + 8 * v51));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v50 + 7488) + 64LL))(*(_QWORD *)(v50 + 7488));
        if ( v18 )
        {
          v19 = v18[2]-- == 1;
          if ( v19 )
            sub_15D7BC0(v53, v18);
        }
        if ( v13 )
        {
          v19 = v13[2]-- == 1;
          if ( v19 )
            sub_15D7BC0(v53, v13);
        }
        v20 = *(_QWORD *)(a1[1] + 16);
        if ( dword_1C7ED58 == (_DWORD)v47 )
          goto LABEL_31;
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 8840) + 8 * v51);
        if ( (unsigned int)sub_8E7030(*(_QWORD *)(a1[1] + 16))
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v20 + 7488) + 56LL))(
                *(_QWORD *)(v20 + 7488),
                v21) )
        {
          v20 = *(_QWORD *)(a1[1] + 16);
LABEL_31:
          sub_8F18B0(v20, (unsigned int)v47 >> 1);
          v22 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v46);
          sub_182CBA0(v22, v55);
          v52 = -1;
          goto LABEL_8;
        }
        v20 = *(_QWORD *)(a1[1] + 16);
        if ( *(_BYTE *)(*(_QWORD *)(v20 + 8848) + (unsigned int)v47) != 1 )
          goto LABEL_31;
        v59[0] = 0;
        v57 = &off_1C57500;
        v58 = v10 + 8;
        v23 = qword_1C7F2C0;
        v59[1] = 0;
        v60[0] = 1;
        v60[1] = 0;
        if ( (*(_BYTE *)(v10 + 12) & 1) != 0 )
        {
          v48 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v59, v10 + 8);
          v23 = v48;
          if ( (*(_BYTE *)(v10 + 28) & 1) != 0 )
          {
LABEL_51:
            sub_182C690(v23, v60, v10 + 24);
            goto LABEL_36;
          }
        }
        else
        {
          LODWORD(v59[0]) = *(_DWORD *)(v10 + 8);
          if ( (*(_BYTE *)(v10 + 28) & 1) != 0 )
            goto LABEL_51;
        }
        v24 = *(_DWORD *)(v10 + 24);
        BYTE4(v60[0]) &= ~1u;
        LODWORD(v60[0]) = v24;
LABEL_36:
        v25 = v58;
        v26 = qword_1C7F2C0;
        if ( (v54[0] & 0x100000000LL) != 0 )
        {
          v49 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v58, v46);
          v26 = v49;
        }
        else
        {
          v27 = v54[0];
          *(_BYTE *)(v58 + 4) &= ~1u;
          *(_DWORD *)v25 = v27;
        }
        if ( (v55[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v26, v25 + 16, v55);
        }
        else
        {
          v28 = v55[0];
          *(_BYTE *)(v25 + 20) &= ~1u;
          *(_DWORD *)(v25 + 16) = v28;
        }
        v29 = sub_180C100(v20 + 8400, 48);
        v30 = qword_1C7F2C0;
        *(_QWORD *)v29 = &off_1C57500;
        v31 = v58;
        *(_QWORD *)(v29 + 16) = 0;
        *(_QWORD *)(v29 + 8) = v31;
        *(_QWORD *)(v29 + 24) = 0;
        *(_QWORD *)(v29 + 32) = 1;
        *(_QWORD *)(v29 + 40) = 0;
        if ( (v59[0] & 0x100000000LL) != 0 )
        {
          v50 = (__int64)v30;
          v47 = v59;
          sub_182C690(v30, v29 + 16, v59);
        }
        else
        {
          *(_DWORD *)(v29 + 16) = v59[0];
          v47 = v59;
        }
        if ( (v60[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v30, v29 + 32, v60);
        }
        else
        {
          v32 = v60[0];
          *(_BYTE *)(v29 + 36) &= ~1u;
          *(_DWORD *)(v29 + 32) = v32;
        }
        v33 = *(_QWORD **)(v20 + 9456);
        if ( v33 )
        {
          v34 = *((_DWORD *)v33 - 1);
          if ( v34 == *((_DWORD *)v33 - 2) )
          {
            v41 = (3 * v34 + 1) >> 1;
            v42 = 8 * v41 + 8;
            if ( 8 * v34 + 8 >= (unsigned int)v42 || v34 >= v41 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v56, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v56);
              sub_233E40((__int64)v56);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v50) = (3 * v34 + 1) >> 1;
            v43 = sub_186B300(v33 - 1, v42);
            v33 = (_QWORD *)(v43 + 8);
            *(_QWORD *)(v20 + 9456) = v43 + 8;
            *(_DWORD *)v43 = v50;
            LODWORD(v43) = *(_DWORD *)(v43 + 4);
            v37 = &v33[(unsigned int)v43];
            v36 = v43 + 1;
          }
          else
          {
            v35 = v34;
            v36 = v34 + 1;
            v37 = &v33[v35];
          }
        }
        else
        {
          v44 = (_QWORD *)sub_186B270(0x18u);
          *v44 = 2;
          v33 = v44 + 1;
          v36 = 1;
          *(_QWORD *)(v20 + 9456) = v33;
          v37 = v33;
        }
        v38 = qword_1C7F2C0;
        *v37 = v29;
        *((_DWORD *)v33 - 1) = v36;
        v57 = &off_1C57500;
        sub_182CBA0(v38, v59);
        sub_182CBA0(v38, v60);
        v39 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v46);
        sub_182CBA0(v39, v55);
LABEL_8:
        v11 = v6 + 2;
        if ( v8 != v6 + 2 )
        {
          while ( 1 )
          {
            v9 = *v11;
            v6 = v11;
            if ( (unsigned __int64)*v11 > 1 )
              break;
            v11 += 2;
            if ( v8 == v11 )
              return v52;
          }
          if ( v8 != v11 )
            continue;
        }
        return v52;
      }
    }
  }
  return 1;
}

