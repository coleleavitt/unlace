__int64 __fastcall sub_28B2D0(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  __int64 result; // rax
  const char *v6; // rsi
  const char *v7; // rsi
  const char *v8; // [rsp+0h] [rbp-448h] BYREF
  __int128 v9; // [rsp+8h] [rbp-440h]
  _BYTE v10[1032]; // [rsp+20h] [rbp-428h] BYREF
  unsigned __int64 v11; // [rsp+428h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = set_func_start();
  if ( v2 != 2 )
  {
    v3 = v2;
    v4 = v2;
    result = 1;
    if ( (v3 & 0xFFFFFFFD) != 1 )
      return result;
    v8 = nullptr;
    v9 = 0;
    get_ea_name(&v8, a1, 21, 0);
    v6 = v8;
    sub_17CE30((unsigned int)(v4 != 1) + 151, v8);
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8, v6);
    }
    return 0;
  }
  ea2str(v10, 1024, a2);
  v9 = 0;
  v8 = nullptr;
  get_ea_name(&v8, a1, 21, 0);
  v7 = v8;
  sub_17CE30(153, v8, v10);
  if ( !v8 )
    return 0;
  *(_QWORD *)&v9 = 0;
  qfree(v8, v7);
  return 0;
}
