__int64 __fastcall sub_214A420(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int16 v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 24);
  v3 = *(unsigned int *)(v2 + 128);
  if ( (_DWORD)v3 && (v5 = *(_QWORD *)(v2 + 120) + 32 * v3 - 32, (v6 = *(_QWORD *)(v5 + 16)) != 0) )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 176LL))(v2, v6, *(unsigned int *)(v5 + 24));
    return 0;
  }
  else
  {
    v7 = ".previous without corresponding .section";
    v8 = 259;
    return sub_21543E0(v1, &v7, 0, 0);
  }
}
