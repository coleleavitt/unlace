/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100000D60
// Address: 0x0000000100000D60

//----- (0000000100000D60) ----------------------------------------------------
__int64 __fastcall sub_100000D60(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // r14d
  unsigned int v4; // edx
  void *v5; // rcx
  unsigned __int64 v6; // r15
  char *v7; // rax
  size_t v8; // r12
  __int64 v9; // r15
  char *v10; // r13
  unsigned int v11; // r14d
  char *v12; // rcx
  __int64 v13; // rdx
  char *v14; // rbx
  const char *v15; // r13
  size_t v16; // rax
  unsigned __int64 v17; // r8
  void *v18; // rax
  unsigned __int64 v19; // rbx
  int v20; // eax
  const char *v21; // r14
  size_t v22; // rax
  size_t v23; // r13
  unsigned __int64 v24; // rdx
  char *v25; // rbx
  void *v26; // rax
  __int64 v27; // rax
  char *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbx
  void *v31; // rax
  char *v32; // rsi
  char *v33; // rdx
  __int64 v34; // rax
  size_t v35; // r14
  bool v36; // cf
  size_t v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r13
  _BYTE *v41; // rax
  unsigned __int64 v42; // r8
  size_t __len; // [rsp+0h] [rbp-B0h]
  pid_t v45; // [rsp+1Ch] [rbp-94h]
  __int64 v47; // [rsp+28h] [rbp-88h]
  unsigned __int64 v48; // [rsp+28h] [rbp-88h]
  char *v49; // [rsp+30h] [rbp-80h]
  char *v50; // [rsp+38h] [rbp-78h]
  char *v51; // [rsp+38h] [rbp-78h]
  mach_port_name_t t; // [rsp+44h] [rbp-6Ch] BYREF
  size_t v53; // [rsp+48h] [rbp-68h] BYREF
  void *v54[2]; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v55; // [rsp+60h] [rbp-50h]
  int v56[2]; // [rsp+70h] [rbp-40h] BYREF
  int v57; // [rsp+78h] [rbp-38h]

  sub_100001260((char **)a2);
  v45 = getpid();
  *(_QWORD *)v56 = 0xE00000001LL;
  v57 = 0;
  *(_OWORD *)v54 = 0;
  v55 = 0;
  v2 = -1;
  v3 = 0;
  while ( 1 )
  {
    v53 = 0;
    sysctl(v56, 3u, nullptr, &v53, nullptr, 0);
    v4 = v53 / 0x288 + 100;
    if ( (int)v4 <= 0 )
      break;
    v5 = v54[1];
    v6 = v4;
    if ( v54[1] >= (void *)v4 )
    {
      v6 = (unsigned __int64)v54[1];
    }
    else
    {
      v7 = (char *)v54[0];
      if ( v55 < v4 )
      {
        v7 = (char *)qvector_reserve((__int64)v54, v54[0], v4, 0x288u);
        v54[0] = v7;
        v5 = v54[1];
      }
      __bzero(&v7[648 * (_QWORD)v5], 648 * (v6 - (_QWORD)v5));
      v54[1] = (void *)v6;
    }
    v53 = 648 * v6;
    if ( sysctl(v56, 3u, v54[0], &v53, nullptr, 0) )
    {
      if ( *__error() != 12 )
        break;
      if ( (unsigned int)++v2 < 4 )
        continue;
    }
    if ( (int)(v53 / 0x288) > 0 )
    {
      v8 = (v53 / 0x288) & 0x7FFFFFFF;
      v9 = 243;
      do
      {
        v10 = (char *)v54[0];
        v11 = *(_DWORD *)((char *)v54[0] + v9 - 203);
        if ( v11 != v45 )
        {
          if ( task_for_pid(mach_task_self_, v11, &t) )
          {
            sub_100060FA0(a1, "%d: %s is unavailable for debugging\n", v11, (const char *)v54[0] + v9);
          }
          else
          {
            sub_100001810((char **)a2, *(_QWORD *)(a2 + 8) + 1LL);
            v12 = *(char **)a2;
            v13 = *(_QWORD *)(a2 + 8) << 6;
            v14 = &v12[v13];
            *(_OWORD *)&v12[v13 + 8] = 0;
            *(_QWORD *)&v12[v13 + 24] = 0;
            *(_OWORD *)&v12[v13 + 40] = 0;
            v50 = v12;
            v47 = v13;
            *(_QWORD *)&v12[v13 + 56] = 0;
            ++*(_QWORD *)(a2 + 8);
            v15 = &v10[v9];
            v16 = strlen(v15);
            v49 = v14;
            if ( v16 )
            {
              __len = v16;
              v17 = v16 + 1;
              v18 = *((void **)v14 + 1);
              if ( *((_QWORD *)v14 + 3) < v17 )
              {
                v19 = v17;
                v18 = qvector_reserve((__int64)&v50[v47 + 8], v18, v17, 1u);
                *(_QWORD *)&v50[v47 + 8] = v18;
                v17 = v19;
              }
              v14 = v49;
              *((_QWORD *)v49 + 2) = v17;
              memmove(v18, v15, __len);
              *(_BYTE *)(*((_QWORD *)v49 + 1) + __len) = 0;
            }
            else
            {
              *((_QWORD *)v14 + 2) = 0;
            }
            *(_DWORD *)v14 = v11;
            v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 632LL))(a1, v11);
            *((_DWORD *)v49 + 8) = v20;
            v21 = "[32]";
            if ( v20 != 4 )
              v21 = "[?]";
            v51 = &v50[v47 + 40];
            if ( v20 == 8 )
              v21 = "[64]";
            v22 = strlen(v21);
            if ( v22 )
            {
              v23 = v22;
              v24 = v22 + 1;
              v25 = v49;
              v26 = *((void **)v49 + 5);
              if ( *((_QWORD *)v49 + 7) < v24 )
              {
                v48 = v24;
                v26 = qvector_reserve((__int64)v51, *((void **)v49 + 5), v24, 1u);
                *(_QWORD *)v51 = v26;
                v25 = v49;
                v24 = v48;
              }
              *((_QWORD *)v25 + 6) = v24;
              memcpy(v26, v21, v23);
              *(_BYTE *)(*((_QWORD *)v25 + 5) + v23) = 0;
              v27 = *((_QWORD *)v25 + 6);
              v28 = v25;
            }
            else
            {
              v28 = v49;
              *((_QWORD *)v49 + 6) = 0;
              v27 = 0;
            }
            v36 = v27 == 0;
            v29 = v27 - 1;
            v30 = 0;
            if ( !v36 )
              v30 = v29;
            v31 = *((void **)v28 + 5);
            v32 = v51;
            if ( *((_QWORD *)v28 + 7) < (unsigned __int64)(v30 + 2) )
            {
              v31 = qvector_reserve((__int64)v51, v31, v30 + 2, 1u);
              *(_QWORD *)v51 = v31;
              v32 = v51;
            }
            v33 = v49;
            *((_QWORD *)v49 + 6) = v30 + 2;
            *((_BYTE *)v31 + v30) = 32;
            *(_BYTE *)(*((_QWORD *)v49 + 5) + v30 + 1) = 0;
            v34 = *((_QWORD *)v49 + 2);
            v35 = 0;
            v36 = v34 == 0;
            v37 = v34 - 1;
            if ( !v36 )
              v35 = v37;
            if ( !v36 && v37 != 0 )
            {
              v38 = *((_QWORD *)v49 + 6);
              v36 = v38 == 0;
              v39 = v38 - 1;
              v40 = 0;
              if ( !v36 )
                v40 = v39;
              v41 = *((_BYTE **)v49 + 5);
              v42 = v35 + v40 + 1;
              if ( *((_QWORD *)v49 + 7) < v42 )
              {
                v41 = qvector_reserve((__int64)v32, *((void **)v49 + 5), v35 + v40 + 1, 1u);
                *(_QWORD *)v32 = v41;
                v33 = v49;
                v42 = v35 + v40 + 1;
              }
              *((_QWORD *)v33 + 6) = v42;
              v41[v35 + v40] = 0;
              memcpy((void *)(*((_QWORD *)v33 + 5) + v40), *((const void **)v33 + 1), v35);
            }
          }
        }
        v9 += 648;
        --v8;
      }
      while ( v8 );
    }
    v3 = *(_DWORD *)(a2 + 8);
    break;
  }
  if ( v54[0] )
  {
    v54[1] = nullptr;
    qfree(v54[0]);
  }
  return v3;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
