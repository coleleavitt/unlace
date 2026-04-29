__int64 __fastcall sub_844A0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebp
  char v4; // dl
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r13

  v3 = a3;
  v4 = sub_84430(a1, a2, a3);
  result = v5;
  if ( !v4 )
  {
    v7 = *(_QWORD *)(v5 + 112);
    if ( (int)v7 <= 0 )
    {
      return 0;
    }
    else
    {
      v8 = *(_QWORD **)(v5 + 104);
      v9 = (__int64)&v8[(unsigned int)(v7 - 1) + 1];
      do
      {
        result = sub_844A0(*v8, a2, v3);
        if ( result )
          break;
        ++v8;
      }
      while ( v8 != (_QWORD *)v9 );
    }
  }
  return result;
}
