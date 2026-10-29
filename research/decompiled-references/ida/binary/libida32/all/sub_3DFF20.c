unsigned __int64 __fastcall sub_3DFF20(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  char *v3; // rbx
  char *v4; // r14
  unsigned int v5; // r14d
  int v6; // r12d
  _QWORD *v7; // r12
  char *v8; // rbx
  char *v9; // r14
  unsigned int v10; // ebp
  unsigned int *v12; // rbx
  unsigned int v13; // r15d
  unsigned int v14; // r10d
  unsigned int *v15; // r13
  __int64 v16; // rdx
  unsigned int v17; // [rsp+Ch] [rbp-6Ch]
  __int64 v18; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v2 = switch_dbctx(*(int *)(a1 + 8));
  v20 = 0;
  ptr = nullptr;
  sub_3DF5C0(a1, v2, (__int64 *)&ptr, a2);
  v3 = (char *)ptr;
  v4 = (char *)ptr + 12 * v20;
  if ( v4 != ptr )
  {
    do
    {
      sub_3FEAD0(*(_QWORD *)(v2 + 1480), a2, *(unsigned int *)v3, *(_BYTE *)(a1 + 72) == 100);
      v3 += 12;
    }
    while ( v4 != v3 );
  }
  v5 = *(_DWORD *)(a1 + 12);
  v6 = 1;
  if ( v5 )
    v6 = -(v5 != 1);
  if ( *(_BYTE *)(a1 + 72) == 100 )
  {
    v18 = 0;
    getinf_buf(26, &v18, 8);
    v12 = (unsigned int *)ptr;
    v13 = v18;
    v14 = HIDWORD(v18);
    v15 = (unsigned int *)((char *)ptr + 12 * v20);
    if ( ptr != v15 )
    {
      do
      {
        v16 = *v12;
        if ( (unsigned int)v16 >= v13 && (unsigned int)v16 < v14 )
        {
          v17 = v14;
          (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(
            *(_QWORD *)(a1 + 32),
            v12,
            v16,
            v5,
            (unsigned int)v6,
            0);
          v14 = v17;
        }
        v12 += 3;
      }
      while ( v15 != v12 );
    }
  }
  v7 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 32) + 4LL * v6 + 16)) + 1480);
  v8 = (char *)ptr;
  v9 = (char *)ptr + 12 * v20;
  if ( v9 != ptr )
  {
    do
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)v8;
        LODWORD(v18) = -1;
        BYTE4(v18) = 0;
        if ( !(unsigned __int8)sub_3DC4D0(v7, (__int64)&v18, v10) && !(unsigned __int8)sub_3FD660(v7, &v18, v10) )
          break;
        v8 += 12;
        if ( v9 == v8 )
          goto LABEL_12;
      }
      sub_3CA860((_DWORD)v7, v10);
      v8 += 12;
    }
    while ( v9 != v8 );
LABEL_12:
    v8 = (char *)ptr;
  }
  if ( v8 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v8);
  }
  return v21 - __readfsqword(0x28u);
}

