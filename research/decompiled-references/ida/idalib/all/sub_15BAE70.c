__int64 *__fastcall sub_15BAE70(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+8h] [rbp-40h]
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( (_DWORD)a2 == 128 )
    return sub_15BAD10(a1, a2);
  if ( (_DWORD)a2 == 129 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))-- - 8);
    return (__int64 *)sub_EEDD30(v6);
  }
  else
  {
    v2 = *(_QWORD **)(**(_QWORD **)a1 + 248LL);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 120LL) + 8LL * (unsigned int)a2);
    v8 = 0;
    v4 = *(_QWORD *)(v3 + 48);
    v7 = *(_QWORD *)(v3 + 40);
    sub_B85890(v9, v7);
    return (__int64 *)sub_C0C310(v2, 0, 0, 0, v3, 0, (__int64)&v7, v4, 0, 0, 0, 0);
  }
}
