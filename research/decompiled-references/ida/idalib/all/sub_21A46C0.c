void __fastcall sub_21A46C0(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v2; // rbp
  _BYTE *v3; // r15
  size_t v4; // r13
  char *v5; // rax
  _BYTE *v6; // rcx
  char *v7; // r12
  _BYTE *v8; // [rsp+8h] [rbp-40h]

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::reserve");
  v2 = *(_BYTE **)a1;
  if ( (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3 < a2 )
  {
    v3 = *(_BYTE **)(a1 + 8);
    v4 = v3 - v2;
    if ( a2 )
    {
      v5 = (char *)operator new(8 * a2);
      v6 = *(_BYTE **)a1;
      v7 = v5;
    }
    else
    {
      v6 = *(_BYTE **)a1;
      v7 = nullptr;
    }
    if ( v2 != v3 )
    {
      v8 = v6;
      memmove(v7, v2, v4);
      v6 = v8;
    }
    if ( v6 )
      operator delete(v6);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = &v7[v4];
    *(_QWORD *)(a1 + 16) = &v7[8 * a2];
  }
}
