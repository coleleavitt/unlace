void __fastcall sub_E366A0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  _BYTE v3[72]; // [rsp-48h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 40) )
  {
    sub_E35AF0((__int64)v3, *(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40));
    v2 = j__strlen("message");
    sub_2206E30(a1 + 1048, "message", v2);
    sub_2208D80(a1 + 1048, v3);
    sub_2205EB0(a1 + 1048);
    sub_2207560(v3);
  }
}

