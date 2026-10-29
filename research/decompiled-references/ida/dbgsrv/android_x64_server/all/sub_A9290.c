/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9290
// Address: 0x00000000000A9290

//----- (00000000000A9290) ----------------------------------------------------
__int64 __fastcall sub_A9290(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rbx
  bool v8; // zf
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v3 = *(_QWORD **)(a1 + 88);
  v4 = (__int64 *)v3[1];
  if ( v4 != v3 + 2 )
  {
    while ( v4[4] != a2 )
    {
      v5 = (__int64 *)v4[1];
      if ( v5 )
      {
        do
        {
          v6 = v5;
          v5 = (__int64 *)*v5;
        }
        while ( v5 );
      }
      else
      {
        v6 = (__int64 *)v4[2];
        if ( (__int64 *)*v6 != v4 )
        {
          v7 = (__int64)(v4 + 2);
          do
          {
            v6 = *(__int64 **)(*(_QWORD *)v7 + 16LL);
            v8 = *v6 == *(_QWORD *)v7;
            v7 = *(_QWORD *)v7 + 16LL;
          }
          while ( !v8 );
        }
      }
      v4 = v6;
      if ( v6 == v3 + 2 )
        goto LABEL_22;
    }
    if ( v4[5] )
    {
      qthread_free(v4[5]);
      v3 = *(_QWORD **)(a1 + 88);
    }
    v9 = (__int64 *)v4[1];
    if ( v9 )
    {
      do
      {
        v10 = (__int64 **)v9;
        v9 = (__int64 *)*v9;
      }
      while ( v9 );
    }
    else
    {
      v10 = (__int64 **)v4[2];
      if ( *v10 != v4 )
      {
        v11 = v4 + 2;
        do
        {
          v12 = *v11;
          v10 = *(__int64 ***)(v12 + 16);
          v8 = *v10 == (__int64 *)v12;
          v11 = (__int64 *)(v12 + 16);
        }
        while ( !v8 );
      }
    }
    if ( (__int64 *)v3[1] == v4 )
      v3[1] = v10;
    --v3[3];
    sub_4C430((__int64 *)v3[2], v4);
    operator delete(v4);
    v3 = *(_QWORD **)(a1 + 88);
  }
LABEL_22:
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
