__int64 __fastcall sub_3AF620(__int64 ptr, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // r14
  int v6; // eax
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  const char *v9; // rsi
  _QWORD *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 *v14; // rbp
  __int64 *i; // r13
  __int64 result; // rax
  __int64 v17; // r12
  const char *v18; // r14
  unsigned int v19; // eax
  __int64 (__fastcall ***bpt_kernel_interface)(); // rdi
  const char *(__fastcall *v21)(__int64, int); // rax
  const char *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r12d
  char *v26; // rbp
  __int64 (__fastcall ***v27)(); // rdi
  __int64 (__fastcall *v28)(__int64, char *); // rax
  unsigned int v29; // eax
  __int64 v30; // r14
  __int64 *v31; // r13
  unsigned int v32; // edx
  __int64 v33; // rcx
  signed int v34; // eax
  __int64 (__fastcall *v35)(__int64, __int64, int *); // rax
  _QWORD *v36; // rax
  int v37; // edx
  int v38; // esi
  __int64 (__fastcall ***v39)(); // rax
  __int64 v40; // rcx
  __int64 (__fastcall ***v41)(); // rdi
  const char *(__fastcall *v42)(__int64, int); // rax
  char *v43; // rdx
  const char *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  char *v49; // r12
  __int64 (__fastcall ***v50)(); // rdi
  __int64 (__fastcall *v51)(__int64, char *); // rax
  unsigned int v52; // eax
  char *v53; // rbp
  __int64 (__fastcall ***v54)(); // rdi
  __int64 (__fastcall *v55)(__int64, char *); // rax
  unsigned int v56; // eax
  int ptrb; // [rsp+8h] [rbp-90h]
  _QWORD *v59; // [rsp+10h] [rbp-88h]
  __int64 v60; // [rsp+10h] [rbp-88h]
  __int64 v61; // [rsp+10h] [rbp-88h]
  char *v62; // [rsp+10h] [rbp-88h]
  _QWORD *v63; // [rsp+18h] [rbp-80h]
  __int64 v64; // [rsp+20h] [rbp-78h] BYREF
  char *s2; // [rsp+28h] [rbp-70h]
  int v66; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v67; // [rsp+40h] [rbp-58h]
  __int64 v68; // [rsp+48h] [rbp-50h]
  unsigned __int64 v69; // [rsp+58h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(qword_2CCB598 + 1576);
  v6 = a3 & 0x30;
  switch ( v6 )
  {
    case 32:
      v7 = v5 + 15;
LABEL_5:
      v8 = (_QWORD *)v7[2];
      if ( v8 )
      {
        v9 = *(const char **)(a2 + 8);
        v10 = v7 + 1;
        do
        {
          while ( 1 )
          {
            v11 = v8[2];
            v12 = v8[3];
            if ( v8[4] < (unsigned __int64)v9 )
              break;
            v10 = v8;
            v8 = (_QWORD *)v8[2];
            if ( !v11 )
              goto LABEL_10;
          }
          v8 = (_QWORD *)v8[3];
        }
        while ( v12 );
LABEL_10:
        if ( v7 + 1 != v10 )
        {
          v63 = v7 + 1;
          v59 = v10;
          while ( 1 )
          {
            v13 = *(_QWORD *)(a2 + 16);
            if ( v59[4] >= v13 )
              break;
            v14 = (__int64 *)v59[5];
            for ( i = &v14[v59[6]]; i != v14; ++v14 )
            {
              v17 = *v14;
              v18 = *(const char **)(a2 + 24);
              v19 = *(_DWORD *)(*v14 + 44);
              if ( v18 && v19 )
              {
                ptrb = *(_DWORD *)(v17 + 40);
                bpt_kernel_interface = get_bpt_kernel_interface();
                v21 = (const char *(__fastcall *)(__int64, int))(*bpt_kernel_interface)[10];
                if ( v21 == sub_3A9640 )
                {
                  v22 = &byte_22F0C30;
                  if ( ptrb > 0 )
                  {
                    v23 = *(_QWORD *)(qword_2CCB598 + 1576);
                    if ( (unsigned __int64)ptrb < *(_QWORD *)(v23 + 224) )
                    {
                      v22 = haystack;
                      v24 = *(_QWORD *)(v23 + 216) + 24LL * ptrb;
                      if ( *(_QWORD *)(v24 + 8) )
                        v22 = *(const char **)v24;
                    }
                  }
                }
                else
                {
                  v22 = v21((__int64)bpt_kernel_interface, ptrb);
                }
                v9 = v18;
                if ( strcmp(v22, v18) > 0 )
                  break;
                v19 = *(_DWORD *)(v17 + 44);
              }
              if ( _bittest((const int *)&a3, v19) )
              {
                v9 = (const char *)v17;
                result = (**(__int64 (__fastcall ***)(__int64, __int64))a2)(a2, v17);
                if ( (_DWORD)result )
                  return result;
              }
            }
            v59 = (_QWORD *)std::_Rb_tree_increment(v59, v9, v13, v11);
            if ( v63 == v59 )
              return 0;
          }
        }
      }
      return 0;
    case 48:
      v7 = v5 + 21;
      goto LABEL_5;
    case 16:
      v7 = v5 + 9;
      goto LABEL_5;
  }
  v67 = -1;
  v68 = 0;
  if ( (a3 & 1) != 0 )
  {
    v67 = *(_QWORD *)(a2 + 8);
    if ( (a3 & 8) != 0 )
    {
LABEL_80:
      v25 = 3;
      goto LABEL_45;
    }
    if ( (a3 & 4) == 0 )
    {
      v25 = (a3 >> 1) & 1;
      goto LABEL_45;
    }
LABEL_44:
    v25 = 2;
    goto LABEL_45;
  }
  if ( (a3 & 2) != 0 )
  {
    v53 = *(char **)(a2 + 24);
    v54 = get_bpt_kernel_interface();
    v55 = (__int64 (__fastcall *)(__int64, char *))(*v54)[9];
    if ( v55 == sub_3ADF90 )
      v56 = sub_3ADA30(v53, nullptr);
    else
      v56 = v55((__int64)v54, v53);
    v68 = v56 | 0x100000000LL;
    v67 = 0;
    if ( (a3 & 8) != 0 )
      goto LABEL_80;
    v25 = 1;
    if ( (a3 & 4) == 0 )
    {
LABEL_45:
      v30 = *v5 + 8LL * v5[1];
      v31 = sub_3AF270((__int64)&v64);
      if ( v31 == (__int64 *)v30 )
        return 0;
      while ( 1 )
      {
        v33 = *v31;
        v34 = *(_DWORD *)(*v31 + 44);
        v32 = v34;
        if ( v34 < v25 )
          goto LABEL_48;
        if ( v34 > v25 )
          return 0;
        if ( *(_QWORD *)(a2 + 24) && v34 )
        {
          v38 = *(_DWORD *)(v33 + 40);
          s2 = *(char **)(a2 + 24);
          v64 = v33;
          v39 = get_bpt_kernel_interface();
          v40 = v64;
          v41 = v39;
          v42 = (const char *(__fastcall *)(__int64, int))(*v39)[10];
          v43 = s2;
          if ( v42 == sub_3A9640 )
          {
            v44 = &byte_22F0C30;
            if ( v38 > 0 )
            {
              v45 = *(_QWORD *)(qword_2CCB598 + 1576);
              if ( (unsigned __int64)v38 < *(_QWORD *)(v45 + 224) )
              {
                v44 = haystack;
                v46 = *(_QWORD *)(v45 + 216) + 24LL * v38;
                if ( *(_QWORD *)(v46 + 8) )
                  v44 = *(const char **)v46;
              }
            }
          }
          else
          {
            v62 = s2;
            v48 = (__int64)v42((__int64)v41, v38);
            v40 = v64;
            v43 = v62;
            v44 = (const char *)v48;
          }
          v61 = v40;
          v47 = strcmp(v44, v43);
          v33 = v61;
          if ( v47 > 0 )
            return 0;
        }
        if ( *(_QWORD *)(a2 + 16) == -1 )
          break;
        v35 = *(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)ptr + 104LL);
        v60 = v33;
        v36 = (_QWORD *)(v35 == sub_3AC0A0 ? sub_3A9C10(v33, &v66) : v35(ptr, v33, &v66));
        v33 = v60;
        if ( v66 <= 0 )
        {
          v37 = 0;
        }
        else
        {
          v37 = 0;
          while ( *v36 < *(_QWORD *)(a2 + 8) || *v36 >= *(_QWORD *)(a2 + 16) )
          {
            ++v37;
            ++v36;
            if ( v37 == v66 )
              goto LABEL_63;
          }
        }
        if ( v37 != v66 )
          break;
LABEL_63:
        if ( !v25 && *(_QWORD *)(v60 + 56) >= *(_QWORD *)(a2 + 16) )
          return 0;
LABEL_50:
        if ( ++v31 == (__int64 *)v30 )
          return 0;
      }
      v32 = *(_DWORD *)(v33 + 44);
LABEL_48:
      if ( _bittest((const int *)&a3, v32) )
      {
        result = (**(__int64 (__fastcall ***)(__int64, __int64))a2)(a2, v33);
        if ( (_DWORD)result )
          return result;
      }
      goto LABEL_50;
    }
    goto LABEL_44;
  }
  if ( (a3 & 4) != 0 )
  {
    v26 = *(char **)(a2 + 24);
    v27 = get_bpt_kernel_interface();
    v28 = (__int64 (__fastcall *)(__int64, char *))(*v27)[9];
    if ( v28 == sub_3ADF90 )
      v29 = sub_3ADA30(v26, nullptr);
    else
      v29 = v28((__int64)v27, v26);
    v68 = v29 | 0x200000000LL;
    v67 = 0;
    if ( (a3 & 8) != 0 )
      goto LABEL_80;
    goto LABEL_44;
  }
  if ( (a3 & 8) != 0 )
  {
    v49 = *(char **)(a2 + 24);
    v50 = get_bpt_kernel_interface();
    v51 = (__int64 (__fastcall *)(__int64, char *))(*v50)[9];
    if ( v51 == sub_3ADF90 )
      v52 = sub_3ADA30(v49, nullptr);
    else
      v52 = v51((__int64)v50, v49);
    v68 = v52 | 0x300000000LL;
    v67 = 0;
    goto LABEL_80;
  }
  return 0;
}
