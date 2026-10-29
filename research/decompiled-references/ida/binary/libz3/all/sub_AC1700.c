__int64 __fastcall sub_AC1700(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned int v10; // r13d
  unsigned int *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *v14; // rbx
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-30h]

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v22 = nullptr;
  v7 = (_QWORD *)sub_AB3F30(a1, (unsigned int *)a2, v3, v4, v5, v6);
  v19 = *(_QWORD *)(a1 + 24);
  v21 = v19;
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 112) + 429LL) )
    v9 = v7[14];
  else
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8656) + 8LL * **(unsigned int **)(*v7 + 32LL));
  v10 = sub_B39350(v9, *(unsigned int *)(a1 + 8));
  if ( v10 == -1 )
  {
    v10 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v9);
    sub_AB6BC0((__int64 *)a1, v10);
  }
  v20 = 0;
  sub_AB6A00(a1, v10, (__int64)&v19);
  v11 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL) + 8LL);
  if ( *((_BYTE *)v11 + 8) )
    sub_DBF6E(0);
  v12 = a1 + 120;
  if ( v20 )
    v13 = *(unsigned int *)(v20 - 4);
  else
    v13 = 0;
  sub_FDB000(v12, v13, v20, *v11);
  sub_ABDB30(a1, (__int64)v7, (__int64)&v21);
  v14 = v22;
  if ( v22 )
  {
    v15 = (unsigned __int64)&v22[*((unsigned int *)v22 - 1)];
    if ( (unsigned __int64)v22 >= v15 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          if ( (*(_DWORD *)(v16 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v14 >= v15 )
          goto LABEL_15;
      }
      sub_15D7BC0(v21, v16);
      ++v14;
    }
    while ( (unsigned __int64)v14 < v15 );
LABEL_15:
    v14 = v22;
    if ( v22 )
LABEL_16:
      sub_186B220(v14 - 1);
  }
  return sub_2334C0(&v19);
}

