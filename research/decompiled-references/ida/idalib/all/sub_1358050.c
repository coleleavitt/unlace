__int64 __fastcall sub_1358050(
        __int64 a1,
        _BYTE *a2,
        size_t a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _BYTE *, size_t, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 32LL))(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  if ( (_BYTE)result )
    return sub_1357C20(a1, a2, a3);
  return result;
}
