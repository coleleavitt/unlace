__int64 __fastcall Z3_qe_model_project(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5)
{
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rdi
  _DWORD *v11; // r12
  __int64 v12; // r14
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 *v20; // [rsp+0h] [rbp-60h]
  char v21; // [rsp+Fh] [rbp-51h]
  __int64 v22; // [rsp+10h] [rbp-50h] BYREF
  __int64 *v23; // [rsp+18h] [rbp-48h]
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h]

  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v21 = v8;
  if ( v8 )
  {
    v20 = a4;
    sub_2A1FA0(a1, a2, a3, a4, a5);
    a4 = v20;
  }
  v9 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v22 = v9;
  v23 = nullptr;
  if ( (unsigned __int8)sub_2B3870(a3, a4, (__int64)&v22) )
  {
    v10 = *(_QWORD *)(a1 + 232);
    v25 = *(_QWORD *)(a1 + 232);
    if ( a5 )
      ++*(_DWORD *)(a5 + 8);
    v24 = a5;
    v11 = *(_DWORD **)(a2 + 24);
    if ( v11 )
      ++v11[4];
    sub_3D9A20(v10, &v22, &v24, v11, 0, 0, 0);
    sub_251FD0(a1, v24);
    v12 = v24;
    if ( v11 && (v13 = v11[4] == 1, --v11[4], v13) )
    {
      (**(void (__fastcall ***)(_DWORD *))v11)(v11);
      sub_186B220(v11);
      v14 = v24;
    }
    else
    {
      v14 = v12;
    }
    if ( v14 )
    {
      v15 = v25;
      v13 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v15, v14);
    }
    v16 = v23;
    if ( !v23 )
      goto LABEL_23;
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( v21 )
    {
      sub_2BB620(0);
      v16 = v23;
      v12 = 0;
      if ( !v23 )
        goto LABEL_30;
    }
    else
    {
      v16 = v23;
      v12 = 0;
      if ( !v23 )
        return v12;
    }
  }
  v17 = &v16[*((unsigned int *)v16 - 1)];
  if ( v16 >= v17 )
    goto LABEL_22;
  do
  {
    while ( 1 )
    {
      v18 = *v16;
      if ( *v16 )
      {
        v13 = (*(_DWORD *)(v18 + 8))-- == 1;
        if ( v13 )
          break;
      }
      if ( ++v16 >= v17 )
        goto LABEL_21;
    }
    sub_15D7BC0(v22, v18);
    ++v16;
  }
  while ( v16 < v17 );
LABEL_21:
  v16 = v23;
  if ( v23 )
LABEL_22:
    sub_186B220(v16 - 1);
LABEL_23:
  if ( v21 )
LABEL_30:
    byte_1C7EBA0 = 1;
  return v12;
}

