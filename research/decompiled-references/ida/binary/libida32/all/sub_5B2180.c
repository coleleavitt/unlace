__int64 __fastcall sub_5B2180(_QWORD *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int *v4; // rbx
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r9
  char *v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // r14
  int v12; // eax
  int v13; // edx
  unsigned int *v14; // rax
  unsigned int *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  _DWORD v18[2]; // [rsp+14h] [rbp-124h] BYREF
  char v19; // [rsp+1Dh] [rbp-11Bh]
  __int64 v20; // [rsp+20h] [rbp-118h] BYREF
  __int64 v21; // [rsp+28h] [rbp-110h]
  __int64 v22; // [rsp+30h] [rbp-108h]
  char v23; // [rsp+38h] [rbp-100h] BYREF
  _QWORD v24[8]; // [rsp+F8h] [rbp-40h] BYREF

  v24[0] = __readfsqword(0x28u);
  if ( (a2[2] & 1) != 0 )
    return 0;
  v4 = a2;
  v6 = sub_3C07C0(a1, a3);
  if ( v6 == -1 )
  {
    v15 = sub_4EE820((__int64)(a1 + 203), a3);
    if ( v15 )
    {
      v16 = *((_QWORD *)v15 + 1);
      if ( (v16 & 0x8000) != 0 )
      {
        v15 = sub_4EE820((__int64)(a1 + 203), v15[4]);
        if ( !v15 )
          return 0;
        v16 = *((_QWORD *)v15 + 1);
      }
      v6 = v15[7];
      v17 = v16 & 0x4000;
      if ( v6 || v17 )
      {
        v7 = v17 | *((_QWORD *)a2 + 1);
        goto LABEL_5;
      }
    }
    return 0;
  }
  v7 = *((_QWORD *)a2 + 1);
  BYTE1(v7) |= 0x40u;
LABEL_5:
  *((_QWORD *)a2 + 1) = v7;
  a2[7] = v6;
  sub_5ACD60((__int64)a1, a2, 0);
  if ( (unsigned __int8)xrefblk_t_first_to(v18, *a2, 5) )
  {
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(v19 - 16) <= 1u )
        {
          v22 = 0;
          v20 = -1;
          v21 = 0xFFFFFFFFLL;
          v9 = &v23;
          do
          {
            *(_WORD *)v9 = 0;
            v9 += 24;
            *((_WORD *)v9 - 11) = 0;
            *((_WORD *)v9 - 10) = 0;
            *((_DWORD *)v9 - 1) = 0;
            *((_WORD *)v9 - 9) = 0;
            *((_QWORD *)v9 - 2) = 0;
            *((_DWORD *)v9 - 2) = 0;
          }
          while ( v9 != (char *)v24 );
          if ( (int)decode_insn(&v20, v18[0], v24, 0, 0, v8) > 0 )
          {
            v10 = sub_4EE820((__int64)(a1 + 203), v18[0]);
            v11 = v10;
            if ( v10 )
            {
              if ( *((char *)v10 + 9) >= 0 || (v11 = sub_4EE820((__int64)(a1 + 203), v10[4])) != nullptr )
              {
                v12 = sub_59F050(a1, (__int64)v11, v18[0] + (unsigned int)HIWORD(v21)) - v6;
                v13 = v12;
                if ( v19 == 17 && (v4[2] & 2) != 0 )
                  v13 = v12 - (int)sub_59D650((__int64)a1, (__int64)v4) / 2;
                if ( v13 )
                  sub_5B2110(a1, (__int64)v11);
                v14 = sub_4EE820((__int64)(a1 + 203), *v4);
                v4 = v14;
                if ( v14 )
                {
                  if ( *((char *)v14 + 9) < 0 )
                    break;
                }
              }
            }
          }
        }
        if ( !(unsigned __int8)xrefblk_t_next_to(v18) )
          return 1;
      }
      v4 = sub_4EE820((__int64)(a1 + 203), v14[4]);
    }
    while ( (unsigned __int8)xrefblk_t_next_to(v18) );
  }
  return 1;
}

