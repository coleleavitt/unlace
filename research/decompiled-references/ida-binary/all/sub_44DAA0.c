__int64 __fastcall sub_44DAA0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  const char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  _BYTE *v10; // rbx
  unsigned int v11; // edi
  _BYTE *v12; // r8
  _BYTE *v13; // r15
  __int64 v15; // rax
  _BYTE *v16; // [rsp+8h] [rbp-40h]

  v5 = (const char *)a3;
  (**(void (__fastcall ***)(__int64, _QWORD, _QWORD *))a2)(a2, a3, a1);
  v8 = a1[2];
  if ( v8 > 1 )
  {
    v9 = a1[1];
    v10 = (_BYTE *)(v9 + v8 - 1);
    if ( v9 < (unsigned __int64)v10 )
    {
      while ( 1 )
      {
        v11 = (char)*(v10 - 1);
        if ( v11 > 0x7F || !isspace(v11) )
          break;
        if ( (_BYTE *)v9 == --v10 )
          goto LABEL_12;
      }
    }
    v12 = &v10[-v9];
    if ( v10 == (_BYTE *)v9 )
    {
LABEL_12:
      if ( v9 )
      {
        a1[2] = 0;
        qfree(v9, v5, v6, v7, v12);
        a1[1] = 0;
        v8 = a1[2];
        a1[3] = 0;
      }
    }
    else
    {
      v13 = v12 + 1;
      if ( v8 < (unsigned __int64)(v12 + 1) )
      {
        if ( a1[3] < (unsigned __int64)v13 )
        {
          v15 = qvector_reserve(a1 + 1, v9, v12 + 1, 1);
          v8 = a1[2];
          v12 = &v10[-v9];
          a1[1] = v15;
          v9 = v15;
        }
        v16 = v12;
        memset((void *)(v9 + v8), 0, (size_t)&v13[-v8]);
        a1[2] = v13;
        v10 = &v16[a1[1]];
      }
      else if ( (_BYTE *)v8 != v12 + 1 )
      {
        a1[2] = v13;
      }
      *v10 = 0;
      v8 = a1[2];
    }
  }
  (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)a2 + 88LL))(a2, 0, v8 > 1);
  return (*(__int64 (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 88LL))(a2, 2, v8 > 1);
}
