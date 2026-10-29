/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CFD40
// Address: 0x000CFD40

//----- (000CFD40) --------------------------------------------------------
int __fastcall sub_CFD40(char ***a1)
{
  char **v1; // edi
  unsigned int v2; // eax
  size_t v3; // edx
  char *v4; // eax
  char *v5; // ecx
  size_t v6; // eax
  char *v7; // eax
  char **v8; // edi
  char **v9; // esi
  char *v10; // edx
  unsigned int v11; // eax
  char *v12; // ecx
  char *v13; // eax
  size_t v14; // eax
  char **v16; // [esp+8h] [ebp-34h]
  char *v17; // [esp+10h] [ebp-2Ch]
  int (**v19)(); // [esp+18h] [ebp-24h] BYREF
  int v20; // [esp+1Ch] [ebp-20h]
  char *v21; // [esp+20h] [ebp-1Ch]

  v1 = *a1;
  v2 = (unsigned int)(*a1)[2];
  v17 = (*a1)[1];
  v3 = (size_t)(v17 + 1);
  v16 = a1[1];
  if ( (unsigned int)(v17 + 1) >= v2 )
  {
    v6 = 2 * v2;
    if ( v6 < v3 )
      v6 = (size_t)(v17 + 1);
    v1[2] = (char *)v6;
    v4 = (char *)realloc(*v1, v6);
    *v1 = v4;
    v5 = v1[1];
    v3 = (size_t)(v5 + 1);
  }
  else
  {
    v4 = *v1;
    v5 = (*a1)[1];
  }
  v1[1] = (char *)v3;
  v5[(_DWORD)v4] = 40;
  v7 = v16[2];
  v20 = 16843037;
  v19 = off_139F64;
  v21 = v7;
  v8 = *a1;
  sub_CFE80((int)&v19, *a1);
  if ( BYTE1(v20) != 1 )
    ((void (__cdecl *)(int (***)(), char **))v19[4])(&v19, v8);
  v9 = *a1;
  v10 = (*a1)[1];
  v11 = (unsigned int)(*a1)[2];
  v12 = v10 + 1;
  if ( (unsigned int)(v10 + 1) >= v11 )
  {
    v14 = 2 * v11;
    if ( v14 < (unsigned int)v12 )
      v14 = (size_t)(v10 + 1);
    v9[2] = (char *)v14;
    v13 = (char *)realloc(*v9, v14);
    *v9 = v13;
    v10 = v9[1];
    v12 = v10 + 1;
  }
  else
  {
    v13 = *v9;
  }
  v9[1] = v12;
  v10[(_DWORD)v13] = 41;
  return _stack_chk_guard;
}
// 139F64: using guessed type int (*off_139F64[3])();
