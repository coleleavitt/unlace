__int64 __fastcall sub_13DBFA0(int a1, __int64 *a2, __int64 a3, int *a4, __m128i a5, double a6)
{
  int v8; // ebx
  unsigned int v9; // ebp
  unsigned int v11; // eax
  int v12; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+4h] [rbp-54h]

  v8 = a1;
  if ( a1 < 0 )
    a1 = sub_1021B90((__int64)a2, a1);
  v9 = sub_13DBE60(a1, (__int64)&v12, a2, a3, a5, a6);
  if ( (_BYTE)v9 )
  {
    return 0;
  }
  else if ( v13 )
  {
    v12 = 0;
    v11 = sub_101FED0((unsigned int *)a2, v8 + v13, &v12);
    if ( (_BYTE)v11 )
    {
      if ( v12 < 0 )
      {
        return (unsigned int)sub_13DBFA0((unsigned int)v12, a2, a3, a4);
      }
      else
      {
        v9 = v11;
        if ( a4 )
          *a4 = v12;
      }
    }
  }
  return v9;
}
