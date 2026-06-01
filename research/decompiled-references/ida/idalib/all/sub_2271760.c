__int64 __fastcall sub_2271760(__int64 a1, char *a2, _DWORD *a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r10
  char *v8; // r11
  char v9; // al
  _BYTE *v10; // rax
  int v11; // ecx
  char v12; // al
  char *v13; // rax
  __int64 v14; // rcx
  char v15; // dl
  _BYTE *v17; // rdi
  char *v18; // rdx
  char v19; // cl
  char *v20; // rdx
  _QWORD v21[3]; // [rsp+0h] [rbp-58h] BYREF
  void *v22; // [rsp+18h] [rbp-40h]
  __int64 v23; // [rsp+20h] [rbp-38h]
  _BYTE v24[48]; // [rsp+28h] [rbp-30h] BYREF

  v6 = a1;
  v8 = *(char **)(a1 + 40);
  if ( v8 == *(char **)(a1 + 48) || (v9 = *v8, ((*v8 - 43) & 0xFD) != 0) )
  {
    v9 = 32;
  }
  else
  {
    ++*(_DWORD *)(a1 + 60);
    *(_QWORD *)(a1 + 40) = v8 + 1;
  }
  *a2 = v9;
  v10 = *(_BYTE **)(a1 + 40);
  if ( v10 == *(_BYTE **)(a1 + 48)
    || (v11 = (char)*v10, a5 = (unsigned int)(v11 - 49), (unsigned __int8)(*v10 - 49) > 8u) )
  {
    *a3 = 0;
    v12 = *a2;
    if ( *a2 != 32 )
      goto LABEL_7;
  }
  else
  {
    ++*(_DWORD *)(a1 + 60);
    *(_QWORD *)(a1 + 40) = v10 + 1;
    *a3 = v11 - 48;
    v12 = *a2;
    if ( *a2 != 32 )
      goto LABEL_7;
  }
  v18 = *(char **)(a1 + 40);
  if ( v18 != *(char **)(a1 + 48) )
  {
    v19 = *v18;
    if ( ((*v18 - 43) & 0xFD) == 0 )
    {
      ++*(_DWORD *)(a1 + 60);
      v12 = v19;
      *(_QWORD *)(a1 + 40) = v18 + 1;
    }
  }
  *a2 = v12;
LABEL_7:
  v13 = *(char **)(a1 + 40);
  v14 = *(_QWORD *)(a1 + 48);
  if ( v13 == (char *)v14 )
  {
LABEL_23:
    *(_QWORD *)(a1 + 40) = v13;
    goto LABEL_24;
  }
  if ( *v13 == 9 || *v13 == 32 )
  {
    while ( (char *)v14 != ++v13 )
    {
      while ( *v13 != 32 )
      {
        if ( *v13 != 9 )
          goto LABEL_10;
        if ( (char *)v14 == ++v13 )
          goto LABEL_23;
      }
    }
    goto LABEL_23;
  }
LABEL_10:
  *(_QWORD *)(a1 + 40) = v13;
  v15 = *v13;
  if ( *v13 == 35 )
  {
    while ( 1 )
    {
      v13 = sub_226DF60(v6, v13);
      if ( v13 == *(char **)(v6 + 40) )
        break;
      ++*(_DWORD *)(v6 + 60);
      *(_QWORD *)(v6 + 40) = v13;
    }
    v14 = *(_QWORD *)(v6 + 48);
    if ( (char *)v14 != v13 )
    {
      v15 = *v13;
      if ( *v13 != 13 )
        goto LABEL_12;
      goto LABEL_31;
    }
LABEL_24:
    v24[0] = 0;
    v23 = 0;
    v22 = v24;
    LODWORD(v21[0]) = 19;
    v21[1] = v8;
    v21[2] = v13 - v8;
    sub_2270C60((__int64 *)(v6 + 80), (unsigned __int64 *)(v6 + 176), (int *)v21, v14, a5, a6);
    v17 = v22;
    *a4 = 1;
    if ( v17 != v24 )
      operator delete(v17);
    return 1;
  }
  if ( v15 != 13 )
  {
LABEL_12:
    if ( v15 != 10 )
    {
LABEL_13:
      LOWORD(v23) = 259;
      v21[0] = "Expected a line break after block scalar header";
      sub_226E270(v6, (__int64)v21, v13);
      return 0;
    }
    v20 = v13 + 1;
    goto LABEL_34;
  }
LABEL_31:
  v20 = v13 + 1;
  if ( v13 + 1 != (char *)v14 )
  {
    if ( v13[1] == 10 )
      v20 = v13 + 2;
LABEL_34:
    if ( v20 == v13 )
      goto LABEL_13;
    goto LABEL_35;
  }
  v20 = (char *)v14;
LABEL_35:
  ++*(_DWORD *)(v6 + 64);
  *(_DWORD *)(v6 + 60) = 0;
  *(_QWORD *)(v6 + 40) = v20;
  return 1;
}
