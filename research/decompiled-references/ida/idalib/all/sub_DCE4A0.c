bool __fastcall sub_DCE4A0(unsigned int *a1, unsigned int *a2)
{
  int v2; // ebp
  unsigned int v3; // r14d
  int v4; // ebx
  size_t v5; // rbp
  unsigned __int64 v6; // rbx
  char *v7; // r15
  unsigned __int64 v8; // rdx
  bool result; // al
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  size_t v15; // rdx
  char *v16; // rdx
  unsigned int v17; // [rsp+0h] [rbp-88h]
  char *s1; // [rsp+8h] [rbp-80h]
  int v19; // [rsp+10h] [rbp-78h]
  int v20; // [rsp+18h] [rbp-70h]
  _QWORD v21[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]

  v19 = sub_CFE630(a1);
  v20 = sub_CFE630(a2);
  v2 = sub_CFE5F0((__int64)a1);
  v3 = sub_CFE390((__int64)a1) * (v2 - 1);
  v4 = sub_CFE5F0((__int64)a2);
  v5 = v3;
  v6 = (unsigned int)sub_CFE390((__int64)a2) * (v4 - 1);
  v17 = v6;
  sub_CFE430((__int64)v21, (__int64)a1, 0);
  s1 = (char *)(v22 + v21[0] + 40);
  sub_E232A0(v21);
  sub_CFE430((__int64)v21, (__int64)a2, 0);
  v7 = (char *)(v22 + v21[0] + 40);
  sub_E232A0(v21);
  LODWORD(v8) = v20 - v19;
  if ( v20 - v19 < 0 )
  {
    LODWORD(v14) = v19 - v20;
    result = 0;
    if ( v19 - v20 > (int)v3 )
      return result;
    v14 = (int)v14;
    if ( v3 < (unsigned __int64)(int)v14 )
    {
      v14 = v3;
      v5 = 0;
    }
    else
    {
      v5 = v3 - (__int64)(int)v14;
    }
    s1 += v14;
    if ( v3 < (unsigned int)v6 )
      goto LABEL_6;
  }
  else
  {
    result = 0;
    if ( (int)v6 < (int)v8 )
      return result;
    v8 = (int)v8;
    if ( v6 < (int)v8 )
    {
      v8 = v6;
      v6 = 0;
    }
    else
    {
      v6 -= (int)v8;
    }
    v7 += v8;
    if ( v3 < v17 )
    {
LABEL_6:
      v10 = sub_CFE390((__int64)a1);
      goto LABEL_7;
    }
  }
  v10 = sub_CFE390((__int64)a2);
  v15 = v5;
  v5 = v6;
  v6 = v15;
  v16 = s1;
  s1 = v7;
  v7 = v16;
LABEL_7:
  v11 = v10;
  if ( v10 )
  {
    if ( v5 < v6 )
    {
      if ( v7[v5] )
        return 0;
      v12 = 0;
      while ( v11 != ++v12 )
      {
        v13 = v5 + (unsigned int)v12;
        if ( v13 >= v6 )
          break;
        if ( v7[v13] )
          return 0;
      }
      goto LABEL_14;
    }
  }
  else if ( v5 < v6 )
  {
LABEL_14:
    if ( v6 > v5 )
      v6 = v5;
  }
  result = 0;
  if ( v5 == v6 )
  {
    result = 1;
    if ( v5 )
      return memcmp(s1, v7, v5) == 0;
  }
  return result;
}
