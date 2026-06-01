void __fastcall sub_1BE6DB0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v4; // r15
  __int64 *v6; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // ebp
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v34[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v36[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v37; // [rsp+88h] [rbp-50h]
  unsigned int v38; // [rsp+90h] [rbp-48h]
  char v39; // [rsp+94h] [rbp-44h]

  v4 = (__int64 *)(a2 + 8);
  v6 = (__int64 *)(a2 + 8);
  sub_168CDE0((__int64)v34, v6, a3, a4, 0);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v37 )
  {
    v6 = *(__int64 **)(a1 + 16);
    sub_AE9DF0(v36, (__int64)v6, 8u);
    v25 = *(_QWORD *)(a1 + 24);
    if ( v37 )
    {
LABEL_17:
      v6 = (__int64 *)v25;
      sub_AE9DF0(v36, v25, 8u);
      goto LABEL_3;
    }
  }
  else
  {
    if ( !v39 )
      goto LABEL_3;
    v22 = sub_168B9E0(v34);
    v23 = v35;
    if ( v35 )
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
    v33 = v23;
    v24 = sub_1587BC0(v22, &v33, v18, v19, v20, v21);
    v6 = (__int64 *)v8;
    sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v38 + 8), v8, 8u);
    v25 = *(_QWORD *)(a1 + 24);
    if ( v37 )
      goto LABEL_17;
  }
  if ( v39 )
  {
    v30 = sub_168B9E0(v34);
    v31 = v35;
    if ( v35 )
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
    v33 = v31;
    v32 = sub_1587BC0(v30, &v33, v26, v27, v28, v29);
    v6 = (__int64 *)v25;
    sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v38 + 8), v25, 8u);
  }
LABEL_3:
  v9 = v34;
  sub_15F7200(v34);
  v11 = *(unsigned int *)(a1 + 40);
  v12 = *(_QWORD *)(a1 + 32);
  v13 = 0;
  v14 = v12 + 16 * v11;
  if ( v14 != v12 )
  {
    do
    {
      v16 = *(_QWORD *)(a2 + 264);
      v17 = *(_DWORD *)(v16 + 12);
      if ( v17 )
      {
        if ( v17 != 1 )
        {
          sub_1BE6FF0(v9, v6, v16, v10);
          return;
        }
        if ( *(_DWORD *)(v16 + 16) <= v13 )
        {
LABEL_10:
          if ( v13 <= 4 || (*(_DWORD *)(v16 + 16) = 4, v14 != v12) )
          {
            sub_168B9F0((__int64)v34, v4, 0, 0x186Fu, 0);
            LODWORD(v33) = (v14 - v12) >> 4;
            sub_1587D10((__int64)v34, (int *)&v33);
            sub_15F7200(v34);
          }
          return;
        }
      }
      else if ( v13 >= 0x7FFFFFFF )
      {
        goto LABEL_10;
      }
      v15 = *(_QWORD *)(v12 + 8);
      v6 = *(__int64 **)v12;
      v9 = (_QWORD *)a2;
      v12 += 16;
      ++v13;
      sub_1BE6900(a2, (char *)v6, v15, 0, 0, 0);
    }
    while ( v12 != v14 );
    if ( v13 > 4 )
      *(_DWORD *)(*(_QWORD *)(a2 + 264) + 16LL) = 4;
  }
}
