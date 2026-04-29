unsigned __int64 __fastcall sub_19A420(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v11[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v12[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a3 != -1 )
  {
    if ( a3 >= *(_DWORD *)(*a1 + 64LL) )
      sub_18EA80();
    v3 = a1[1];
    v4 = *(_QWORD *)(*(_QWORD *)(*a1 + 528LL) + 8LL * a3);
    if ( !v3 )
    {
      if ( !under_debugger )
        sub_37B760(51541);
      BUG();
    }
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      v6 = *(_QWORD **)v3;
      v7 = *(_QWORD *)v3 + 8LL * *(_QWORD *)(v3 + 8);
      if ( *(_QWORD *)v3 != v7 )
        goto LABEL_8;
LABEL_12:
      v8 = *(_QWORD **)(v3 + 56);
      v9 = &v8[*(_QWORD *)(v3 + 64)];
      if ( v8 == v9 )
        goto LABEL_17;
      while ( v5 != *v8 )
      {
        if ( v9 == ++v8 )
          goto LABEL_17;
      }
      if ( v9 == v8 )
      {
LABEL_17:
        sub_121360((__int64)v11, v4, v5, 0);
        sub_5DD00(a2, v11);
        sub_30F930(a2 + 2, v12);
        if ( v12[0] )
        {
          v12[1] = 0;
          qfree(v12[0]);
        }
        qfree(v11[0]);
        v5 = *(_QWORD *)(v5 + 8);
        if ( v5 )
          goto LABEL_11;
      }
      else
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v5 + 8);
          if ( !v5 )
            break;
LABEL_11:
          v3 = a1[1];
          v6 = *(_QWORD **)v3;
          v7 = *(_QWORD *)v3 + 8LL * *(_QWORD *)(v3 + 8);
          if ( *(_QWORD *)v3 == v7 )
            goto LABEL_12;
LABEL_8:
          while ( v5 != *v6 )
          {
            if ( (_QWORD *)v7 == ++v6 )
              goto LABEL_12;
          }
          if ( (_QWORD *)v7 == v6 )
            goto LABEL_12;
        }
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
