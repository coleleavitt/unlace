__int64 __fastcall sub_B55080(__int64 a1, unsigned int *a2)
{
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25[2]; // [rsp+0h] [rbp-58h] BYREF
  int v26[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v27; // [rsp+18h] [rbp-40h]

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v5 + 8656);
  if ( !v6 || (v7 = *a2, (unsigned int)v7 >= *(_DWORD *)(v6 - 4)) || (v8 = *(_QWORD *)(v6 + 8 * v7)) == 0 )
    v8 = sub_B68280(v5, a2, 0, 0, 1, v4);
  v9 = sub_B39350(v8, *(_DWORD *)(a1 + 8));
  if ( v9 == -1 || v8 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v9) )
  {
    sub_B54D60(a1, v8);
    v13 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v13 )
    {
      v14 = *(unsigned int *)(v13 + 4);
      if ( (unsigned int)v14 <= 0x2E )
      {
        v15 = 0x474000000000LL;
        if ( _bittest64(&v15, v14) )
        {
          sub_B53280(v25, a1, (__int64)a2, v10, v11, v12);
          v17 = *(_QWORD *)(a1 + 24);
          v18 = v25[0];
          v19 = v25[1];
          v20 = sub_15E1B70(v17);
          v21 = v20;
          if ( v20 )
            ++*(_DWORD *)(v20 + 8);
          sub_B52AB0(a1, v20);
          sub_B537F0((__int64 *)v26, (_QWORD *)a1);
          sub_B52AB0(a1, *(__int64 *)v26);
          v22 = *(_QWORD *)v26;
          if ( *(_QWORD *)v26 )
          {
            v23 = v27;
            v24 = (*(_DWORD *)(*(_QWORD *)v26 + 8LL))-- == 1;
            if ( v24 )
              sub_15D7BC0(v23, v22);
          }
          if ( v21 )
          {
            v24 = (*(_DWORD *)(v21 + 8))-- == 1;
            if ( v24 )
              sub_15D7BC0(v17, v21);
          }
          if ( v18 )
          {
            v24 = (*(_DWORD *)(v18 + 8))-- == 1;
            if ( v24 )
              sub_15D7BC0(v19, v18);
          }
        }
      }
    }
    if ( !(unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16)) )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 88LL))(a1, a2);
  }
  return 1;
}

