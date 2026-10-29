char __fastcall sub_5380(int *a1, int *a2)
{
  char result; // al
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  __int64 v6; // r12
  __int64 v7; // rbp
  int v8; // edx
  int v9; // r13d
  char *v10; // rax
  int v11; // edx

  result = *((_BYTE *)a1 + 88);
  if ( !result && !*((_BYTE *)a2 + 88) )
  {
    v3 = *a1;
    v4 = *a2;
    if ( *a1 != *a2 || (v3 = a1[1], v4 = a2[1], v3 != v4) || (v3 = a1[2], v4 = a2[2], v3 != v4) )
    {
      v5 = v3 - v4;
      return v5 > 0;
    }
    v6 = *((_QWORD *)a1 + 3);
    v7 = *((_QWORD *)a2 + 3);
    if ( v6 )
    {
      v10 = strchr(*((const char **)a1 + 2), 100);
      if ( !v7 )
      {
        v8 = 0;
        v9 = 1;
        if ( !v10 )
        {
          v5 = v6 - 1;
          return v5 > 0;
        }
        goto LABEL_16;
      }
      v9 = v10 != nullptr;
      v8 = strchr(*((const char **)a2 + 2), 100) != nullptr;
      if ( v8 != v9 )
      {
LABEL_16:
        v5 = v8 - v9;
        return v5 > 0;
      }
      v11 = v6 - 1;
LABEL_18:
      v5 = v11 - (v7 - 1);
      return v5 > 0;
    }
    if ( v7 )
    {
      if ( strchr(*((const char **)a2 + 2), 100) )
      {
        v8 = 1;
        v9 = 0;
        goto LABEL_16;
      }
      v11 = 0;
      goto LABEL_18;
    }
  }
  return result;
}

