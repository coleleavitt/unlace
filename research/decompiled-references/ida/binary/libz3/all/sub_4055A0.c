_QWORD *__fastcall sub_4055A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 i; // rsi
  __int64 v17[2]; // [rsp+10h] [rbp-E8h] BYREF
  int v18[4]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-C8h]
  __int64 v20; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD *v22; // [rsp+50h] [rbp-A8h]

  sub_405460((__int64)v18, a2, *(_QWORD *)a1, 0, 0, 0);
  v17[1] = 0;
  v6 = *(_QWORD *)(v19 + 16);
  v17[0] = *(_QWORD *)(v19 + 8);
  sub_3D8450(a3, &v20, *(_BYTE *)(v6 + 645), *(_BYTE *)(v6 + 646));
  v7 = v22;
  if ( v22 )
  {
    v8 = (unsigned __int64)&v22[*((unsigned int *)v22 - 1)];
    if ( (unsigned __int64)v22 >= v8 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = v21;
          if ( (*(_DWORD *)(v9 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v7 >= v8 )
          goto LABEL_8;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( (unsigned __int64)v7 < v8 );
LABEL_8:
    v7 = v22;
    if ( v22 )
LABEL_9:
      *((_DWORD *)v7 - 1) = 0;
  }
  sub_3EE030((__int64)&v21, (__int64)v17);
  sub_2B4F40(v17);
  v12 = sub_3FCC60(*(_QWORD **)(a1 + 8), *(_DWORD *)(a1 + 16), v20);
  v13 = v12;
  if ( v12 )
  {
    v14 = v12[1];
    v13 = nullptr;
    for ( i = v14 + 8LL * *((unsigned int *)v12 + 4); i != v14; v14 += 8 )
    {
      if ( a2 == *(_QWORD *)(*(_QWORD *)v14 + 8LL) )
      {
        v13 = *(_QWORD **)v14;
        if ( (*(_BYTE *)(*(_QWORD *)v14 + 78LL) & 4) == 0 )
          break;
      }
    }
  }
  sub_41CB00(v18);
  return v13;
}

