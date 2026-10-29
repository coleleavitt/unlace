__int64 __fastcall sub_7BB8E0(__int64 *a1, __int64 *a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rax
  unsigned int v9; // r13d
  char v10; // dl
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rax
  const char *v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v18; // [rsp+8h] [rbp-70h]
  unsigned __int64 v19; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(*a1 + 5904);
  v5 = *(_QWORD *)(*a1 + 5896);
  v22 = __readfsqword(0x28u);
  if ( !a3 )
  {
    v9 = 1;
    if ( v4 < v5 )
    {
      v9 = 0;
      sub_7BA360(a2, "longnode number is greater than maxnodenumber", 0);
    }
    goto LABEL_23;
  }
  v7 = *a3;
  if ( v4 < *a3 || (v9 = 1, v4 >= a3[1]) )
  {
    v10 = 0;
    if ( a4 )
    {
      v12 = v7 + 1;
      if ( v4 < v12 )
      {
        v4 = v12;
        v10 = 1;
      }
    }
    v9 = 0;
    sub_7BA360(a2, "maxnodenumber is outside the privrange", v10);
    v7 = *a3;
  }
  if ( v5 < v7 || (v11 = a3[1], v5 >= v11) )
  {
    v9 = 0;
    sub_7BA360(a2, "longnode number is outside the privrange", 0);
    v11 = a3[1];
  }
  v19 = v11;
  if ( (unsigned __int8)sub_7B92A0((__int64)a1, (unsigned int *)&v19) )
  {
    if ( v19 < *a3 )
    {
      sub_7BA360(a2, "no nodes in the privrange", a4);
      v4 = *a3 + 1;
    }
    else if ( v4 < v19 )
    {
      v14 = sub_7BAC20(a1, v19);
      if ( v4 < v14 )
      {
        v18 = v14;
        v21 = 0;
        ptr = nullptr;
        sub_35A790((char **)&ptr);
        v15 = haystack;
        if ( (_QWORD)v21 )
          v15 = (const char *)ptr;
        sub_7BA360(a2, v15, a4);
        v16 = v18;
        if ( ptr )
        {
          *(_QWORD *)&v21 = 0;
          qfree(ptr);
          v16 = v18;
        }
        v4 = v16;
      }
    }
    if ( v4 < v5 )
      goto LABEL_12;
LABEL_23:
    if ( !a4 )
      return v9;
    goto LABEL_16;
  }
  sub_7BA360(a2, "no nodes in the privrange and below it", a4);
  v4 = *a3 + 1;
  if ( v4 >= v5 )
    goto LABEL_23;
LABEL_12:
  if ( !a4 )
  {
    v9 = 0;
    sub_7BA360(a2, "longnode number is greater than maxnodenumber", 0);
    return v9;
  }
  if ( v5 < *a3 || v5 >= a3[1] )
  {
    v9 = 0;
    sub_7BA360(a2, "longnode number is greater than maxnodenumber", 0);
  }
  else
  {
    v4 = v5 + 1;
    v9 = 0;
    sub_7BA360(a2, "longnode number is greater than maxnodenumber", 1);
  }
LABEL_16:
  if ( *(_QWORD *)(*a1 + 5904) != v4 )
    *(_QWORD *)(*a1 + 5904) = v4;
  return v9;
}
