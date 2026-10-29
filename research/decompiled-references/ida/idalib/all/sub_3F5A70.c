__int64 __fastcall sub_3F5A70(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        char **a7)
{
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+18h] [rbp-70h] BYREF
  char v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v9 = (_QWORD *)a1[8];
  v10 = a1[9];
  v21 = __readfsqword(0x28u);
  v11 = &v9[v10];
  if ( v9 == v11 )
    return 0;
  while ( *v9 != a2 )
  {
    if ( v11 == ++v9 )
      return 0;
  }
  if ( v11 == v9 )
    return 0;
  if ( a3 == 79 )
    goto LABEL_13;
  if ( a3 != 83 )
  {
    if ( a3 != 65 )
    {
      sub_35A790(a7);
      return 0;
    }
LABEL_13:
    qsnprintf((unsigned int)&v20, 32, (unsigned int)"%a", a4, (_DWORD)a5, a6);
    if ( a6 == 4 )
    {
      v16 = *a5;
      v17 = a1[3];
      v18 = a2;
      v19 = v16;
      sub_7BE7C0(&v18, v17, a4, &v19, 8, a3);
    }
    else
    {
      sub_35A790(a7);
    }
    return 1;
  }
  netnode_supset(a2, a4, a5, a6, 83, a6);
  return 1;
}
