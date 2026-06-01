__int64 __fastcall sub_E298E0(_DWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rbp
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  _QWORD *v20; // rdx
  __int64 v21; // r13
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbp
  unsigned int v27; // eax
  __int64 v28; // r13
  unsigned int v29; // eax
  __int64 v30; // r13
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  _QWORD *v34; // rdx
  unsigned int v35; // ebp
  unsigned int v36; // edx
  unsigned int *v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // ebp
  unsigned int v40; // edx
  unsigned int *v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // ebp
  unsigned int v44; // edx
  unsigned int *v45; // rax
  unsigned int v46; // r13d
  unsigned int v47; // edx
  unsigned int *v48; // rax
  _QWORD *v49; // rdi
  _QWORD *v50; // rdi
  unsigned int v51; // ebp
  unsigned int v52; // edx
  unsigned int *v53; // rax
  _QWORD *v54; // rdi
  char **exception; // rbp
  _QWORD *v56; // rdi
  _QWORD *v57; // rdi
  char **v58; // rbp
  char **v59; // rbp
  _QWORD *v60; // [rsp+8h] [rbp-50h] BYREF
  __int64 v61[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = (_QWORD *)sub_186B270(0x18u);
  v8 = v7 + 1;
  v7[1] = a3;
  v60 = v7 + 1;
  *v7 = 0x100000002LL;
  v9 = 1;
  if ( a4 )
  {
    while ( 1 )
    {
      v10 = v8[v9 - 1];
      result = sub_15D37A0(a2, v10);
      if ( (_BYTE)result )
        goto LABEL_10;
      switch ( *(_WORD *)(v10 + 4) )
      {
        case 0:
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v10 + 16)) )
          {
            result = sub_DBE3E0(&v60, a2, *(_DWORD *)(v10 + 24), (_QWORD *)(v10 + 32));
LABEL_8:
            if ( (_BYTE)result )
              goto LABEL_9;
LABEL_22:
            v8 = v60;
            if ( !v60 )
              return result;
          }
          else
          {
            v8 = v60;
            v16 = *(_QWORD *)(v10 + 16);
            if ( v60 )
            {
              v17 = *((_DWORD *)v60 - 1);
              if ( v17 == *((_DWORD *)v60 - 2) )
              {
                v35 = (3 * v17 + 1) >> 1;
                v36 = 8 * v35 + 8;
                if ( 8 * v17 + 8 >= v36 || v17 >= v35 )
                  goto LABEL_89;
                v37 = (unsigned int *)sub_186B300(v60 - 1, v36);
                v38 = v37[1];
                v8 = v37 + 2;
                *v37 = v35;
                v60 = v8;
                LODWORD(v37) = v38;
                v20 = &v8[v38];
                v19 = (_DWORD)v37 + 1;
              }
              else
              {
                v18 = v17;
                v19 = v17 + 1;
                v20 = &v60[v18];
              }
            }
            else
            {
              v49 = (_QWORD *)sub_186B270(0x18u);
              *v49 = 2;
              v19 = 1;
              v8 = v49 + 1;
              v60 = v8;
              v20 = v8;
            }
            *v20 = v16;
            *((_DWORD *)v8 - 1) = v19;
          }
          goto LABEL_11;
        case 1:
          goto LABEL_9;
        case 2:
          result = sub_DBE3E0(
                     &v60,
                     a2,
                     *(_DWORD *)(v10 + 72),
                     (_QWORD *)(v10 + 80 + 16LL * *(unsigned int *)(v10 + 20)));
          if ( !(_BYTE)result )
            goto LABEL_22;
          result = sub_DBE3E0(
                     &v60,
                     a2,
                     *(_DWORD *)(v10 + 76),
                     (_QWORD *)(v10 + 80 + 16LL * *(unsigned int *)(v10 + 20)));
          if ( !(_BYTE)result )
            goto LABEL_22;
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v10 + 24)) )
            goto LABEL_9;
          v8 = v60;
          v21 = *(_QWORD *)(v10 + 24);
          if ( v60 )
          {
            v22 = *((_DWORD *)v60 - 1);
            if ( v22 == *((_DWORD *)v60 - 2) )
            {
              v51 = (3 * v22 + 1) >> 1;
              v52 = 8 * v51 + 8;
              if ( 8 * v22 + 8 >= v52 || v22 >= v51 )
              {
LABEL_85:
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v61, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v61);
                sub_233E40((__int64)v61);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v53 = (unsigned int *)sub_186B300(v60 - 1, v52);
              v8 = v53 + 2;
              *v53 = v51;
              v22 = v53[1];
              v60 = v8;
            }
          }
          else
          {
            v57 = (_QWORD *)sub_186B270(0x18u);
            *v57 = 2;
            v22 = 0;
            v8 = v57 + 1;
            v60 = v8;
          }
          v8[v22] = v21;
          *((_DWORD *)v8 - 1) = v22 + 1;
          goto LABEL_11;
        case 3:
          v12 = *(_QWORD *)(v10 + 24);
          if ( v12 && (v13 = *(_QWORD *)(v12 + 8)) != 0 )
            v14 = *(unsigned int *)(v13 - 4);
          else
            v14 = 0;
          result = sub_1681830(&v60, a2, v14);
          goto LABEL_8;
        case 4:
          v23 = *(_QWORD *)(v10 + 24);
          if ( v23 && (v24 = *(_QWORD *)(v23 + 8)) != 0 )
            v25 = *(unsigned int *)(v24 - 4);
          else
            v25 = 0;
          result = sub_1681830(&v60, a2, v25);
          if ( !(_BYTE)result )
            goto LABEL_22;
          result = sub_E281F0(&v60, a2, *(_DWORD *)(v10 + 32), (_QWORD *)(v10 + 48));
          if ( !(_BYTE)result )
            goto LABEL_22;
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v10 + 40)) )
          {
            sub_E24840(a1, v10);
LABEL_9:
            (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v10, 1);
LABEL_10:
            v8 = v60;
            --*((_DWORD *)v60 - 1);
            goto LABEL_11;
          }
          v8 = v60;
          v26 = *(_QWORD *)(v10 + 40);
          if ( v60 )
          {
            v27 = *((_DWORD *)v60 - 1);
            if ( v27 == *((_DWORD *)v60 - 2) )
            {
              v46 = (3 * v27 + 1) >> 1;
              v47 = 8 * v46 + 8;
              if ( 8 * v27 + 8 >= v47 || v27 >= v46 )
                goto LABEL_88;
              v48 = (unsigned int *)sub_186B300(v60 - 1, v47);
              v8 = v48 + 2;
              *v48 = v46;
              v27 = v48[1];
              v60 = v8;
            }
          }
          else
          {
            v54 = (_QWORD *)sub_186B270(0x18u);
            *v54 = 2;
            v27 = 0;
            v8 = v54 + 1;
            v60 = v8;
          }
          v8[v27] = v26;
          *((_DWORD *)v8 - 1) = v27 + 1;
LABEL_11:
          v9 = *((_DWORD *)v8 - 1);
          if ( !v9 )
            return sub_186B220(v8 - 1);
          break;
        default:
          goto LABEL_22;
      }
    }
  }
  do
  {
    v15 = v8[v9 - 1];
    result = sub_15D37A0(a2, v15);
    if ( (_BYTE)result )
    {
LABEL_18:
      v8 = v60;
      --*((_DWORD *)v60 - 1);
    }
    else
    {
      switch ( *(_WORD *)(v15 + 4) )
      {
        case 0:
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v15 + 16)) )
          {
            result = sub_DBE3E0(&v60, a2, *(_DWORD *)(v15 + 24), (_QWORD *)(v15 + 32));
            if ( (_BYTE)result )
            {
LABEL_17:
              (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v15, 1);
              goto LABEL_18;
            }
LABEL_46:
            v8 = v60;
LABEL_47:
            if ( !v8 )
              return result;
          }
          else
          {
            v8 = v60;
            v30 = *(_QWORD *)(v15 + 16);
            if ( v60 )
            {
              v31 = *((_DWORD *)v60 - 1);
              if ( v31 == *((_DWORD *)v60 - 2) )
              {
                v39 = (3 * v31 + 1) >> 1;
                v40 = 8 * v39 + 8;
                if ( 8 * v31 + 8 >= v40 || v31 >= v39 )
                {
LABEL_89:
                  v59 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v61, "Overflow encountered when expanding vector");
                  *v59 = (char *)off_1C63128;
                  sub_2333C0(v59 + 1, v61);
                  sub_233E40((__int64)v61);
                  __cxa_throw(v59, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v41 = (unsigned int *)sub_186B300(v60 - 1, v40);
                v42 = v41[1];
                v8 = v41 + 2;
                *v41 = v39;
                v60 = v8;
                LODWORD(v41) = v42;
                v34 = &v8[v42];
                v33 = (_DWORD)v41 + 1;
              }
              else
              {
                v32 = v31;
                v33 = v31 + 1;
                v34 = &v60[v32];
              }
            }
            else
            {
              v50 = (_QWORD *)sub_186B270(0x18u);
              *v50 = 2;
              v33 = 1;
              v8 = v50 + 1;
              v60 = v8;
              v34 = v8;
            }
            *v34 = v30;
            *((_DWORD *)v8 - 1) = v33;
          }
          break;
        case 1:
        case 3:
          goto LABEL_17;
        case 2:
          result = sub_DBE3E0(
                     &v60,
                     a2,
                     *(_DWORD *)(v15 + 72),
                     (_QWORD *)(v15 + 80 + 16LL * *(unsigned int *)(v15 + 20)));
          v8 = v60;
          if ( !(_BYTE)result )
            goto LABEL_47;
          result = sub_DBE3E0(
                     &v60,
                     a2,
                     *(_DWORD *)(v15 + 76),
                     (_QWORD *)(v15 + 80 + 16LL * *(unsigned int *)(v15 + 20)));
          v8 = v60;
          if ( !(_BYTE)result )
            goto LABEL_47;
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v15 + 24)) )
            goto LABEL_17;
          v8 = v60;
          v28 = *(_QWORD *)(v15 + 24);
          if ( !v60 )
            goto LABEL_86;
          v29 = *((_DWORD *)v60 - 1);
          if ( v29 != *((_DWORD *)v60 - 2) )
            goto LABEL_54;
          v43 = (3 * v29 + 1) >> 1;
          v44 = 8 * v43 + 8;
          if ( 8 * v29 + 8 >= v44 || v29 >= v43 )
            goto LABEL_85;
          goto LABEL_73;
        case 4:
          result = sub_E281F0(&v60, a2, *(_DWORD *)(v15 + 32), (_QWORD *)(v15 + 48));
          v8 = v60;
          if ( !(_BYTE)result )
            goto LABEL_47;
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v15 + 40)) )
          {
            sub_E24840(a1, v15);
            goto LABEL_17;
          }
          v8 = v60;
          v28 = *(_QWORD *)(v15 + 40);
          if ( v60 )
          {
            v29 = *((_DWORD *)v60 - 1);
            if ( v29 == *((_DWORD *)v60 - 2) )
            {
              v43 = (3 * v29 + 1) >> 1;
              v44 = 8 * v43 + 8;
              if ( 8 * v29 + 8 >= v44 || v29 >= v43 )
              {
LABEL_88:
                v58 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v61, "Overflow encountered when expanding vector");
                *v58 = (char *)off_1C63128;
                sub_2333C0(v58 + 1, v61);
                sub_233E40((__int64)v61);
                __cxa_throw(v58, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
LABEL_73:
              v45 = (unsigned int *)sub_186B300(v8 - 1, v44);
              v8 = v45 + 2;
              v60 = v45 + 2;
              *v45 = v43;
              v29 = v45[1];
            }
          }
          else
          {
LABEL_86:
            v56 = (_QWORD *)sub_186B270(0x18u);
            *v56 = 2;
            v29 = 0;
            v8 = v56 + 1;
            v60 = v8;
          }
LABEL_54:
          v8[v29] = v28;
          *((_DWORD *)v8 - 1) = v29 + 1;
          break;
        default:
          goto LABEL_46;
      }
    }
    v9 = *((_DWORD *)v8 - 1);
  }
  while ( v9 );
  return sub_186B220(v8 - 1);
}

