__int64 __fastcall sub_2288910(char *a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // cl
  __int64 result; // rax
  char v5; // si
  char *v6; // rbx
  size_t v7; // rax
  char v8; // al
  __int64 v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v9[0] = (__int64)a1;
  v9[1] = a2;
  if ( a3 <= 1 )
  {
    if ( a2 > 3 )
    {
      v3 = *a1;
      goto LABEL_4;
    }
LABEL_9:
    result = -1;
    if ( !a2 )
      return result;
    v3 = *(_BYTE *)v9[0];
    goto LABEL_13;
  }
  if ( a2 <= 2 )
    goto LABEL_9;
  if ( a1[1] == 58 )
  {
    v8 = a1[2];
    if ( v8 == 47 || v8 == 92 )
      return 2;
  }
  v3 = *a1;
  if ( a2 == 3 )
    goto LABEL_13;
LABEL_4:
  if ( v3 != 47 )
  {
    if ( a3 <= 1 || v3 != 92 )
      return -1;
    if ( a1[1] != 92 )
      return 0;
    v5 = a1[2];
    result = 0;
    if ( v5 == 47 )
      return result;
LABEL_20:
    if ( !a3 || v5 != 92 )
    {
      v6 = "/";
      if ( a3 )
        v6 = "\\/";
      goto LABEL_24;
    }
LABEL_13:
    result = 0;
    if ( v3 != 47 )
      return -(__int64)(a3 <= 1 || v3 != 92);
    return result;
  }
  if ( a1[1] != 47 )
    return 0;
  v5 = a1[2];
  result = 0;
  if ( v5 != 47 )
  {
    if ( a3 == 1 )
    {
      v6 = "/";
LABEL_24:
      v7 = j__strlen(v6);
      return sub_2246EC0(v9, (unsigned __int8 *)v6, v7, 2u);
    }
    goto LABEL_20;
  }
  return result;
}
