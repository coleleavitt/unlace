__int64 __fastcall sub_1FE110(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  _DWORD **v11; // rax
  _DWORD **v12; // rcx
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  const char *v16; // r13
  const char *v17; // rsi
  char v18; // r15
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // eax
  double v22; // xmm0_8
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  int v29; // r14d
  int v30; // ebp
  __int64 v31; // [rsp+0h] [rbp-98h] BYREF
  __int128 v32; // [rsp+8h] [rbp-90h]
  __int64 v33; // [rsp+18h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-68h]
  __int128 v35; // [rsp+38h] [rbp-60h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v6 = a2;
  v36 = __readfsqword(0x28u);
  v8 = sub_277DF0();
  v9 = *(_QWORD *)(a1 + 112);
  v10 = *(_DWORD **)(v8 + 112);
  if ( v10 )
  {
    v11 = (_DWORD **)(v10 + 14);
    v12 = (_DWORD **)(v10 + 20);
    while ( 1 )
    {
      v10 = *v11;
      if ( *v11 )
      {
        if ( (_DWORD)v9 == v10[2] )
          break;
      }
      if ( ++v11 == v12 )
      {
        v10 = nullptr;
        break;
      }
    }
  }
  v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 144LL);
  if ( v13 == desktops_diff_source_t__::vfunc_18 )
  {
    if ( a2 != -1 )
    {
LABEL_9:
      v14 = sub_1EBC80(a1, v6, 0);
      v15 = *(_QWORD *)(a1 + 728);
      v31 = 0;
      v16 = (const char *)v14;
      v34 = 0;
      v32 = 0;
      v35 = 0;
      linearray_t_ctr(&v31, v15);
      v17 = v16;
      linearray_t_set_place(&v31, v16);
      v18 = a3 & ((int)v32 > 0);
      if ( v18 )
      {
        v29 = v32 - 1;
        v30 = 0;
        if ( (_DWORD)v32 != 1 )
        {
          do
          {
            linearray_t_down(&v31);
            ++v30;
          }
          while ( v30 != v29 );
        }
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        v20 = v19;
        v17 = (const char *)v19;
        if ( *(int *)(a1 + 940) <= 740 )
          v21 = l_compare(v16, v19);
        else
          v21 = l_compare2(v16, v19, *(_QWORD *)(a1 + 728));
        v18 = v21 == 0;
      }
      if ( a4 )
        *a4 = v18;
      v22 = qfree(v16, v17);
      linearray_t_dtr(&v31);
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        v22 = qfree(v34, v17, v22);
      }
      v23 = v31;
      if ( v31 )
      {
        v24 = v32;
        if ( (_QWORD)v32 )
        {
          v25 = 0;
          do
          {
            v26 = (__int64 *)(v23 + 24 * v25);
            v27 = *v26;
            if ( *v26 )
            {
              v26[1] = 0;
              v22 = qfree(v27, v17, v22);
              v23 = v31;
            }
            ++v25;
          }
          while ( v24 != v25 );
        }
        *(_QWORD *)&v32 = 0;
        qfree(v23, v17, v22);
      }
      return v20;
    }
  }
  else
  {
    v6 = v13((__int64)v10, a2);
    if ( v6 != -1 )
      goto LABEL_9;
  }
  if ( a4 )
    *a4 = 0;
  return 0;
}
