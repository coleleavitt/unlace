__int64 __fastcall sub_79C0A0(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14)
{
  __int64 result; // rax
  __int64 v15; // rdx
  double v16; // xmm0_8
  unsigned int v17; // eax
  __int64 v18; // rax
  int v19; // r9d

  result = *(_QWORD *)(a1 + 1720);
  if ( !result || (v15 = *a2, (unsigned int)v15 >= *(_DWORD *)(result - 4)) || !*(_QWORD *)(result + 8 * v15) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 152) + 16LL))(
           *(_QWORD *)(a1 + 152),
           a2) )
    {
      v16 = (*(double (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 152) + 24LL))(
              *(_QWORD *)(a1 + 152),
              a2);
      return sub_79B540(a1, v17, a2, v16);
    }
    else
    {
      v18 = sub_7CF0A0(a1, a2);
      if ( v18 )
        return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v18 + 48) + 48LL))(v18 + 48, a2);
      else
        return sub_7E6250(
                 (int)a1 + 32,
                 *(_QWORD *)(a1 + 144),
                 (_DWORD)a2,
                 0,
                 0,
                 v19,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14);
    }
  }
  return result;
}

