void __fastcall std::string::reserve(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  _BYTE *v3; // r12
  _BYTE *v4; // rbp
  unsigned __int64 v5; // rdx
  _BYTE *v7; // r12
  __int64 v8; // rax
  _BYTE *v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v11[0] = a2;
  if ( a2 < v2 )
  {
    v11[0] = v2;
    a2 = v2;
  }
  v3 = *(_BYTE **)a1;
  v4 = (_BYTE *)(a1 + 16);
  v5 = 15;
  if ( a1 + 16 != *(_QWORD *)a1 )
    v5 = *(_QWORD *)(a1 + 16);
  if ( v5 != a2 )
  {
    if ( a2 > 0xF || v5 < a2 )
    {
      v7 = (_BYTE *)std::string::_M_create(a1, v11, v5);
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_BYTE **)a1;
      if ( v8 )
      {
        if ( v8 != -1 )
        {
          memcpy(v7, *(const void **)a1, v8 + 1);
          v9 = *(_BYTE **)a1;
        }
      }
      else
      {
        *v7 = *v9;
        v9 = *(_BYTE **)a1;
      }
      if ( v4 != v9 )
        operator delete(v9);
      v10 = v11[0];
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 16) = v10;
    }
    else if ( v4 != v3 )
    {
      if ( v2 )
      {
        if ( v2 != -1 )
          memcpy((void *)(a1 + 16), *(const void **)a1, v2 + 1);
      }
      else
      {
        *(_BYTE *)(a1 + 16) = *v3;
      }
      operator delete(v3);
      *(_QWORD *)a1 = v4;
    }
  }
}

