__int64 __fastcall sub_868840(unsigned int *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r9
  int v7; // ebp
  int v8; // ebx
  char *v9; // rax
  __int64 v11; // r9
  int v12; // r8d
  int v13; // edx
  char v14; // si
  char *v15; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // eax
  char *v19; // rax
  __int64 v20; // [rsp+8h] [rbp-30h]

  v5 = a3;
  v7 = a4;
  v8 = a2;
  if ( a2 == 1 && a4 == 127 )
  {
    if ( (unsigned __int64)(a5 + 128) <= 0xFF )
    {
LABEL_4:
      v5 = 0;
      goto LABEL_5;
    }
    if ( a1[36] )
    {
      v14 = 0;
      goto LABEL_13;
    }
    v14 = 72;
    if ( !((unsigned __int64)(a5 + 0x80000000LL) >> 32) )
    {
LABEL_13:
      if ( !(unsigned int)sub_867BD0(a1, v14, 61, a5) )
        return 0;
      return *a1;
    }
    goto LABEL_23;
  }
  if ( a2 <= 126 )
  {
    if ( a4 == 127 )
    {
      if ( !((unsigned __int64)(a5 + 0x80000000LL) >> 32) || a1[36] )
        goto LABEL_4;
LABEL_23:
      if ( (unsigned int)sub_867C50(a1, 16, a5) )
        return *a1;
      v5 = 0;
      v16 = v8;
      v17 = 16;
      goto LABEL_34;
    }
    v11 = a5;
    v12 = a4;
    v13 = a2;
LABEL_20:
    v15 = sub_867CC0((__int64)a1, 1u, v13, 0, v12, v11);
    if ( v15 )
    {
      *v15 = 59;
      return 0;
    }
    return *a1;
  }
  if ( a4 <= 126 && a2 != 127 )
  {
LABEL_33:
    v16 = v8;
    v17 = v7;
LABEL_34:
    v19 = sub_867CC0((__int64)a1, 1u, v17, 0, v16, v5);
    if ( v19 )
    {
      *v19 = 57;
      return 0;
    }
    return *a1;
  }
  if ( a4 != 127 )
  {
    if ( (unsigned int)sub_868510(a1, 15, 0, a2, a3) )
      return *a1;
    v11 = a5;
    v12 = v7;
    v13 = 15;
    goto LABEL_20;
  }
  if ( a2 == 127 )
  {
    if ( (unsigned int)sub_868510(a1, 15, 0, 127, a3) )
      return *a1;
    v5 = 0;
    v8 = 15;
    if ( !((unsigned __int64)(a5 + 0x80000000LL) >> 32) )
      goto LABEL_5;
    v7 = 16;
    if ( a1[36] )
      goto LABEL_5;
    goto LABEL_32;
  }
  if ( (unsigned __int64)(a5 + 0x80000000LL) >> 32 && !a1[36] )
  {
    v7 = 15;
LABEL_32:
    v20 = v5;
    v18 = sub_867C50(a1, v7, a5);
    v5 = v20;
    if ( v18 )
      return *a1;
    goto LABEL_33;
  }
LABEL_5:
  v9 = sub_867CC0((__int64)a1, 0x11u, 127, a5, v8, v5);
  if ( v9 )
  {
    v9[1] |= 0x38u;
    return 0;
  }
  return *a1;
}
