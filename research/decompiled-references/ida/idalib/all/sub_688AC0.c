__int64 __fastcall sub_688AC0(_QWORD *a1, int a2)
{
  _QWORD *v2; // rbx
  void **v3; // r13
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  int v11; // [rsp+10h] [rbp-468h]
  __int64 v12; // [rsp+18h] [rbp-460h]
  __int64 v13; // [rsp+28h] [rbp-450h] BYREF
  _BYTE v14[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+438h] [rbp-40h]

  v2 = a1 + 344;
  v15 = __readfsqword(0x28u);
  v3 = *(void ***)(*a1 + 1776LL);
  v11 = sub_7BE710(a1 + 344, *a1, -2, 65);
  result = 1;
  if ( a2 < v11 )
  {
    result = sub_688A30(a1, a2);
    if ( (_DWORD)result != 2 )
    {
      if ( (_DWORD)result == 3 )
      {
        free_idasgn(*v3);
        *v3 = nullptr;
        v8 = sub_7BE710(v2, *a1, -1, 65);
        v9 = *a1;
        v13 = v8 - 1;
        sub_7BE7C0(v2, v9, -1, &v13, 8, 65);
      }
      v5 = *a1;
      v13 = v11 - 1;
      sub_7BE7C0(v2, v5, -2, &v13, 8, 65);
      if ( a2 >= v11 - 1 )
      {
        v7 = a2;
      }
      else
      {
        v6 = a2;
        v12 = a2 + 1;
        do
        {
          if ( sub_7BE9F0(v2, *a1, v12 - a2 + v6, v14, 1024, 83) >= 0 )
            sub_7BE7C0(v2, *a1, v6, v14, 0, 83);
          ++v6;
        }
        while ( v11 - 1 > (int)v6 );
        v7 = v12 + (unsigned int)(v11 - a2 - 2);
      }
      sub_7BE850(v2, *a1, v7, 83);
      sub_7BE850(v2, *a1, v7, 65);
      sub_7BE850(v2, *a1, v7, 80);
      return 0;
    }
  }
  return result;
}
