__int64 __fastcall sub_208C2D0(_QWORD *a1, _BYTE *a2, signed __int64 a3, __int64 a4)
{
  void *v4; // rax
  unsigned __int64 v8; // rcx
  void *v9; // rdi
  __int64 result; // rax
  _BYTE *v11; // r13
  unsigned __int64 v12; // rcx
  _BYTE *i; // rsi
  _BYTE *v14; // r8
  _BYTE *v15; // rsi
  _BYTE *v16; // r12
  _BYTE *v17; // rbp
  _BYTE *v18; // r12
  void *v19; // rax
  void *v20; // rax
  _BYTE v21[11]; // [rsp+25h] [rbp-53h] BYREF
  _BYTE v22[51]; // [rsp+45h] [rbp-33h] BYREF

  v4 = a1 + 2;
  *a1 = a1 + 2;
  if ( &a2[a3] && !a2 )
    goto LABEL_35;
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      goto LABEL_41;
    v4 = (void *)operator new(a3 + 1);
    a1[2] = a3;
    *a1 = v4;
LABEL_24:
    memcpy(v4, a2, a3);
    v4 = (void *)*a1;
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    *((_BYTE *)a1 + 16) = *a2;
    goto LABEL_6;
  }
  if ( a3 )
    goto LABEL_24;
LABEL_6:
  a1[1] = a3;
  v8 = a4;
  v9 = a1 + 6;
  *((_BYTE *)v4 + a3) = 0;
  if ( a4 < 0 )
  {
    v12 = -a4;
    for ( i = v21; ; --i )
    {
      v14 = i - 1;
      result = (unsigned int)(v12 % 0xA) + 48;
      *(i - 1) = v12 % 0xA + 48;
      if ( v12 <= 9 )
        break;
      v12 /= 0xAu;
    }
    v15 = i - 2;
    *(v14 - 1) = 45;
    a1[4] = v9;
    if ( v15 )
    {
      v16 = (_BYTE *)(v21 - v15);
      if ( (unsigned __int64)(v21 - v15) > 0xF )
      {
        if ( (__int64)v16 < 0 )
          goto LABEL_41;
        v20 = (void *)operator new((unsigned __int64)(v16 + 1));
        a1[6] = v16;
        a1[4] = v20;
        v9 = v20;
      }
      else
      {
        if ( v16 == (_BYTE *)&dword_0 + 1 )
        {
          *((_BYTE *)a1 + 48) = 45;
LABEL_21:
          a1[5] = v16;
          v16[(_QWORD)v9] = 0;
          goto LABEL_11;
        }
        if ( !v16 )
          goto LABEL_21;
      }
      result = (__int64)memcpy(v9, v15, (size_t)v16);
      v9 = (void *)a1[4];
      goto LABEL_21;
    }
LABEL_35:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  if ( a4 )
  {
    v17 = v22;
    while ( 1 )
    {
      --v17;
      result = (unsigned int)(v8 % 0xA) + 48;
      *v17 = v8 % 0xA + 48;
      if ( v8 <= 9 )
        break;
      v8 /= 0xAu;
    }
    a1[4] = v9;
    v18 = (_BYTE *)(v22 - v17);
    v11 = (_BYTE *)(v22 - v17);
    if ( (unsigned __int64)(v22 - v17) <= 0xF )
    {
      if ( v18 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_9;
      if ( !v18 )
        goto LABEL_10;
LABEL_31:
      result = (__int64)memcpy(v9, v17, (size_t)v18);
      v9 = (void *)a1[4];
      goto LABEL_10;
    }
    if ( (__int64)v18 >= 0 )
    {
      v19 = (void *)operator new((unsigned __int64)(v18 + 1));
      a1[6] = v18;
      a1[4] = v19;
      v9 = v19;
      goto LABEL_31;
    }
LABEL_41:
    std::__throw_length_error("basic_string::_M_create");
  }
  a1[4] = v9;
  result = 48;
LABEL_9:
  *((_BYTE *)a1 + 48) = result;
  v9 = (void *)a1[4];
  v11 = (_BYTE *)(&dword_0 + 1);
LABEL_10:
  a1[5] = v11;
  v11[(_QWORD)v9] = 0;
LABEL_11:
  a1[8] = 0;
  a1[9] = 0;
  return result;
}
