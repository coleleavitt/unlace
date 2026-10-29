__int64 __fastcall sub_8F2230(__int64 a1, char a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v8; // rsi
  unsigned __int8 **v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  char v13; // [rsp+8h] [rbp-30h]

  result = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v6 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a4;
    v8 = (unsigned int)sub_A1A260(*(_QWORD *)(a1 + 584), v6);
    result = 0;
    if ( !a2 )
    {
      v9 = (unsigned __int8 **)sub_A2E050(a1 + 384, v8, 2215, 0);
      v10 = (__int64 *)v9;
      if ( v9 )
      {
        sub_8D6E40(v9, 0);
        v11 = sub_A1A2D0(*(_QWORD *)(a1 + 584), v6);
        v13 = 1;
        v12 = v11;
        sub_839C90(v10, &v12);
      }
      else
      {
        sub_A1A2D0(*(_QWORD *)(a1 + 584), v6);
      }
      return a3 ^ 1u;
    }
  }
  return result;
}

