__int64 __fastcall sub_E4C640(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  size_t v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 result; // rax

  v2 = (_QWORD *)operator new(0x1F8u);
  v3 = sub_A40BF0(a2, 0);
  v4 = 0;
  *v2 = v3;
  v5 = *(_QWORD *)(a2 + 17448);
  v6 = *(_QWORD *)(v5 + 288);
  if ( v6 )
    v4 = strlen(*(const char **)(v5 + 288));
  result = sub_20440E0(v2 + 1, v6, v4);
  *a1 = v2;
  return result;
}

