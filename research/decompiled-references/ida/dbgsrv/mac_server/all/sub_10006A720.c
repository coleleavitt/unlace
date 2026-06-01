/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006A720
// Address: 0x000000010006A720

//----- (000000010006A720) ----------------------------------------------------
__int64 __fastcall sub_10006A720(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  bool v7; // zf
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v3 = *(_QWORD **)(a1 + 88);
  v4 = (_QWORD *)v3[1];
  if ( v4 != v3 + 2 )
  {
    while ( v4[4] != a2 )
    {
      v5 = (_QWORD *)v4[1];
      if ( v5 )
      {
        do
        {
          v6 = v5;
          v5 = (_QWORD *)*v5;
        }
        while ( v5 );
      }
      else
      {
        do
        {
          v6 = (_QWORD *)v4[2];
          v7 = *v6 == (_QWORD)v4;
          v4 = v6;
        }
        while ( !v7 );
      }
      v4 = v6;
      if ( v6 == v3 + 2 )
        goto LABEL_20;
    }
    if ( v4[5] )
    {
      qthread_free((pthread_t)v4[5]);
      v3 = *(_QWORD **)(a1 + 88);
    }
    v8 = (_QWORD *)v4[1];
    if ( v8 )
    {
      do
      {
        v9 = v8;
        v8 = (_QWORD *)*v8;
      }
      while ( v8 );
    }
    else
    {
      v10 = v4;
      do
      {
        v9 = (_QWORD *)v10[2];
        v7 = *v9 == (_QWORD)v10;
        v10 = v9;
      }
      while ( !v7 );
    }
    if ( (_QWORD *)v3[1] == v4 )
      v3[1] = v9;
    --v3[3];
    sub_10000C9E0((__int64 *)v3[2], v4);
    operator delete(v4);
    v3 = *(_QWORD **)(a1 + 88);
  }
LABEL_20:
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
