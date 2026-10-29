void __fastcall sub_E365B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  size_t v3; // rax
  size_t v4; // rax
  _BYTE v5[88]; // [rsp+0h] [rbp-58h] BYREF

  if ( !*(_DWORD *)(a2 + 40) )
  {
    v2 = *(unsigned int *)(a2 + 56);
    if ( !*(_DWORD *)(a2 + 56) )
      return;
LABEL_5:
    sub_E35AF0((__int64)v5, *(_QWORD *)(a2 + 64), v2);
    v4 = j__strlen("replacement");
    sub_2206E30(a1 + 1048, "replacement", v4);
    sub_2208D80(a1 + 1048, v5);
    sub_2205EB0(a1 + 1048);
    sub_2207560(v5);
    return;
  }
  sub_E35AF0((__int64)v5, *(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40));
  v3 = j__strlen("message");
  sub_2206E30(a1 + 1048, "message", v3);
  sub_2208D80(a1 + 1048, v5);
  sub_2205EB0(a1 + 1048);
  sub_2207560(v5);
  v2 = *(unsigned int *)(a2 + 56);
  if ( *(_DWORD *)(a2 + 56) )
    goto LABEL_5;
}

