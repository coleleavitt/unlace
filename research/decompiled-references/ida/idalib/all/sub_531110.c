unsigned __int64 __fastcall sub_531110(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // r12
  unsigned __int64 i; // r14
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // rsi
  unsigned __int64 *v10; // rbp
  unsigned __int64 *v12; // r12
  __int64 v13; // r13
  _QWORD *j; // rdi
  unsigned __int64 v15; // r14
  _QWORD *v16; // rsi
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v18; // [rsp+18h] [rbp-40h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)a1;
  v19 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v1 + 1808);
  if ( *(_BYTE *)(v3 + 64) )
    sub_52F980((__int64 *)(v3 + 32), 0);
  v4 = *(_QWORD *)(v3 + 48);
  ptr = nullptr;
  v18 = 0;
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v7 = sub_52FDF0(a1, i);
      v8 = v18;
      v9 = ptr;
      if ( *((_QWORD *)&v18 + 1) < (unsigned __int64)(v18 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v18 + 1, 8);
        v9 = ptr;
        v8 = v18;
      }
      v9[v8] = v7;
      v6 = v18 + 1;
      *(_QWORD *)&v18 = v18 + 1;
    }
    v10 = (unsigned __int64 *)ptr;
    v12 = (unsigned __int64 *)((char *)ptr + 8 * v6);
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 1808LL);
    if ( v12 != ptr )
    {
      for ( j = *(_QWORD **)(*(_QWORD *)a1 + 1808LL); ; j = *(_QWORD **)(*(_QWORD *)a1 + 1808LL) )
      {
        v15 = *v10;
        v16 = sub_5309C0(j, *v10);
        if ( v16 )
          sub_5305F0(*(_QWORD *)(*(_QWORD *)a1 + 1808LL), (__int64)v16, 1424);
        else
          sub_530100(v13, v15);
        if ( v12 == ++v10 )
          break;
      }
      v10 = (unsigned __int64 *)ptr;
    }
    if ( v10 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v10);
    }
  }
  return v19 - __readfsqword(0x28u);
}
