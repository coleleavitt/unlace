unsigned __int64 __fastcall sub_1D1A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // r15d
  __int64 v6; // r14
  bool v7; // zf
  __int64 *v8; // r12
  __int64 v9; // r13
  char v10; // dl
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  char v13; // al
  bool v14; // al
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rax
  unsigned int v16; // ebx
  __int64 ph; // rax
  int v18; // edx
  int v19; // ecx
  __int64 v21; // r8
  _DWORD *v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r13
  char v26; // al
  bool v27; // al
  __int64 (__fastcall *v28)(__int64, __int64, __int64); // rax
  __int64 v29; // rsi
  char v30; // al
  unsigned int v31; // [rsp+4h] [rbp-54h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  v6 = a1;
  v7 = a2[1] == 0;
  v34 = __readfsqword(0x28u);
  v8 = a2;
  if ( !v7 )
  {
    do
    {
      v9 = *v8 + 40 * v4;
      v10 = *(_BYTE *)(v9 + 1);
      if ( v10 == 1 )
      {
        v16 = *(unsigned __int16 *)(v9 + 6);
        a1 = *(_QWORD *)(v6 + 888);
        a2 = &v33;
        v33 = 0;
        sub_10260(a1, &v33, v6 + 16);
        if ( (unsigned __int16)v16 <= 0x1Fu )
        {
          a4 = v16;
          if ( (v33 & (1LL << v16)) != 0 )
          {
LABEL_10:
            if ( !v8[1] )
              break;
            v12 = 0;
            while ( 2 )
            {
              v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 8LL);
              a2 = (__int64 *)(40 * v12 + *v8);
              if ( v15 == sub_1CC00 )
              {
                v13 = *((_BYTE *)a2 + 1);
                if ( v13 != *(_BYTE *)(v9 + 1) )
                  goto LABEL_19;
                switch ( v13 )
                {
                  case 99:
                    goto LABEL_18;
                  case 100:
                    v14 = a2[1] == *(_QWORD *)(v9 + 8);
                    break;
                  case 1:
                    v14 = *((_WORD *)a2 + 3) == *(_WORD *)(v9 + 6);
                    break;
                  default:
                    goto LABEL_19;
                }
                if ( v14 )
                  goto LABEL_18;
              }
              else
              {
                a1 = v6;
                if ( ((unsigned __int8 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))v15)(
                       v6,
                       a2,
                       v9,
                       a4,
                       sub_1CC00) )
                {
                  a2 = (__int64 *)(40 * v12 + *v8);
LABEL_18:
                  *((_BYTE *)a2 + 1) = 0;
                }
              }
LABEL_19:
              v11 = v8[1];
              if ( ++v12 >= v11 )
                goto LABEL_3;
              continue;
            }
          }
        }
        v10 = *(_BYTE *)(v9 + 1);
      }
      v11 = v8[1];
      if ( v10 == 99 )
      {
        v4 = *(unsigned __int16 *)(v6 + 40);
        if ( (unsigned __int16)v4 > 0x71u )
        {
          if ( (unsigned __int16)v4 <= 0x18Eu )
          {
            if ( (unsigned __int16)v4 <= 0x158u )
            {
              if ( (unsigned __int16)v4 > 0xCDu )
              {
                LOWORD(v4) = v4 - 255;
                if ( (unsigned __int16)v4 <= 3u )
                  goto LABEL_10;
              }
              else if ( (unsigned __int16)v4 > 0xCBu )
              {
                goto LABEL_10;
              }
            }
            else
            {
              a4 = 0x2001B3C3FCF00FLL;
              LOWORD(v4) = v4 - 345;
              if ( _bittest64(&a4, v4) )
                goto LABEL_10;
            }
          }
        }
        else if ( (unsigned __int16)v4 > 0x43u )
        {
          a4 = 0x3FF307F0400FLL;
          v4 = (unsigned int)(v4 - 68);
          if ( _bittest64(&a4, v4) )
            goto LABEL_10;
        }
        else
        {
          a4 = (unsigned int)(v4 - 2);
          if ( (unsigned __int16)(v4 - 2) <= 0x31u )
          {
            a4 = 0xD0001FFB801BCLL;
            if ( _bittest64(&a4, v4) )
              goto LABEL_10;
          }
        }
      }
LABEL_3:
      v4 = ++v5;
    }
    while ( v5 < v11 );
  }
  ph = get_ph(a1, a2, v4, a4, sub_1CC00);
  v18 = *(unsigned __int16 *)(v6 + 40);
  v19 = *(_DWORD *)(ph + 104);
  if ( v18 >= v19 && v18 < *(_DWORD *)(ph + 108) )
  {
    v21 = *(unsigned int *)(*(_QWORD *)(ph + 112) + 16LL * (v18 - v19) + 8);
    if ( (_DWORD)v21 )
    {
      v22 = dword_25580;
      v23 = v6 + 56;
      v24 = v6 + 176;
      while ( (*v22 & (unsigned int)v21) == 0 || *(_BYTE *)(v23 + 1) <= 1u || !v8[1] )
      {
LABEL_38:
        v23 += 40;
        ++v22;
        if ( v23 == v24 )
          return v34 - __readfsqword(0x28u);
      }
      v25 = 0;
      while ( 1 )
      {
        v28 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 8LL);
        v29 = 40 * v25 + *v8;
        if ( v28 != sub_1CC00 )
        {
          v32 = v24;
          v31 = v21;
          v30 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))v28)(
                  v6,
                  v29,
                  v23,
                  v24,
                  v21,
                  sub_1CC00);
          v21 = v31;
          v24 = v32;
          if ( !v30 )
            goto LABEL_56;
          v29 = 40 * v25 + *v8;
LABEL_55:
          *(_BYTE *)(v29 + 1) = 0;
          goto LABEL_56;
        }
        v26 = *(_BYTE *)(v29 + 1);
        if ( v26 == *(_BYTE *)(v23 + 1) )
        {
          switch ( v26 )
          {
            case 99:
              goto LABEL_55;
            case 100:
              v27 = *(_QWORD *)(v29 + 8) == *(_QWORD *)(v23 + 8);
              break;
            case 1:
              v27 = *(_WORD *)(v29 + 6) == *(_WORD *)(v23 + 6);
              break;
            default:
              goto LABEL_56;
          }
          if ( v27 )
            goto LABEL_55;
        }
LABEL_56:
        if ( ++v25 >= (unsigned __int64)v8[1] )
          goto LABEL_38;
      }
    }
  }
  return v34 - __readfsqword(0x28u);
}
