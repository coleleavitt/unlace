__int64 __fastcall sub_7AECC0(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  __int64 v4; // rbx
  unsigned int v5; // ebx
  char v7[8]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v8; // [rsp+8h] [rbp-90h]
  __int64 v9; // [rsp+18h] [rbp-80h]
  char v10[8]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+38h] [rbp-60h]
  char v13[8]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v14; // [rsp+48h] [rbp-50h]
  __int64 v15; // [rsp+58h] [rbp-40h]
  unsigned __int64 v16; // [rsp+68h] [rbp-30h]

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 16) == 0;
  v16 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a1 + 8);
  v4 = open_linput(v2, *(_DWORD *)(a1 + 40) != 0);
  if ( v4 )
  {
    v10[0] = 2;
    v13[0] = 2;
    v12 = 0;
    v15 = 0;
    v11 = 0;
    v14 = 0;
    free_idcv(v13);
    v13[0] = 8;
    *(_QWORD *)&v14 = v4;
    v5 = sub_7AE310((__int64)v10, a2);
    if ( !v5 )
    {
      v7[0] = 2;
      v9 = 0;
      v8 = 0;
      free_idcv(v7);
      v7[0] = 2;
      LODWORD(v8) = 1;
      v5 = set_idcv_attr();
      free_idcv(v7);
    }
    free_idcv(v13);
    free_idcv(v10);
  }
  else
  {
    return 0;
  }
  return v5;
}

