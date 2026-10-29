__int64 __fastcall sub_D79770(__int64 *a1, _QWORD **a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  const char *v8; // rsi
  unsigned __int8 **v9; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_DFA810(*(_QWORD *)(*a1 + 400));
  if ( !v4 || (v5 = v4, !sub_B6AF40(v4)) )
  {
    v6 = *a1;
    v7 = *(_QWORD *)(*a1 + 400);
LABEL_4:
    v14[0] = sub_DFB160(v7, **a2);
    v8 = "__builtin_is_within_lifetime";
    v9 = (unsigned __int8 **)sub_E0FFE0(v6, v14, 2327, 0);
    goto LABEL_5;
  }
  v6 = *a1;
  v11 = *(_QWORD *)(v5 + 40);
  v7 = *(_QWORD *)(*a1 + 400);
  if ( (v11 & 7) != 0 )
    goto LABEL_4;
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v12 )
    goto LABEL_4;
  v13 = *(_QWORD *)(v12 + 16);
  if ( *(_DWORD *)v13 != 18
    || *(_QWORD *)(v13 + 16) ^ 0x69687469775F7369LL | *(_QWORD *)(v13 + 24) ^ 0x69746566696C5F6ELL
    || *(_WORD *)(v13 + 32) != 25965 )
  {
    goto LABEL_4;
  }
  v14[0] = sub_DFB160(*(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 136));
  v8 = "std::is_within_lifetime";
  v9 = (unsigned __int8 **)sub_E0FFE0(v6, v14, 2327, 0);
LABEL_5:
  if ( v9 )
  {
    sub_AC60B0(v9, (__int64)v8, 1u);
    sub_AC60B0(v9, a3, 2u);
  }
  return 0;
}

