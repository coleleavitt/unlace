__int64 __fastcall sub_42C5B0(QT::QAbstractItemView *this)
{
  const char *v1; // rsi
  unsigned int v2; // ebp
  __int64 v3; // rdi
  __int64 (*v4)(); // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v21; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+8h] [rbp-C0h]
  __int64 v23; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+28h] [rbp-A0h]
  __int64 v25; // [rsp+38h] [rbp-90h]
  __int128 v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+50h] [rbp-78h]
  __int128 v28; // [rsp+58h] [rbp-70h]
  __int128 v29; // [rsp+68h] [rbp-60h]
  __int64 v30; // [rsp+78h] [rbp-50h]
  __int128 v31; // [rsp+80h] [rbp-48h]
  int v32; // [rsp+90h] [rbp-38h]
  unsigned __int64 v33; // [rsp+98h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v24 = 0;
  v1 = (const char *)&v23;
  v26 = 0;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v30 = 0;
  v28 = 0;
  v32 = 0;
  v29 = -1;
  v31 = 0;
  v2 = sub_494BB0(this);
  if ( (_BYTE)v2 )
  {
    v1 = (const char *)&v21;
    v21 = 0;
    v22 = 0;
    sub_48CD60(&v23, &v21);
    v3 = *((_QWORD *)this + 28);
    v4 = *(__int64 (**)())(*(_QWORD *)v3 + 40LL);
    if ( v4 != sub_429F20 )
    {
      v1 = (const char *)&v21;
      ((void (__fastcall *)(__int64, __int64 *))v4)(v3, &v21);
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21, (const char *)&v21);
    }
  }
  v5 = v30;
  if ( v30 )
  {
    v6 = v31;
    if ( (_QWORD)v31 )
    {
      v7 = 0;
      do
      {
        v8 = (__int64 *)(v5 + 48 * v7);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, v1);
          v5 = v30;
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v5, v1);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27, v1);
  }
  v10 = v25;
  if ( v25 )
  {
    v11 = v26;
    if ( (_QWORD)v26 )
    {
      v12 = 0;
      do
      {
        v13 = (__int64 *)(v10 + 24 * v12);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14, v1);
          v10 = v25;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v10, v1);
  }
  v15 = v23;
  if ( v23 )
  {
    v16 = v24;
    if ( (_QWORD)v24 )
    {
      v17 = 0;
      do
      {
        v18 = (__int64 *)(v15 + 40 * v17);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, v1);
          v15 = v23;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v24 = 0;
    qfree(v15, v1);
  }
  return v2;
}
