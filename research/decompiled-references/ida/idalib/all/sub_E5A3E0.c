void __fastcall sub_E5A3E0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  _BYTE v3[72]; // [rsp-48h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 40) )
  {
    sub_E59830((__int64)v3, *(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40));
    v2 = j__strlen("message");
    sub_222AB70(a1 + 1048, "message", v2);
    sub_222CAC0(a1 + 1048, v3);
    sub_2229BF0(a1 + 1048);
    sub_222B2A0(v3);
  }
}
