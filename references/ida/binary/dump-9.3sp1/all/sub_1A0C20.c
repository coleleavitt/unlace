unsigned __int64 __fastcall sub_1A0C20(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 v14[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a3 != -1 )
  {
    if ( a3 >= *(_DWORD *)(*a1 + 64LL) )
      sub_195140();
    v6 = a1[1];
    v7 = *(_QWORD *)(*(_QWORD *)(*a1 + 528LL) + 8LL * a3);
    if ( !v6 )
    {
      if ( !under_debugger )
        sub_383060(51541);
      BUG();
    }
    v8 = *(_QWORD *)(v7 + 48);
    if ( v8 )
    {
      v9 = *(_QWORD **)v6;
      v10 = *(_QWORD *)v6 + 8LL * *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)v6 != v10 )
        goto LABEL_8;
LABEL_12:
      v11 = *(_QWORD **)(v6 + 56);
      v12 = &v11[*(_QWORD *)(v6 + 64)];
      if ( v11 == v12 )
        goto LABEL_17;
      while ( v8 != *v11 )
      {
        if ( v12 == ++v11 )
          goto LABEL_17;
      }
      if ( v12 == v11 )
      {
LABEL_17:
        sub_127A20((__int64)v14, v7, v8, 0, a5, a6);
        sub_64280(a2, v14);
        sub_316CB0(a2 + 2, v15);
        if ( v15[0] )
        {
          v15[1] = 0;
          qfree(v15[0]);
        }
        qfree(v14[0]);
        v8 = *(_QWORD *)(v8 + 8);
        if ( v8 )
          goto LABEL_11;
      }
      else
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v8 + 8);
          if ( !v8 )
            break;
LABEL_11:
          v6 = a1[1];
          v9 = *(_QWORD **)v6;
          v10 = *(_QWORD *)v6 + 8LL * *(_QWORD *)(v6 + 8);
          if ( *(_QWORD *)v6 == v10 )
            goto LABEL_12;
LABEL_8:
          while ( v8 != *v9 )
          {
            if ( (_QWORD *)v10 == ++v9 )
              goto LABEL_12;
          }
          if ( (_QWORD *)v10 == v9 )
            goto LABEL_12;
        }
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}
