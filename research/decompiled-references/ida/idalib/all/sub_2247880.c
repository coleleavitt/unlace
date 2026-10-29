__int64 __fastcall sub_2247880(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // r10
  char *v5; // rcx
  unsigned __int64 v6; // r8
  char *v7; // r9
  char *v8; // r11
  __int64 v9; // rax
  int v10; // eax
  signed __int64 v11; // rdx

  if ( !a2 )
    a2 = sub_2246170((char **)a1);
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
    return 1;
  v5 = *(char **)a1;
  v6 = 0;
  *a3 = 0;
  v7 = &v5[v4];
  v8 = &v5[v4];
  while ( 1 )
  {
    v10 = *v5;
    v11 = v7 - v5;
    if ( *v5 > 47 )
    {
      if ( (char)v10 <= 57 )
      {
        v9 = (unsigned int)(v10 - 48);
        goto LABEL_7;
      }
      if ( (char)v10 > 96 )
        break;
    }
    if ( (unsigned __int8)(v10 - 65) > 0x19u )
      goto LABEL_16;
    v9 = (unsigned int)(v10 - 55);
LABEL_7:
    if ( a2 <= (unsigned int)v9 )
      goto LABEL_16;
    *a3 = v9 + v6 * a2;
    if ( (v9 + v6 * a2) / a2 < v6 )
      return 1;
    if ( v7 == ++v5 )
    {
      v11 = 0;
      goto LABEL_21;
    }
    v6 = v9 + v6 * a2;
  }
  if ( (char)v10 <= 122 )
  {
    v9 = (unsigned int)(v10 - 87);
    goto LABEL_7;
  }
LABEL_16:
  if ( v4 == v11 )
    return 1;
  v8 = v5;
LABEL_21:
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v11;
  return 0;
}
