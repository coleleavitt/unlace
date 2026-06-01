__int64 __fastcall sub_E28370(_BYTE *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  __int64 v11; // r13
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *v25; // rdx
  __int64 v26; // r14
  unsigned int v27; // eax
  unsigned int v28; // r13d
  unsigned int v29; // edx
  unsigned int *v30; // rax
  __int64 v31; // rdx
  _DWORD *v32; // rax
  int v33; // edi
  __int64 *v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 *v37; // rsi
  __int64 v38; // rdx
  __int64 *v39; // r8
  __int64 *i; // rax
  __int64 v41; // rdx
  unsigned int v42; // r14d
  unsigned int v43; // edx
  unsigned int *v44; // rax
  _QWORD *v45; // rdi
  __int64 v46; // rax
  unsigned int v47; // r13d
  unsigned int v48; // edx
  unsigned int *v49; // rax
  _QWORD *v50; // rdi
  _QWORD *v51; // rdi
  char **v52; // rbp
  char **v53; // rbp
  char **exception; // rbp
  _QWORD *v55; // [rsp+8h] [rbp-60h] BYREF
  __int64 v56[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = (_QWORD *)sub_186B270(0x18u);
  v9 = v8 + 1;
  v8[1] = a3;
  v55 = v8 + 1;
  *v8 = 0x100000002LL;
  v10 = 1;
  do
  {
    v11 = v9[v10 - 1];
    result = sub_15D37A0(a2, v11);
    if ( (_BYTE)result )
    {
LABEL_8:
      v9 = v55;
      --*((_DWORD *)v55 - 1);
    }
    else
    {
      switch ( *(_WORD *)(v11 + 4) )
      {
        case 0:
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v11 + 16)) )
          {
            result = sub_DBE3E0(&v55, a2, *(_DWORD *)(v11 + 24), (_QWORD *)(v11 + 32));
            goto LABEL_6;
          }
          v9 = v55;
          v21 = *(_QWORD *)(v11 + 16);
          if ( v55 )
          {
            v22 = *((_DWORD *)v55 - 1);
            if ( v22 == *((_DWORD *)v55 - 2) )
            {
              v28 = (3 * v22 + 1) >> 1;
              v29 = 8 * v28 + 8;
              if ( 8 * v22 + 8 >= v29 || v22 >= v28 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v56, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v56);
                sub_233E40((__int64)v56);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v30 = (unsigned int *)sub_186B300(v55 - 1, v29);
              v31 = v30[1];
              v9 = v30 + 2;
              *v30 = v28;
              v55 = v9;
              LODWORD(v30) = v31;
              v25 = &v9[v31];
              v24 = (_DWORD)v30 + 1;
            }
            else
            {
              v23 = v22;
              v24 = v22 + 1;
              v25 = &v55[v23];
            }
          }
          else
          {
            v45 = (_QWORD *)sub_186B270(0x18u);
            *v45 = 2;
            v24 = 1;
            v9 = v45 + 1;
            v55 = v9;
            v25 = v9;
          }
          *v25 = v21;
          *((_DWORD *)v9 - 1) = v24;
          break;
        case 1:
          goto LABEL_7;
        case 2:
          result = sub_DBE3E0(
                     &v55,
                     a2,
                     *(_DWORD *)(v11 + 72),
                     (_QWORD *)(v11 + 80 + 16LL * *(unsigned int *)(v11 + 20)));
          if ( !(_BYTE)result )
            goto LABEL_27;
          result = sub_DBE3E0(
                     &v55,
                     a2,
                     *(_DWORD *)(v11 + 76),
                     (_QWORD *)(v11 + 80 + 16LL * *(unsigned int *)(v11 + 20)));
          if ( !(_BYTE)result )
            goto LABEL_27;
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v11 + 24)) )
            goto LABEL_7;
          v9 = v55;
          v26 = *(_QWORD *)(v11 + 24);
          if ( v55 )
          {
            v27 = *((_DWORD *)v55 - 1);
            if ( v27 == *((_DWORD *)v55 - 2) )
            {
              v47 = (3 * v27 + 1) >> 1;
              v48 = 8 * v47 + 8;
              if ( 8 * v27 + 8 >= v48 || v27 >= v47 )
              {
                v53 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v56, "Overflow encountered when expanding vector");
                *v53 = (char *)off_1C63128;
                sub_2333C0(v53 + 1, v56);
                sub_233E40((__int64)v56);
                __cxa_throw(v53, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v49 = (unsigned int *)sub_186B300(v55 - 1, v48);
              v9 = v49 + 2;
              *v49 = v47;
              v27 = v49[1];
              v55 = v9;
            }
          }
          else
          {
            v51 = (_QWORD *)sub_186B270(0x18u);
            *v51 = 2;
            v27 = 0;
            v9 = v51 + 1;
            v55 = v9;
          }
          v9[v27] = v26;
          *((_DWORD *)v9 - 1) = v27 + 1;
          break;
        case 3:
          if ( !a4 )
            goto LABEL_7;
          v18 = *(_QWORD *)(v11 + 24);
          if ( v18 && (v19 = *(_QWORD *)(v18 + 8)) != 0 )
            v20 = *(unsigned int *)(v19 - 4);
          else
            v20 = 0;
          result = sub_1681830(&v55, a2, v20);
LABEL_6:
          if ( (_BYTE)result )
            goto LABEL_7;
          goto LABEL_27;
        case 4:
          if ( a4 )
          {
            v13 = *(_QWORD *)(v11 + 24);
            if ( v13 && (v14 = *(_QWORD *)(v13 + 8)) != 0 )
              v15 = *(unsigned int *)(v14 - 4);
            else
              v15 = 0;
            result = sub_1681830(&v55, a2, v15);
            if ( !(_BYTE)result )
              goto LABEL_27;
          }
          result = sub_E281F0(&v55, a2, *(_DWORD *)(v11 + 32), (_QWORD *)(v11 + 48));
          if ( !(_BYTE)result )
            goto LABEL_27;
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v11 + 40)) )
          {
            v32 = *(_DWORD **)(v11 + 24);
            if ( !v32 || *v32 == -1 )
            {
              v33 = *(_DWORD *)(v11 + 12);
              v34 = *(__int64 **)(*(_QWORD *)a1 + 168LL);
              v35 = *(unsigned int *)(*(_QWORD *)a1 + 176LL);
              v36 = v35 - 1;
              v35 *= 8;
              v37 = (__int64 *)((char *)v34 + v35);
              v38 = 8LL * (v33 & v36);
              v39 = &v34[(unsigned __int64)v38 / 8];
              if ( v38 != v35 )
              {
                for ( i = &v34[(unsigned __int64)v38 / 8]; v37 != i; ++i )
                {
                  v41 = *i;
                  if ( (unsigned __int64)*i > 1 )
                  {
                    if ( *(_DWORD *)(v41 + 12) == v33 && v11 == v41 )
                    {
                      v34 = i;
                      goto LABEL_53;
                    }
                  }
                  else if ( !v41 )
                  {
                    goto LABEL_52;
                  }
                }
              }
              for ( ; v39 != v34; ++v34 )
              {
                v46 = *v34;
                if ( (unsigned __int64)*v34 > 1 )
                {
                  if ( *(_DWORD *)(v46 + 12) == v33 && v11 == v46 )
                    goto LABEL_53;
                }
                else if ( !v46 )
                {
                  break;
                }
              }
LABEL_52:
              v34 = nullptr;
LABEL_53:
              a1[8] &= v34 != nullptr;
            }
LABEL_7:
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v11, 1);
            goto LABEL_8;
          }
          v9 = v55;
          v16 = *(_QWORD *)(v11 + 40);
          if ( v55 )
          {
            v17 = *((_DWORD *)v55 - 1);
            if ( v17 == *((_DWORD *)v55 - 2) )
            {
              v42 = (3 * v17 + 1) >> 1;
              v43 = 8 * v42 + 8;
              if ( 8 * v17 + 8 >= v43 || v17 >= v42 )
              {
                v52 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v56, "Overflow encountered when expanding vector");
                *v52 = (char *)off_1C63128;
                sub_2333C0(v52 + 1, v56);
                sub_233E40((__int64)v56);
                __cxa_throw(v52, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v44 = (unsigned int *)sub_186B300(v55 - 1, v43);
              v9 = v44 + 2;
              *v44 = v42;
              v17 = v44[1];
              v55 = v9;
            }
          }
          else
          {
            v50 = (_QWORD *)sub_186B270(0x18u);
            *v50 = 2;
            v17 = 0;
            v9 = v50 + 1;
            v55 = v9;
          }
          v9[v17] = v16;
          *((_DWORD *)v9 - 1) = v17 + 1;
          break;
        default:
LABEL_27:
          v9 = v55;
          if ( !v55 )
            return result;
          break;
      }
    }
    v10 = *((_DWORD *)v9 - 1);
  }
  while ( v10 );
  return sub_186B220(v9 - 1);
}

