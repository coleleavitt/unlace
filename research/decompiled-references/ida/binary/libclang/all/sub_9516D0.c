__int64 __fastcall sub_9516D0(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int8 **v10; // rax
  unsigned __int8 **v11; // rbx
  unsigned __int8 *v12; // rax
  _BYTE *v13; // rdx
  __int64 v14; // rax
  __int64 v15[4]; // [rsp+8h] [rbp-20h] BYREF

  result = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v6 = *(_QWORD *)(a1 + 792);
    v7 = a1 + 384;
    *(_QWORD *)(a1 + 800) = *a4;
    if ( a3 )
    {
      v8 = sub_A16CE0(*(_QWORD *)(a1 + 584), v6);
      v9 = *(_QWORD *)(a2 + 16);
      v15[0] = v8;
      v10 = (unsigned __int8 **)sub_A2E0C0(v7, v15, 2299, 1);
      v11 = v10;
      if ( v10 )
      {
        v12 = *v10;
        if ( !v12 )
        {
          v12 = (unsigned __int8 *)sub_779BF0((__int64)v11[1]);
          *v11 = v12;
        }
        v12[*v12 + 1] = 10;
        v13 = *v11;
        v14 = **v11;
        *v13 = v14 + 1;
        *(_QWORD *)&v13[8 * v14 + 16] = v9;
      }
      sub_A2DD70(v7, *(unsigned int *)(v9 + 24), 105);
      return 0;
    }
    else
    {
      return sub_9F09D0(a1 + 384, v6, a2);
    }
  }
  return result;
}

