unsigned __int64 __fastcall sub_3D24E0(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned int v9; // ecx
  int *v10; // r15
  unsigned int v11; // r13d
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  int *v16; // rbp
  __int64 v17; // rdx
  _QWORD *v18; // r13
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD **v23; // rbx
  void *v24; // rdi
  __int64 i; // r15
  int v27; // [rsp+Ch] [rbp-9Ch]
  unsigned int v29; // [rsp+14h] [rbp-94h]
  __int64 v30; // [rsp+18h] [rbp-90h]
  unsigned int v31; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+30h] [rbp-78h] BYREF
  int v34; // [rsp+38h] [rbp-70h] BYREF
  void *v35; // [rsp+40h] [rbp-68h]
  int *v36; // [rsp+48h] [rbp-60h]
  int *v37; // [rsp+50h] [rbp-58h]
  __int64 v38; // [rsp+58h] [rbp-50h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 1448);
  if ( v4 )
  {
    v5 = a1 + 1440;
    v30 = a1 + 1440;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 16);
        v7 = *(_QWORD *)(v4 + 24);
        if ( *(_DWORD *)(v4 + 32) < a2 )
          break;
        v30 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v6 )
          goto LABEL_6;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v7 );
LABEL_6:
    v8 = v30;
    if ( v5 != v30 )
    {
      v34 = 0;
      v35 = nullptr;
      v36 = &v34;
      v29 = a2 + a4;
      v37 = &v34;
      v38 = 0;
      v31 = a3 - a2;
      do
      {
        v9 = *(_DWORD *)(v8 + 32);
        if ( v9 >= v29 )
          break;
        v10 = &v34;
        v27 = *(_DWORD *)(v8 + 36);
        v11 = v31 + v9;
        v12 = v35;
        if ( !v35 )
          goto LABEL_16;
        do
        {
          while ( 1 )
          {
            v13 = v12[2];
            v14 = v12[3];
            if ( *((_DWORD *)v12 + 8) < v11 )
              break;
            v10 = (int *)v12;
            v12 = (_QWORD *)v12[2];
            if ( !v13 )
              goto LABEL_14;
          }
          v12 = (_QWORD *)v12[3];
        }
        while ( v14 );
LABEL_14:
        if ( v10 == &v34 || v11 < v10[8] )
        {
LABEL_16:
          v15 = operator new(0x28u);
          *(_DWORD *)(v15 + 32) = v11;
          *(_DWORD *)(v15 + 36) = 0;
          v16 = (int *)v15;
          v10 = (int *)sub_3B4C40(&v33, (__int64)v10, v11);
          if ( v17 )
          {
            v10 = v16;
            std::_Rb_tree_insert_and_rebalance();
            ++v38;
          }
          else if ( v16 )
          {
            operator delete(v16, 0x28u);
          }
        }
        v10[9] = v27;
        v8 = std::_Rb_tree_increment();
      }
      while ( v5 != v8 );
      v18 = (_QWORD *)(a1 + 1432);
      if ( (unsigned __int8)sub_3A0490(v30, v8, 14) )
        sub_3A07C0((__int64)v18, v30, v8);
      v19 = a1 + 1440;
      v20 = *(_QWORD *)(a1 + 1448);
      if ( v20 )
      {
        do
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)(v20 + 16);
            v22 = *(_QWORD *)(v20 + 24);
            if ( *(_DWORD *)(v20 + 32) < a3 )
              break;
            v19 = v20;
            v20 = *(_QWORD *)(v20 + 16);
            if ( !v21 )
              goto LABEL_26;
          }
          v20 = *(_QWORD *)(v20 + 24);
        }
        while ( v22 );
LABEL_26:
        for ( i = v19; v5 != i; i = std::_Rb_tree_increment() )
        {
          if ( *(_DWORD *)(i + 32) >= a3 + a4 )
            break;
        }
      }
      else
      {
        i = a1 + 1440;
      }
      if ( (unsigned __int8)sub_3A0490(v19, i, 14) )
        sub_3A07C0((__int64)v18, v19, i);
      sub_3C7FA0(v18, (__int64)v36, (__int64)&v34, 0xFu);
      v23 = (_QWORD **)v35;
      if ( v35 )
      {
        do
        {
          sub_3B66F0(v23[3]);
          v24 = v23;
          v23 = (_QWORD **)v23[2];
          operator delete(v24, 0x28u);
        }
        while ( v23 );
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}

