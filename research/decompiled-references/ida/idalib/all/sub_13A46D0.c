__int64 __fastcall sub_13A46D0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  _BYTE *v3; // r13
  signed __int64 v4; // rbp
  void *v5; // rax
  _BYTE *v6; // r13
  signed __int64 v7; // rbp

  v2 = (void *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  v3 = *(_BYTE **)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  if ( &v3[v4] && !v3 )
LABEL_22:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v4 > 0xF )
  {
    if ( v4 < 0 )
      goto LABEL_23;
    v2 = (void *)operator new(v4 + 1);
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)a1 = v2;
    goto LABEL_18;
  }
  if ( v4 != 1 )
  {
    if ( !v4 )
      goto LABEL_6;
LABEL_18:
    memcpy(v2, v3, v4);
    v2 = *(void **)a1;
    goto LABEL_6;
  }
  *(_BYTE *)(a1 + 16) = *v3;
LABEL_6:
  *(_QWORD *)(a1 + 8) = v4;
  *((_BYTE *)v2 + v4) = 0;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 44);
  v5 = (void *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v6 = *(_BYTE **)(a2 + 56);
  v7 = *(_QWORD *)(a2 + 64);
  if ( &v6[v7] && !v6 )
    goto LABEL_22;
  if ( (unsigned __int64)v7 > 0xF )
  {
    if ( v7 >= 0 )
    {
      v5 = (void *)operator new(v7 + 1);
      *(_QWORD *)(a1 + 56) = v7;
      *(_QWORD *)(a1 + 40) = v5;
      goto LABEL_21;
    }
LABEL_23:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v7 != 1 )
  {
    if ( !v7 )
      goto LABEL_11;
LABEL_21:
    memcpy(v5, v6, v7);
    v5 = *(void **)(a1 + 40);
    goto LABEL_11;
  }
  *(_BYTE *)(a1 + 56) = *v6;
LABEL_11:
  *(_QWORD *)(a1 + 48) = v7;
  *((_BYTE *)v5 + v7) = 0;
  return a1;
}
