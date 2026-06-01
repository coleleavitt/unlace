__int64 __fastcall sub_1095A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r13
  unsigned int *v11; // r11
  unsigned __int64 v12; // rax
  unsigned int *i; // r10
  unsigned int v14; // edx
  unsigned __int64 v16; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v17; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v18; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v19; // [rsp+8h] [rbp-E0h]
  __int64 v20; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v21; // [rsp+18h] [rbp-D0h]
  unsigned int v22; // [rsp+28h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+2Ch] [rbp-BCh] BYREF
  _BYTE v24[120]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a3 > 8 )
  {
    v4 = sub_1277E0(a1 + 10264, a2 + 8, a3 - 8, a1, 10264, 0);
    if ( v4 <= 0xFFFFFFFFFFFFFF88LL )
    {
      v5 = a2 + a3;
      v22 = 31;
      v6 = a2 + 8 + v4;
      v16 = v5;
      v17 = sub_115080(v24, &v22, &v23, v6, v5 - v6);
      if ( v17 <= 0xFFFFFFFFFFFFFF88LL && v22 <= 0x1F && v23 <= 8 )
      {
        v20 = a1 + 26664;
        sub_111EA0(
          a1 + 4104,
          (unsigned int)v24,
          v22,
          (unsigned int)qword_136360,
          (unsigned int)qword_136340,
          v23,
          a1 + 26664,
          628,
          0);
        v22 = 52;
        v7 = v16 - (v6 + v17);
        v18 = v6 + v17;
        v8 = sub_115080(v24, &v22, &v23, v18, v7);
        if ( v8 <= 0xFFFFFFFFFFFFFF88LL )
        {
          v21 = v8;
          if ( v22 <= 0x34 && v23 <= 9 )
          {
            sub_111EA0(
              a1 + 6160,
              (unsigned int)v24,
              v22,
              (unsigned int)qword_136260,
              (unsigned int)qword_136480,
              v23,
              v20,
              628,
              0);
            v22 = 35;
            v9 = v16 - (v21 + v18);
            v19 = v21 + v18;
            v10 = sub_115080(v24, &v22, &v23, v19, v9);
            if ( v10 <= 0xFFFFFFFFFFFFFF88LL && v22 <= 0x23 && v23 <= 9 )
            {
              sub_111EA0(
                a1,
                (unsigned int)v24,
                v22,
                (unsigned int)qword_1363E0,
                (unsigned int)qword_1364C0,
                v23,
                v20,
                628,
                0);
              v11 = (unsigned int *)(v10 + v19);
              v12 = v10 + v19 + 12;
              if ( v12 <= v16 )
              {
                for ( i = (unsigned int *)(a1 + 26652); ; ++i )
                {
                  v14 = *v11++;
                  if ( !v14 || v14 > v16 - v12 )
                    break;
                  *i = v14;
                  if ( (unsigned int *)v12 == v11 )
                    return v12 - a2;
                }
              }
            }
          }
        }
      }
    }
  }
  return -30;
}

