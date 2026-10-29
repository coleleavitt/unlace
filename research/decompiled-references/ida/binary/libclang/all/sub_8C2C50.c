__int64 __fastcall sub_8C2C50(__int64 a1)
{
  __int16 v1; // dx
  __int64 result; // rax
  int v3; // eax
  unsigned int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r14

  v1 = *(_WORD *)a1 & 0x1FF;
  if ( v1 == 115 )
  {
    result = *(unsigned int *)(a1 + 28);
    if ( !(_DWORD)result )
    {
      result = *(unsigned int *)(a1 + 32);
      if ( (_DWORD)result )
        return sub_AC7460(*(_QWORD *)(a1 + 8LL * (unsigned int)(result - 1) + 48));
    }
  }
  else if ( !*(_DWORD *)(a1 + 24) || (result = *(unsigned int *)(a1 + 28), !(_DWORD)result) )
  {
    v3 = *(_DWORD *)(a1 + 32);
    v4 = *(_DWORD *)(a1 + 4);
    if ( v3 )
    {
      v5 = 8LL * (unsigned int)(v3 - 1);
      while ( 1 )
      {
        v6 = a1 + 48;
        if ( v1 != 115 )
          v6 = a1 + 40;
        v7 = *(_QWORD *)(v6 + v5);
        if ( !sub_8120D0(v7) )
        {
          result = sub_AC7460(v7);
          if ( (_DWORD)result )
            break;
        }
        v5 -= 8;
        if ( v5 == -8 )
          return v4;
        v1 = *(_WORD *)a1 & 0x1FF;
      }
    }
    else
    {
      return v4;
    }
  }
  return result;
}

