bool __fastcall emdnorm(__int64 a1, char a2, char a3, __int64 a4, int a5)
{
  __int16 v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r11d
  int v16; // r11d
  int v17; // r14d
  bool result; // al
  _WORD *v19; // r11
  __int16 v20; // cx
  int v21; // r9d
  __int16 v22; // r15
  __int64 v23; // r8
  __int16 v24; // si
  __int16 v25; // dx
  _WORD *v26; // rax
  __int16 v27; // cx
  int v28; // r8d
  __int16 v29; // r10
  __int64 v30; // rax
  unsigned __int16 *v31; // rcx
  unsigned int v32; // esi
  _BYTE *v33; // rdx
  int v34; // eax
  int v35; // edi
  unsigned int v36; // eax
  __int16 v37; // [rsp+4h] [rbp-64h]
  int v38; // [rsp+Ch] [rbp-5Ch]
  _BYTE v39[22]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v9 = *(_WORD *)(a1 + 2);
  v40 = __readfsqword(0x28u);
  v10 = sub_80CD40(a1);
  if ( v10 > 112 )
  {
    result = v9 != 0;
    goto LABEL_14;
  }
  v16 = v15 - v10;
  v17 = v16;
  if ( v16 <= 32766 )
  {
    if ( v16 >= 0 )
    {
      if ( !a5 )
      {
LABEL_5:
        *(_WORD *)(a1 + 20) = 0;
        goto LABEL_6;
      }
      memset(v39, 0, sizeof(v39));
      if ( a5 != 56 )
      {
LABEL_18:
        if ( a5 <= 56 )
        {
          if ( a5 != 24 )
          {
            if ( a5 == 53 )
            {
              *(_WORD *)&v39[12] = 2048;
              if ( v17 > 0 )
              {
                v19 = (_WORD *)(a1 + 12);
                v20 = -2048;
                v21 = 7;
                v22 = 1024;
                v23 = 6;
                v24 = 2048;
                v25 = *(_WORD *)(a1 + 12) & 0x7FF;
LABEL_45:
                v30 = v21;
                do
                {
                  if ( *(_WORD *)(a1 + 2 * v30) )
                    v25 |= 1u;
                  *(_WORD *)(a1 + 2 * v30++) = 0;
                }
                while ( (_DWORD)v30 != 11 );
                *v19 &= v20;
                if ( ((unsigned __int16)v22 & (unsigned __int16)v25) == 0 )
                  goto LABEL_55;
                goto LABEL_50;
              }
              goto LABEL_43;
            }
LABEL_24:
            *(_WORD *)&v39[18] = 1;
            goto LABEL_25;
          }
          *(_WORD *)&v39[8] = 256;
          if ( v17 > 0 )
          {
            v25 = *(unsigned __int8 *)(a1 + 8);
            v19 = (_WORD *)(a1 + 8);
            v20 = -256;
            v21 = 5;
            v22 = 128;
            v23 = 4;
            v24 = 256;
            goto LABEL_45;
          }
          goto LABEL_73;
        }
        goto LABEL_31;
      }
      *(_WORD *)&v39[12] = 256;
      if ( v16 )
      {
        v25 = *(unsigned __int8 *)(a1 + 12);
        v19 = (_WORD *)(a1 + 12);
        v20 = -256;
        v21 = 7;
        v22 = 128;
        v23 = 6;
        v24 = 256;
        goto LABEL_45;
      }
LABEL_65:
      v27 = -256;
      v22 = 128;
      v28 = 6;
      v24 = 256;
      goto LABEL_44;
    }
    if ( v16 < -112 )
    {
LABEL_12:
      result = 0;
      goto LABEL_14;
    }
    if ( (unsigned int)eshift(a1, (unsigned int)v16, v11, v12, v13, v14) == 1 )
    {
      if ( a5 )
      {
        memset(v39, 0, sizeof(v39));
        if ( a5 != 56 )
          goto LABEL_18;
        *(_WORD *)&v39[12] = 256;
        goto LABEL_65;
      }
    }
    else if ( a5 )
    {
      memset(v39, 0, sizeof(v39));
      if ( a5 != 56 )
      {
        if ( a5 <= 56 )
        {
          if ( a5 != 24 )
          {
            if ( a5 == 53 )
            {
              a2 = 1;
              *(_WORD *)&v39[12] = 2048;
LABEL_43:
              v27 = -2048;
              v22 = 1024;
              v28 = 6;
              v24 = 2048;
LABEL_44:
              v38 = v28;
              v37 = v27;
              sub_80CC40(a1);
              v20 = v37;
              v23 = v38;
              v25 = v29 & *v19;
              goto LABEL_45;
            }
            a2 = 1;
            goto LABEL_24;
          }
          a2 = 1;
          *(_WORD *)&v39[8] = 256;
LABEL_73:
          v27 = -256;
          v22 = 128;
          v28 = 4;
          v24 = 256;
          goto LABEL_44;
        }
        a2 = 1;
LABEL_31:
        if ( a5 == 64 )
        {
          v25 = *(_WORD *)(a1 + 14);
          *(_WORD *)&v39[12] = 1;
          v26 = (_WORD *)(a1 + 16);
          do
          {
            if ( *v26 )
              v25 |= 1u;
            *v26++ = 0;
          }
          while ( (_WORD *)(a1 + 22) != v26 );
          if ( v25 >= 0 )
            goto LABEL_27;
          v23 = 6;
          v22 = 0x8000;
          v24 = 1;
LABEL_50:
          if ( v25 == v22 )
          {
            if ( a2 )
            {
              if ( a3 )
                goto LABEL_55;
            }
            else if ( (*(_WORD *)(a1 + 2 * v23) & (unsigned __int16)v24) == 0 )
            {
              goto LABEL_55;
            }
          }
          v31 = (unsigned __int16 *)(a1 + 20);
          v32 = 0;
          v33 = &v39[20];
          do
          {
            v34 = *(unsigned __int16 *)v33;
            v35 = *v31;
            v33 -= 2;
            --v31;
            v36 = v32 + v35 + v34;
            v31[1] = v36;
            v32 = HIWORD(v36);
          }
          while ( v33 != &v39[2] );
LABEL_55:
          if ( a5 <= 63 && v17 <= 0 )
          {
LABEL_57:
            sub_80CCC0(a1);
            if ( *(_WORD *)(a1 + 4) )
            {
              ++v17;
              sub_80CC40(a1);
              goto LABEL_5;
            }
            goto LABEL_11;
          }
          goto LABEL_27;
        }
        *(_WORD *)&v39[18] = 1;
        if ( a5 > 63 )
        {
          v25 = *(_WORD *)(a1 + 20);
          if ( v25 >= 0 )
            goto LABEL_27;
LABEL_61:
          v23 = 9;
          v22 = 0x8000;
          v24 = 1;
          goto LABEL_50;
        }
LABEL_25:
        if ( v17 <= 0 )
        {
          sub_80CC40(a1);
          v25 = *(_WORD *)(a1 + 20);
          *(_WORD *)(a1 + 20) = 0;
          if ( v25 >= 0 )
            goto LABEL_57;
        }
        else
        {
          v25 = *(_WORD *)(a1 + 20);
          *(_WORD *)(a1 + 20) = 0;
          if ( v25 >= 0 )
          {
LABEL_27:
            if ( !*(_WORD *)(a1 + 4) )
              goto LABEL_5;
            ++v17;
            sub_80CC40(a1);
            *(_WORD *)(a1 + 20) = 0;
            if ( v17 != 0x7FFF )
            {
LABEL_6:
              if ( v17 > 0 )
              {
                *(_WORD *)(a1 + 2) = v17;
                return 1;
              }
              goto LABEL_12;
            }
            goto LABEL_29;
          }
        }
        goto LABEL_61;
      }
      a2 = 1;
      *(_WORD *)&v39[12] = 256;
      goto LABEL_65;
    }
LABEL_11:
    *(_WORD *)(a1 + 20) = 0;
    goto LABEL_12;
  }
LABEL_29:
  result = 1;
LABEL_14:
  if ( a1 )
  {
    *(_OWORD *)a1 = 0;
    *(_QWORD *)(a1 + 14) = 0;
  }
  return result;
}

