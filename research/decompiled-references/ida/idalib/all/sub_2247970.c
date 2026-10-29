bool __fastcall sub_2247970(char *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v5; // edi
  __int64 v6; // r10
  char *v7; // rsi
  unsigned __int64 v8; // r9
  char *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  char *v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h]

  v13 = a1;
  v5 = a3;
  v14 = a2;
  if ( !a3 )
    v5 = sub_2246170(&v13);
  v6 = v14;
  if ( !v14 )
    return 1;
  v7 = v13;
  *a4 = 0;
  v8 = 0;
  v9 = &v7[v6];
  while ( 1 )
  {
    v11 = *v7;
    if ( *v7 > 47 )
    {
      if ( (char)v11 <= 57 )
      {
        v10 = (unsigned int)(v11 - 48);
        goto LABEL_7;
      }
      if ( (char)v11 > 96 )
        break;
    }
    if ( (unsigned __int8)(v11 - 65) > 0x19u )
      goto LABEL_16;
    v10 = (unsigned int)(v11 - 55);
LABEL_7:
    if ( v5 <= (unsigned int)v10 )
      goto LABEL_16;
    *a4 = v10 + v8 * v5;
    if ( (v10 + v8 * v5) / v5 < v8 )
      return 1;
    if ( v9 == ++v7 )
      return 0;
    v8 = v10 + v8 * v5;
  }
  if ( (char)v11 <= 122 )
  {
    v10 = (unsigned int)(v11 - 87);
    goto LABEL_7;
  }
LABEL_16:
  if ( v6 == v9 - v7 )
    return 1;
  return v9 != v7;
}
