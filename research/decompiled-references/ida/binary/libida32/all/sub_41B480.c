unsigned __int64 __fastcall sub_41B480(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  char *v14; // rdi
  __int64 v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  char v22; // [rsp-8h] [rbp-B8h]
  __int64 v23; // [rsp+0h] [rbp-B0h]
  _QWORD v24[2]; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+20h] [rbp-90h] BYREF
  _OWORD v26[4]; // [rsp+28h] [rbp-88h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp-40h]

  v3 = *(_QWORD **)(a2 + 1480);
  v27 = __readfsqword(0x28u);
  memset(v26, 0, sizeof(v26));
  v24[1] = v3;
  v25 = 0;
  sub_6141A0(*v3, 26, &v25, 8);
  v5 = *(_QWORD **)(a2 + 1480);
  v24[0] = 0;
  sub_6141A0(*v5, 26, v24, 8);
  v8 = *(_QWORD *)(a2 + 1480);
  v9 = HIDWORD(v24[0]);
  v10 = v8 + 1440;
  v11 = *(_QWORD *)(v8 + 1448);
  v23 = v10;
  if ( v11 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v11 + 16);
        v13 = *(_QWORD *)(v11 + 24);
        if ( *(_DWORD *)(v11 + 32) < LODWORD(v24[0]) )
          break;
        v10 = v11;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v12 )
          goto LABEL_6;
      }
      v11 = *(_QWORD *)(v11 + 24);
    }
    while ( v13 );
LABEL_6:
    while ( v23 != v10 )
    {
      if ( *(_DWORD *)(v10 + 32) >= v9 )
        break;
      v18 = a3[1];
      v19 = *a3;
      if ( a3[2] < (unsigned __int64)(v18 + 1) )
      {
        v20 = qvector_reserve(a3, v19, v18 + 1, 24);
        v18 = a3[1];
        *a3 = v20;
        v19 = v20;
      }
      v14 = (char *)v26;
      v15 = v19 + 24 * v18;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      v16 = v25;
      ++a3[1];
      v17 = *(_DWORD *)(v10 + 32);
      if ( v17 >= v16 && v17 < HIDWORD(v25) )
      {
        LOBYTE(v26[0]) = 43;
        v17 -= v16;
        v14 = (char *)v26 + 1;
      }
      qsnprintf((int)v14, 63, (int)"%a", v17, v6, v7, v22);
      sub_3573A0((char **)v15);
      v10 = std::_Rb_tree_increment();
    }
  }
  return v27 - __readfsqword(0x28u);
}

