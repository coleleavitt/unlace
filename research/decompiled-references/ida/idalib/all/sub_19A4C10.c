unsigned __int64 __fastcall sub_19A4C10(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        __int64 a6,
        int a7,
        char *a8,
        __int64 a9,
        int a10)
{
  unsigned __int64 v10; // rbx
  bool v11; // zf
  unsigned __int64 result; // rax

  v10 = sub_C0F470(*(_QWORD **)(a1 + 248), a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v11 = (unsigned __int8)sub_1E53170(a1, v10) == 0;
  result = 1;
  if ( v11 )
    return v10;
  return result;
}
