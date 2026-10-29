__int64 __fastcall sub_7CB8B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi

  v3 = *(_QWORD *)(a1 + 2272);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 440LL))(v3);
  v4 = (char *)(a2 + 88);
  result = (unsigned int)(*(int *)(a2 + 88) >> 8);
  if ( (_DWORD)result != -1 )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 2400);
      result = (unsigned int)*v4;
      if ( v6 )
      {
        if ( (unsigned int)result < *(_DWORD *)(v6 - 4) )
        {
          v7 = *(_QWORD *)(v6 + 8 * result);
          if ( v7 )
          {
            if ( *(_QWORD *)(a1 + 2272) != v7 )
              result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 440LL))(v7, a2);
          }
        }
      }
      v4 = *((char **)v4 + 1);
    }
    while ( v4 );
  }
  return result;
}

