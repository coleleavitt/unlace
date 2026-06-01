__int64 __fastcall set_module_data(__int128 a1)
{
  _QWORD *v1; // r13
  unsigned __int64 v2; // r12
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v8; // r14
  int v9; // eax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v17[1] = __readfsqword(0x28u);
  v1 = (_QWORD *)qword_2CCB598;
  if ( a1 == 0 )
  {
    if ( !under_debugger )
      interr(2658);
LABEL_25:
    BUG();
  }
  v2 = *(int *)a1;
  v3 = *((_QWORD *)&a1 + 1);
  if ( !*(_DWORD *)a1 )
  {
    v8 = qword_2CCB5A8;
    qmutex_lock(qword_2CCB5A8);
    v9 = dword_2CCB5A0 + 1;
    *(_DWORD *)a1 = dword_2CCB5A0 + 1;
    v2 = v9;
    dword_2CCB5A0 = v9;
    qmutex_unlock(v8);
  }
  v4 = v1[21];
  v5 = v1[20];
  if ( v2 >= v4 )
  {
    v10 = v2 + 1;
    v17[0] = 0;
    if ( v2 + 1 >= v4 )
    {
      if ( v4 >= v10 )
        goto LABEL_5;
      v11 = v1[22];
      v12 = v1 + 20;
      if ( (unsigned __int64)v17 < v5 || (unsigned __int64)v17 >= v5 + 8 * v11 )
      {
        if ( v11 >= v10 || (v15 = qvector_reserve(v12, v5, v2 + 1, 8), v4 = v1[21], v1[20] = v15, v5 = v15, v4 < v10) )
        {
          do
          {
            v14 = v4;
            *(_QWORD *)(v5 + 8 * v4++) = 0;
            v5 = v1[20];
          }
          while ( v2 != v14 );
        }
      }
      else if ( v11 >= v10 || (v16 = qvector_reserve(v12, v5, v2 + 1, 8), v4 = v1[21], v1[20] = v16, v5 = v16, v4 < v10) )
      {
        do
        {
          v13 = v4;
          *(_QWORD *)(v5 + 8 * v4++) = 0;
          v5 = v1[20];
        }
        while ( v2 != v13 );
      }
    }
    v1[21] = v10;
  }
LABEL_5:
  v6 = (_QWORD *)(v5 + 8 * v2);
  if ( *v6 )
  {
    if ( !under_debugger )
      interr(1819);
    goto LABEL_25;
  }
  *v6 = v3;
  return v3;
}
