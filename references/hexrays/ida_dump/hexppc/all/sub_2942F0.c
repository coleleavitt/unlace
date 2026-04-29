__int64 __fastcall sub_2942F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  int v18; // ebp
  __int64 *v19; // r12
  __int64 *v20; // rbx
  __int64 *v21; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 18
    || !(unsigned __int8)sub_2814E0(v2, 1, 1)
    && !(unsigned __int8)sub_2814E0(v2, 66, 1)
    && !(unsigned __int8)sub_2815B0(v2) )
  {
    return 0;
  }
  v5 = *(_QWORD *)(a2 + 24);
  v21 = nullptr;
  v22 = 0;
  sub_2818F0(*(_QWORD *)(v5 + 64), (__int64)&v21);
  v6 = *(_QWORD *)v2;
  v7 = *(_QWORD *)(v2 + 24);
  sub_251BD0((__int64 *)v2, *(_QWORD *)(v2 + 32));
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
  v12 = sub_2407E0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v7, v9, v10, v11);
  v13 = sub_23DCA0(v8, (__int64)v12);
  v14 = sub_23D6B0();
  *(_QWORD *)(v13 + 64) = v14;
  *((_DWORD *)sub_23D740((__int64)v14, v6) + 2) = 78;
  v15 = v21;
  if ( (_QWORD)v22 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) + 24LL) + 8LL);
    v17 = sub_23BE30(*(_QWORD *)(a1 + 64), *(_QWORD *)(v16 + 16), 1);
    *(_DWORD *)(v16 + 28) = v17;
    v15 = v21;
    v18 = v17;
    v19 = &v21[v22];
    if ( v19 != v21 )
    {
      v20 = v21;
      do
        sub_23D710(*v20++, v18);
      while ( v19 != v20 );
      v15 = v21;
    }
  }
  if ( v15 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v15);
  }
  return 1;
}
