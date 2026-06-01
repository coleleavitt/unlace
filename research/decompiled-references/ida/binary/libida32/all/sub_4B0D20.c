__int64 __fastcall sub_4B0D20(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v5; // r8
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  if ( a5 != -1 )
  {
    v5 = *a4 + (a5 << 7);
    v7[0] = 0;
    if ( *(_QWORD *)(v5 + 72) )
    {
      *(_QWORD *)(a1 + 16) = sub_69E150(v5 + 72, v5 + 64);
    }
    else if ( (unsigned __int8)sub_5F2E00(*(_QWORD *)(a1 + 8), 0, v7, 0, v5 + 64, 0) )
    {
      *(_QWORD *)(a1 + 16) = v7[0];
    }
  }
  return 0;
}

