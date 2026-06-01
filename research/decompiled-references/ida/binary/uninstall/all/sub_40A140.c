__int64 __fastcall sub_40A140(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ebx
  __int64 i; // r12
  __int64 v12; // rbp
  __int64 v13; // rdx

  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 984) + 64LL))(*(_QWORD *)(a1 + 984), a4);
  if ( result )
  {
    v8 = *(_QWORD *)(result + 24);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(v8 + 96))(v8 + 32, a5);
    if ( result )
    {
      v9 = *(_QWORD *)(v8 + 16);
      v10 = a3 - 1;
      result = 3LL * *(int *)(result + 24);
      for ( i = v9 + 8 * result; v10 > 0; --v10 )
      {
        result = *(_QWORD *)(i + 8);
        if ( *(int *)(result + 4LL * v10) >= 0 )
        {
          result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 992) + 64LL))(
                     *(_QWORD *)(a1 + 992),
                     *(_QWORD *)(a2 + 8LL * v10));
          if ( result )
          {
            v12 = *(_QWORD *)(result + 24);
            v13 = *(_QWORD *)(v12 + 16);
            if ( v13 )
              *(_QWORD *)(result + 24) = v13;
            else
              sub_457BC0(result);
            result = Tcl_Free(v12);
          }
        }
      }
    }
  }
  return result;
}

