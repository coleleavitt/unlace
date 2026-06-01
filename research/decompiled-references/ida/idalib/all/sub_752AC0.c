__int64 __fastcall sub_752AC0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  unsigned __int16 v7; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 56);
  v8 = __readfsqword(0x28u);
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64))(a1 + 8))(v5, a2, &v7, 2) == 2 )
  {
    *a3 = v7;
    return 0;
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-((*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), a2) != 0);
  }
}
