unsigned __int8 *__fastcall sub_2B37F0(
        unsigned __int8 **a1,
        void (__fastcall ***a2)(_QWORD, unsigned __int8 *, unsigned __int8 *, __int64),
        char a3,
        _DWORD *a4)
{
  int v5; // ebp
  unsigned __int8 *result; // rax
  unsigned __int8 *v7; // rdx
  bool v8; // r13
  unsigned __int8 *v9; // rbx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // eax
  unsigned int v13; // [rsp+Ch] [rbp-3Ch]

  v5 = a3 & 1;
  result = a1[1];
  v7 = *a1;
  v8 = a4 != nullptr;
  if ( 20LL * (_QWORD)result )
  {
    v9 = *a1;
    do
    {
      v10 = *v9;
      if ( !v5 || (_BYTE)v10 )
      {
        if ( v8
          && (_BYTE)v10
          && ((v7 = (unsigned __int8 *)*((unsigned int *)v9 + 1),
               v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 56LL),
               v11 != interactive_graph_t__::vfunc_7)
            ? (v13 = *((_DWORD *)v9 + 1), v12 = v11((__int64)a4), v7 = (unsigned __int8 *)v13)
            : (unsigned __int8 *)(v12 = a4[46]),
              (int)v7 >= v12) )
        {
          v7 = *a1;
          result = a1[1];
        }
        else
        {
          (**a2)(a2, v9, v7, v10);
          v7 = *a1;
          result = a1[1];
        }
      }
      v9 += 20;
    }
    while ( v9 != &v7[20 * (_QWORD)result] );
  }
  return result;
}
