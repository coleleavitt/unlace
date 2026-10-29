__int64 __fastcall sub_2218B10(unsigned __int64 *a1, unsigned __int64 a2, _WORD **a3, unsigned __int64 a4, int a5)
{
  _WORD *v5; // r11
  unsigned __int8 *v6; // rdx
  unsigned __int8 v7; // al
  unsigned __int16 v8; // di
  __int64 v9; // r12
  __int64 v10; // r10
  int v11; // ebp
  int v12; // r9d
  unsigned __int8 *v13; // rbx
  __int64 result; // rax
  __int64 v15; // kr00_8
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  unsigned __int8 *v20; // rax
  int v21; // r10d
  int v22; // r9d
  unsigned __int8 *v23; // rbx
  int v24; // r9d
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // r10d
  unsigned int v30; // eax
  unsigned __int8 v31; // r9

  v5 = *a3;
  v6 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
  {
LABEL_36:
    result = 0;
  }
  else
  {
    v7 = *v6;
    v8 = byte_26F8360[*v6];
    v9 = v8;
    v10 = v8;
    if ( v8 < (__int64)(a2 - (_QWORD)v6) )
    {
      v11 = *v6;
      do
      {
        v12 = v8 + 1;
        v13 = &v6[v12];
        if ( v8 != 1 )
        {
          if ( v12 <= 2 )
          {
            if ( v8 )
              goto LABEL_9;
            goto LABEL_12;
          }
          if ( v8 != 2 )
          {
            if ( v8 != 3 || (unsigned __int8)(*(v13 - 1) + 0x80) > 0x3Fu )
            {
LABEL_9:
              result = 3;
              goto LABEL_10;
            }
            --v13;
          }
          if ( (unsigned __int8)(*(v13 - 1) + 0x80) > 0x3Fu )
            goto LABEL_9;
          --v13;
        }
        v31 = *(v13 - 1);
        if ( (unsigned __int8)(v31 + 0x80) > 0x3Fu )
          goto LABEL_9;
        if ( v7 == 0xED )
        {
          if ( v31 > 0x9Fu )
            goto LABEL_9;
          goto LABEL_14;
        }
        if ( v7 <= 0xEDu )
        {
          if ( v7 == 0xE0 )
          {
            if ( v31 <= 0x9Fu )
              goto LABEL_9;
LABEL_14:
            v15 = v10;
            goto LABEL_15;
          }
LABEL_12:
          if ( (unsigned __int8)(v7 + 0x80) <= 0x41u || v7 > 0xF4u )
            goto LABEL_9;
          goto LABEL_14;
        }
        if ( v7 == 0xF0 )
        {
          if ( v31 <= 0x8Fu )
            goto LABEL_9;
          goto LABEL_14;
        }
        if ( v7 != 0xF4 )
          goto LABEL_12;
        if ( v31 > 0x8Fu )
          goto LABEL_9;
        v15 = v10;
        if ( (unsigned __int8)v10 > 5u )
        {
LABEL_50:
          v27 = 0;
          goto LABEL_22;
        }
LABEL_15:
        switch ( v15 )
        {
          case 0LL:
            v26 = 0;
            goto LABEL_21;
          case 1LL:
            v23 = v6;
            v24 = 0;
            goto LABEL_20;
          case 2LL:
            v20 = v6;
            v21 = 0;
            goto LABEL_19;
          case 3LL:
            v18 = 0;
            goto LABEL_18;
          case 4LL:
            v16 = 0;
            goto LABEL_17;
          case 5LL:
            v29 = v11;
            v11 = *++v6;
            v16 = v29 << 6;
LABEL_17:
            v17 = v11 + v16;
            v11 = *++v6;
            v18 = v17 << 6;
LABEL_18:
            v19 = v11 + v18;
            v11 = v6[1];
            v20 = v6 + 1;
            v21 = v19 << 6;
LABEL_19:
            v22 = v11 + v21;
            v11 = v20[1];
            v23 = v20 + 1;
            v24 = v22 << 6;
LABEL_20:
            v25 = v11 + v24;
            v11 = v23[1];
            v6 = v23 + 1;
            v26 = v25 << 6;
LABEL_21:
            ++v6;
            v27 = v11 + v26;
            break;
          default:
            goto LABEL_50;
        }
LABEL_22:
        v28 = v27 - dword_26F8330[v8];
        if ( a4 <= (unsigned __int64)v5 )
          goto LABEL_54;
        if ( v28 > 0xFFFF )
        {
          if ( v28 <= 0x10FFFF )
          {
            if ( a4 <= (unsigned __int64)(v5 + 1) )
            {
LABEL_54:
              result = 2;
              v6 += ~v9;
              goto LABEL_10;
            }
            v30 = v28 - (_DWORD)&stru_10000;
            v5 += 2;
            *(v5 - 1) = (v30 & 0x3FF) - 9216;
            *(v5 - 2) = (v30 >> 10) - 10240;
            goto LABEL_26;
          }
        }
        else if ( v28 - 55296 > 0x7FF )
        {
          *v5++ = v28;
LABEL_26:
          if ( (unsigned __int64)v6 >= a2 )
            goto LABEL_36;
          goto LABEL_27;
        }
        if ( !a5 )
        {
          result = 3;
          v6 += ~v9;
          goto LABEL_10;
        }
        *v5++ = -3;
        if ( (unsigned __int64)v6 >= a2 )
          goto LABEL_36;
LABEL_27:
        v11 = *v6;
        v7 = *v6;
        v8 = byte_26F8360[*v6];
        v9 = v8;
        v10 = v8;
      }
      while ( v8 < (__int64)(a2 - (_QWORD)v6) );
    }
    result = 1;
  }
LABEL_10:
  *a1 = (unsigned __int64)v6;
  *a3 = v5;
  return result;
}
