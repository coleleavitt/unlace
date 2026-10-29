/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492B4
// Address: 0x000492B4

//----- (000492B4) --------------------------------------------------------
void *__fastcall sub_492B4(_DWORD *a1, int a2, const char **a3, unsigned __int8 **a4)
{
  unsigned int v8; // r6
  unsigned __int8 *v9; // r11
  unsigned int v10; // r1
  int v11; // r0
  void *result; // r0
  int v13; // r0
  int v14; // r0
  const char *v15; // r2
  const char *v16; // r3
  const char *v17; // r1
  void *ptr; // [sp+8h] [bp-14h] BYREF
  int v19; // [sp+Ch] [bp-10h]
  int v20; // [sp+10h] [bp-Ch]

  v8 = *(_DWORD *)(a2 + 28);
  v9 = *a4;
  if ( !v8 )
  {
LABEL_7:
    v13 = a1[1];
    ptr = nullptr;
    v19 = 0;
    v20 = 0;
    v14 = sub_3F190(v13, v8);
    if ( *(_DWORD *)(v14 + 36) )
    {
      v15 = *(const char **)(v14 + 32);
      if ( a3[1] )
      {
LABEL_9:
        v16 = *a3;
LABEL_10:
        sub_1873C((int)&ptr, "%s.%s", v15, v16);
        if ( v19 )
          v17 = (const char *)ptr;
        else
          v17 = (const char *)&dword_8DA5C;
        sub_70A98(0, v17);
        sub_70A2C(1538);
        sub_4918C(a1);
        result = ptr;
        if ( ptr )
        {
          v19 = 0;
          sub_77E08(ptr);
          return nullptr;
        }
        return result;
      }
    }
    else
    {
      v15 = (const char *)&dword_8DA5C;
      if ( a3[1] )
        goto LABEL_9;
    }
    v16 = (const char *)&dword_8DA5C;
    goto LABEL_10;
  }
  v10 = *(_DWORD *)(a2 + 28);
  while ( 1 )
  {
    v11 = sub_3F190(a1[1], v10);
    if ( *(_DWORD *)(v11 + 44) != -1 )
      break;
    v10 = *(_DWORD *)(v11 + 24);
    if ( !v10 )
      goto LABEL_7;
  }
  *a4 = nullptr;
  return (void *)sub_489FC((int)a1, a2, *(_DWORD *)(v11 + 44), (int)a3, v9, 1);
}
// 8DA5C: using guessed type int dword_8DA5C;
