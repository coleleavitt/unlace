char *__fastcall sub_1F56000(__int64 *a1, char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  char *result; // rax
  int v7; // ebp
  __int64 v8; // rax
  _QWORD *v9; // r12
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  sub_1F54BC0(a1, a2);
  v3 = a1[2];
  v4 = *(unsigned int *)(v3 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  result = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( a2 == result )
  {
    v7 = v5 - 1;
    if ( (_DWORD)v5 )
    {
      do
      {
        v8 = a1[2];
        v9 = *(_QWORD **)(v8 + 8);
        v10 = sub_1EE13A0((__int64)v9, *(_QWORD *)(v8 + 16), (__int64 *)(v8 + 32), (_DWORD *)(v8 + 24));
        result = (char *)sub_1EDB980(v9, v10, v11, v12, v13, v14);
        if ( result )
        {
          v15 = *(_QWORD *)(*a1 + 144);
          v16 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)result + 32LL))(result);
          result = (char *)sub_A970B0(v15, (__int64)a2, v16, v17, v18, v19);
        }
        --v7;
      }
      while ( v7 != -1 );
    }
  }
  else
  {
    result = (char *)a1[2];
    *((_DWORD *)result + 6) += v5;
  }
  return result;
}
