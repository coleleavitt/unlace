__int64 __fastcall sub_208FF40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // r12
  signed __int64 v4; // rbp
  _BYTE *v5; // rax
  char v6; // dl
  __int64 v8; // rax

  v2 = operator new(0x48u);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = a1;
  v3 = *(char **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v2 + 16) = &unk_2CFD388;
  *(_QWORD *)v2 = &off_2C72270;
  v5 = (_BYTE *)(v2 + 56);
  *(_DWORD *)(v2 + 24) = 2;
  *(_QWORD *)(v2 + 40) = v2 + 56;
  if ( &v3[v4] && !v3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v4 > 0xF )
  {
    if ( v4 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v5 = (_BYTE *)operator new(v4 + 1);
    *(_QWORD *)(v2 + 56) = v4;
    *(_QWORD *)(v2 + 40) = v5;
  }
  else
  {
    if ( v4 == 1 )
    {
      v6 = *v3;
      *(_QWORD *)(v2 + 48) = 1;
      *(_BYTE *)(v2 + 56) = v6;
      *(_BYTE *)(v2 + 57) = 0;
      return v2;
    }
    if ( !v4 )
    {
      *(_QWORD *)(v2 + 48) = 0;
      *v5 = 0;
      return v2;
    }
  }
  memcpy(v5, v3, v4);
  v8 = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 48) = v4;
  *(_BYTE *)(v8 + v4) = 0;
  return v2;
}
