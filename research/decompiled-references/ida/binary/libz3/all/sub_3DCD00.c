__int64 __fastcall sub_3DCD00(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  unsigned __int64 v3; // r12
  _DWORD *v4; // rbp

  v1 = *(_QWORD **)a1;
  result = *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD *)a1 + 8 * result;
  if ( *(_QWORD *)a1 < v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = (_DWORD *)*v1;
        if ( *v1 )
        {
          if ( v4[8]-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v1 >= v3 )
          goto LABEL_7;
      }
      ++v1;
      sub_ED44E0(v4);
      result = sub_186B220(v4);
    }
    while ( (unsigned __int64)v1 < v3 );
LABEL_7:
    v1 = *(_QWORD **)a1;
  }
  if ( v1 != (_QWORD *)(a1 + 16) )
  {
    if ( v1 )
      return sub_186B220(v1);
  }
  return result;
}

