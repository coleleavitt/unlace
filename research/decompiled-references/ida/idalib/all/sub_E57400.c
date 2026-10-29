_QWORD *__fastcall sub_E57400(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  _QWORD *result; // rax
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // r9

  v2 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = sub_F6A860(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v3 )
  {
    v7 = v3;
    v8 = v3 & 0xFFFFFFFFFFFFFFF0LL;
    result = (_QWORD *)sub_E3DDB0(a1, v3 & 0xFFFFFFFFFFFFFFF0LL, v4, v5, v6);
    if ( (_BYTE)result )
      return result;
    sub_E57750(a1, *(_QWORD *)(v7 + 32));
    v12 = *(unsigned int *)(v7 + 20);
    v14 = *(_QWORD *)(v7 + 32);
    v13 = v7 + 48;
LABEL_11:
    sub_E4ECA0(a1, v14, v13, v12);
    return sub_E3BBC0((__int64)a1, v8, v15, v16, v17, v18);
  }
  v10 = *v2;
  if ( *(_BYTE *)(*v2 + 16) != 22 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 22 )
      return (_QWORD *)sub_E3FB80(a1, a2);
    v10 = sub_F63050(*v2, a2, v4, v5);
    if ( !v10 )
      return (_QWORD *)sub_E3FB80(a1, a2);
  }
  v8 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  result = (_QWORD *)sub_E3DDB0(a1, v10 & 0xFFFFFFFFFFFFFFF0LL, v4, v5, v6);
  if ( !(_BYTE)result )
  {
    v11 = sub_A80B60(*(_QWORD *)(*a1 + 8), (const __m128i *)(v10 + 32));
    sub_E57750(a1, v11);
    v12 = *(unsigned int *)(v10 + 20);
    v13 = v10 + 48;
    v14 = v11;
    goto LABEL_11;
  }
  return result;
}
