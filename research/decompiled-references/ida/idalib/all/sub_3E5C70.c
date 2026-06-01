unsigned __int64 __fastcall sub_3E5C70(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  char *v5; // rbx
  char *v6; // r14
  unsigned int v7; // r14d
  int v8; // r12d
  _QWORD *v9; // r12
  __int64 *v10; // rbx
  char *v11; // r14
  __int64 v12; // rbp
  char *v14; // rbx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r15
  char *v17; // r13
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+8h] [rbp-70h]
  __int128 v20; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v3 = *(int *)(a1 + 8);
  v23 = __readfsqword(0x28u);
  v4 = switch_dbctx(v3);
  v22 = 0;
  ptr = nullptr;
  sub_3E5300(a1, v4, (__int64 *)&ptr, a2);
  v5 = (char *)ptr;
  v6 = (char *)ptr + 24 * v22;
  if ( v6 != ptr )
  {
    do
    {
      sub_411DE0(*(_QWORD *)(v4 + 1672), a2, *(_QWORD *)v5, *(_BYTE *)(a1 + 72) == 100);
      v5 += 24;
    }
    while ( v6 != v5 );
  }
  v7 = *(_DWORD *)(a1 + 12);
  v8 = 1;
  if ( v7 )
    v8 = -(v7 != 1);
  if ( *(_BYTE *)(a1 + 72) == 100 )
  {
    v20 = 0;
    getinf_buf(26, &v20, 16);
    v14 = (char *)ptr;
    v15 = *((_QWORD *)&v20 + 1);
    v16 = v20;
    v17 = (char *)ptr + 24 * v22;
    if ( ptr != v17 )
    {
      do
      {
        v18 = *(_QWORD *)v14;
        if ( *(_QWORD *)v14 >= v16 && v18 < v15 )
        {
          v19 = v15;
          (*(void (__fastcall **)(_QWORD, char *, unsigned __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32)
                                                                                           + 24LL))(
            *(_QWORD *)(a1 + 32),
            v14,
            v18,
            v7,
            (unsigned int)v8,
            0);
          v15 = v19;
        }
        v14 += 24;
      }
      while ( v17 != v14 );
    }
  }
  v9 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 32) + 4LL * v8 + 16)) + 1672);
  v10 = (__int64 *)ptr;
  v11 = (char *)ptr + 24 * v22;
  if ( v11 != ptr )
  {
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        BYTE8(v20) = 0;
        *(_QWORD *)&v20 = -1;
        if ( !(unsigned __int8)sub_3E2000(v9, (__int64)&v20, v12) && !(unsigned __int8)sub_4108F0(v9, &v20, v12) )
          break;
        v10 += 3;
        if ( v11 == (char *)v10 )
          goto LABEL_12;
      }
      sub_3D0150((_DWORD)v9, v12);
      v10 += 3;
    }
    while ( v11 != (char *)v10 );
LABEL_12:
    v10 = (__int64 *)ptr;
  }
  if ( v10 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v10);
  }
  return v23 - __readfsqword(0x28u);
}
