__int64 __fastcall sub_421690(__int64 *a1, void **a2)
{
  char **exception; // r12
  __int64 v4; // rbx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  void (__fastcall ***v8)(void *); // rbp
  bool v9; // zf
  _QWORD *v10; // rbp
  __int64 v11; // r15
  _QWORD *v12; // rbx
  unsigned int v13; // r14d
  int v14; // r9d
  __int64 v15; // r13
  __int64 v16; // rdx
  int v17; // r8d
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 *v27; // r14
  unsigned __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rdi
  unsigned int v33; // ecx
  size_t v34; // rsi
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // [rsp+0h] [rbp-A8h]
  __int64 v38; // [rsp+0h] [rbp-A8h]
  void **v39; // [rsp+8h] [rbp-A0h]
  __int64 v40; // [rsp+8h] [rbp-A0h]
  __int64 v41; // [rsp+10h] [rbp-98h]
  __int64 v42; // [rsp+10h] [rbp-98h]
  __int64 *v43; // [rsp+18h] [rbp-90h]
  __int64 v44; // [rsp+18h] [rbp-90h]
  int v45; // [rsp+20h] [rbp-88h]
  void *v46; // [rsp+20h] [rbp-88h]
  __int64 v47; // [rsp+28h] [rbp-80h]
  __int64 v48; // [rsp+30h] [rbp-78h] BYREF
  __int64 v49; // [rsp+38h] [rbp-70h]
  int v50[2]; // [rsp+40h] [rbp-68h]
  void *v51; // [rsp+48h] [rbp-60h]
  int v52[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v53; // [rsp+58h] [rbp-50h]
  __int64 v54; // [rsp+60h] [rbp-48h]
  __int64 v55; // [rsp+68h] [rbp-40h]
  char v56; // [rsp+70h] [rbp-38h]

  v39 = a2;
  v4 = sub_186B270(0xA0u);
  sub_1373200(v4, *a1);
  v8 = (void (__fastcall ***)(void *))*a2;
  ++*(_DWORD *)(v4 + 16);
  if ( v8 )
  {
    v9 = (*((_DWORD *)v8 + 4))-- == 1;
    if ( v9 )
    {
      (**v8)(v8);
      sub_186B220(v8);
    }
  }
  v10 = (_QWORD *)a1[2];
  *a2 = (void *)v4;
  if ( v10 )
  {
    v11 = 6LL * *((unsigned int *)v10 - 1);
    LODWORD(v41) = (_DWORD)v10 + v11 * 8;
    if ( v10 != &v10[v11] )
    {
      v43 = &v48;
      do
      {
        v12 = nullptr;
        v13 = 0;
        sub_420CD0(
          (_DWORD)v43,
          (_DWORD)a1,
          v10[4],
          v5,
          v6,
          v7,
          v37,
          (_DWORD)v39,
          v41,
          (_DWORD)v43,
          v45,
          v47,
          v48,
          v49,
          v50[0],
          (_DWORD)v51,
          *(__int64 *)v52,
          v53,
          v54,
          v55,
          v56);
        v15 = *a1;
        v16 = v10[3];
        v17 = v48;
        *(_QWORD *)v50 = *a1;
        if ( v16 )
        {
          while ( 1 )
          {
            v18 = *(_DWORD *)(v16 - 4);
            if ( v13 >= v18 )
              break;
            v19 = sub_15DC610(
                    *a1,
                    *(_QWORD *)(v16 + 8LL * (v18 - v13 - 1)),
                    0,
                    0,
                    v17,
                    v14,
                    v38,
                    v40,
                    v42,
                    v44,
                    (int)v46,
                    v47,
                    v48,
                    v49,
                    v50[0],
                    v51);
            v20 = v19;
            if ( v19 )
              ++*(_DWORD *)(v19 + 8);
            if ( v12 )
            {
              v21 = *((_DWORD *)v12 - 1);
              if ( v21 == *((_DWORD *)v12 - 2) )
              {
                v33 = (3 * v21 + 1) >> 1;
                v34 = 8 * v33 + 8;
                if ( 8 * v21 + 8 >= (unsigned int)v34 || v21 >= v33 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v52, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v52);
                  sub_233E40((__int64)v52);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                HIDWORD(v38) = (3 * v21 + 1) >> 1;
                v35 = sub_186B300(v12 - 1, v34);
                v12 = (_QWORD *)(v35 + 8);
                *(_DWORD *)v35 = HIDWORD(v38);
                LODWORD(v35) = *(_DWORD *)(v35 + 4);
                v24 = &v12[(unsigned int)v35];
                v23 = v35 + 1;
              }
              else
              {
                v22 = v21;
                v23 = v21 + 1;
                v24 = &v12[v22];
              }
            }
            else
            {
              v36 = (_QWORD *)sub_186B270(0x18u);
              v24 = v36 + 1;
              *v36 = 2;
              v12 = v36 + 1;
              v23 = 1;
            }
            v16 = v10[3];
            *v24 = v20;
            ++v13;
            *((_DWORD *)v12 - 1) = v23;
            if ( !v16 )
            {
              v17 = v48;
LABEL_16:
              LODWORD(v16) = *((_DWORD *)v12 - 1);
              goto LABEL_17;
            }
          }
          v17 = v48;
          if ( v12 )
            goto LABEL_16;
          LODWORD(v16) = 0;
        }
LABEL_17:
        *(_QWORD *)v52 = 0;
        v53 = v15;
        sub_1697FC0(v15, 0, v16, (int)v12, v17, (int)v52, v38, v40, v42, v44, v46);
        sub_135F9B0(*v39, *v10, *(_QWORD *)v52);
        v25 = *(_QWORD *)v52;
        if ( *(_QWORD *)v52 )
        {
          v26 = v53;
          v9 = (*(_DWORD *)(*(_QWORD *)v52 + 8LL))-- == 1;
          if ( v9 )
            sub_15D7BC0(v26, v25);
        }
        if ( v12 )
        {
          v27 = v12;
          v28 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
          if ( (unsigned __int64)v12 < v28 )
          {
            do
            {
              while ( 1 )
              {
                v29 = *v27;
                if ( *v27 )
                {
                  v9 = (*(_DWORD *)(v29 + 8))-- == 1;
                  if ( v9 )
                    break;
                }
                if ( (unsigned __int64)++v27 >= v28 )
                  goto LABEL_27;
              }
              ++v27;
              sub_15D7BC0(v15, v29);
            }
            while ( (unsigned __int64)v27 < v28 );
          }
LABEL_27:
          sub_186B220(v12 - 1);
        }
        v30 = v48;
        if ( v48 )
        {
          v31 = v49;
          v9 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v31, v30);
        }
        v10 += 6;
      }
      while ( (_QWORD *)v41 != v10 );
    }
  }
  return sub_1336CD0(a1 + 1, v39);
}

