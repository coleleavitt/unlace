__int64 __fastcall sub_208FE50(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  _BYTE *v5; // r12
  signed __int64 v6; // rbp
  void *v7; // rax

  v4 = operator new(0x50u);
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 32) = a1;
  v5 = *(_BYTE **)a2;
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v4 + 16) = &unk_2CFD389;
  *(_QWORD *)v4 = &off_2C721D8;
  v7 = (void *)(v4 + 56);
  *(_DWORD *)(v4 + 24) = 4;
  *(_QWORD *)(v4 + 40) = v4 + 56;
  if ( &v5[v6] && !v5 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v6 > 0xF )
  {
    if ( v6 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v7 = (void *)operator new(v6 + 1);
    *(_QWORD *)(v4 + 56) = v6;
    *(_QWORD *)(v4 + 40) = v7;
    goto LABEL_11;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
      goto LABEL_6;
LABEL_11:
    memcpy(v7, v5, v6);
    v7 = *(void **)(v4 + 40);
    goto LABEL_6;
  }
  *(_BYTE *)(v4 + 56) = *v5;
LABEL_6:
  *(_QWORD *)(v4 + 48) = v6;
  *((_BYTE *)v7 + v6) = 0;
  *(_BYTE *)(v4 + 72) = a3;
  return v4;
}
