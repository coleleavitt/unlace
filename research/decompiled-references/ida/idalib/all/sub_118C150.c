__int64 __fastcall sub_118C150(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  const char **v7; // rax
  const char *v8; // r13
  size_t v9; // rax
  size_t v10; // rdx
  size_t v11; // rax
  size_t v12; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v13[15]; // [rsp+10h] [rbp-78h] BYREF

  v4 = sub_113FA70(a2, 0x817u, 0x816u, 2049);
  *a3 = v4;
  if ( !v4 || (unsigned __int8)sub_21B9810(v4, 2049) )
    return 0;
  v5 = 1;
  if ( (unsigned __int8)sub_21B9810(*a3, 2071) )
    return v5;
  v7 = *(const char ***)(*a3 + 48);
  v8 = *v7;
  if ( !*v7 )
  {
    if ( j__strlen("single") )
      goto LABEL_13;
    return 2;
  }
  v9 = j__strlen(*v7);
  if ( v9 != 5 )
  {
    v12 = v9;
    v11 = j__strlen("single");
    v10 = v12;
    if ( v12 != v11 )
      goto LABEL_13;
    if ( v12 )
    {
LABEL_10:
      v5 = 2;
      if ( !memcmp(v8, "single", v10) )
        return v5;
      goto LABEL_13;
    }
    return 2;
  }
  if ( *(_DWORD *)v8 != 1768714355 || v8[4] != 116 )
  {
    v10 = j__strlen("single");
    if ( v10 == 5 )
      goto LABEL_10;
LABEL_13:
    sub_FC70B0((__int64)v13, *a1, 0, 497);
    sub_AEC220(v13, *(_BYTE **)(*a3 + 24), *(_QWORD *)(*a3 + 32));
    sub_1188FA0(v13, **(_QWORD **)(*a3 + 48));
    sub_AEA040((__int64)v13);
    return 0;
  }
  return v5;
}
