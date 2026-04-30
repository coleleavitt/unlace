unsigned __int64 __fastcall sub_31C5D0(
        unsigned __int8 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // [rsp+8h] [rbp-30h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  if ( (unsigned __int8)auto_is_ok() || (int)sub_300700(-1, 989) > 0 )
  {
    v9 = sub_317FE0(1u, (__int64)"idc", (unsigned int)a1 + 982);
    v10 = v9;
    if ( v9 )
    {
      v11 = sub_31C1D0(v9);
      if ( v11 )
      {
        sub_1C76F0((int)"Creating IDC file %s", v10);
        if ( a1 )
        {
          v12 = 0;
          v13 = -1;
          v19 = 0;
          v14 = 8;
          v20 = -1;
        }
        else
        {
          if ( !(unsigned __int8)sub_1F09E0(0, &v19, &v20) )
          {
            v19 = 0;
            v20 = -1;
          }
          sub_1FDB10(a2, a3, a4, a5, v17, v18, a8, a9, 0, (const char *)&v19);
          v13 = v20;
          v12 = v19;
          v14 = 0;
        }
        v15 = gen_file(2, v11, v12, v13, v14);
        sub_1C78D0();
        qfclose(v11);
        if ( !v15 )
          sub_17CE30(1003);
      }
    }
  }
  return v21 - __readfsqword(0x28u);
}
