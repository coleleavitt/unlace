__int64 __fastcall sub_995EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v8; // r13
  _QWORD *v10; // r12
  _QWORD *v11; // rdx

  result = a2 - 1;
  v6 = a2;
  v8 = (a2 - 1) / 2;
  if ( a2 > a3 )
  {
    while ( 1 )
    {
      v10 = (_QWORD *)(a1 + 8 * v8);
      result = sub_9A2060(a5, a4, *v10);
      v11 = (_QWORD *)(a1 + 8 * v6);
      if ( !(_BYTE)result )
        break;
      v6 = v8;
      *v11 = *v10;
      result = (v8 - 1) / 2;
      if ( a3 >= v8 )
      {
        v11 = (_QWORD *)(a1 + 8 * v8);
        break;
      }
      v8 = (v8 - 1) / 2;
    }
  }
  else
  {
    v11 = (_QWORD *)(a1 + 8 * a2);
  }
  *v11 = a4;
  return result;
}

