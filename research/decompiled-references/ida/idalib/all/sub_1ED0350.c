__int64 __fastcall sub_1ED0350(
        __int64 a1,
        size_t *a2,
        _BYTE *a3,
        signed __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        _QWORD *a7)
{
  return sub_1ECF9F0(
           a2,
           *(size_t **)(a1 + 24),
           a3,
           a4,
           a5,
           0,
           a7,
           *(_QWORD *)(a1 + 8),
           (unsigned int)(*(_BYTE *)(a1 + 72) != 0) + 1);
}
