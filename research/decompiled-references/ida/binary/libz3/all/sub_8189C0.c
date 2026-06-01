__int64 __fastcall sub_8189C0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  char *v3; // rax
  unsigned int v4; // esi

  result = *a2;
  if ( !*(_WORD *)(*a2 + 4) )
  {
    result = *(_QWORD *)(*(_QWORD *)(result + 16) + 24LL);
    if ( result )
    {
      if ( *(_DWORD *)result == *(_DWORD *)(a1 + 112) )
      {
        result = *(unsigned int *)(result + 4);
        if ( !(_DWORD)result )
        {
          v3 = (char *)(a2[22] + 88);
          if ( *(int *)v3 >> 8 == -1 )
          {
LABEL_12:
            v4 = -1;
          }
          else
          {
            while ( *(_DWORD *)(a1 + 12) != *v3 )
            {
              v3 = *((char **)v3 + 1);
              if ( !v3 )
                goto LABEL_12;
            }
            v4 = *(int *)v3 >> 8;
          }
          return sub_818860((_QWORD *)a1, v4);
        }
      }
    }
  }
  return result;
}

