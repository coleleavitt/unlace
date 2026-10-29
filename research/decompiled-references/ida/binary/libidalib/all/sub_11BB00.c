unsigned __int64 __fastcall sub_11BB00(
        unsigned __int8 a1,
        __m128 a2,
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  int v18; // ebx
  char v20; // [rsp+0h] [rbp-38h]
  __int64 v21; // [rsp+8h] [rbp-30h] BYREF
  __int64 v22; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  if ( (unsigned __int8)auto_is_ok() || (int)sub_F9610(0xFFFFFFFF, 989) > 0 )
  {
    v9 = sub_117410(1u, (__int64)"idc", (unsigned int)a1 + 982);
    v10 = v9;
    if ( v9 )
    {
      v15 = sub_11B710(v9);
      if ( v15 )
      {
        sub_10E0D0((__int64)"Creating IDC file %s", v10, v11, v12, v13, v14, a2, a3, a4, a5, v16, v17, a8, a9, v20);
        if ( a1 )
        {
          v21 = 0;
          v22 = -1;
        }
        else
        {
          if ( !(unsigned __int8)sub_161C80(0, &v21, &v22) )
          {
            v21 = 0;
            v22 = -1;
          }
          sub_15E150();
        }
        v18 = gen_file();
        sub_10DB30();
        qfclose();
        if ( !v18 )
          sub_F9540(1003, v15);
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}

