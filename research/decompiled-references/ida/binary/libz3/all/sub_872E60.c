__int64 __fastcall sub_872E60(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // r14
  __int64 *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 *v16; // rbp
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 result; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 *v23; // r13
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  __int64 *v26; // rbp
  unsigned __int64 v27; // r12
  __int64 v28; // rsi
  unsigned int v29; // [rsp+Ch] [rbp-7Ch]
  __int64 v30; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v33; // [rsp+38h] [rbp-50h]
  __int64 v34; // [rsp+40h] [rbp-48h] BYREF
  __int64 v35; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v5 )
  {
    v6 = **(unsigned int **)(a2 + 40);
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 - 4) )
      v5 = 0;
    else
      v5 = *(_QWORD *)(v5 + 8 * v6);
  }
  v7 = sub_86BFC0((unsigned int *)a1, v5);
  v30 = v4;
  v31 = nullptr;
  sub_86BC60(a1, v7, (__int64)&v30);
  v8 = v30;
  v9 = v31;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v10 )
  {
    v11 = **(unsigned int **)(a2 + 32);
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) )
      v10 = 0;
    else
      v10 = *(_QWORD *)(v10 + 8 * v11);
  }
  v12 = sub_86BFC0((unsigned int *)a1, v10);
  v32 = v4;
  v33 = nullptr;
  sub_86BC60(a1, v12, (__int64)&v32);
  v13 = *(_QWORD *)(a1 + 72);
  v14 = v32;
  v34 = 0;
  v15 = a1 + 272;
  v16 = v33;
  v35 = v13;
  if ( v9 )
    v17 = *((unsigned int *)v9 - 1);
  else
    v17 = 0;
  sub_FD8930(v15, v17, v9, v33, &v34);
  v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 472LL))(
          *(_QWORD *)(a1 + 80),
          v34,
          0,
          0);
  v18 = sub_7E4F30(a1, (unsigned int *)a2);
  result = sub_86DC50(a1, v29, v18);
  v20 = v34;
  if ( v34 )
  {
    v21 = v35;
    v22 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v22 )
      result = sub_15D7BC0(v21, v20);
  }
  if ( v16 )
  {
    v23 = v16;
    v24 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
    if ( (unsigned __int64)v16 < v24 )
    {
      do
      {
        while ( 1 )
        {
          v25 = *v23;
          if ( *v23 )
          {
            v22 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v23 >= v24 )
            goto LABEL_19;
        }
        ++v23;
        sub_15D7BC0(v14, v25);
      }
      while ( (unsigned __int64)v23 < v24 );
    }
LABEL_19:
    result = sub_186B220(v16 - 1);
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
            v22 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v26 >= v27 )
            return sub_186B220(v9 - 1);
        }
        ++v26;
        sub_15D7BC0(v8, v28);
      }
      while ( (unsigned __int64)v26 < v27 );
    }
    return sub_186B220(v9 - 1);
  }
  return result;
}

