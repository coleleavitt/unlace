__int64 __fastcall sub_B1270(__int64 a1, signed int *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 that; // rax
  char v13; // [rsp+2h] [rbp-46h] BYREF
  bool v14; // [rsp+3h] [rbp-45h] BYREF
  int v15; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v7 = sub_A2200(&v15, &v13, &v14);
  if ( !(_BYTE)v7 )
    return 0;
  v8 = v7;
  v9 = a5 + v15;
  if ( !v13 && *(_QWORD *)(a4 + 8) != v9 )
  {
    *(_BYTE *)(a1 + 32) = 1;
    *(_QWORD *)(a1 + 24) = a5;
    return v8;
  }
  if ( !*(_BYTE *)(a1 + 32) )
    return 0;
  v10 = *(_QWORD *)(a1 + 24);
  if ( v14 )
    v9 = -1;
  *(_QWORD *)(a1 + 24) = v9;
  if ( a5 >= v10 && (int)get_func_chunknum() >= 0 )
  {
    if ( v10 < a5 )
    {
      sub_B11C0(xmmword_251F20, a2, v10, 2);
      if ( (dword_251B1C & 1) != 0 )
      {
        while ( 1 )
        {
          that = next_that();
          if ( that == -1 )
            break;
          sub_B11C0(xmmword_251F20, a2, that, 2);
        }
      }
    }
    sub_B11C0(xmmword_251F20, a2, a5, 2);
  }
  else
  {
    return 0;
  }
  return v8;
}

