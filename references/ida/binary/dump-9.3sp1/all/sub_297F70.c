__int64 __fastcall sub_297F70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // ebp
  __int64 *v29; // r12
  __int64 *v30; // rbx
  __int64 *v31; // [rsp+0h] [rbp-48h] BYREF
  __int128 v32; // [rsp+8h] [rbp-40h]
  unsigned __int64 v33; // [rsp+18h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 18
    || !(unsigned __int8)sub_285160(v2, 1, 1)
    && !(unsigned __int8)sub_285160(v2, 66, 1)
    && !(unsigned __int8)sub_285230(v2) )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a2 + 24);
  v31 = nullptr;
  v32 = 0;
  sub_285570(*(_QWORD *)(v6 + 64), (__int64)&v31);
  v7 = *(_QWORD *)v2;
  v8 = *(_QWORD *)(v2 + 24);
  sub_255850((__int64 *)v2, *(_QWORD *)(v2 + 32));
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
  v13 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v8, v10, v11, v12);
  v14 = v9;
  v17 = sub_241920(v9, (__int64)v13, v15, v16);
  v20 = sub_241330(v14, (__int64)v13, v18, v19);
  *(_QWORD *)(v17 + 64) = v20;
  *((_DWORD *)sub_2413C0((__int64)v20, v7, v21, v22) + 2) = 78;
  v23 = (__int64)v31;
  if ( (_QWORD)v32 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) + 24LL) + 8LL);
    v25 = sub_23FAB0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v24 + 16), 1);
    *(_DWORD *)(v24 + 28) = v25;
    v23 = (__int64)v31;
    v28 = v25;
    v29 = &v31[v32];
    if ( v29 != v31 )
    {
      v30 = v31;
      do
        sub_241390(*v30++, v28, v26, v27);
      while ( v29 != v30 );
      v23 = (__int64)v31;
    }
  }
  if ( v23 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v23);
  }
  return 1;
}
