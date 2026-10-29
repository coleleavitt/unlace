unsigned __int64 __fastcall std::string::_M_assign(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r12
  __int64 v3; // r14
  size_t v5; // rbp
  unsigned __int64 v6; // rdx
  _BYTE *v8; // rsi
  __int64 v9; // rax
  _BYTE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v2 = *(_BYTE **)a1;
    v3 = a1 + 16;
    v5 = *(_QWORD *)(a2 + 8);
    v6 = 15;
    if ( a1 + 16 != *(_QWORD *)a1 )
      v6 = *(_QWORD *)(a1 + 16);
    if ( v6 < v5 )
    {
      v12 = *(_QWORD *)(a2 + 8);
      v9 = std::string::_M_create(a1, &v12, v6);
      v10 = *(_BYTE **)a1;
      v2 = (_BYTE *)v9;
      if ( v3 != *(_QWORD *)a1 )
        operator delete(v10);
      v11 = v12;
      *(_QWORD *)a1 = v2;
      *(_QWORD *)(a1 + 16) = v11;
      if ( !v5 )
        goto LABEL_6;
    }
    else if ( !v5 )
    {
LABEL_6:
      *(_QWORD *)(a1 + 8) = v5;
      v2[v5] = 0;
      return __readfsqword(0x28u) ^ v13;
    }
    v8 = *(_BYTE **)a2;
    if ( v5 == 1 )
      *v2 = *v8;
    else
      memcpy(v2, v8, v5);
    v2 = *(_BYTE **)a1;
    goto LABEL_6;
  }
  return __readfsqword(0x28u) ^ v13;
}

