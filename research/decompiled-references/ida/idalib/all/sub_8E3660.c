_BYTE *__fastcall sub_8E3660(char *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _BYTE *v3; // rbx
  char *v4; // rbp
  void (__fastcall *v6)(_BYTE *); // rax
  _BYTE *v7; // rdi
  void *v8; // rdi
  const void *v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = (const void *)__readfsqword(0x28u);
  v2 = (_QWORD *)operator new(0x30u);
  *((_BYTE *)v2 + 8) = 32;
  v3 = v2;
  *v2 = &off_2B3E4E8;
  v2[2] = 0;
  *((_BYTE *)v2 + 40) = 0;
  *(_OWORD *)(v2 + 3) = 0;
  if ( a1 )
  {
    v9[0] = a1;
    v4 = &a1[a2];
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return nullptr;
    }
    else
    {
      if ( (unsigned __int8)sub_7E1CF0(v2 + 2, v9, (unsigned __int64)v4) )
      {
        if ( v9[0] < v4 )
        {
          v3[40] = *(_BYTE *)v9[0];
          return v3;
        }
        v3[40] = 0;
      }
      if ( !v3 )
        return nullptr;
      v6 = *(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 8LL);
      if ( (char *)v6 != (char *)sub_8D6A40 )
      {
        v7 = v3;
        v3 = nullptr;
        v6(v7);
        return v3;
      }
      v8 = *((void **)v3 + 2);
      *(_QWORD *)v3 = &off_2B3E4E8;
      if ( v8 )
      {
        *((_QWORD *)v3 + 3) = 0;
        qfree(v8);
      }
    }
    operator delete(v3, 0x30u);
    return nullptr;
  }
  return v3;
}
