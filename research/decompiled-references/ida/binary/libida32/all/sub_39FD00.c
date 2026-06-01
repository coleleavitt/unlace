unsigned __int64 __fastcall sub_39FD00(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v6; // rdi
  __int64 v8; // r14
  __int64 v9; // rax
  _DWORD *v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax
  _DWORD *v14; // rbp
  __int64 v15; // r13
  unsigned int v16; // r14d
  __int64 v18; // [rsp+8h] [rbp-80h]
  _QWORD *v19; // [rsp+10h] [rbp-78h]
  unsigned int v21; // [rsp+3Ch] [rbp-4Ch] BYREF
  int v22; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v6 = (_DWORD *)(a1 + 116);
  v24 = __readfsqword(0x28u);
  v22 = *v6 & __ROL4__(-2, a2);
  sub_39DF60(v6, &v22, 0x74u);
  v8 = 104LL * a2;
  v18 = a1 + v8 + 136;
  v9 = *(_QWORD *)(a1 + v8 + 160);
  if ( !v9 )
    goto LABEL_8;
  v10 = (_DWORD *)(a1 + 104LL * a2 + 152);
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 16);
      v12 = *(_QWORD *)(v9 + 24);
      if ( *(_DWORD *)(v9 + 32) < a4 )
        break;
      v10 = (_DWORD *)v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v11 )
        goto LABEL_6;
    }
    v9 = *(_QWORD *)(v9 + 24);
  }
  while ( v12 );
LABEL_6:
  if ( (_DWORD *)(a1 + 104LL * a2 + 152) != v10 && (v13 = v10[9], a4 >= v13 - 1) )
  {
    a4 = v10[8];
    if ( a3 + 1 < v13 )
      sub_39BBF0(v18, (__int64)v10, a3 + 1);
  }
  else
  {
LABEL_8:
    v22 = a4;
    v23 = a3 + 1;
    v10 = sub_39ED20((_QWORD *)(a1 + v8 + 144), (unsigned int *)&v22, &v23, *(_DWORD *)(a1 + 104LL * a2 + 192));
  }
  v14 = *(_DWORD **)(a1 + 104LL * a2 + 168);
  if ( v10 != v14 )
  {
    v15 = std::_Rb_tree_decrement();
    if ( *(_DWORD *)(v15 + 32) >= a3 )
    {
      v19 = (_QWORD *)(a1 + v8 + 144);
      while ( 1 )
      {
        v16 = *(_DWORD *)(v15 + 36);
        sub_39E9A0((__int64)v19, v15, *(_DWORD *)(a1 + 104LL * a2 + 200));
        if ( a3 >= v16 - 1 )
          break;
        if ( v14 == (_DWORD *)v15 )
          return v24 - __readfsqword(0x28u);
        v15 = std::_Rb_tree_decrement();
        if ( *(_DWORD *)(v15 + 32) < a3 )
          return v24 - __readfsqword(0x28u);
        v14 = *(_DWORD **)(v18 + 32);
      }
      v21 = a4;
      v22 = v16;
      sub_39F820(v19, &v21, (unsigned int *)&v22, *(_DWORD *)(a1 + 104LL * a2 + 208));
    }
  }
  return v24 - __readfsqword(0x28u);
}

