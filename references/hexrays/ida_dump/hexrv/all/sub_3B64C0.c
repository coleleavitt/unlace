__int64 __fastcall sub_3B64C0(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  const char *v10; // rcx

  v10 = "Remove function argument";
  if ( a3 )
    v10 = "Remove return value";
  ((void (__fastcall *)(__int64, const char *, __int64, const char *, __int64, __int64))callui)(
    140,
    "hx:RemoveArg",
    1,
    v10,
    a5,
    a6);
  return callui(131, a1, a2, "hx:RemoveArg", 0, 0, a7, a8, a9, a10);
}
