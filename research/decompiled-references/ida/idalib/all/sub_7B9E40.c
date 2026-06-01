__int64 __fastcall sub_7B9E40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  void *v6; // rdi
  __int64 v7; // rbp
  void *v8; // rdi
  char *v9; // rdi
  __int64 v10; // r12
  __int64 i; // rbp
  char *v12; // rdx
  void *v13; // rax
  unsigned int v14; // r13d
  __int64 v16; // rdx
  __int64 v17; // rdx
  void *v18; // rdi
  __int64 v19; // rbp
  void *v20; // rdi
  char *v21; // rdi
  __int64 v22; // r12
  __int64 j; // rbp
  char *v24; // rdx
  void *v25; // rax

  if ( !a2 )
    return 0;
  qunlink(a2);
  v4 = operator new(0x1788u);
  sub_743140(v4, a2, 0x2000, nullptr);
  *(_QWORD *)(v4 + 5840) = 2049;
  *(_QWORD *)(v4 + 5880) = 2049;
  *(_QWORD *)(v4 + 5920) = 0;
  *(_DWORD *)(v4 + 5952) = 0;
  *(_QWORD *)(v4 + 5960) = 0;
  *(_QWORD *)(v4 + 5968) = v4 + 5952;
  *(_QWORD *)(v4 + 5976) = v4 + 5952;
  *(_QWORD *)(v4 + 5984) = 0;
  *(_QWORD *)(v4 + 5992) = 0;
  *(_DWORD *)(v4 + 6016) = 0;
  *(_OWORD *)(v4 + 5848) = -1;
  *(_OWORD *)(v4 + 5864) = 0;
  *(_OWORD *)(v4 + 5888) = -1;
  *(_OWORD *)(v4 + 5904) = 0;
  *(_OWORD *)(v4 + 5928) = 0;
  *(_OWORD *)(v4 + 6000) = 0;
  *(_BYTE *)(v4 + 6020) = get_undo_param(0) != 0;
  if ( !(unsigned __int8)sub_73C890(v4, 0x2000u) || (v14 = sub_73CC90((unsigned int *)v4, 0), !(_BYTE)v14) )
  {
    if ( v4 )
    {
      sub_7AF120((char *)v4, 0, v5);
      v6 = *(void **)(v4 + 5992);
      if ( v6 )
      {
        *(_QWORD *)(v4 + 6000) = 0;
        qfree(v6);
      }
      v7 = *(_QWORD *)(v4 + 5960);
      while ( v7 )
      {
        sub_7B9C70(*(_QWORD **)(v7 + 24));
        v8 = (void *)v7;
        v7 = *(_QWORD *)(v7 + 16);
        operator delete(v8, 0x30u);
      }
      v9 = *(char **)(v4 + 5920);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v4 + 5928);
        if ( v10 )
        {
          for ( i = 0; i != v10; ++i )
          {
            v12 = &v9[24 * i];
            v13 = *(void **)v12;
            if ( *(_QWORD *)v12 )
            {
              *((_QWORD *)v12 + 1) = 0;
              qfree(v13);
              v9 = *(char **)(v4 + 5920);
            }
          }
        }
        *(_QWORD *)(v4 + 5928) = 0;
        qfree(v9);
      }
      sub_743350(v4);
      operator delete((void *)v4, 0x1788u);
    }
    return 0;
  }
  sub_7AF690((_QWORD *)v4, a1, a3);
  sub_7AF120((char *)v4, 1, v16);
  sub_7AEE70(v4);
  if ( !v4 )
    return v14;
  sub_7AF120((char *)v4, 0, v17);
  v18 = *(void **)(v4 + 5992);
  if ( v18 )
  {
    *(_QWORD *)(v4 + 6000) = 0;
    qfree(v18);
  }
  v19 = *(_QWORD *)(v4 + 5960);
  while ( v19 )
  {
    sub_7B9C70(*(_QWORD **)(v19 + 24));
    v20 = (void *)v19;
    v19 = *(_QWORD *)(v19 + 16);
    operator delete(v20, 0x30u);
  }
  v21 = *(char **)(v4 + 5920);
  if ( v21 )
  {
    v22 = *(_QWORD *)(v4 + 5928);
    if ( v22 )
    {
      for ( j = 0; j != v22; ++j )
      {
        v24 = &v21[24 * j];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          qfree(v25);
          v21 = *(char **)(v4 + 5920);
        }
      }
    }
    *(_QWORD *)(v4 + 5928) = 0;
    qfree(v21);
  }
  sub_743350(v4);
  operator delete((void *)v4, 0x1788u);
  return v14;
}
