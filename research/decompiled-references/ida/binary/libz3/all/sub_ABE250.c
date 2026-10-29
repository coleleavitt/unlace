void __fastcall sub_ABE250(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int v12; // ebp
  int v13; // r8d
  int v14; // r9d
  __int64 *v15; // rbp
  __int64 v16; // r12
  int v17; // edi
  int v18; // esi
  __int64 *v19; // rbx
  unsigned __int64 v20; // r13
  __int64 v21; // rsi
  bool v22; // zf
  __int64 *v23; // rbx
  unsigned __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]
  __int64 v30; // [rsp+20h] [rbp-38h]

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v7 = sub_AB3F30(a1, a2, v3, v4, v5, v6);
  v8 = *(_QWORD *)(a1 + 24);
  v29 = 0;
  v9 = (_QWORD *)v7;
  v10 = *(_QWORD *)(a1 + 16);
  v28 = v8;
  if ( *(_BYTE *)(*(_QWORD *)(v10 + 112) + 429LL) )
    v11 = v9[14];
  else
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8656) + 8LL * **(unsigned int **)(*v9 + 32LL));
  v12 = sub_B39350(v11, *(unsigned int *)(a1 + 8));
  if ( v12 == -1 )
  {
    v12 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v11);
    sub_AB6BC0((__int64 *)a1, v12);
  }
  v26 = v8;
  v27 = nullptr;
  sub_AB6A00(a1, v12, (__int64)&v26);
  v15 = v27;
  v16 = v26;
  v17 = a1 + 120;
  if ( v27 )
    v18 = *((_DWORD *)v27 - 1);
  else
    v18 = 0;
  sub_FD95A0(v17, v18, (_DWORD)v27, (unsigned int)&v28, v13, v14, v26, (_DWORD)v27, v28, v29, v30);
  sub_ABDB30(a1, (__int64)v9, (__int64)&v28);
  v19 = (__int64 *)v29;
  if ( v29 )
  {
    v20 = v29 + 8LL * *(unsigned int *)(v29 - 4);
    if ( v29 >= v20 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v19 >= v20 )
          goto LABEL_14;
      }
      sub_15D7BC0(v28, v21);
      ++v19;
    }
    while ( (unsigned __int64)v19 < v20 );
LABEL_14:
    v19 = (__int64 *)v29;
    if ( v29 )
LABEL_15:
      sub_186B220(v19 - 1);
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
            v22 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v23 >= v24 )
            goto LABEL_23;
        }
        ++v23;
        sub_15D7BC0(v16, v25);
      }
      while ( (unsigned __int64)v23 < v24 );
    }
LABEL_23:
    sub_186B220(v15 - 1);
  }
}

