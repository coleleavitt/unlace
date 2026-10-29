__int64 __fastcall sub_432350(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  void *v5; // rbp
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+10h] [rbp-38h]
  __int64 v22; // [rsp+18h] [rbp-30h]
  __int64 v23; // [rsp+20h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 8);
  v19 = 0;
  v5 = (void *)sub_1434DA0(v4, (unsigned int)&v19);
  sub_18572D0(&v19);
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v5 + 24LL))(v5, a1 + 328);
  v20 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  v9 = a2[1];
  v10 = 0;
  v19 = 0;
  if ( v9 )
  {
    do
    {
      if ( v10 >= *(_DWORD *)(v9 - 4) )
        break;
      sub_1435270((_DWORD)v5, *(_QWORD *)(v9 + 8LL * v10), (unsigned int)&v19, v6, v7, v8, v19, v20, v21, v22, v23);
      v9 = a2[1];
      v11 = v19;
      v12 = *a2;
      v13 = (__int64 *)(v9 + 8LL * v10);
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      v14 = *v13;
      if ( *v13 )
      {
        v15 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( v15 )
        {
          sub_15D7BC0(v12, v14);
          v9 = a2[1];
        }
      }
      *v13 = v11;
      ++v10;
    }
    while ( v9 );
    v16 = v19;
    v17 = v20;
    if ( v19 )
    {
      v15 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v17, v16);
    }
  }
  sub_15EE300(a2);
  (**(void (__fastcall ***)(void *))v5)(v5);
  return sub_186B220(v5);
}

