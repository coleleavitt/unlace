__int64 __fastcall LoadFileDialog__::vfunc_2(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  double v18; // xmm4_8
  double v19; // xmm5_8
  char v20; // [rsp+0h] [rbp-28h]
  int v21; // [rsp+Ch] [rbp-1Ch]

  result = ActionsInspectorDialog__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !(_DWORD)a2 )
    {
      if ( (int)result <= 4 )
      {
        v21 = result;
        if ( (_DWORD)result == 3 )
        {
          sub_2F9720(a1);
          LODWORD(result) = 3;
        }
        else if ( (_DWORD)result == 4 )
        {
          sub_2F9710(a1, **(_DWORD **)(a12 + 8));
          LODWORD(result) = v21;
        }
        else if ( (_DWORD)result == 1 )
        {
          sub_2F7610(a1);
          LODWORD(result) = v21;
        }
        else
        {
          if ( (_DWORD)result == 2 )
            sub_2F7600(a1);
          else
            sub_2F7630(a1, a3, a4, a5, a6, v18, v19, a9, a10, a2, v14, v15, v16, v17, v20);
          LODWORD(result) = v21;
        }
      }
      return (unsigned int)(result - 5);
    }
    if ( (_DWORD)a2 == 7 )
    {
      if ( (int)result <= 4 )
        **(_QWORD **)a12 = 0;
      return (unsigned int)(result - 5);
    }
  }
  return result;
}
