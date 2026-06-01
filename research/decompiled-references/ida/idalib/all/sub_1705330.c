__int64 __fastcall sub_1705330(__int64 a1, __int64 a2)
{
  void *v2; // rax
  _BYTE *v3; // r13
  signed __int64 v4; // r12
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 12) = *(_QWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  v2 = (void *)(a1 + 40);
  *(_QWORD *)(a1 + 24) = a1 + 40;
  v3 = *(_BYTE **)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  if ( &v3[v4] && !v3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v4 > 0xF )
  {
    if ( v4 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v2 = (void *)operator new(v4 + 1);
    *(_QWORD *)(a1 + 40) = v4;
    *(_QWORD *)(a1 + 24) = v2;
    goto LABEL_11;
  }
  if ( v4 != 1 )
  {
    if ( !v4 )
      goto LABEL_6;
LABEL_11:
    memcpy(v2, v3, v4);
    v2 = *(void **)(a1 + 24);
    goto LABEL_6;
  }
  *(_BYTE *)(a1 + 40) = *v3;
LABEL_6:
  *(_QWORD *)(a1 + 32) = v4;
  *((_BYTE *)v2 + v4) = 0;
  result = *(unsigned __int8 *)(a2 + 56);
  *(_BYTE *)(a1 + 56) = result;
  return result;
}
