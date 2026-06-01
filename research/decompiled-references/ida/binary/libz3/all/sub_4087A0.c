__int64 __fastcall sub_4087A0(__int64 a1, __int64 a2)
{
  char **exception; // r12
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rax
  _QWORD **v21; // rbp
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v28; // r12
  unsigned int v29; // eax
  unsigned int v30; // r14d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  _QWORD **j; // [rsp+10h] [rbp-C8h]
  __int64 *v41; // [rsp+28h] [rbp-B0h]
  __int64 v42; // [rsp+30h] [rbp-A8h]
  unsigned int i; // [rsp+38h] [rbp-A0h]
  unsigned int v44; // [rsp+3Ch] [rbp-9Ch]
  _QWORD *v45; // [rsp+40h] [rbp-98h]
  __int64 *v46; // [rsp+48h] [rbp-90h]
  _QWORD *v47; // [rsp+50h] [rbp-88h]
  __int64 *v48; // [rsp+68h] [rbp-70h] BYREF
  __int64 v49; // [rsp+70h] [rbp-68h] BYREF
  __int64 v50; // [rsp+78h] [rbp-60h]
  __int64 v51[11]; // [rsp+80h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 64);
  v42 = *(_QWORD *)(a1 + 8);
  v50 = v42;
  v4 = *(unsigned int *)(a1 + 72);
  v49 = 0;
  v4 *= 16;
  v5 = (_QWORD *)((char *)v3 + v4);
  v47 = (_QWORD *)((char *)v3 + v4);
  if ( (_QWORD *)((char *)v3 + v4) == v3 )
    goto LABEL_56;
  v7 = v3;
  while ( *v7 <= 1u )
  {
    v7 += 2;
    if ( v5 == v7 )
      goto LABEL_56;
  }
  v45 = v7;
  if ( v47 == v7 )
  {
LABEL_56:
    v37 = v42;
    v36 = 0;
    v8 = 0;
  }
  else
  {
    v46 = nullptr;
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)v45[1];
      v48 = v46;
      sub_403090(v9, &v48);
      v46 = v48;
      if ( v48 )
      {
        v44 = *((_DWORD *)v48 - 1);
        if ( v44 )
        {
          v41 = v48;
          for ( i = 1; ; ++i )
          {
            v10 = *v41;
            v11 = *(_QWORD *)(a1 + 16);
            v12 = *(__int64 **)(v11 + 264);
            v13 = *(unsigned int *)(v11 + 272);
            v14 = *(_DWORD *)(*v41 + 12);
            v15 = v13 - 1;
            v13 *= 16;
            v16 = (__int64)v12 + v13;
            v17 = 16LL * (v14 & v15);
            v18 = (__int64 *)((char *)v12 + v17);
            if ( v17 == v13 )
            {
LABEL_18:
              while ( v18 != v12 )
              {
                v20 = *v12;
                if ( (unsigned __int64)*v12 > 1 )
                {
                  if ( *(_DWORD *)(v20 + 12) == v14 && v10 == v20 )
                  {
                    v19 = v12;
                    goto LABEL_27;
                  }
                }
                else if ( !v20 )
                {
                  break;
                }
                v12 += 2;
              }
LABEL_59:
              BUG();
            }
            v19 = (__int64 *)((char *)v12 + v17);
            while ( 1 )
            {
              while ( 1 )
              {
                v17 = *v19;
                if ( (unsigned __int64)*v19 > 1 )
                  break;
                if ( !v17 )
                  goto LABEL_59;
                v19 += 2;
                if ( (__int64 *)v16 == v19 )
                  goto LABEL_18;
              }
              if ( *(_DWORD *)(v17 + 12) == v14 && v10 == v17 )
                break;
              v19 += 2;
              if ( (__int64 *)v16 == v19 )
                goto LABEL_18;
            }
LABEL_27:
            v21 = *(_QWORD ***)(v19[1] + 200);
            if ( v21 )
            {
              for ( j = &v21[*((unsigned int *)v21 - 1)]; j != v21; *(_DWORD *)(v17 - 4) = v23 )
              {
                v24 = *(_QWORD *)(a1 + 8);
                v25 = v8;
                sub_407990(*v21, v16, v17, (int)v12, (int)v18, v10);
                v26 = sub_15E1B70(v24);
                v8 = v26;
                if ( v26 )
                  ++*(_DWORD *)(v26 + 8);
                if ( v25 )
                {
                  if ( (*(_DWORD *)(v25 + 8))-- == 1 )
                    sub_15D7BC0(v42, v25);
                }
                v16 = v8;
                sub_43D1D0(*(_QWORD *)a1 + 8LL, v8, 0, i, &v49, 1);
                v28 = v49;
                if ( v49 )
                  ++*(_DWORD *)(v49 + 8);
                v17 = *(_QWORD *)(a2 + 8);
                if ( v17 )
                {
                  v29 = *(_DWORD *)(v17 - 4);
                  if ( v29 == *(_DWORD *)(v17 - 8) )
                  {
                    v30 = (3 * v29 + 1) >> 1;
                    v31 = 8 * v30 + 8;
                    if ( 8 * v29 + 8 >= (unsigned int)v31 || v29 >= v30 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_3FCFD0(v51, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v51);
                      sub_233E40((__int64)v51);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v32 = (unsigned int *)sub_186B300((void *)(v17 - 8), v31);
                    v33 = v32[1];
                    v16 = a2;
                    v17 = (__int64)(v32 + 2);
                    *v32 = v30;
                    LODWORD(v32) = v33;
                    *(_QWORD *)(a2 + 8) = v17;
                    v12 = (__int64 *)(v17 + 8 * v33);
                    v23 = (_DWORD)v32 + 1;
                  }
                  else
                  {
                    v22 = v29;
                    v23 = v29 + 1;
                    v12 = (__int64 *)(v17 + 8 * v22);
                  }
                }
                else
                {
                  v34 = (_QWORD *)sub_186B270(0x18u);
                  v16 = 2;
                  v17 = (__int64)(v34 + 1);
                  v12 = v34 + 1;
                  *v34 = 2;
                  *(_QWORD *)(a2 + 8) = v34 + 1;
                  v23 = 1;
                }
                *v12 = v28;
                ++v21;
              }
            }
            ++v41;
            if ( i >= v44 )
              break;
          }
        }
      }
      v35 = v45 + 2;
      if ( v47 == v45 + 2 )
        break;
      while ( *v35 <= 1u )
      {
        v35 += 2;
        if ( v47 == v35 )
          goto LABEL_52;
      }
      v45 = v35;
    }
    while ( v47 != v35 );
LABEL_52:
    if ( v46 )
      sub_186B220(v46 - 1);
    v36 = v49;
    v37 = v50;
  }
  sub_3FCDF0(v36, v37);
  return sub_3FCDF0(v8, v42);
}

