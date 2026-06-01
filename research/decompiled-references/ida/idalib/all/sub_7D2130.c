__int64 __fastcall sub_7D2130(_QWORD *a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9[8]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v10; // [rsp+8h] [rbp-90h]
  __int64 v11; // [rsp+18h] [rbp-80h]
  char v12[8]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v13; // [rsp+28h] [rbp-70h]
  __int64 v14; // [rsp+38h] [rbp-60h]
  char v15[8]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+58h] [rbp-40h]
  unsigned __int64 v18; // [rsp+68h] [rbp-30h]

  v2 = haystack;
  v3 = a1[2] == 0;
  v18 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = (const char *)a1[1];
  v4 = open_linput(v2, a1[5] != 0);
  if ( v4 )
  {
    v12[0] = 2;
    v15[0] = 2;
    v14 = 0;
    v17 = 0;
    v13 = 0;
    v16 = 0;
    free_idcv(v15);
    v15[0] = 8;
    *(_QWORD *)&v16 = v4;
    v5 = sub_7D1770((__int64)v12, a2);
    if ( !v5 )
    {
      v9[0] = 2;
      v11 = 0;
      v10 = 0;
      free_idcv(v9);
      v9[0] = 2;
      *(_QWORD *)&v10 = 1;
      v5 = set_idcv_attr(a2, "__li_idc", v9, 0, v7, v8);
      free_idcv(v9);
    }
    free_idcv(v15);
    free_idcv(v12);
  }
  else
  {
    return 0;
  }
  return v5;
}
