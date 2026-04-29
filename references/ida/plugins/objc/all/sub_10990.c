__int64 __fastcall sub_10990(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, _QWORD, __int64, _QWORD),
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v7 = 0;
  do
  {
    v8 = *((unsigned int *)a1 + 186);
    v9 = *a1;
    v14[0] = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v9 + 136))(a1, v14, a3 + v7 * v8)
      || (unsigned __int64)(v14[0] - 1LL) > 0xFFFFFFFFFFFFFFFDLL )
    {
      return 0;
    }
    result = (**a2)(a2, v14[0], a4, a5);
    if ( (_DWORD)result )
      return result;
    v11 = a1[1];
    ++v7;
    v12 = *(_DWORD *)(v11 + 2208);
  }
  while ( !v12 || v12 >= (unsigned int)v7 );
  if ( *(_BYTE *)(v11 + 2216) )
    sub_EC40();
  return 0xFFFFFFFFLL;
}
