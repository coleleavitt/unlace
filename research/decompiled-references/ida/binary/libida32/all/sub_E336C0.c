void __fastcall sub_E336C0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // r9

  v2 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = sub_F46B20(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v3 )
  {
    v7 = v3;
    v8 = v3 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (unsigned __int8)sub_E1A070(a1, v3 & 0xFFFFFFFFFFFFFFF0LL, v4, v5, v6) )
      return;
    sub_E33A10(a1, *(_QWORD *)(v7 + 32));
    v11 = *(unsigned int *)(v7 + 20);
    v13 = *(_QWORD *)(v7 + 32);
    v12 = v7 + 48;
LABEL_11:
    sub_E2AF60(a1, v13, v12, v11);
    sub_E17E80((__int64)a1, v8, v14, v15, v16, v17);
    return;
  }
  v9 = *v2;
  if ( *(_BYTE *)(*v2 + 16) != 22
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 22
     || (v9 = sub_F3F310(*v2, a2, v4, v5)) == 0) )
  {
    sub_E1BE40((__int64)a1, a2, v4, v5, v6);
    return;
  }
  v8 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !(unsigned __int8)sub_E1A070(a1, v9 & 0xFFFFFFFFFFFFFFF0LL, v4, v5, v6) )
  {
    v10 = sub_A5CE20(*(_QWORD *)(*a1 + 8), (const __m128i *)(v9 + 32));
    sub_E33A10(a1, v10);
    v11 = *(unsigned int *)(v9 + 20);
    v12 = v9 + 48;
    v13 = v10;
    goto LABEL_11;
  }
}

