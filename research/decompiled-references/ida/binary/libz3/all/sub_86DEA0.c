__int64 __fastcall sub_86DEA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 *v15; // rbp
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // r12d
  unsigned int v19; // eax
  __int64 result; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // r12
  unsigned __int64 v24; // r14
  __int64 v25; // rsi
  __int64 *v26; // rbp
  unsigned __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // [rsp+8h] [rbp-A0h]
  int v30; // [rsp+2Ch] [rbp-7Ch] BYREF
  _QWORD *v31; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-70h] BYREF
  __int64 v33; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-60h]
  __int64 v35; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v36; // [rsp+58h] [rbp-50h]
  __int64 v37; // [rsp+60h] [rbp-48h] BYREF
  __int64 v38; // [rsp+68h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v6 )
  {
    v7 = **(unsigned int **)(a2 + 32);
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 - 4) )
      v6 = 0;
    else
      v6 = *(_QWORD *)(v6 + 8 * v7);
  }
  v8 = sub_86BFC0((unsigned int *)a1, v6);
  v33 = v5;
  v34 = nullptr;
  sub_86BC60(a1, v8, (__int64)&v33);
  v9 = v34;
  v29 = v33;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v10 )
  {
    v11 = **(unsigned int **)(a2 + 40);
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) )
      v10 = 0;
    else
      v10 = *(_QWORD *)(v10 + 8 * v11);
  }
  v12 = sub_86BFC0((unsigned int *)a1, v10);
  v35 = v5;
  v36 = nullptr;
  sub_86BC60(a1, v12, (__int64)&v35);
  v13 = *(_QWORD *)(a1 + 72);
  v14 = v35;
  v37 = 0;
  v15 = v36;
  v38 = v13;
  if ( v9 )
    v16 = *((_DWORD *)v9 - 1);
  else
    v16 = 0;
  v17 = *(_QWORD *)(a3 + 16) == 0;
  v30 = v16;
  v31 = v9;
  v32 = v36;
  if ( v17 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, int *, _QWORD **, __int64 **, __int64 *))(a3 + 24))(a3, &v30, &v31, &v32, &v37);
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 472LL))(
          *(_QWORD *)(a1 + 80),
          v37,
          0,
          0);
  v19 = sub_7E4F30(a1, (unsigned int *)a2);
  result = sub_86DC50(a1, v18, v19);
  v21 = v37;
  if ( v37 )
  {
    v22 = v38;
    v17 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v22, v21);
  }
  if ( v15 )
  {
    v23 = v15;
    v24 = (unsigned __int64)&v15[*((unsigned int *)v15 - 1)];
    if ( (unsigned __int64)v15 < v24 )
    {
      do
      {
        while ( 1 )
        {
          v25 = *v23;
          if ( *v23 )
          {
            v17 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v23 >= v24 )
            goto LABEL_20;
        }
        ++v23;
        sub_15D7BC0(v14, v25);
      }
      while ( (unsigned __int64)v23 < v24 );
    }
LABEL_20:
    result = sub_186B220(v15 - 1);
  }
  if ( v9 )
  {
    v26 = v9;
    v27 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
    if ( (unsigned __int64)v9 < v27 )
    {
      do
      {
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 )
          {
            v17 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v26 >= v27 )
            return sub_186B220(v9 - 1);
        }
        ++v26;
        sub_15D7BC0(v29, v28);
      }
      while ( (unsigned __int64)v26 < v27 );
    }
    return sub_186B220(v9 - 1);
  }
  return result;
}

