unsigned __int64 __fastcall sub_41BE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  _BYTE v7[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v8; // [rsp+408h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 && !*(_WORD *)(a1 + 54) && (unsigned __int8)is_loaded(v4) )
  {
    qstrncpy(v7, "__imp_", 1024);
    qstrncat(v7, a3, 1024);
    set_name(*(_QWORD *)(a1 + 80), v7, 7168);
    set_name(*(_QWORD *)(a1 + 56), a3, 7168);
  }
  return v8 - __readfsqword(0x28u);
}

