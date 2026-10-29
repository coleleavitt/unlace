__int64 __fastcall sub_669880(char *a1, signed int a2)
{
  char *v2; // r12
  signed int v3; // ebx
  void **v4; // r13
  signed int v5; // ebp
  __int64 result; // rax
  __int64 v7; // rsi
  signed int v8; // ebp
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // [rsp+Ch] [rbp-45Ch]
  signed int v13; // [rsp+1Ch] [rbp-44Ch] BYREF
  _BYTE v14[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+428h] [rbp-40h]

  v2 = a1 + 2556;
  v15 = __readfsqword(0x28u);
  v3 = a2;
  v4 = *(void ***)(*(_QWORD *)a1 + 1584LL);
  v5 = sub_79B3A0(a1 + 2556, *(_QWORD *)a1, 4294967294LL, 65);
  result = 1;
  if ( a2 < v5 )
  {
    result = sub_669800(a1, a2);
    if ( (_DWORD)result != 2 )
    {
      if ( (_DWORD)result == 3 )
      {
        free_idasgn(*v4);
        *v4 = nullptr;
        v10 = sub_79B3A0(v2, *(_QWORD *)a1, 0xFFFFFFFFLL, 65);
        v11 = *(_QWORD *)a1;
        v13 = v10 - 1;
        sub_79B440(v2, v11, 0xFFFFFFFFLL, &v13, 4, 65);
      }
      v7 = *(_QWORD *)a1;
      v8 = v5 - 1;
      v13 = v8;
      sub_79B440(v2, v7, 4294967294LL, &v13, 4, 65);
      if ( v3 >= v8 )
      {
        v12 = v3;
      }
      else
      {
        v12 = v8;
        do
        {
          v9 = v3++;
          if ( sub_79B660(v2, *(_QWORD *)a1, (unsigned int)v3, v14, 1024, 83) >= 0 )
            sub_79B440(v2, *(_QWORD *)a1, v9, v14, 0, 83);
        }
        while ( v3 != v8 );
      }
      sub_79B4D0(v2, *(_QWORD *)a1, v12, 83);
      sub_79B4D0(v2, *(_QWORD *)a1, v12, 65);
      sub_79B4D0(v2, *(_QWORD *)a1, v12, 80);
      return 0;
    }
  }
  return result;
}

