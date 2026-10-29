__int64 __fastcall sub_4F74D0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v5; // rax
  _QWORD *v6; // r12
  void *v7; // rdi
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // r12
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rdx

  v2 = 48 * a2;
  v3 = 48 * a2 + *a1;
  if ( *(_BYTE *)(v3 + 40) )
  {
    if ( !under_debugger )
      interr(2885);
    goto LABEL_32;
  }
  *(_BYTE *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 8) = 0;
  v5 = v2 + *a1;
  v6 = *(_QWORD **)(v5 + 32);
  *(_QWORD *)(v5 + 32) = 0;
  if ( v6 )
  {
    if ( v6[4] )
    {
      if ( !under_debugger )
        interr(2871);
      goto LABEL_32;
    }
    v6[9] = 0;
    v7 = (void *)v6[6];
    if ( v7 )
    {
      v6[7] = 0;
      qfree(v7);
    }
    v8 = (void *)v6[3];
    if ( v8 )
    {
      v6[4] = 0;
      qfree(v8);
    }
    operator delete(v6, 0x58u);
  }
  *(_BYTE *)(*a1 + v2 + 40) = 1;
  result = a1[1];
  ++a1[3];
  if ( result )
  {
    while ( 1 )
    {
      v17 = *a1;
      if ( !*(_BYTE *)(*a1 + 48 * result - 8) )
        return result;
      v10 = a1[3];
      if ( !v10 )
        break;
      v11 = result - 1;
      a1[1] = v11;
      a1[3] = v10 - 1;
      v12 = v17 + 48 * v11;
      v13 = *(_QWORD **)(v12 + 32);
      if ( v13 )
      {
        if ( v13[4] )
        {
          if ( !under_debugger )
            interr(2871);
          goto LABEL_32;
        }
        v13[9] = 0;
        v14 = (void *)v13[6];
        if ( v14 )
        {
          v13[7] = 0;
          qfree(v14);
        }
        v15 = (void *)v13[3];
        if ( v15 )
        {
          v13[4] = 0;
          qfree(v15);
        }
        operator delete(v13, 0x58u);
      }
      v16 = *(void **)v12;
      if ( *(_QWORD *)v12 )
      {
        *(_QWORD *)(v12 + 8) = 0;
        qfree(v16);
      }
      result = a1[1];
      if ( !result )
        return result;
    }
    if ( !under_debugger )
      interr(2886);
LABEL_32:
    BUG();
  }
  return result;
}
