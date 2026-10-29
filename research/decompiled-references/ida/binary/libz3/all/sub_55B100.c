_QWORD *__fastcall sub_55B100(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  _QWORD *result; // rax
  int v6; // edx
  _QWORD *v7; // [rsp+0h] [rbp-20h]

  if ( a1 != *(_QWORD *)(a2 + 8) )
    return nullptr;
  v4 = sub_4D6490(*(_QWORD *)(a1 + 24));
  if ( a3 )
  {
    ++*(_DWORD *)(a3 + 8);
    result = (_QWORD *)sub_186B270(0x18u);
    v6 = *(_DWORD *)(a3 + 8);
    result[1] = a3;
    *result = &off_1C50D90;
    result[2] = v4;
    if ( !v6 )
    {
      v7 = result;
      sub_15D7BC0(v4, a3);
      return v7;
    }
  }
  else
  {
    result = (_QWORD *)sub_186B270(0x18u);
    *result = &off_1C50D90;
    result[1] = 0;
    result[2] = v4;
  }
  return result;
}

