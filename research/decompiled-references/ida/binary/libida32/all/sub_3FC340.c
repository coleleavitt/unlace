__int64 __fastcall sub_3FC340(
        __int64 a1,
        unsigned int *a2,
        __int64 (__fastcall *a3)(_QWORD, _QWORD, __int64),
        __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v8; // rbx
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 72);
  v6 = *a2;
  if ( v5 )
  {
    v8 = a1 + 64;
    do
    {
      if ( *(_DWORD *)(v5 + 32) >= v6 )
      {
        v8 = v5;
        v5 = *(_QWORD *)(v5 + 16);
      }
      else
      {
        v5 = *(_QWORD *)(v5 + 24);
      }
    }
    while ( v5 );
    while ( v8 != a1 + 64 && *(_DWORD *)(v8 + 32) < a2[1] )
    {
      v9 = *(_DWORD *)(v8 + 36);
      v10 = *(unsigned __int8 *)(v8 + 40);
      v8 = std::_Rb_tree_increment();
      result = a3(v9, v10, a4);
      if ( result )
        return result;
    }
  }
  return 0;
}

