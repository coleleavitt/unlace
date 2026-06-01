__int64 __fastcall sub_1CB5B10(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  int v4; // eax
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx

  result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( (_DWORD *)result != a2 )
  {
    v3 = result;
    v4 = *(_BYTE *)(result + 28) & 0x7F;
    if ( (unsigned int)(v4 - 35) > 3 )
    {
      if ( (unsigned int)(v4 - 40) > 6 )
      {
        v7 = a2[6];
        if ( (unsigned int)(v4 - 59) > 2 )
        {
          result = sub_B787D0(v3);
          if ( (_DWORD)result == 1 )
          {
            result = sub_B787F0(v3, 2, 0);
            *(_DWORD *)(v3 + 24) = v7;
          }
        }
        else
        {
          result = sub_B97260(v3);
          if ( (_DWORD)result == 1 )
          {
            result = sub_B972B0(v3, 2);
            *(_DWORD *)(v3 + 24) = v7;
          }
        }
      }
      else
      {
        v6 = a2[6];
        result = sub_B740B0(v3);
        if ( (_DWORD)result == 1 )
        {
          result = sub_B74430(v3, 2, 0);
          *(_DWORD *)(v3 + 24) = v6;
        }
      }
    }
    else
    {
      v5 = a2[6];
      result = sub_B77D20(v3);
      if ( (_DWORD)result == 1 )
      {
        result = sub_B77E40(v3, 2, 0);
        *(_DWORD *)(v3 + 24) = v5;
      }
    }
  }
  return result;
}
