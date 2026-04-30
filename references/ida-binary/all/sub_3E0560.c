unsigned __int64 __fastcall sub_3E0560(QT::QAbstractItemView *this, double a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  size_t v7; // rbp
  __int64 v8; // r8
  const void *v9; // r14
  unsigned __int64 v10; // r11
  const char *v11; // rsi
  __int64 v12; // rax
  int v13; // ecx
  double v14; // xmm0_8
  __int64 v15; // rdx
  const char *v16; // rsi
  const char *v17; // rsi
  unsigned __int64 v18; // rdi
  char v19; // al
  unsigned __int64 v20; // [rsp+8h] [rbp-290h]
  unsigned __int64 v21; // [rsp+8h] [rbp-290h]
  __int64 v22; // [rsp+10h] [rbp-288h]
  __int64 v23; // [rsp+10h] [rbp-288h]
  __int64 v24; // [rsp+20h] [rbp-278h] BYREF
  __int64 v25; // [rsp+28h] [rbp-270h] BYREF
  const char *v26; // [rsp+30h] [rbp-268h] BYREF
  __int128 v27; // [rsp+38h] [rbp-260h]
  _BYTE v28[520]; // [rsp+50h] [rbp-248h] BYREF
  unsigned __int64 v29; // [rsp+258h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( *((_DWORD *)this + 279) == -1 || !(unsigned __int8)netnode_inited(a2) )
    return v29 - __readfsqword(0x28u);
  v26 = nullptr;
  v27 = 0;
  v26 = (const char *)qvector_reserve(&v26, 0, 1, 1);
  v26[v27] = 0;
  *(_QWORD *)&v27 = v27 + 1;
  v3 = *(_QWORD *)(QT::QAbstractItemView::model(this) + 32LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = *(_QWORD *)(v3 + 16);
  v6 = v5;
  if ( 8 * v4 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)v6 + 88LL);
        if ( v7 > 1 )
          break;
        v6 += 8;
        if ( v6 == v5 + 8 * v4 )
          goto LABEL_13;
      }
      v8 = v27;
      v9 = *(const void **)(*(_QWORD *)v6 + 80LL);
      v10 = v27 + v7;
      if ( __CFADD__((_QWORD)v27, v7) )
      {
        if ( (unsigned __int64)v27 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v27 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v27 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_12;
        }
        v10 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v11 = v26;
      v12 = v27;
      if ( *((_QWORD *)&v27 + 1) < v10 )
      {
        v23 = v27;
        v21 = v10;
        v26 = (const char *)qvector_reserve(&v26, v26, v10, 1);
        v11 = v26;
        v8 = v23;
        v12 = v27;
        v10 = v21;
      }
      v22 = v8;
      v20 = v10;
      memset((void *)&v11[v12], 0, v10 - v12);
      v8 = v22;
      *(_QWORD *)&v27 = v20;
LABEL_12:
      v6 += 8;
      memcpy((void *)&v26[v8], v9, v7);
      v5 = *(_QWORD *)(v3 + 16);
      v4 = *(_QWORD *)(v3 + 24);
    }
    while ( v6 != v5 + 8 * v4 );
  }
LABEL_13:
  v13 = *((_DWORD *)this + 279);
  v24 = -1;
  v14 = qsnprintf(v28, 512, "$ watchview %d", v13);
  v15 = v27;
  if ( (_QWORD)v27 )
  {
    v17 = v26;
    LOBYTE(v25) = 0;
    v18 = v27 + 1;
    if ( &v25 >= (__int64 *)v26 && &v25 < (__int64 *)&v26[*((_QWORD *)&v27 + 1)] )
    {
      if ( *((_QWORD *)&v27 + 1) < v18 )
      {
        v26 = (const char *)qvector_reserve(&v26, v26, v27 + 1, 1);
        v15 = v27;
        v17 = v26;
      }
      v17[v15] = 0;
    }
    else
    {
      v19 = 0;
      if ( *((_QWORD *)&v27 + 1) < v18 )
      {
        v26 = (const char *)qvector_reserve(&v26, v26, v27 + 1, 1);
        v17 = v26;
        v15 = v27;
        v19 = v25;
      }
      v17[v15] = v19;
    }
    *(_QWORD *)&v27 = v27 + 1;
    netnode_check(&v24, v28, 0, 1);
    v16 = v26;
    netnode_setblob(v24, v26, v27, 0, 87);
  }
  else
  {
    v16 = v28;
    netnode_check(&v25, v28, 0, 0);
    v24 = v25;
    netnode_kill(&v24);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, v16, v14);
  }
  return v29 - __readfsqword(0x28u);
}
