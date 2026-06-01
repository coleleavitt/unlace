__int64 __fastcall sub_5CD650(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v3; // rax
  _BYTE *v4; // rsi
  char *v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = (char *)__readfsqword(0x28u);
  result = *(unsigned __int8 *)(a2 + 186);
  v5[0] = nullptr;
  if ( (result & 0x3F) == 0x3D )
  {
    if ( (unsigned int)get_named_type(*(_QWORD *)(a1 + 240), *(_QWORD *)(a2 + 72), 1, (int)v5, 0, 0, 0, 0, 0)
      && (v3 = sub_54F0B0(*(_QWORD *)(a1 + 240), v5[0], 0, 0), (v5[0] = v3) != nullptr) )
    {
      return (unsigned __int8)*v3;
    }
    else
    {
      v4 = sub_5C5F70(*(_QWORD *)(a1 + 240), *(_BYTE **)(a2 + 72), 1);
      set_error_string();
      set_qerrno(67, v4);
      return 0;
    }
  }
  return result;
}

