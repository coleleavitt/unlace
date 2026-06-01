_QWORD *__fastcall sub_E78EA0(_QWORD *a1, unsigned __int64 a2)
{
  char *v2; // rax
  char v3; // cl
  _BYTE *v4; // r13
  char *v6; // rbx
  _BYTE *v7; // rbp
  _BYTE v8[51]; // [rsp+15h] [rbp-33h] BYREF

  if ( a2 )
  {
    v6 = v8;
    while ( 1 )
    {
      --v6;
      v3 = a2 % 0xA + 48;
      *v6 = v3;
      if ( a2 <= 9 )
        break;
      a2 /= 0xAu;
    }
    v2 = (char *)(a1 + 2);
    v7 = (_BYTE *)(v8 - v6);
    *a1 = a1 + 2;
    v4 = (_BYTE *)(v8 - v6);
    if ( (unsigned __int64)(v8 - v6) <= 0xF )
    {
      if ( v7 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_3;
      if ( !v7 )
        goto LABEL_4;
    }
    else
    {
      if ( (__int64)v7 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v2 = (char *)operator new((unsigned __int64)(v7 + 1));
      a1[2] = v7;
      *a1 = v2;
    }
    memcpy(v2, v6, (size_t)v7);
    v2 = (char *)*a1;
    goto LABEL_4;
  }
  v2 = (char *)(a1 + 2);
  v3 = 48;
  *a1 = a1 + 2;
LABEL_3:
  *v2 = v3;
  v4 = (_BYTE *)(&dword_0 + 1);
LABEL_4:
  a1[1] = v4;
  v4[(_QWORD)v2] = 0;
  return a1;
}
