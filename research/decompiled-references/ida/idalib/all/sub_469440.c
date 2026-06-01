unsigned __int64 __fastcall sub_469440(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // rcx
  _QWORD *v7; // rax
  _QWORD *i; // rbp
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rdx
  bool v14; // zf
  unsigned __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 16) )
  {
    v4 = *a2;
    v7 = *(_QWORD **)(a1 + 968);
    for ( i = (_QWORD *)(a1 + 960); v7; v4 = v12 + 1 )
    {
      v9 = i;
      do
      {
        while ( 1 )
        {
          v10 = v7[2];
          v11 = v7[3];
          if ( v7[4] < v4 )
            break;
          v9 = v7;
          v7 = (_QWORD *)v7[2];
          if ( !v10 )
            goto LABEL_7;
        }
        v7 = (_QWORD *)v7[3];
      }
      while ( v11 );
LABEL_7:
      if ( i == v9 )
        break;
      v12 = v9[4];
      if ( v12 >= a2[1] )
        break;
      v13 = v9 + 5;
      v14 = *(_QWORD *)(a3 + 16) == 0;
      v16 = v12;
      if ( v14 )
        std::__throw_bad_function_call();
      if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64 *, _QWORD *))(a3 + 24))(a3, &v16, v13) )
        break;
      v7 = *(_QWORD **)(a1 + 968);
    }
  }
  return v17 - __readfsqword(0x28u);
}
