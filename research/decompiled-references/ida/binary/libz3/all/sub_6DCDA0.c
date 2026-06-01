__int64 __fastcall sub_6DCDA0(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, char a5)
{
  __int64 *v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  _QWORD *v9; // r12
  int v10; // eax
  _DWORD *v11; // rdx
  __int64 v13; // rbx
  char v14; // al
  _QWORD *v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdi
  int v18; // eax
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // rsi
  __int64 *v25; // rax
  _QWORD *v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // rdi
  int v29; // eax
  _QWORD *v30; // rdi
  unsigned int v31; // r9d
  size_t v32; // rsi
  unsigned int v33; // r13d
  unsigned int *v34; // rax
  __int64 v35; // rsi
  int v36; // eax
  unsigned int v37; // r9d
  unsigned int *v38; // rax
  __int64 v39; // rdi
  unsigned int v40; // r9d
  unsigned int *v41; // rax
  __int64 v42; // rdi
  unsigned int v43; // r9d
  size_t v44; // rsi
  _QWORD *v45; // rsi
  _QWORD *v46; // rcx
  _QWORD *v47; // rsi
  _QWORD *v48; // rcx
  char **exception; // rbp
  __int64 v50; // [rsp+0h] [rbp-88h]
  __int64 v51; // [rsp+8h] [rbp-80h]
  __int64 v53; // [rsp+18h] [rbp-70h]
  __int64 v54; // [rsp+18h] [rbp-70h]
  unsigned int v55; // [rsp+18h] [rbp-70h]
  unsigned int v56; // [rsp+18h] [rbp-70h]
  __int64 v57[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(__int64 **)a4;
  v7 = *(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8);
  if ( *(_QWORD *)a4 != v7 )
  {
    while ( (unsigned __int64)*v6 <= 1 )
    {
      if ( (__int64 *)v7 == ++v6 )
        return 1;
    }
    v51 = *a3;
    if ( (__int64 *)v7 != v6 )
    {
      v8 = *v6;
      v9 = a3 + 4;
      v50 = a1 + 168;
      while ( 1 )
      {
        if ( !(unsigned __int8)sub_168D740(v9, v8) )
          goto LABEL_28;
        v10 = sub_1625010(v50);
        if ( *(_WORD *)(v8 + 4) )
          return 0;
        v11 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
        if ( !v11 )
          return 0;
        if ( v10 == *v11 && v11[1] == 14 )
        {
          sub_1872CE0("");
          sub_1873130(107, 208);
        }
        if ( *v11 || v11[1] != 2 || *(_DWORD *)(v8 + 24) != 2 )
          return 0;
        v13 = *(_QWORD *)(v8 + 40);
        if ( v51 == v13 )
        {
          v54 = *(_QWORD *)(v8 + 32);
          if ( (unsigned __int8)sub_168D740(v9, v54) )
            return 0;
          v13 = v54;
        }
        else
        {
          v53 = *(_QWORD *)(v8 + 32);
          v14 = sub_168D740(v9, *(_QWORD *)(v8 + 40));
          if ( v51 != v53 || v14 )
            return 0;
        }
        ++*(_DWORD *)(v8 + 8);
        if ( a5 )
        {
          v15 = (_QWORD *)a2[5];
          if ( v15 )
          {
            v16 = *((_DWORD *)v15 - 1);
            if ( v16 == *((_DWORD *)v15 - 2) )
            {
              v40 = (3 * v16 + 1) >> 1;
              if ( 8 * v16 + 8 >= 8 * v40 + 8 || v16 >= v40 )
                goto LABEL_62;
              v56 = (3 * v16 + 1) >> 1;
              v41 = (unsigned int *)sub_186B300(v15 - 1, 8 * v40 + 8);
              v42 = v41[1];
              v15 = v41 + 2;
              *v41 = v56;
              LODWORD(v41) = v42;
              a2[5] = v15;
              v19 = &v15[v42];
              v18 = (_DWORD)v41 + 1;
            }
            else
            {
              v17 = v16;
              v18 = v16 + 1;
              v19 = &v15[v17];
            }
          }
          else
          {
            v45 = (_QWORD *)sub_186B270(0x18u);
            *v45 = 2;
            v18 = 1;
            v15 = v45 + 1;
            a2[5] = v15;
            v19 = v15;
          }
          *v19 = v8;
          *((_DWORD *)v15 - 1) = v18;
          if ( v13 )
            ++*(_DWORD *)(v13 + 8);
          v20 = (_QWORD *)a2[1];
          if ( !v20 )
          {
            v48 = (_QWORD *)sub_186B270(0x18u);
            *v48 = 2;
            v23 = 1;
            v20 = v48 + 1;
            a2[1] = v20;
            v24 = v20;
            goto LABEL_27;
          }
          v21 = *((_DWORD *)v20 - 1);
          if ( v21 == *((_DWORD *)v20 - 2) )
          {
            v43 = (3 * v21 + 1) >> 1;
            v44 = 8 * v43 + 8;
            v33 = v43;
            if ( 8 * v21 + 8 >= (unsigned int)v44 || v21 >= v43 )
              goto LABEL_62;
            v34 = (unsigned int *)sub_186B300(v20 - 1, v44);
            v20 = v34 + 2;
            a2[1] = v34 + 2;
LABEL_46:
            v35 = v34[1];
            *v34 = v33;
            v36 = v35;
            v24 = &v20[v35];
            v23 = v36 + 1;
            goto LABEL_27;
          }
        }
        else
        {
          v26 = (_QWORD *)a2[7];
          if ( v26 )
          {
            v27 = *((_DWORD *)v26 - 1);
            if ( v27 == *((_DWORD *)v26 - 2) )
            {
              v37 = (3 * v27 + 1) >> 1;
              if ( 8 * v27 + 8 >= 8 * v37 + 8 || v27 >= v37 )
              {
LABEL_62:
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v57, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v57);
                sub_233E40((__int64)v57);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v55 = (3 * v27 + 1) >> 1;
              v38 = (unsigned int *)sub_186B300(v26 - 1, 8 * v37 + 8);
              v39 = v38[1];
              v26 = v38 + 2;
              *v38 = v55;
              LODWORD(v38) = v39;
              a2[7] = v26;
              v30 = &v26[v39];
              v29 = (_DWORD)v38 + 1;
            }
            else
            {
              v28 = v27;
              v29 = v27 + 1;
              v30 = &v26[v28];
            }
          }
          else
          {
            v47 = (_QWORD *)sub_186B270(0x18u);
            *v47 = 2;
            v29 = 1;
            v26 = v47 + 1;
            a2[7] = v26;
            v30 = v26;
          }
          *v30 = v8;
          *((_DWORD *)v26 - 1) = v29;
          if ( v13 )
            ++*(_DWORD *)(v13 + 8);
          v20 = (_QWORD *)a2[3];
          if ( !v20 )
          {
            v46 = (_QWORD *)sub_186B270(0x18u);
            *v46 = 2;
            v23 = 1;
            v20 = v46 + 1;
            a2[3] = v20;
            v24 = v20;
            goto LABEL_27;
          }
          v21 = *((_DWORD *)v20 - 1);
          if ( v21 == *((_DWORD *)v20 - 2) )
          {
            v31 = (3 * v21 + 1) >> 1;
            v32 = 8 * v31 + 8;
            v33 = v31;
            if ( 8 * v21 + 8 >= (unsigned int)v32 || v21 >= v31 )
              goto LABEL_62;
            v34 = (unsigned int *)sub_186B300(v20 - 1, v32);
            v20 = v34 + 2;
            a2[3] = v34 + 2;
            goto LABEL_46;
          }
        }
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v20[v22];
LABEL_27:
        *v24 = v13;
        *((_DWORD *)v20 - 1) = v23;
LABEL_28:
        v25 = v6 + 1;
        if ( (__int64 *)v7 != v6 + 1 )
        {
          while ( 1 )
          {
            v8 = *v25;
            v6 = v25;
            if ( (unsigned __int64)*v25 > 1 )
              break;
            if ( (__int64 *)v7 == ++v25 )
              return 1;
          }
          if ( (__int64 *)v7 != v25 )
            continue;
        }
        return 1;
      }
    }
  }
  return 1;
}

