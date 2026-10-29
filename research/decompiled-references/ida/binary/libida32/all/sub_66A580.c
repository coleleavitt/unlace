__int64 __fastcall sub_66A580(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rsi
  int v4; // r14d
  int v5; // eax
  int v6; // r13d
  int v7; // r14d
  unsigned int v8; // r8d
  void *v10; // r15
  int v11; // ebp
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned int v15; // eax
  void **v16; // r12
  __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned int *v19; // [rsp+0h] [rbp-88h]
  unsigned __int8 v20; // [rsp+0h] [rbp-88h]
  int v21; // [rsp+14h] [rbp-74h]
  char v22; // [rsp+27h] [rbp-61h] BYREF
  int v23; // [rsp+28h] [rbp-60h] BYREF
  int v24; // [rsp+2Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v3 = *a1;
  if ( (debug & 4) == 0 )
  {
    v16 = *(void ***)(v3 + 1584);
    free_idasgn(*v16);
    *v16 = nullptr;
    v3 = *a1;
  }
  v4 = sub_79B3A0((char *)a1 + 2556, v3, 0xFFFFFFFFLL, 65);
  v19 = sub_4EEBF0((__int64)(a1 + 194));
  v5 = sub_79B3A0((char *)a1 + 2556, *a1, 4294967294LL, 65);
  v6 = v5;
  v26 = 0;
  if ( (_BYTE)a2 )
  {
    v21 = v4;
    v10 = nullptr;
    while ( 1 )
    {
      if ( v4 > 0 )
      {
        v14 = *a1;
        v22 = 1;
        sub_79B440((char *)a1 + 2556, v14, (unsigned int)(v4 - 1), &v22, 1, 80);
      }
      else if ( v4 < 0 )
      {
        break;
      }
      if ( v6 <= v4 || (unsigned __int8)sub_79B3A0((char *)a1 + 2556, *a1, (unsigned int)v4, 4176) )
        break;
      v11 = v4 + 1;
      if ( v19 )
      {
        ptr = v10;
        v12 = sub_66A4D0((__int64)a1, (__int64 *)&ptr, (unsigned int)v4, 1);
        v10 = ptr;
        v13 = *a1;
        if ( v12 )
        {
          v24 = v4 + 1;
          sub_79B440((char *)a1 + 2556, v13, 0xFFFFFFFFLL, &v24, 4, 65);
          sub_669A80((__int64)a1, (__int64)&ptr);
        }
        v15 = sub_79B840((char *)a1 + 2556, v13, (unsigned int)v4, 83);
        if ( v15 > v6 )
          v15 = v6;
        v11 = v15;
      }
      v4 = v11;
    }
    if ( v4 != v21 )
    {
      v17 = *a1;
      v23 = v4;
      sub_79B440((char *)a1 + 2556, v17, 0xFFFFFFFFLL, &v23, 4, 65);
    }
    mark_builtin_widgets(256, 0, 1);
    v8 = 0;
  }
  else
  {
    v7 = v4 - 1;
    if ( v7 < 0 || v7 >= v5 || !v19 || (unsigned __int8)sub_79B3A0((char *)a1 + 2556, *a1, (unsigned int)v7, 4176) )
      return a2;
    ptr = nullptr;
    v18 = sub_66A4D0((__int64)a1, (__int64 *)&ptr, (unsigned int)v7, 1);
    v10 = ptr;
    v8 = v18;
    if ( (_BYTE)v18 )
      sub_669A80((__int64)a1, (__int64)&ptr);
  }
  if ( v10 )
  {
    v20 = v8;
    qfree(v10);
    return v20;
  }
  return v8;
}

