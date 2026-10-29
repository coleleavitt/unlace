__int64 __fastcall sub_1C385A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  _QWORD *v9; // r12
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 v15; // rdi
  unsigned __int8 v16; // al
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r14
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rdi
  int v32; // edx

  v9 = sub_F60F10(a2, a2, a3, a4, a5, a6);
  if ( (*((_BYTE *)v9 + 28) & 0x7Fu) - 59 <= 2 )
  {
    v10 = v9;
    do
    {
      v11 = v10[2];
      v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v11 & 4) != 0 )
        v12 = *(_QWORD *)v12;
      v13 = *(_BYTE *)(v12 + 8) & 0x7F;
      if ( (unsigned int)(v13 - 59) > 2 )
        break;
      v10 = (_QWORD *)(v12 - 64);
    }
    while ( v10 );
    if ( (unsigned int)(v13 - 34) <= 5 )
    {
      v15 = v12 - 72;
      if ( v15 )
      {
        v16 = sub_B81B70(v15);
        if ( !v16 )
          goto LABEL_38;
        if ( v16 <= 3u )
          return 1;
        if ( v16 > 6u )
LABEL_38:
          BUG();
        if ( !(unsigned __int8)sub_B8E180((unsigned __int64)(v9 + 8)) )
        {
          v17 = sub_B8E970((__int64)(v9 + 8));
          if ( v17 )
          {
            while ( 1 )
            {
              if ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 64 > 2 )
                goto LABEL_17;
              if ( ((*(_BYTE *)(v17 + 29) >> 5) & 3) == 2 )
                break;
LABEL_16:
              sub_19116A0(*(__m128 **)(a1 + 16), *(unsigned int *)(v17 + 24), v17, 0, v18, v19, a7, a8);
LABEL_17:
              v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v17 )
                return 1;
            }
            v20 = v9[13];
            v21 = *(_QWORD *)(v20 + 96);
            v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v21 & 1) == 0 )
            {
              v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              {
                if ( (v21 & 2) == 0 )
                  goto LABEL_23;
                v25 = v23[2295];
                v26 = v20 & 0xFFFFFFFFFFFFFFFBLL;
                if ( v25 )
                {
                  v27 = v23[294];
                  v23[304] += 24LL;
                  v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v23[295] >= v28 + 24 && v27 )
                  {
                    v23[294] = v28 + 24;
                    v29 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v29 = sub_986170((__int64)(v23 + 294), 24, 24, 3, v18, v19);
                    v28 = v29 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)v29 = v25;
                  v26 = v28 | 4;
                  *(_DWORD *)(v29 + 8) = 0;
                  *(_QWORD *)(v29 + 16) = v20;
                }
                v22 = v26 & 0xFFFFFFFFFFFFFFFELL;
                v21 = v22 | 1;
                *(_QWORD *)(v20 + 96) = v22 | 1;
              }
            }
            if ( v22 )
            {
              if ( (v22 & 4) != 0 )
              {
                v30 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v30 )
                {
                  v31 = *(_QWORD *)v30;
                  v32 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
                  if ( v30[2] != v32 )
                  {
                    v30[2] = v32;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 152LL))(v31, v20);
                  }
                }
              }
            }
LABEL_23:
            v24 = v9[16];
            if ( (*(_BYTE *)(v24 + 96) & 1) == 0 && !*(_QWORD *)(v24 + 96) )
              goto LABEL_17;
            goto LABEL_16;
          }
        }
      }
    }
  }
  return 1;
}
