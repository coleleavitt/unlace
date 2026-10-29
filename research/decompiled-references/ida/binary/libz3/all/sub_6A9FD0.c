__int64 __fastcall sub_6A9FD0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 *a4)
{
  __int64 v4; // r14
  unsigned int v8; // ebx
  _QWORD *v9; // r15
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(); // r10
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v17; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v8 = 0;
  v9 = *(_QWORD **)(a1 + 8);
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  result = v9[5];
  if ( result )
  {
    while ( v8 < *(_DWORD *)(result - 4) )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(result + 8LL * v8);
        if ( v12 )
        {
          v13 = *(__int64 (__fastcall **)())(*(_QWORD *)v12 + 72LL);
          if ( v13 != sub_6AFD60 )
            break;
        }
        if ( ++v8 >= *(_DWORD *)(result - 4) )
          goto LABEL_6;
      }
      v17 = v10;
      result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64 *, __int64 (__fastcall *)()))v13)(
                 v12,
                 a2,
                 a3,
                 a4,
                 sub_6AFD60);
      if ( (_BYTE)result )
        return result;
      result = v9[5];
      v10 = v17;
      if ( !result )
        break;
      ++v8;
    }
  }
LABEL_6:
  if ( !a3 )
  {
    result = sub_15EC2C0(v10, a2);
    v4 = result;
  }
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v14 = *a4;
  if ( *a4 )
  {
    v15 = a4[1];
    if ( (*(_DWORD *)(v14 + 8))-- == 1 )
      result = sub_15D7BC0(v15, v14);
  }
  *a4 = v4;
  return result;
}

