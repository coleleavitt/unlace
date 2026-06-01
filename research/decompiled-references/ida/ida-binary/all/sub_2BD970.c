__int64 __fastcall sub_2BD970(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r12d
  __int64 (__fastcall *v12)(__int64); // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // r12d
  unsigned int v16; // ebx
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v21 = __readfsqword(0x28u);
  v5 = *a2;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree(v5, (const char *)a2);
    *a2 = 0;
    a2[2] = 0;
  }
  v6 = a1[55];
  v19 = 0;
  v20 = 0;
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 8);
  v7 = a1[25];
  v8 = a1[24];
  v9 = v8;
  v10 = 20 * v7;
  if ( 20 * v7 )
  {
    do
    {
      if ( *(_BYTE *)v9 )
      {
        if ( !v6
          || ((v11 = *(_DWORD *)(v9 + 4),
               v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL),
               v12 != interactive_graph_t__::vfunc_7)
            ? (v13 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64))v12)(v6, a2, v10))
            : (v13 = *(_DWORD *)(v6 + 184)),
              v13 > v11) )
        {
          v14 = v20;
          v15 = *(_DWORD *)(v9 + 4);
          a2 = (__int64 *)v19;
          if ( *((_QWORD *)&v20 + 1) < (unsigned __int64)(v20 + 1) )
          {
            v19 = qvector_reserve(&v19, v19, v20 + 1, 4);
            a2 = (__int64 *)v19;
            v14 = v20;
          }
          *((_DWORD *)a2 + v14) = v15;
          *(_QWORD *)&v20 = v20 + 1;
        }
        v8 = a1[24];
        v7 = a1[25];
      }
      v9 += 20;
      v10 = v8 + 20 * v7;
    }
    while ( v9 != v10 );
  }
  v16 = sub_29A490(a3, (__int64 (__fastcall *)(__int64))&v19, v4);
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, (const char *)&v19);
  }
  return v16;
}
