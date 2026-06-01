void __fastcall sub_8212A0(__int64 *a1, _BYTE *a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  size_t v5; // rbx
  _BYTE *v6; // rdi
  __int64 v7; // rax
  size_t v8; // [rsp+8h] [rbp-20h]

  v3 = a3 - (_QWORD)a2;
  v5 = v3;
  v8 = v3;
  if ( v3 > 0xF )
  {
    v7 = std::string::_M_create();
    *a1 = v7;
    v6 = (_BYTE *)v7;
    a1[2] = v8;
    goto LABEL_8;
  }
  v6 = (_BYTE *)*a1;
  if ( v3 != 1 )
  {
    if ( !v3 )
      goto LABEL_4;
LABEL_8:
    memcpy(v6, a2, v5);
    v5 = v8;
    v6 = (_BYTE *)*a1;
    goto LABEL_4;
  }
  *v6 = *a2;
  v5 = 1;
  v6 = (_BYTE *)*a1;
LABEL_4:
  a1[1] = v5;
  v6[v5] = 0;
}

