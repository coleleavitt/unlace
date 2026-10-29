unsigned int *__fastcall sub_AB6BC0(__int64 *a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // r15
  int *v7; // rax
  int v8; // r14d
  __int64 v9; // rbx
  _QWORD *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // rdx
  __int64 v16; // rdi
  _QWORD *v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r14
  unsigned int v24; // r15d
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  unsigned int *result; // rax
  int v34[2]; // [rsp+0h] [rbp-80h]
  unsigned int v35; // [rsp+0h] [rbp-80h]
  unsigned int v36; // [rsp+8h] [rbp-78h]
  char v37; // [rsp+Fh] [rbp-71h]
  __int64 v38; // [rsp+10h] [rbp-70h]
  __int64 v39; // [rsp+18h] [rbp-68h]
  __int64 v40; // [rsp+28h] [rbp-58h] BYREF
  __int64 v41; // [rsp+30h] [rbp-50h] BYREF
  char v42; // [rsp+38h] [rbp-48h]

  v5 = *(_QWORD **)(a1[4] + 8LL * a2);
  v6 = *v5;
  v7 = *(int **)(*(_QWORD *)(sub_15D1F10(*v5) + 24) + 8LL);
  if ( *((_BYTE *)v7 + 8) )
    sub_DBF6E(0);
  v8 = *v7;
  v9 = *v5;
  v39 = a1[2];
  v37 = 1;
  if ( (unsigned int)sub_8E7030(v39) )
    v37 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v39 + 7488) + 56LL))(*(_QWORD *)(v39 + 7488), v9);
  v10 = (_QWORD *)(a1[63] + 8LL * a2);
  if ( *v10 )
    *(_DWORD *)(*v10 - 4LL) = 0;
  v11 = a1[64];
  if ( v11 )
    *(_DWORD *)(v11 - 4) = 0;
  LODWORD(v12) = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      LODWORD(v41) = v12;
      v42 = 0;
      v16 = a1[3];
      v40 = v6;
      v38 = sub_15DCAD0(v16, (int)&v40, 0);
      sub_15D0DF0(&v41);
      v17 = (_QWORD *)a1[64];
      if ( v17 )
      {
        v18 = *((_DWORD *)v17 - 1);
        if ( v18 == *((_DWORD *)v17 - 2) )
        {
          v19 = (3 * v18 + 1) >> 1;
          if ( 8 * v18 + 8 >= 8 * v19 + 8 || v18 >= v19 )
          {
LABEL_33:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_139F3A(&v41, "Overflow encountered when expanding vector", v3);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v41);
            sub_233E40((__int64)&v41);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v36 = (3 * v18 + 1) >> 1;
          v20 = (unsigned int *)sub_186B300(v17 - 1, 8 * v19 + 8);
          v17 = v20 + 2;
          *v20 = v36;
          v21 = v20[1];
          a1[64] = (__int64)(v20 + 2);
          LODWORD(v20) = v21;
          v15 = &v17[v21];
          v14 = (_DWORD)v20 + 1;
        }
        else
        {
          v13 = v18;
          v14 = v18 + 1;
          v15 = &v17[v13];
        }
      }
      else
      {
        v32 = (_QWORD *)sub_186B270(0x18u);
        v17 = v32 + 1;
        *v32 = 2;
        v14 = 1;
        a1[64] = (__int64)v17;
        v15 = v17;
      }
      v12 = (unsigned int)(v12 + 1);
      *v15 = v38;
      *((_DWORD *)v17 - 1) = v14;
      if ( (_DWORD)v12 == v8 )
      {
        v22 = 8 * v12;
        v23 = 0;
        sub_B6E740(a1[2]);
        while ( 1 )
        {
          v24 = *(_DWORD *)(*(_QWORD *)(a1[2] + 8832) + 4LL * **(unsigned int **)(a1[64] + v23));
          v25 = (_QWORD *)*v10;
          if ( *v10 )
          {
            v26 = *((unsigned int *)v25 - 1);
            if ( (_DWORD)v26 == *((_DWORD *)v25 - 2) )
            {
              v28 = (unsigned int)(3 * v26 + 1) >> 1;
              v29 = 4 * v28 + 8;
              if ( 4 * (int)v26 + 8 >= (unsigned int)v29 || (unsigned int)v26 >= v28 )
                goto LABEL_33;
              v35 = (unsigned int)(3 * v26 + 1) >> 1;
              v30 = (unsigned int *)sub_186B300(v25 - 1, v29);
              v25 = v30 + 2;
              *v10 = v30 + 2;
              *v30 = v35;
              result = &v30[v30[1] + 2];
            }
            else
            {
              result = (unsigned int *)v25 + v26;
            }
          }
          else
          {
            v31 = (_QWORD *)sub_186B270(0x10u);
            v25 = v31 + 1;
            *v31 = 2;
            *v10 = v31 + 1;
            result = (unsigned int *)(v31 + 1);
          }
          *result = 2 * v24;
          ++*((_DWORD *)v25 - 1);
          if ( v37
            && (v27 = a1[2],
                *(_QWORD *)v34 = *(_QWORD *)(*(_QWORD *)(v27 + 8840) + 8LL * v24),
                result = (unsigned int *)sub_8E7030(v27),
                (_DWORD)result)
            && (result = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v27 + 7488) + 56LL))(
                                           *(_QWORD *)(v27 + 7488),
                                           *(int **)v34),
                !(_BYTE)result) )
          {
            v23 += 8;
            result = (unsigned int *)sub_9936C0(a1[2], v24);
            if ( v22 == v23 )
              return result;
          }
          else
          {
            v23 += 8;
            if ( v22 == v23 )
              return result;
          }
        }
      }
    }
  }
  return (unsigned int *)sub_B6E740(a1[2]);
}

