__int64 __fastcall sub_689B90(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rsi
  int v4; // ebp
  int v5; // r14d
  int v6; // eax
  int v7; // ebp
  void *v9; // r15
  int v10; // ebp
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  void **v15; // rbp
  __int64 v16; // rsi
  unsigned int v17; // eax
  unsigned __int64 *v18; // [rsp+0h] [rbp-98h]
  int v19; // [rsp+10h] [rbp-88h]
  int v20; // [rsp+14h] [rbp-84h]
  char v21; // [rsp+2Fh] [rbp-69h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v25; // [rsp+48h] [rbp-50h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v3 = *a1;
  if ( (debug & 4) == 0 )
  {
    v15 = *(void ***)(v3 + 1776);
    free_idasgn(*v15);
    *v15 = nullptr;
    v3 = *a1;
  }
  v4 = sub_7BE710(a1 + 344, v3, -1, 65);
  v5 = v4;
  v18 = sub_506150((__int64)(a1 + 203));
  v6 = sub_7BE710(a1 + 344, *a1, -2, 65);
  v19 = v6;
  v25 = 0;
  if ( (_BYTE)a2 )
  {
    v20 = v4;
    v9 = nullptr;
    while ( 1 )
    {
      if ( v5 > 0 )
      {
        v13 = *a1;
        v21 = 1;
        sub_7BE7C0(a1 + 344, v13, v5 - 1, &v21, 1, 80);
      }
      else if ( v5 < 0 )
      {
        break;
      }
      if ( v19 <= v5 || (unsigned __int8)sub_7BE710(a1 + 344, *a1, v5, 4176) )
        break;
      v10 = v5 + 1;
      if ( v18 )
      {
        ptr = v9;
        v11 = sub_689AE0((__int64)a1, (__int64 *)&ptr, v5, 1);
        v9 = ptr;
        v12 = *a1;
        if ( v11 )
        {
          v23 = v10;
          sub_7BE7C0(a1 + 344, v12, -1, &v23, 8, 65);
          sub_688D00((__int64)a1);
        }
        v14 = sub_7BEBF0(a1 + 344, v12, v5, 83);
        v10 = v19;
        if ( v19 > v14 )
          v10 = v14;
      }
      v5 = v10;
    }
    if ( v5 != v20 )
    {
      v16 = *a1;
      v22 = v5;
      sub_7BE7C0(a1 + 344, v16, -1, &v22, 8, 65);
    }
    a2 = 0;
    mark_builtin_widgets(256, 0, 1);
  }
  else
  {
    v7 = v4 - 1;
    if ( v7 < 0 || v7 >= v6 || !v18 || (unsigned __int8)sub_7BE710(a1 + 344, *a1, v7, 4176) )
      return a2;
    ptr = nullptr;
    v17 = sub_689AE0((__int64)a1, (__int64 *)&ptr, v7, 1);
    v9 = ptr;
    a2 = v17;
    if ( (_BYTE)v17 )
      sub_688D00((__int64)a1);
  }
  if ( v9 )
    qfree(v9);
  return a2;
}
