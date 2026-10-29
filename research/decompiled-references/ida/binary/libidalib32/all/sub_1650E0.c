unsigned __int64 __fastcall sub_1650E0(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  struct _Unwind_Exception *v17; // rbx
  int v19; // [rsp+8h] [rbp-80h] BYREF
  __int64 v20; // [rsp+10h] [rbp-78h] BYREF
  __int128 v21; // [rsp+18h] [rbp-70h]
  __int128 v22; // [rsp+28h] [rbp-60h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h]
  int v24; // [rsp+48h] [rbp-40h]
  __int64 v25; // [rsp+50h] [rbp-38h]
  __int128 v26; // [rsp+58h] [rbp-30h]
  unsigned __int64 v27; // [rsp+68h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 984) )
    return v27 - __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 480) )
  {
    sub_1582F0(a1);
LABEL_39:
    if ( under_debugger )
      goto LABEL_43;
    interr();
LABEL_41:
    if ( !under_debugger )
    {
      v17 = (struct _Unwind_Exception *)interr();
      sub_15AE90((__int64 *)&v22 + 1);
      sub_165070(&v20);
      _Unwind_Resume(v17);
    }
LABEL_43:
    BUG();
  }
  if ( *(_DWORD *)(a1 + 472) != 1 )
    return v27 - __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 848);
  if ( !v1 || !*(_BYTE *)(v1 + 21) )
    return v27 - __readfsqword(0x28u);
  v2 = *(_BYTE *)(a1 + 841) == 0;
  v19 = 40;
  v20 = 0;
  v24 = 0;
  v25 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v26 = 0;
  if ( !v2 )
    goto LABEL_39;
  *(_BYTE *)(a1 + 841) = 1;
  sub_163DF0(a1, (__int64)&v19, 0);
  if ( !(unsigned __int8)sub_163EF0(a1) )
    goto LABEL_10;
  if ( v24 != *(_DWORD *)(a1 + 808) || (_QWORD)v23 != *(_QWORD *)(a1 + 792) )
    goto LABEL_9;
  if ( (_QWORD)v23 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 784) + 8 * v13);
      v15 = *(_QWORD *)(*((_QWORD *)&v22 + 1) + 8 * v13);
      v16 = *(_DWORD *)(v15 + 8);
      if ( ((v16 ^ *(_DWORD *)(v14 + 8)) & 0xFFFFFF) != 0
        || *(_QWORD *)v15 != *(_QWORD *)v14
        || *(_DWORD *)(v15 + 12) != *(_DWORD *)(v14 + 12)
        || (v16 & 1) != 0 && *(_QWORD *)(v15 + 16) != *(_QWORD *)(v14 + 16) )
      {
        break;
      }
      if ( (_QWORD)v23 == ++v13 )
        goto LABEL_10;
    }
LABEL_9:
    *(_BYTE *)(a1 + 840) = 1;
    sub_163F60(a1, (__int64)&v22 + 8);
    *(_BYTE *)(a1 + 953) = 1;
  }
LABEL_10:
  if ( !*(_BYTE *)(a1 + 841) )
    goto LABEL_41;
  v3 = v25;
  *(_BYTE *)(a1 + 841) = 0;
  if ( v3 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  v4 = v23;
  v5 = *((_QWORD *)&v22 + 1);
  if ( (_QWORD)v23 )
  {
    v6 = 0;
    do
    {
      v7 = *(void **)(v5 + 8 * v6);
      if ( v7 )
      {
        operator delete(v7, 0x18u);
        v5 = *((_QWORD *)&v22 + 1);
      }
      ++v6;
    }
    while ( v4 != v6 );
  }
  if ( v5 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  v8 = v20;
  if ( v20 )
  {
    v9 = v21;
    if ( (_QWORD)v21 )
    {
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v8 + 24 * v10);
        if ( *v11 )
        {
          v11[1] = 0;
          qfree();
          v8 = v20;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v27 - __readfsqword(0x28u);
}

