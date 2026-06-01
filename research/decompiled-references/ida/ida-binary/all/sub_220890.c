__int64 __fastcall sub_220890(__int64 a1, signed int *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 that; // rax
  char v14; // [rsp+2h] [rbp-46h] BYREF
  bool v15; // [rsp+3h] [rbp-45h] BYREF
  int v16; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v8 = sub_210BC0(&v16, &v14, &v15, a5);
  if ( !(_BYTE)v8 )
    return 0;
  v9 = v8;
  v10 = a5 + v16;
  if ( !v14 && *(_QWORD *)(a4 + 8) != v10 )
  {
    *(_BYTE *)(a1 + 32) = 1;
    *(_QWORD *)(a1 + 24) = a5;
    return v9;
  }
  if ( !*(_BYTE *)(a1 + 32) )
    return 0;
  v11 = *(_QWORD *)(a1 + 24);
  if ( v15 )
    v10 = -1;
  *(_QWORD *)(a1 + 24) = v10;
  if ( a5 >= v11 && (int)get_func_chunknum(a3, v11) >= 0 )
  {
    if ( v11 < a5 )
    {
      sub_2207E0((__m128i *)qword_8CBAA0, a2, v11, 2);
      if ( (dword_8CB69C & 1) != 0 )
      {
        while ( 1 )
        {
          that = next_that(v11, a5, sub_20A790, 0);
          v11 = that;
          if ( that == -1 )
            break;
          sub_2207E0((__m128i *)qword_8CBAA0, a2, that, 2);
        }
      }
    }
    sub_2207E0((__m128i *)qword_8CBAA0, a2, a5, 2);
  }
  else
  {
    return 0;
  }
  return v9;
}
