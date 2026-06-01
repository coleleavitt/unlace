__int64 __fastcall sub_629DA0(__int64 a1, const char *a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r12

  v2 = strcasecmp(*(const char **)a1, a2);
  result = 1;
  if ( v2 )
  {
    v4 = *(int *)(a1 + 16);
    if ( (int)v4 <= 0 )
    {
      return 0;
    }
    else
    {
      v5 = *(_QWORD **)(a1 + 24);
      v6 = &v5[v4];
      do
      {
        result = sub_629DA0(*v5, a2);
        if ( (_BYTE)result )
          break;
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
  return result;
}

