unsigned __int64 __fastcall sub_314F30(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int8 v5; // dl
  unsigned __int64 result; // rax
  int v7; // ebp
  unsigned __int64 *v8; // rbx
  const char *v9; // r15
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  const char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v5 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 5 )
  {
    v8 = (unsigned __int64 *)(a1 + 48);
    v9 = "stkvar";
    v7 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
LABEL_7:
    v10 = v8[1];
    v11 = v7 + *(_DWORD *)(a2 + 4);
    if ( v10 < v11 )
    {
      if ( a3 == 2 )
        return 0;
      v12 = *v8;
      v17 = -1;
      v13 = v8[2];
      if ( (unsigned __int64)&v17 < v12 || (unsigned __int64)&v17 >= v12 + v13 )
      {
        if ( v13 >= v11 || (v15 = qvector_reserve(v8, v12, v11, 1), v10 = v8[1], *v8 = v15, v12 = v15, v10 < v11) )
        {
          while ( 1 )
          {
            *(_BYTE *)(v12 + v10++) = -1;
            if ( v11 == v10 )
              break;
            v12 = *v8;
          }
        }
      }
      else if ( v13 >= v11 || (v16 = qvector_reserve(v8, v12, v11, 1), v10 = v8[1], *v8 = v16, v12 = v16, v10 < v11) )
      {
        while ( 1 )
        {
          *(_BYTE *)(v12 + v10++) = -1;
          if ( v11 == v10 )
            break;
          v12 = *v8;
        }
      }
      v8[1] = v11;
      if ( !a3 )
      {
        v14 = sub_1AE3A0(a2);
        sub_68EA0((__int64)"reading undefined %s %s\n", v9, v14);
      }
    }
    return *v8 + v7;
  }
  if ( v5 <= 5u )
  {
    if ( v5 == 1 )
    {
      v7 = *(_DWORD *)(a2 + 8);
      v8 = (unsigned __int64 *)(a1 + 24);
      v9 = "register";
      goto LABEL_7;
    }
    goto LABEL_19;
  }
  result = 0;
  if ( v5 != 6 )
  {
    if ( v5 == 9 )
    {
      if ( !under_debugger )
        sub_37E160(52871);
      BUG();
    }
LABEL_19:
    v7 = 0;
    v9 = nullptr;
    v8 = nullptr;
    goto LABEL_7;
  }
  return result;
}
