__int64 __fastcall sub_E6D530(__int64 a1, __int64 a2, unsigned int **a3, __int64 a4)
{
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int16 v10; // dx
  unsigned int *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v18; // rdx
  unsigned int *v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned int *v23; // rax
  int v24; // edx
  __int64 v25; // rbx
  __int64 v26; // r14
  unsigned int *v27; // rax
  int v28; // edx
  _DWORD *v29; // rax
  __int64 v30; // [rsp+8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+10h] [rbp-48h] BYREF
  __int64 v32; // [rsp+18h] [rbp-40h]

  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_4;
  v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v8 || *v8 || v8[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
    goto LABEL_4;
  v20 = *(_QWORD *)(a2 + 32);
  v21 = *(_QWORD *)(a2 + 40);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 16LL))(*(_QWORD *)(a1 + 72), v20) )
  {
    v22 = v21;
    v21 = v20;
    v20 = v22;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 16LL))(*(_QWORD *)(a1 + 72), v21) )
  {
LABEL_4:
    v9 = sub_15D1F10(a2);
    v10 = *(_WORD *)(a2 + 4);
    v11 = *(unsigned int **)(v9 + 24);
    if ( v11 )
    {
      v12 = *v11;
      if ( v10 )
        goto LABEL_6;
      v18 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v18 || *v18 != 0x200000000LL || *(_DWORD *)(a2 + 24) != 2 )
        goto LABEL_6;
    }
    else
    {
      if ( v10 )
        return 0;
      v29 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v29 || *v29 || v29[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
        return 0;
    }
    v19 = *(unsigned int **)(sub_15D1F10(*(_QWORD *)(a2 + 32)) + 24);
    if ( !v19 )
      return 0;
    v12 = *v19;
LABEL_6:
    if ( (_DWORD)v12 != -1 )
    {
      v13 = *(_QWORD *)(a1 + 656);
      if ( v13 )
      {
        if ( (unsigned int)v12 < *(_DWORD *)(v13 - 4) )
        {
          v14 = *(_QWORD *)(v13 + 8 * v12);
          if ( v14 )
          {
            sub_E82110(&v31, v14, a2);
            v15 = v31;
            if ( a2 != v31 && !*(_WORD *)(v31 + 4) )
            {
              v16 = *(_QWORD **)(*(_QWORD *)(v31 + 16) + 24LL);
              if ( v16 )
              {
                if ( *v16 == 0x200000000LL && *(_DWORD *)(v31 + 24) == 2 )
                {
                  v25 = *(_QWORD *)(v31 + 32);
                  v26 = *(_QWORD *)(v31 + 40);
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 16LL))(
                         *(_QWORD *)(a1 + 72),
                         v25) )
                  {
                    v27 = *a3;
                    if ( !*a3 || (v28 = *(v27 - 1), v28 == *(v27 - 2)) )
                    {
                      sub_E6C000(a3);
                      v27 = *a3;
                      v28 = *(*a3 - 1);
                    }
                    v30 = v26;
                    *(_QWORD *)&v27[2 * v28] = v25;
                    *(v27 - 1) = v28 + 1;
                    if ( v26 )
                      ++*(_DWORD *)(v26 + 8);
                    sub_E67160((unsigned int **)(a4 + 8), &v30);
                    sub_E65BC0(v31, v32);
                    return 1;
                  }
                  v15 = v31;
                }
              }
            }
            sub_E65BC0(v15, v32);
          }
        }
      }
    }
    return 0;
  }
  v23 = *a3;
  if ( !*a3 || (v24 = *(v23 - 1), v24 == *(v23 - 2)) )
  {
    sub_E6C000(a3);
    v23 = *a3;
    v24 = *(*a3 - 1);
  }
  *(_QWORD *)&v23[2 * v24] = v21;
  *(v23 - 1) = v24 + 1;
  v31 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_E67160((unsigned int **)(a4 + 8), &v31);
  return 1;
}

