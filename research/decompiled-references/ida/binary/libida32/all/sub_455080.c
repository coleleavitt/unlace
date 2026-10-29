unsigned __int64 __fastcall sub_455080(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ecx
  __int64 v7; // rax
  __int64 i; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  bool v14; // zf
  unsigned int v16; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 16) )
  {
    v4 = *a2;
    v7 = *(_QWORD *)(a1 + 960);
    for ( i = a1 + 952; v7; v4 = v12 + 1 )
    {
      v9 = i;
      do
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v7 + 16);
          v11 = *(_QWORD *)(v7 + 24);
          if ( *(_DWORD *)(v7 + 32) < v4 )
            break;
          v9 = v7;
          v7 = *(_QWORD *)(v7 + 16);
          if ( !v10 )
            goto LABEL_7;
        }
        v7 = *(_QWORD *)(v7 + 24);
      }
      while ( v11 );
LABEL_7:
      if ( i == v9 )
        break;
      v12 = *(_DWORD *)(v9 + 32);
      if ( v12 >= a2[1] )
        break;
      v13 = v9 + 36;
      v14 = *(_QWORD *)(a3 + 16) == 0;
      v16 = v12;
      if ( v14 )
        std::__throw_bad_function_call();
      if ( (*(unsigned int (__fastcall **)(__int64, unsigned int *, __int64))(a3 + 24))(a3, &v16, v13) )
        break;
      v7 = *(_QWORD *)(a1 + 960);
    }
  }
  return v17 - __readfsqword(0x28u);
}

