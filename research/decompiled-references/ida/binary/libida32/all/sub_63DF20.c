__int64 __fastcall sub_63DF20(
        __int64 *a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  char v13; // al
  double v14; // xmm4_8
  double v15; // xmm5_8
  void *v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v20; // [rsp+8h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-40h] BYREF
  __int128 v22; // [rsp+18h] [rbp-38h]
  unsigned __int64 v23; // [rsp+28h] [rbp-28h]

  v20 = a4;
  v23 = __readfsqword(0x28u);
  ptr = nullptr;
  v22 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
  *(_QWORD *)&v22 = 2;
  *(_BYTE *)ptr = 61;
  *((_BYTE *)ptr + 1) = 0;
  v13 = sub_6891C0(&ptr, a2);
  v16 = ptr;
  if ( v13 )
  {
    v17 = sub_63DDA0(
            *(__int64 **)(qword_2CA1698 + 1480),
            a1,
            a3,
            68,
            (char *)ptr,
            nullptr,
            0.0,
            a6,
            a7,
            a8,
            v14,
            v15,
            a11,
            a12,
            nullptr,
            nullptr,
            nullptr,
            &v20);
    v16 = ptr;
    v18 = v17;
  }
  else
  {
    v18 = -2;
  }
  if ( v16 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v16);
  }
  return v18;
}

