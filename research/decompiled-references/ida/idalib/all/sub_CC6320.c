__int64 __fastcall sub_CC6320(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r13
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rsi
  int v20; // eax
  unsigned int *v21; // r12
  unsigned int v22; // ebp
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-C0h]
  __int64 v25; // [rsp+10h] [rbp-B8h]
  __int64 v26; // [rsp+20h] [rbp-A8h]
  __int64 v27; // [rsp+28h] [rbp-A0h]
  unsigned __int8 v28; // [rsp+3Eh] [rbp-8Ah]
  __int64 v29; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-78h] BYREF
  __int64 v31; // [rsp+58h] [rbp-70h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 584);
  if ( (_BYTE)v2 )
    return v2;
  sub_C06BF0((__int64)&v30, a2, **(_QWORD **)(a1 + 488), *(_QWORD *)(a1 + 576));
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  if ( v9 != 13 )
  {
    if ( v9 == 47 )
    {
      v12 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
              a2,
              v5,
              v6,
              v7);
      if ( ((*(_BYTE *)(v12 + 74) & 1) != 0 || (*(_QWORD *)(v12 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && *(char *)(sub_F60F10(v8, a2, v13, v14, v15) + 76) >= 0 )
      {
        goto LABEL_11;
      }
    }
    else if ( v9 == 10 )
    {
      goto LABEL_11;
    }
LABEL_5:
    v10 = sub_A51060((__int64)&v30);
    if ( v10 )
    {
      v11 = v10 & 3;
      if ( v11 != 1 )
      {
        v23 = v10 & 0xFFFFFFFFFFFFFFFCLL;
        v16 = 0;
        if ( !v11 )
          v16 = v23;
LABEL_19:
        v17 = sub_E2FAD0(*(_QWORD *)(a1 + 496), v16, 0);
        if ( BYTE4(v17) )
        {
          v25 = a2 | 4;
          v29 = a2 | 4;
          v28 = sub_CA4B70(a1, v17, &v29);
          if ( v28 )
          {
            v18 = 0;
            v19 = sub_CB1280(a1, *(_QWORD *)(a2 + 8));
            v20 = *(_DWORD *)(v19 + 288);
            v27 = (unsigned int)(v20 - 1);
            if ( v20 )
            {
              v26 = a2;
              while ( 1 )
              {
                v21 = (unsigned int *)(*(_QWORD *)(v19 + 280) + 24 * v18);
                v24 = *(_QWORD *)(v16 + 72) + 56LL * (unsigned int)(*(_DWORD *)(v16 + 80) + v18);
                v22 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(*(_QWORD *)v21 + 48LL));
                if ( !(unsigned __int8)sub_CC6080((_QWORD *)a1, v24, v22, v26) )
                  break;
                v29 = v25;
                if ( !(unsigned __int8)sub_CA4FD0(a1, v22, v21[2], &v29) )
                  break;
                if ( v18 == v27 )
                  goto LABEL_31;
                ++v18;
              }
              v2 = 0;
            }
            else
            {
LABEL_31:
              v2 = v28;
            }
          }
        }
        goto LABEL_12;
      }
      if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v2 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(
               a1,
               v10 & 0xFFFFFFFFFFFFFFFCLL);
        goto LABEL_12;
      }
    }
    v16 = 0;
    goto LABEL_19;
  }
  if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
    goto LABEL_5;
LABEL_11:
  v2 = sub_CB7C70(a1, (__int64)&v31, a2);
LABEL_12:
  if ( v30 > 1 )
    sub_A4F8E0((int *)&v30);
  return v2;
}
