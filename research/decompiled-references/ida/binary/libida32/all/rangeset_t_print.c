_BYTE *__fastcall rangeset_t_print(__int64 *a1, _BYTE *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v9; // rdx
  _BYTE *v10; // rax
  int v11; // edx
  int v12; // edi
  __int64 v13; // rax
  _BYTE *v14; // rbp
  __int64 v16; // [rsp+0h] [rbp-38h]
  int v17; // [rsp+8h] [rbp-30h]
  int v18; // [rsp+10h] [rbp-28h]
  void *v19; // [rsp+18h] [rbp-20h]
  __int64 v20; // [rsp+20h] [rbp-18h]
  int v21; // [rsp+28h] [rbp-10h]
  __int64 v22; // [rsp+30h] [rbp-8h]

  v6 = (unsigned __int64)&a2[a3];
  v7 = *a1;
  if ( 8 * a1[1] )
  {
    v9 = *a1;
    v10 = a2;
    while ( 1 )
    {
      if ( v7 == v9 )
      {
        v14 = v10;
        v11 = v6 - (_DWORD)v10;
      }
      else
      {
        if ( (unsigned __int64)v10 >= v6 )
        {
          if ( !under_debugger )
            interr(518);
LABEL_17:
          BUG();
        }
        v14 = v10 + 1;
        *v10 = 44;
        if ( (unsigned __int64)(v10 + 1) < v6 )
        {
          v11 = v6 - (_DWORD)v14;
        }
        else
        {
          *(_BYTE *)(v6 - 1) = 0;
          v14 = (_BYTE *)(v6 - 1);
          v11 = 1;
        }
      }
      v12 = v7;
      v7 += 8;
      v13 = range_t_print(v12, (int)v14, v11, a4, a5, a6, v16, v17, v18, v19, v20, v21, v22);
      v9 = *a1;
      v10 = &v14[v13];
      a4 = *a1 + 8 * a1[1];
      if ( v7 == a4 )
        goto LABEL_11;
    }
  }
  v10 = a2;
LABEL_11:
  if ( (unsigned __int64)v10 >= v6 )
  {
    if ( !under_debugger )
      interr(519);
    goto LABEL_17;
  }
  *v10 = 0;
  return (_BYTE *)(v10 - a2);
}

