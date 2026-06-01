/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C87C0
// Address: 0x080C87C0

//----- (080C87C0) --------------------------------------------------------
int __cdecl sub_80C87C0(int a1, char a2, char a3, int a4, int a5)
{
  __int16 v5; // di
  int result; // eax
  int v7; // edi
  _WORD *v8; // ebx
  int v9; // ecx
  __int16 v10; // dx
  _WORD *v11; // eax
  int v12; // ecx
  int v13; // ebx
  __int16 v14; // dx
  _WORD *v15; // eax
  unsigned __int16 *v16; // ecx
  unsigned int v17; // ebx
  _BYTE *v18; // edx
  int v19; // eax
  int v20; // edi
  unsigned int v21; // eax
  int v23; // [esp+0h] [ebp-54h]
  __int16 v24; // [esp+6h] [ebp-4Eh]
  __int16 v25; // [esp+8h] [ebp-4Ch]
  __int16 v26; // [esp+Ah] [ebp-4Ah]
  int v27; // [esp+Ch] [ebp-48h]
  int v28; // [esp+10h] [ebp-44h]
  __int16 v29; // [esp+14h] [ebp-40h]
  _BYTE v30[22]; // [esp+1Eh] [ebp-36h] BYREF
  unsigned int v31; // [esp+34h] [ebp-20h]

  v5 = *(_WORD *)(a1 + 2);
  v31 = __readgsdword(0x14u);
  result = sub_80C7F40(a1);
  if ( result > 112 )
  {
    LOBYTE(result) = v5 != 0;
    goto LABEL_14;
  }
  v7 = a4 - result;
  if ( a4 - result <= 32766 )
  {
    if ( v7 >= 0 )
    {
      if ( !a5 )
      {
LABEL_5:
        *(_WORD *)(a1 + 20) = 0;
        goto LABEL_6;
      }
      memset(v30, 0, sizeof(v30));
      if ( a5 != 56 )
      {
LABEL_19:
        if ( a5 <= 56 )
        {
          if ( a5 != 24 )
          {
            if ( a5 == 53 )
            {
              *(_WORD *)&v30[12] = 2048;
              if ( v7 > 0 )
              {
                v8 = (_WORD *)(a1 + 12);
                v9 = 7;
                v25 = -2048;
                v24 = 1024;
                v10 = *(_WORD *)(a1 + 12) & 0x7FF;
                v27 = 6;
                v26 = 2048;
LABEL_46:
                v15 = (_WORD *)(a1 + 2 * v9);
                do
                {
                  if ( *v15 )
                    v10 |= 1u;
                  *v15++ = 0;
                }
                while ( (_WORD *)(a1 + 22) != v15 );
                *v8 &= v25;
                if ( ((unsigned __int16)v10 & (unsigned __int16)v24) == 0 )
                  goto LABEL_57;
                goto LABEL_51;
              }
              goto LABEL_44;
            }
LABEL_25:
            *(_WORD *)&v30[18] = 1;
            goto LABEL_26;
          }
          *(_WORD *)&v30[8] = 256;
          if ( v7 > 0 )
          {
            v10 = *(unsigned __int8 *)(a1 + 8);
            v8 = (_WORD *)(a1 + 8);
            v9 = 5;
            v25 = -256;
            v24 = 128;
            v27 = 4;
            v26 = 256;
            goto LABEL_46;
          }
          goto LABEL_75;
        }
        goto LABEL_32;
      }
      *(_WORD *)&v30[12] = 256;
      if ( v7 )
      {
        v10 = *(unsigned __int8 *)(a1 + 12);
        v8 = (_WORD *)(a1 + 12);
        v24 = 128;
        v25 = -256;
        v9 = 7;
        v27 = 6;
        v26 = 256;
        goto LABEL_46;
      }
LABEL_67:
      v12 = 7;
      v13 = 12;
      v27 = 6;
      v25 = -256;
      v14 = 255;
      v24 = 128;
      v26 = 256;
      goto LABEL_45;
    }
    if ( v7 < -112 )
    {
LABEL_12:
      result = 0;
      goto LABEL_14;
    }
    if ( sub_80C8520(a1, a4 - result) == 1 )
    {
      if ( a5 )
      {
        memset(v30, 0, sizeof(v30));
        if ( a5 != 56 )
          goto LABEL_19;
        *(_WORD *)&v30[12] = 256;
        goto LABEL_67;
      }
    }
    else if ( a5 )
    {
      memset(v30, 0, sizeof(v30));
      if ( a5 != 56 )
      {
        if ( a5 <= 56 )
        {
          if ( a5 != 24 )
          {
            if ( a5 == 53 )
            {
              a2 = 1;
              *(_WORD *)&v30[12] = 2048;
LABEL_44:
              v12 = 7;
              v13 = 12;
              v27 = 6;
              v25 = -2048;
              v14 = 2047;
              v24 = 1024;
              v26 = 2048;
LABEL_45:
              v29 = v14;
              v8 = (_WORD *)(a1 + v13);
              v28 = v12;
              sub_80C7E40(a1);
              v9 = v28;
              v10 = *v8 & v29;
              goto LABEL_46;
            }
            a2 = 1;
            goto LABEL_25;
          }
          a2 = 1;
          *(_WORD *)&v30[8] = 256;
LABEL_75:
          v12 = 5;
          v13 = 8;
          v27 = 4;
          v25 = -256;
          v14 = 255;
          v24 = 128;
          v26 = 256;
          goto LABEL_45;
        }
        a2 = 1;
LABEL_32:
        if ( a5 == 64 )
        {
          v10 = *(_WORD *)(a1 + 14);
          *(_WORD *)&v30[12] = 1;
          v11 = (_WORD *)(a1 + 16);
          do
          {
            if ( *v11 )
              v10 |= 1u;
            *v11++ = 0;
          }
          while ( v11 != (_WORD *)(a1 + 22) );
          if ( v10 >= 0 )
            goto LABEL_28;
          v27 = 6;
          v24 = 0x8000;
          v26 = 1;
LABEL_51:
          if ( v10 == v24 )
          {
            if ( a2 )
            {
              if ( a3 )
                goto LABEL_57;
            }
            else if ( (*(_WORD *)(a1 + 2 * v27) & (unsigned __int16)v26) == 0 )
            {
              goto LABEL_57;
            }
          }
          v23 = v7;
          v16 = (unsigned __int16 *)(a1 + 20);
          v17 = 0;
          v18 = &v30[20];
          do
          {
            v19 = *(unsigned __int16 *)v18;
            v20 = *v16;
            v18 -= 2;
            --v16;
            v21 = v17 + v20 + v19;
            v16[1] = v21;
            v17 = HIWORD(v21);
          }
          while ( v18 != &v30[2] );
          v7 = v23;
LABEL_57:
          if ( a5 <= 63 && v7 <= 0 )
          {
LABEL_59:
            sub_80C7EC0(a1);
            if ( *(_WORD *)(a1 + 4) )
            {
              ++v7;
              sub_80C7E40(a1);
              goto LABEL_5;
            }
            goto LABEL_11;
          }
          goto LABEL_28;
        }
        *(_WORD *)&v30[18] = 1;
        if ( a5 > 63 )
        {
          v10 = *(_WORD *)(a1 + 20);
          if ( v10 >= 0 )
            goto LABEL_28;
LABEL_63:
          v27 = 9;
          v24 = 0x8000;
          v26 = 1;
          goto LABEL_51;
        }
LABEL_26:
        if ( v7 <= 0 )
        {
          sub_80C7E40(a1);
          v10 = *(_WORD *)(a1 + 20);
          *(_WORD *)(a1 + 20) = 0;
          if ( v10 >= 0 )
            goto LABEL_59;
        }
        else
        {
          v10 = *(_WORD *)(a1 + 20);
          *(_WORD *)(a1 + 20) = 0;
          if ( v10 >= 0 )
          {
LABEL_28:
            if ( !*(_WORD *)(a1 + 4) )
              goto LABEL_5;
            ++v7;
            sub_80C7E40(a1);
            *(_WORD *)(a1 + 20) = 0;
            if ( v7 != 0x7FFF )
            {
LABEL_6:
              if ( v7 > 0 )
              {
                *(_WORD *)(a1 + 2) = v7;
                result = 1;
                goto LABEL_16;
              }
              goto LABEL_12;
            }
            goto LABEL_30;
          }
        }
        goto LABEL_63;
      }
      a2 = 1;
      *(_WORD *)&v30[12] = 256;
      goto LABEL_67;
    }
LABEL_11:
    *(_WORD *)(a1 + 20) = 0;
    goto LABEL_12;
  }
LABEL_30:
  result = 1;
LABEL_14:
  if ( a1 )
  {
    *(_OWORD *)a1 = 0;
    *(_OWORD *)(a1 + 6) = 0;
  }
LABEL_16:
  if ( v31 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
