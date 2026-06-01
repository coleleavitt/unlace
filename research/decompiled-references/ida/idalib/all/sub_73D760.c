__int64 __fastcall sub_73D760(__int64 a1, __int64 a2, int a3, char a4)
{
  char **v5; // r12
  __int64 v7; // rbx
  __int64 v8; // rdx
  char *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v13; // r8

  if ( !*(_QWORD *)(a1 + 48) )
    return 0;
  v5 = (char **)a2;
  v7 = a1;
  if ( *(_DWORD *)(a1 + 1612)
    || (v8 = *(_QWORD *)(a1 + 4232), a1 += 48, a2 = 4, (unsigned __int8)sub_7465B0(a1, 4, v8, 0, 0)) )
  {
    v9 = *v5;
    v10 = *(unsigned __int16 *)&(*v5)[6 * a3 + 10];
    if ( (unsigned __int16)v10 > 1u )
    {
      a1 = *((unsigned int *)v9 - 2);
      a2 = (unsigned __int16)v10;
      if ( (unsigned __int16)v10 >= (unsigned int)a1 )
        goto LABEL_13;
      v10 += (unsigned __int64)v9;
      v13 = *(unsigned __int16 *)v10;
      a2 = v13;
      if ( (int)v10 + (int)v13 + 3 - (int)v9 >= (unsigned int)a1 )
        goto LABEL_13;
      a2 = v10 + *(unsigned __int16 *)(v10 + v13 + 2) + (int)v13 + 4 - 1 - (_QWORD)v9;
      if ( (unsigned int)a2 >= (unsigned int)a1 )
        goto LABEL_13;
    }
    else
    {
      v10 = (unsigned __int64)v5[v10 + 2];
      if ( !v10 )
        goto LABEL_13;
    }
    if ( *(_DWORD *)v9 )
      return sub_7467A0(v7 + 48);
    a2 = *(unsigned __int16 *)&(*v5)[6 * a3 + 6];
    v11 = *(_DWORD *)(v7 + 4240);
    if ( a4 )
    {
      if ( v11 >= (unsigned int)a2 )
        return sub_7467A0(v7 + 48);
    }
    else if ( (unsigned int)a2 >= v11 )
    {
      return sub_7467A0(v7 + 48);
    }
LABEL_13:
    sub_743130(a1, a2, v10);
  }
  return 0;
}
