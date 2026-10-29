void __fastcall std::string::reserve(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v2; // rbp
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE *v6; // rdi
  _BYTE *v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = (_BYTE *)(a1 + 16);
  v10[0] = a2;
  if ( a1 + 16 == *(_QWORD *)a1 )
    v4 = 15;
  else
    v4 = *(_QWORD *)(a1 + 16);
  if ( v10[0] > v4 )
  {
    v5 = std::string::_M_create(a1, v10, v4);
    v6 = *(_BYTE **)a1;
    v7 = (_BYTE *)v5;
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 )
    {
      if ( v8 != -1 )
      {
        memcpy(v7, *(const void **)a1, v8 + 1);
        v6 = *(_BYTE **)a1;
      }
    }
    else
    {
      *v7 = *v6;
      v6 = *(_BYTE **)a1;
    }
    if ( v2 != v6 )
      operator delete(v6);
    v9 = v10[0];
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 16) = v9;
  }
}

