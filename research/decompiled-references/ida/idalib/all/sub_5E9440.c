__int64 __fastcall sub_5E9440(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v3; // rax
  _BYTE *v4; // rax
  char *v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = (char *)__readfsqword(0x28u);
  result = *(unsigned __int8 *)(a2 + 186);
  v5[0] = nullptr;
  if ( (result & 0x3F) == 0x3D )
  {
    if ( (unsigned int)get_named_type(*(_QWORD *)(a1 + 248), *(_QWORD *)(a2 + 72), 1, (unsigned int)v5, 0, 0, 0, 0, 0)
      && (v3 = sub_568850(*(_QWORD *)(a1 + 248), v5[0], 0, 0), (v5[0] = v3) != nullptr) )
    {
      return (unsigned __int8)*v3;
    }
    else
    {
      v4 = sub_5E1C70(*(_QWORD *)(a1 + 248), *(_BYTE **)(a2 + 72), 1);
      set_error_string(0, v4);
      set_qerrno(67);
      return 0;
    }
  }
  return result;
}
