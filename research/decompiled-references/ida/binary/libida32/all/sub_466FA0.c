__int64 __fastcall sub_466FA0(__int64 a1, int a2, unsigned int *a3, int a4, int a5)
{
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // r15
  _QWORD *v12; // r13
  unsigned int v13; // ebx
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  unsigned int v17; // ebp
  char v18; // al
  __int64 v19; // rsi
  char v20; // r12
  __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int i; // r12d
  unsigned __int64 v32; // [rsp+0h] [rbp-98h]
  unsigned int v33; // [rsp+14h] [rbp-84h] BYREF
  __int64 v34; // [rsp+18h] [rbp-80h] BYREF
  int v35[2]; // [rsp+20h] [rbp-78h] BYREF
  int v36; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v37; // [rsp+30h] [rbp-68h]
  int *v38; // [rsp+38h] [rbp-60h]
  int *v39; // [rsp+40h] [rbp-58h]
  __int64 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v7 = a4;
  v8 = *(int *)(a1 + 4LL * a5 + 16);
  v41 = __readfsqword(0x28u);
  v9 = switch_dbctx(v8);
  v10 = switch_dbctx(*(int *)(a1 + 4 * v7 + 16));
  v11 = *(_QWORD **)(v9 + 1480);
  v12 = *(_QWORD **)(v10 + 1480);
  if ( a2 == 1 )
  {
    v22 = v10;
    v36 = 0;
    v23 = (__int64)(v11 + 119);
    v37 = nullptr;
    v38 = &v36;
    v39 = &v36;
    v40 = 0;
    v24 = v11[120];
    if ( v24 )
    {
      v25 = (__int64)(v11 + 119);
      v26 = v11[120];
      do
      {
        while ( 1 )
        {
          v27 = *(_QWORD *)(v26 + 16);
          v28 = *(_QWORD *)(v26 + 24);
          if ( *(_DWORD *)(v26 + 32) >= *a3 )
            break;
          v26 = *(_QWORD *)(v26 + 24);
          if ( !v28 )
            goto LABEL_29;
        }
        v25 = v26;
        v26 = *(_QWORD *)(v26 + 16);
      }
      while ( v27 );
      do
      {
LABEL_29:
        while ( 1 )
        {
          v29 = *(_QWORD *)(v24 + 16);
          v30 = *(_QWORD *)(v24 + 24);
          if ( *(_DWORD *)(v24 + 32) >= a3[1] )
            break;
          v24 = *(_QWORD *)(v24 + 24);
          if ( !v30 )
            goto LABEL_31;
        }
        v23 = v24;
        v24 = *(_QWORD *)(v24 + 16);
      }
      while ( v29 );
    }
    else
    {
      v25 = (__int64)(v11 + 119);
    }
LABEL_31:
    sub_466EB0((__int64)v35, v25, v23);
    sub_3CD340((__int64)v12, (__int64)(v12 + 118), *a3, a3[1], 0xA1u);
    sub_3C7E80((__int64)v12, v12 + 118, (__int64)v35, 0x9Fu);
    if ( (int)sub_3B8DF0((__int64)v11, *a3) > 8 )
    {
      for ( i = *a3; i < a3[1]; ++i )
      {
        while ( 1 )
        {
          v33 = i;
          v34 = 0;
          if ( sub_79B5C0(&v33, v9, 0xFFFFFFFFLL, &v34, 8, 65) <= 0 )
            break;
          sub_79B440(&v33, v22, 0xFFFFFFFFLL, &v34, 8, 65);
          if ( ++i >= a3[1] )
            goto LABEL_37;
        }
        sub_79B4D0(&v33, v22, 0xFFFFFFFFLL, 65);
      }
    }
LABEL_37:
    sub_455B50(v37);
    return v41 - __readfsqword(0x28u);
  }
  else
  {
    if ( a2 )
    {
      if ( !under_debugger )
        interr(2050);
      BUG();
    }
    v13 = *a3;
    v14 = a3[1];
    if ( *a3 < v14 )
    {
      while ( 1 )
      {
        v17 = v13;
        v18 = sub_3B8910((__int64)v12, v13);
        v19 = v13++;
        v20 = v18;
        if ( sub_3B8910((__int64)v11, v19) )
          break;
        if ( v20 )
        {
          sub_3D0FA0(v12, v17, v13);
          v14 = a3[1];
          if ( v13 >= v14 )
          {
LABEL_19:
            v13 = *a3;
            return sub_3CD500(v12, v13, v14, 0);
          }
        }
        else
        {
LABEL_15:
          v14 = a3[1];
          if ( v13 >= v14 )
            goto LABEL_19;
        }
      }
      if ( !v20 )
      {
        v35[0] = v17;
        v35[1] = v13;
        sub_3BB410((__int64)v12, (__int64 *)v35, 0, 0);
      }
      v32 = sub_3B9AA0((__int64)v12, v17, 1);
      v15 = sub_3B9AA0((__int64)v11, v17, 1);
      v16 = v15;
      if ( v15 != v32 )
      {
        if ( (v15 & 0xC000) == 0 )
          sub_3C08C0((_DWORD)v12, v17);
        if ( (v16 & 0x600) == 0 )
          sub_3CB9E0(v12, v17, 32);
        if ( (v16 & 0x100) != 0 )
        {
          sub_3BA160(v11, (__int64 *)v35, v17);
          sub_3C98C0((__int64)v12, v17, *(__int64 *)v35);
        }
        else
        {
          sub_3B98C0((__int64)v12, v17);
        }
        sub_3CAE70(v12, v17, v16);
      }
      goto LABEL_15;
    }
    return sub_3CD500(v12, v13, v14, 0);
  }
}

