__int64 __fastcall sub_384940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v9; // r8
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
         207,
         &v11,
         "SetTypeRenames",
         &callui,
         a5,
         a6);
  if ( (_BYTE)v8 )
  {
    if ( (_DWORD)v11 != 1 )
      sub_384920(207, (__int64)&v11, v6, v7, v9);
    LOBYTE(v8) = v12 != 0;
  }
  jvalue_t_clear(&v11);
  return v8;
}
