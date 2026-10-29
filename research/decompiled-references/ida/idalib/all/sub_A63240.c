char __fastcall sub_A63240(_QWORD *a1, unsigned __int8 a2, unsigned int a3, unsigned int a4, _QWORD *a5, _QWORD *a6)
{
  unsigned __int8 *v6; // r10
  unsigned int v7; // ebx
  unsigned int v8; // r11d
  char result; // al
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rdx

  v6 = (unsigned __int8 *)a1[2181];
  v7 = v6[14];
  v8 = v6[12];
  if ( a3 )
  {
    if ( ((a3 <= 8) & a2 & (a4 <= 7)) != 0 )
    {
      v8 = 8;
      *a5 = a1[2338];
      result = 0;
      goto LABEL_8;
    }
    result = a2 & (a4 < v8 && a3 <= v8);
    if ( result )
    {
      *a5 = a1[2339];
      result = 0;
      goto LABEL_8;
    }
    if ( a4 >= v7 || a3 > v7 )
    {
      v8 = v6[30];
      if ( v8 < a3 || v8 <= a4 )
      {
        v8 = v6[32];
        result = a3 > v8 || a4 >= v8;
        *a5 = a1[2342];
      }
      else
      {
        *a5 = a1[2341];
      }
LABEL_8:
      if ( v8 > v7 )
      {
        *a6 = *a5;
        return result;
      }
      goto LABEL_19;
    }
    *a5 = a1[2340];
LABEL_19:
    *a6 = a1[2340];
    return result;
  }
  result = a2 & (a4 <= 8);
  if ( result )
  {
    *a5 = a1[2344];
    *a6 = a1[2340];
    return 0;
  }
  if ( (a2 & (a4 <= v8)) != 0 )
  {
    *a5 = a1[2345];
    goto LABEL_19;
  }
  if ( a4 <= v7 )
  {
    *a5 = a1[2346];
    if ( a4 == v7 || (*(_BYTE *)(a1[290] + 1LL) & 8) == 0 )
      v10 = a1[2346];
    else
      v10 = a1[2340];
LABEL_17:
    *a6 = v10;
    return 0;
  }
  v11 = v6[30];
  if ( a4 <= v11 )
  {
    *a5 = a1[2347];
    if ( a4 == v11 || (*(_BYTE *)(a1[290] + 1LL) & 8) == 0 )
      v10 = a1[2347];
    else
      v10 = a1[2341];
    goto LABEL_17;
  }
  v12 = v6[32];
  *a5 = a1[2348];
  result = a4 > v12;
  if ( a4 == v12 || (*(_BYTE *)(a1[290] + 1LL) & 8) == 0 )
    v13 = a1[2348];
  else
    v13 = a1[2342];
  *a6 = v13;
  return result;
}
