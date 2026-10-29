bool __fastcall sub_179BAF0(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r12
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 *v23; // rdx
  bool result; // al
  __int64 v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v29[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = 0;
  v5 = a2;
  v7 = a3;
  v27 = a3 + 2;
  while ( v4 < (unsigned int)sub_B76070(a1, a2, (__int64)a3, a4) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v4) + 48LL);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 120) + 8LL * v4) + 48LL);
    a3 = (_QWORD *)(*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *a3 != *(_QWORD *)(*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v28 = sub_179A6B0(v8, a2, (__int64)a3, a4, v26);
      v29[0] = sub_179A6B0(v9, a2, v10, v11, v12);
      v17 = sub_F685C0(&v28, a2, v13, v14, v15, v16);
      v22 = sub_F685C0(v29, a2, v18, v19, v20, v21);
      v23 = (__int64 *)(*(_QWORD *)&byte_8[v29[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      a2 = *v23;
      if ( *(_QWORD *)(*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *v23 )
      {
        result = v17 != 0 && v17 == v22;
        if ( !result )
          return result;
      }
      v25 = *((unsigned int *)v7 + 2);
      a4 = *((unsigned int *)v7 + 3);
      if ( v25 + 1 > a4 )
      {
        a2 = (__int64)v27;
        sub_2237220(v7, v27, v25 + 1, 4);
        v25 = *((unsigned int *)v7 + 2);
      }
      a3 = (_QWORD *)*v7;
      *(_DWORD *)(*v7 + 4 * v25) = v4;
      ++*((_DWORD *)v7 + 2);
    }
    ++v4;
  }
  return 1;
}
