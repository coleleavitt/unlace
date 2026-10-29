__int64 __fastcall sub_7987E0(__int64 a1, __int64 *a2, unsigned int *a3, char a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // r15d
  unsigned int v7; // eax
  unsigned int v9; // r13d
  char v10; // dl
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v14; // eax
  const char *v15; // rsi
  unsigned int v16; // r8d
  unsigned int v18; // [rsp+Ch] [rbp-6Ch]
  unsigned int v19; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v4 = *(_DWORD *)(*(_QWORD *)a1 + 5880LL);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 5876LL);
  v22 = __readfsqword(0x28u);
  if ( !a3 )
  {
    v9 = 1;
    if ( v4 < v5 )
    {
      v9 = 0;
      sub_7972E0(a2, "longnode number is greater than maxnodenumber", 0);
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
    sub_7972E0(a2, "maxnodenumber is outside the privrange", v10);
    v7 = *a3;
  }
  if ( v5 < v7 || (v11 = a3[1], v5 >= v11) )
  {
    v9 = 0;
    sub_7972E0(a2, "longnode number is outside the privrange", 0);
    v11 = a3[1];
  }
  v19 = v11;
  if ( (unsigned __int8)sub_796360(a1, &v19) )
  {
    if ( v19 < *a3 )
    {
      sub_7972E0(a2, "no nodes in the privrange", a4);
      v4 = *a3 + 1;
    }
    else if ( v4 < v19 )
    {
      v14 = sub_797BA0(a1, v19);
      if ( v4 < v14 )
      {
        v18 = v14;
        v21 = 0;
        ptr = nullptr;
        sub_3573A0((char **)&ptr);
        v15 = haystack;
        if ( (_QWORD)v21 )
          v15 = (const char *)ptr;
        sub_7972E0(a2, v15, a4);
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
  sub_7972E0(a2, "no nodes in the privrange and below it", a4);
  v4 = *a3 + 1;
  if ( v4 >= v5 )
    goto LABEL_23;
LABEL_12:
  if ( !a4 )
  {
    v9 = 0;
    sub_7972E0(a2, "longnode number is greater than maxnodenumber", 0);
    return v9;
  }
  if ( v5 < *a3 || v5 >= a3[1] )
  {
    v9 = 0;
    sub_7972E0(a2, "longnode number is greater than maxnodenumber", 0);
  }
  else
  {
    v4 = v5 + 1;
    v9 = 0;
    sub_7972E0(a2, "longnode number is greater than maxnodenumber", 1);
  }
LABEL_16:
  if ( *(_DWORD *)(*(_QWORD *)a1 + 5880LL) != v4 )
    *(_DWORD *)(*(_QWORD *)a1 + 5880LL) = v4;
  return v9;
}

