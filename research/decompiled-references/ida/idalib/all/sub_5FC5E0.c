__int64 __fastcall sub_5FC5E0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 result; // rax
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rsi
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v9[1] = __readfsqword(0x28u);
  v3 = sub_748330(v9, a1, a3, 0, 2, 0);
  result = 3;
  if ( v3 )
  {
    v5 = v9[0];
    getinf(3);
    v6 = getinf(3);
    if ( v5 == 2 )
    {
      v7 = v6 | 0x400;
    }
    else
    {
      v7 = v6 & 0xFFFFFBFF;
      if ( v5 == 1 )
      {
        v8 = v6 & 0xFFFFF9FF | 0x200;
LABEL_5:
        setinf(3, v8);
        return 0;
      }
    }
    v8 = v7 & 0xFFFFFDFF;
    goto LABEL_5;
  }
  return result;
}
