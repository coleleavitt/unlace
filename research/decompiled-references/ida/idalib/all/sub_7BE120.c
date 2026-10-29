__int64 __fastcall sub_7BE120(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  void *v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi
  char *v11; // rdx
  __int64 v12; // r12
  __int64 i; // rbp
  char *v14; // rax
  void *v15; // rdi
  __int64 result; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // rax

  v6 = operator new(0x1788u);
  sub_743140(v6, a2, 0x2000, nullptr);
  *(_QWORD *)(v6 + 5840) = 2049;
  *(_QWORD *)(v6 + 5880) = 2049;
  *(_QWORD *)(v6 + 5920) = 0;
  *(_DWORD *)(v6 + 5952) = 0;
  *(_QWORD *)(v6 + 5960) = 0;
  *(_QWORD *)(v6 + 5968) = v6 + 5952;
  *(_QWORD *)(v6 + 5976) = v6 + 5952;
  *(_QWORD *)(v6 + 5984) = 0;
  *(_QWORD *)(v6 + 5992) = 0;
  *(_DWORD *)(v6 + 6016) = 0;
  *(_OWORD *)(v6 + 5848) = -1;
  *(_OWORD *)(v6 + 5864) = 0;
  *(_OWORD *)(v6 + 5888) = -1;
  *(_OWORD *)(v6 + 5904) = 0;
  *(_OWORD *)(v6 + 5928) = 0;
  *(_OWORD *)(v6 + 6000) = 0;
  *(_BYTE *)(v6 + 6020) = get_undo_param(0) != 0;
  if ( !a3 )
    a3 = 3;
  if ( (unsigned __int8)sub_73CC80((unsigned int *)v6, a3, a4 == 0 ? 7 : 0) )
  {
    v17 = *(_QWORD *)(a1 + 1736);
    v18 = *(int *)(v17 + 48);
    if ( v18 > 3 )
      sub_7BDF30();
    *(_QWORD *)(v17 + 8 * v18 + 16) = v6;
    sub_7AEE70(v6);
    result = *(unsigned int *)(v17 + 48);
    *(_DWORD *)(v17 + 48) = result + 1;
  }
  else
  {
    if ( v6 )
    {
      sub_7AF120((char *)v6, 0, v7);
      v8 = *(void **)(v6 + 5992);
      if ( v8 )
      {
        *(_QWORD *)(v6 + 6000) = 0;
        qfree(v8);
      }
      v9 = *(_QWORD *)(v6 + 5960);
      while ( v9 )
      {
        sub_7BDF50(*(_QWORD **)(v9 + 24));
        v10 = (void *)v9;
        v9 = *(_QWORD *)(v9 + 16);
        operator delete(v10, 0x30u);
      }
      v11 = *(char **)(v6 + 5920);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v6 + 5928);
        if ( v12 )
        {
          for ( i = 0; i != v12; ++i )
          {
            v14 = &v11[24 * i];
            v15 = *(void **)v14;
            if ( *(_QWORD *)v14 )
            {
              *((_QWORD *)v14 + 1) = 0;
              qfree(v15);
              v11 = *(char **)(v6 + 5920);
            }
          }
        }
        *(_QWORD *)(v6 + 5928) = 0;
        qfree(v11);
      }
      sub_743350(v6);
      operator delete((void *)v6, 0x1788u);
    }
    return 0;
  }
  return result;
}
