const char *__fastcall sub_13D49E0(int a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // rbp^4
  const char *v4; // rbx
  const char *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rcx
  size_t v12; // rax
  char v13; // [rsp+Fh] [rbp-29h] BYREF
  _QWORD v14[5]; // [rsp+10h] [rbp-28h] BYREF

  if ( a1 <= 0 )
    return nullptr;
  v2 = sub_A80750((__int64)a2, a1);
  v3 = HIDWORD(v2);
  if ( !(_DWORD)v2 )
    return nullptr;
  v13 = 0;
  v6 = sub_10202B0(a2, v2, &v13);
  if ( v13 )
    return nullptr;
  v8 = sub_13D06F0((unsigned __int64)v6, v7, v3);
  if ( !v8 )
    return nullptr;
  v11 = v9 - (_QWORD)&v8[-v10];
  if ( (unsigned __int64)&v8[-v10] > v9 )
  {
    v8 = (unsigned __int8 *)(v10 + v9);
    v11 = 0;
  }
  v14[1] = v11;
  v14[0] = v8;
  v12 = j__strlen(" \t");
  if ( sub_2246FB0(v14, " \t", v12, 0) != -1 )
    return (const char *)v14[0];
  v4 = &byte_22F0C30;
  j__strlen(&byte_22F0C30);
  return v4;
}
