unsigned __int64 __fastcall sub_3DEB80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  _QWORD *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebp
  __int64 v11; // rsi
  __int64 (__fastcall ***v12)(); // rsi
  unsigned int v13; // r8d
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned int *v17; // [rsp+8h] [rbp-70h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+10h] [rbp-68h] BYREF
  int v19; // [rsp+18h] [rbp-60h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+40h] [rbp-38h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v5 = *(int *)(a1 + 8);
  v24 = __readfsqword(0x28u);
  switch_dbctx(v5);
  v7 = *(_QWORD **)(a2 + 40);
  v8 = sub_3DD040((__int64)v7, **(_QWORD **)(a1 + 48) + 24 * a3, 0);
  if ( v8 )
  {
    v9 = v7[2];
    v10 = *(_DWORD *)(v8 + 24);
    v22 = 0;
    v11 = (__int64)(v7 + 1);
    v19 = 56;
    v20 = 0;
    v21 = 0;
    v23 = 0;
    v18 = off_2B26268;
    if ( !v9 )
      goto LABEL_3;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v9 + 16);
        v16 = *(_QWORD *)(v9 + 24);
        if ( *(_DWORD *)(v9 + 32) < v10 )
          break;
        v11 = v9;
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v15 )
          goto LABEL_12;
      }
      v9 = *(_QWORD *)(v9 + 24);
    }
    while ( v16 );
LABEL_12:
    if ( v7 + 1 == (_QWORD *)v11 || v10 < *(_DWORD *)(v11 + 32) )
    {
LABEL_3:
      v17 = (unsigned int *)(v8 + 24);
      v11 = sub_3DBB40(v7, v11, &v17);
    }
    v12 = *(__int64 (__fastcall ****)())(v11 + 40);
    if ( !v12 )
      v12 = &v18;
    v13 = sub_3DD5C0(*(_QWORD **)(a1 + 40), v12);
    if ( !v13 )
    {
      if ( !under_debugger )
        interr(3381);
      BUG();
    }
    sub_3DE620(*(_QWORD *)(a1 + 56), *(_DWORD *)(a2 + 12), *(_DWORD *)(a1 + 12), v10, v13, 1);
  }
  return v24 - __readfsqword(0x28u);
}
