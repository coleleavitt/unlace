__int64 __fastcall sub_286900(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rsi
  __int64 result; // rax
  _BYTE *v5; // rcx
  _BYTE *v6; // rdx
  __int64 v7; // rdi

  v3 = (_BYTE *)(a2 + 16);
  result = a1;
  v5 = *((_BYTE **)v3 - 2);
  v6 = *(_BYTE **)a1;
  if ( v5 == v3 )
  {
    std::string::_M_assign(a1, a2, v6);
    v6 = *(_BYTE **)a2;
    result = a1;
    goto LABEL_5;
  }
  if ( v6 == (_BYTE *)(a1 + 16) )
  {
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    goto LABEL_7;
  }
  *(_QWORD *)a1 = v5;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a2 + 16);
  if ( !v6 )
  {
LABEL_7:
    *(_QWORD *)a2 = v3;
    v6 = v3;
    goto LABEL_5;
  }
  *(_QWORD *)a2 = v6;
  *(_QWORD *)(a2 + 16) = v7;
LABEL_5:
  *(_QWORD *)(a2 + 8) = 0;
  *v6 = 0;
  return result;
}

