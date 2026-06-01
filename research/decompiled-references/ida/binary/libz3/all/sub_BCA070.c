__int64 __fastcall sub_BCA070(__int64 a1)
{
  char **exception; // rbp
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned int *v7; // r12
  unsigned int **v8; // rbx
  __int64 v9; // r14
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int *v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  unsigned int ***v22; // rdx
  unsigned int ***v23; // r10
  unsigned int **v24; // r11
  unsigned int ***v25; // r8
  unsigned int **v26; // rax
  _DWORD *v27; // rdx
  char v28; // al
  _QWORD *v29; // rax
  unsigned int *v30; // r14
  int v31[2]; // [rsp+8h] [rbp-90h]
  __int64 *v32; // [rsp+8h] [rbp-90h]
  int v33[2]; // [rsp+8h] [rbp-90h]
  int v34[2]; // [rsp+8h] [rbp-90h]
  __int64 v35; // [rsp+10h] [rbp-88h]
  int v36[2]; // [rsp+10h] [rbp-88h]
  int v37[2]; // [rsp+10h] [rbp-88h]
  int v38[2]; // [rsp+18h] [rbp-80h]
  __int64 v39; // [rsp+28h] [rbp-70h] BYREF
  __int64 v40; // [rsp+30h] [rbp-68h] BYREF
  __int64 v41; // [rsp+38h] [rbp-60h]
  __int64 v42[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
    return 1;
  v4 = *(unsigned int *)(v3 - 4);
  v5 = *(_QWORD *)(a1 + 24);
  v39 = 0;
  v40 = 0;
  v41 = v5;
  if ( !(_DWORD)v4 )
    return 1;
  v6 = 0;
  v7 = nullptr;
  while ( 1 )
  {
    v8 = *(unsigned int ***)(v3 + 8 * v6);
    v9 = (__int64)*v8;
    if ( !*((_WORD *)*v8 + 2) )
    {
      v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
      if ( v10 )
      {
        if ( *v10 == *(_DWORD *)(a1 + 1744) && v10[1] == 11 && v8[3] == (unsigned int *)v8 )
        {
          v32 = *((__int64 **)v8[14] + 1);
          *(_QWORD *)v36 = *((_QWORD *)v8[15] + 1);
          if ( !(unsigned __int8)sub_BC9C90(a1, *v32, &v39, &v40) )
            goto LABEL_43;
          v22 = *(unsigned int ****)(*(_QWORD *)v36 + 56LL);
          if ( v22 )
          {
            v23 = &v22[*((unsigned int *)v22 - 1)];
            if ( v23 != v22 )
            {
              v24 = (unsigned int **)v32;
              v25 = *(unsigned int ****)(*(_QWORD *)v36 + 56LL);
              while ( 1 )
              {
                v26 = *v25;
                if ( v8 != *v25 && v26 == (unsigned int **)v26[3] && !*((_WORD *)*v26 + 2) )
                {
                  v27 = *(_DWORD **)(*((_QWORD *)*v26 + 2) + 24LL);
                  if ( v27 )
                  {
                    if ( *(_DWORD *)(a1 + 1744) == *v27 && v27[1] == 11 )
                    {
                      *(_QWORD *)v38 = v25;
                      *(_QWORD *)v37 = v23;
                      *(_QWORD *)v33 = v24;
                      v28 = sub_BC9DE0(a1, v40, v24, *((__int64 **)v26[14] + 1));
                      v24 = *(unsigned int ***)v33;
                      v23 = *(unsigned int ****)v37;
                      v25 = *(unsigned int ****)v38;
                      if ( !v28 )
                        break;
                    }
                  }
                }
                if ( v23 == ++v25 )
                  goto LABEL_9;
              }
LABEL_43:
              v17 = 0;
LABEL_24:
              v18 = v40;
              v19 = v41;
              if ( !v40 || (v20 = *(_DWORD *)(v40 + 8) == 1, --*(_DWORD *)(v40 + 8), !v20) )
              {
                if ( !v7 )
                  return v17;
                goto LABEL_27;
              }
              goto LABEL_57;
            }
          }
        }
      }
    }
LABEL_9:
    if ( v8 != (unsigned int **)v8[1]
      || (v11 = *(_DWORD **)(sub_15D1F10(v9) + 24)) == nullptr
      || *(_DWORD *)(a1 + 1720) != *v11
      || v11[1] )
    {
      if ( v4 == ++v6 )
        goto LABEL_23;
      goto LABEL_5;
    }
    if ( !v7 )
    {
      v29 = (_QWORD *)sub_186B270(0x10u);
      v7 = (unsigned int *)(v29 + 1);
      *v29 = 2;
      v16 = (unsigned int *)(v29 + 1);
      goto LABEL_22;
    }
    v12 = *(v7 - 1);
    if ( !(_DWORD)v12 )
    {
      if ( !*(v7 - 2) )
        goto LABEL_60;
LABEL_45:
      v16 = &v7[v12];
      goto LABEL_22;
    }
    *(_QWORD *)v31 = *v8;
    v35 = *(_QWORD *)(a1 + 16);
    if ( !(unsigned int)sub_8E7030(v35)
      || (*(unsigned __int8 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v35 + 7488) + 56LL))(
           *(_QWORD *)(v35 + 7488),
           *(int **)v31) )
    {
      if ( (unsigned __int8)sub_8EB4E0(*(_QWORD *)(a1 + 16), (__int64)v8) )
        break;
    }
LABEL_17:
    v12 = *(v7 - 1);
LABEL_18:
    if ( *(v7 - 2) != (_DWORD)v12 )
      goto LABEL_45;
    v13 = (unsigned int)(3 * v12 + 1) >> 1;
    v14 = 4 * v13 + 8;
    if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
    {
LABEL_60:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_154526(v42, "Overflow encountered when expanding vector", v2);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v42);
      sub_233E40((__int64)v42);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v15 = (unsigned int *)sub_186B300(v7 - 2, v14);
    v7 = v15 + 2;
    *v15 = v13;
    v16 = &v15[v15[1] + 2];
LABEL_22:
    *v16 = v6++;
    ++*(v7 - 1);
    if ( v4 == v6 )
    {
LABEL_23:
      v17 = 1;
      goto LABEL_24;
    }
LABEL_5:
    v3 = *(_QWORD *)(a1 + 32);
  }
  if ( !(unsigned __int8)sub_BC9C90(a1, v9, &v39, &v40) )
    goto LABEL_53;
  v12 = *(v7 - 1);
  *(_QWORD *)v34 = &v7[v12];
  if ( *(unsigned int **)v34 == v7 )
    goto LABEL_18;
  v30 = v7;
  while ( (unsigned __int8)sub_BC9DE0(a1, v40, v8, *(__int64 **)(*(_QWORD *)(a1 + 32) + 8LL * *v30)) )
  {
    if ( *(unsigned int **)v34 == ++v30 )
      goto LABEL_17;
  }
LABEL_53:
  v18 = v40;
  v19 = v41;
  if ( !v40 || (v20 = *(_DWORD *)(v40 + 8) == 1, --*(_DWORD *)(v40 + 8), !v20) )
  {
    v17 = 0;
LABEL_27:
    sub_186B220(v7 - 2);
    return v17;
  }
  v17 = 0;
LABEL_57:
  sub_15D7BC0(v19, v18);
  if ( v7 )
    goto LABEL_27;
  return v17;
}

