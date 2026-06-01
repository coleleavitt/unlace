__int64 __fastcall sub_5E0710(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 result; // rax
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rsi
  int v9; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v3 = sub_728190(&v9, a1, a3, 0, 2);
  result = 3;
  if ( v3 )
  {
    v5 = v9;
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

