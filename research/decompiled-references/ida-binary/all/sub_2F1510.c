__int64 __fastcall sub_2F1510(
        __int64 *a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  _QWORD *v15; // rdi
  _QWORD *v16; // rbp
  _QWORD *v17; // rbx
  unsigned int v18; // ebx
  _QWORD *v20; // [rsp+0h] [rbp-48h] BYREF
  __int128 v21; // [rsp+8h] [rbp-40h]
  char v22; // [rsp+18h] [rbp-30h]
  __int64 v23; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v24; // [rsp+28h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  v20 = nullptr;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  sub_17E750((__int64)&v20, a1, 1, 0, 0.0, a3, a4, a5, a6, a7, a8, a9, a13, a14);
  v15 = v20;
  if ( (_QWORD)v21 )
  {
    v16 = &v20[v21];
    if ( v16 == v20 )
    {
      v18 = 1;
    }
    else
    {
      v17 = v20;
      do
        revert_metadata(*v17++);
      while ( v16 != v17 );
      v15 = v20;
      v18 = 1;
    }
  }
  else
  {
    v18 = 0;
  }
  if ( v15 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v15, (const char *)a1);
  }
  return v18;
}
