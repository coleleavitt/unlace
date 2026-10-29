unsigned __int64 __fastcall sub_3A1B40(_QWORD *a1, unsigned int a2, unsigned int a3, int a4)
{
  char *v5; // r14
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rsi
  __int64 v12; // rsi
  int v13; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v5 = (char *)a1 + 76;
  v14 = __readfsqword(0x28u);
  auto_mark_range(a2, a2 + 1, 50);
  v7 = (unsigned int)ea2node(a2);
  v8 = sub_79B3A0((char *)a1 + 76, *a1, v7, 65);
  if ( !v8 || v8 == -1 && a3 != -1 )
  {
    v9 = ea2node(a3);
    v10 = *a1;
    v13 = v9;
    sub_79B440(v5, v10, (unsigned int)v7, &v13, 4, 65);
  }
  if ( a4 )
  {
    v12 = *a1;
    v13 = a4;
    sub_79B440(v5, v12, (unsigned int)v7, &v13, 4, 80);
  }
  return v14 - __readfsqword(0x28u);
}

