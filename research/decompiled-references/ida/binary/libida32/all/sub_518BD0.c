unsigned __int64 __fastcall sub_518BD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 i; // r14
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // rax
  _DWORD *v9; // rsi
  unsigned int *v10; // rbp
  unsigned int *v12; // r12
  __int64 v13; // r13
  _QWORD *j; // rdi
  unsigned int v15; // r14d
  _DWORD *v16; // rsi
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v18; // [rsp+18h] [rbp-40h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)a1;
  v19 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v1 + 1616);
  if ( *(_BYTE *)(v3 + 64) )
    sub_517580((__int64 *)(v3 + 32), 0);
  v4 = *(_QWORD *)(v3 + 48);
  ptr = nullptr;
  v18 = 0;
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v7 = sub_5179F0(a1, i);
      v8 = v18;
      v9 = ptr;
      if ( *((_QWORD *)&v18 + 1) < (unsigned __int64)(v18 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v18 + 1, 4);
        v9 = ptr;
        v8 = v18;
      }
      v9[v8] = v7;
      v6 = v18 + 1;
      *(_QWORD *)&v18 = v18 + 1;
    }
    v10 = (unsigned int *)ptr;
    v12 = (unsigned int *)((char *)ptr + 4 * v6);
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 1616LL);
    if ( v12 != ptr )
    {
      for ( j = *(_QWORD **)(*(_QWORD *)a1 + 1616LL); ; j = *(_QWORD **)(*(_QWORD *)a1 + 1616LL) )
      {
        v15 = *v10;
        v16 = sub_5185C0(j, *v10);
        if ( v16 )
          sub_518200(*(_QWORD *)(*(_QWORD *)a1 + 1616LL), (__int64)v16, 1424);
        else
          sub_517D00(v13, v15);
        if ( v12 == ++v10 )
          break;
      }
      v10 = (unsigned int *)ptr;
    }
    if ( v10 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v10);
    }
  }
  return v19 - __readfsqword(0x28u);
}

