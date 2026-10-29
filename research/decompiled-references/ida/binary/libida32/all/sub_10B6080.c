char *__fastcall sub_10B6080(__int64 a1, _BYTE *a2, size_t a3)
{
  int v4; // eax
  char *v5; // rax
  char *v6; // rbx
  unsigned __int8 *v8[13]; // [rsp+0h] [rbp-68h] BYREF

  v4 = sub_FD3F20(a2, a3);
  if ( (unsigned int)(v4 - 2) > 0x1A )
  {
    sub_FA3370((__int64)v8, ***(_QWORD ***)(a1 + 8), 0, 343);
    sub_AC84E0(v8, a2, a3);
    sub_AC6300((__int64)v8);
    return nullptr;
  }
  else
  {
    v5 = sub_FD3E40(v4);
    v6 = v5;
    if ( v5 )
      j__strlen(v5);
    return v6;
  }
}

