int *__fastcall sub_630670(
        __int64 *a1,
        __int64 a2,
        char *a3,
        char *a4,
        char *a5,
        char *a6,
        char *a7,
        unsigned __int8 *a8,
        __int64 *a9,
        char a10)
{
  char *v12; // rbp
  char *v13; // rbx
  char *v14; // r12
  int v15; // r10d
  __int64 v16; // rax
  _BOOL8 v17; // r11
  int v18; // ecx
  __int64 v20; // [rsp+0h] [rbp-48h]
  char v21; // [rsp+8h] [rbp-40h]
  char v22; // [rsp+Ch] [rbp-3Ch]

  v12 = a6;
  v13 = a5;
  v14 = a7;
  if ( !a6 )
    v12 = (char *)byte_238D51C;
  if ( !a5 )
    v13 = (char *)byte_238D51C;
  if ( !a7 )
    v14 = (char *)byte_238D51C;
  v15 = 0;
  if ( a8 )
    v15 = *a8;
  if ( a9 )
  {
    if ( a10 )
    {
      v16 = *a9;
      v18 = *a9;
      v17 = v18 != *a9;
    }
    else
    {
      v16 = *(unsigned int *)a9;
      v17 = 0;
      v18 = *(_DWORD *)a9;
    }
  }
  else
  {
    v18 = 0;
    v17 = 0;
    v16 = 0;
  }
  v22 = v17;
  v20 = v16;
  v21 = v15;
  sub_62CE40(*a1, 142, a2, v18, a3, a4, v13, v12, v14, v15, v16, v17);
  return sub_62E580(a2, a3, a4, v13, v12, v14, v21, v20, v22);
}

