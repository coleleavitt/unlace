__int64 __fastcall sub_12FAE00(__int64 a1, const char **a2, __int64 a3)
{
  const char **v3; // rbx
  const char **v4; // r13
  const char *v5; // rbp
  size_t v6; // rdx
  _BYTE *v7; // rax
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-78h] BYREF
  int v10; // [rsp+8h] [rbp-70h]
  __int128 v11; // [rsp+10h] [rbp-68h]
  _BYTE *v12; // [rsp+20h] [rbp-58h]
  char v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+2Ch] [rbp-4Ch]
  __int64 v15; // [rsp+30h] [rbp-48h]

  v3 = a2;
  v4 = &a2[a3];
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v15 = a1;
  v10 = 0;
  v13 = 0;
  v14 = 1;
  v12 = nullptr;
  v11 = 0;
  v9 = &off_2BEBE68;
  sub_227B8B0(&v9, 0, 0, 0);
  if ( a2 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        v6 = 0;
        if ( *v3 )
          v6 = strlen(*v3);
        sub_2290F40(&v9, v5, v6, 1);
        v7 = v12;
        if ( (unsigned __int64)v12 >= *((_QWORD *)&v11 + 1) )
          break;
        ++v3;
        ++v12;
        *v7 = 32;
        if ( v4 == v3 )
          goto LABEL_8;
      }
      ++v3;
      sub_227BA10(&v9, 32);
    }
    while ( v4 != v3 );
  }
LABEL_8:
  v9 = &off_2BEBE68;
  sub_227B7A0(&v9);
  return a1;
}
