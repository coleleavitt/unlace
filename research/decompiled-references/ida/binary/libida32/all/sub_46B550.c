unsigned __int64 __fastcall sub_46B550(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  bool v4; // zf
  unsigned int v6; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+4h] [rbp-34h]
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = sub_3B8AB0((__int64)a1, 0);
  if ( !v2 || (v2 = sub_3B8950((__int64)a1, 0), v2 != -1) )
  {
    do
    {
      v7 = 0;
      v6 = v2;
      v3 = sub_3B8BE0(a1, v2);
      v4 = *(_QWORD *)(a2 + 16) == 0;
      v7 = v2 + v3;
      if ( v4 )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, unsigned int *))(a2 + 24))(a2, &v6);
      v2 = sub_3B8950((__int64)a1, v2);
    }
    while ( v2 != -1 );
  }
  return v8 - __readfsqword(0x28u);
}

