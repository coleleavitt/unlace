char *__fastcall sub_10D9DC0(__int64 a1, _BYTE *a2, size_t a3)
{
  int v4; // eax
  char *v5; // rax
  char *v6; // rbx
  unsigned __int8 *v8[13]; // [rsp+0h] [rbp-68h] BYREF

  v4 = sub_FF7C60(a2, a3);
  if ( (unsigned int)(v4 - 2) > 0x1A )
  {
    sub_FC70B0((__int64)v8, ***(_QWORD ***)(a1 + 8), 0, 343);
    sub_AEC220(v8, a2, a3);
    sub_AEA040((__int64)v8);
    return nullptr;
  }
  else
  {
    v5 = sub_FF7B80(v4);
    v6 = v5;
    if ( v5 )
      j__strlen(v5);
    return v6;
  }
}
