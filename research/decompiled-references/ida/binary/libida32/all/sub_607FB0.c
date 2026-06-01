__int64 __fastcall sub_607FB0(
        __int64 *a1,
        unsigned int a2,
        __int64 (__fastcall *a3)(__int64, const char *, _QWORD, __int64),
        __int64 a4)
{
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // r15d
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  unsigned int v17; // eax
  unsigned int v18; // [rsp+8h] [rbp-50h]
  int v19; // [rsp+Ch] [rbp-4Ch]
  int v20; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_79BBD0(a1 + 280, *a1, &v20, a2, 65) )
    return (unsigned int)-1;
  v19 = v20;
  if ( v20 == -1 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v18 = sub_605DD0(*a1, v20, a3, a4);
    if ( v18 == 1 )
    {
      v7 = *a1;
      v8 = *a1;
      v20 = v19;
      v9 = sub_79B7E0(&v20, v8, 65);
      if ( v9 == -1 )
      {
LABEL_11:
        v13 = *a1;
        v14 = *a1;
        v20 = v19;
        v15 = sub_79B7E0(&v20, v14, 79);
        if ( v15 == -1 )
          return v18;
        while ( 1 )
        {
          v16 = sub_79B3A0(&v20, v13, v15, 79);
          v17 = sub_3B9110(*(_QWORD **)(v13 + 1480), v15);
          v12 = a3(v17, nullptr, v16, a4);
          if ( v12 <= 0 )
            break;
          v15 = sub_79B840(&v20, v13, v15, 79);
          if ( v15 == -1 )
            return v18;
        }
      }
      else
      {
        while ( 1 )
        {
          v10 = sub_79B3A0(&v20, v7, v9, 65);
          v11 = sub_3B9110(*(_QWORD **)(v7 + 1480), v10);
          v12 = a3(v11, nullptr, v9, a4);
          if ( v12 <= 0 )
            break;
          v9 = sub_79B840(&v20, v7, v9, 65);
          if ( v9 == -1 )
            goto LABEL_11;
        }
      }
      return (unsigned int)v12;
    }
  }
  return v18;
}

