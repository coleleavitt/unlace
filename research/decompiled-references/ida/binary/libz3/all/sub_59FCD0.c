__int64 __fastcall sub_59FCD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = 0;
  if ( a1 == *(_QWORD *)(a3 + 8) )
  {
    if ( a1 == *(_QWORD *)(a2 + 8) && (!a4 || a1 == *(_QWORD *)(a4 + 8)) )
    {
      result = sub_186B270(0x50u);
      *(_QWORD *)result = &off_1C52210;
      *(_OWORD *)(result + 16) = 0;
      *(_BYTE *)(result + 8) = a4 != 0;
      *(_OWORD *)(result + 32) = 0;
      *(_OWORD *)(result + 48) = 0;
      *(_OWORD *)(result + 64) = 0;
    }
    else
    {
      v5 = *(_QWORD *)(a3 + 64);
      if ( !v5 || (result = 0, !*(_DWORD *)(v5 - 4)) )
      {
        result = sub_186B270(0x10u);
        *(_QWORD *)result = &off_1C52238;
        *(_QWORD *)(result + 8) = 0;
      }
    }
  }
  return result;
}

