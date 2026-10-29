/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89C60
// Address: 0x0000000000089C60

//----- (0000000000089C60) ----------------------------------------------------
unsigned __int64 __fastcall sub_89C60(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  int v5; // eax
  _BOOL8 v6; // rcx
  int v7; // eax
  _BOOL8 v8; // rcx
  int v9; // eax
  _BOOL8 v10; // rcx
  int v11; // eax
  int v12; // ecx
  _BOOL8 v13; // rcx
  __int64 v14; // rax
  char v16[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h]
  char v18[8]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v19; // [rsp+20h] [rbp-48h]
  char v20[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  sub_88D20(a1, a2, a3, a4, a5);
  while ( 1 )
  {
    v20[0] = 1;
    v21 = 0;
    v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
    if ( v5 != 8509 )
      break;
    sub_88D20(a1, (__int64)v20, 1, a4, a5);
    v6 = *(_QWORD *)(a2 + 8) != v21;
LABEL_2:
    *(_QWORD *)(a2 + 8) = v6;
    *(_BYTE *)a2 = 0;
  }
  if ( (unsigned __int16)v5 == 15677 )
  {
    sub_88D20(a1, (__int64)v20, 1, a4, a5);
    v6 = *(_QWORD *)(a2 + 8) == v21;
    goto LABEL_2;
  }
  if ( (unsigned __int16)v5 != 38 )
    goto LABEL_15;
  while ( 2 )
  {
    v18[0] = 1;
    v19 = 0;
    sub_88D20(a1, (__int64)v18, 1, a4, a5);
    while ( 2 )
    {
      v20[0] = 1;
      v21 = 0;
      v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
      if ( v7 == 8509 )
      {
        sub_88D20(a1, (__int64)v20, 1, a4, a5);
        v8 = v19 != v21;
        goto LABEL_9;
      }
      if ( (unsigned __int16)v7 == 15677 )
      {
        sub_88D20(a1, (__int64)v20, 1, a4, a5);
        v8 = v19 == v21;
LABEL_9:
        v19 = v8;
        v18[0] = 0;
        continue;
      }
      break;
    }
    *(_QWORD *)(a2 + 8) &= v19;
    v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
    if ( v5 == 38 )
      continue;
    break;
  }
LABEL_15:
  if ( (unsigned __int16)v5 == 94 )
  {
LABEL_16:
    v16[0] = 1;
    v17 = 0;
    sub_88D20(a1, (__int64)v16, 1, a4, a5);
    while ( 1 )
    {
      v20[0] = 1;
      v21 = 0;
      v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
      if ( v9 == 8509 )
      {
        sub_88D20(a1, (__int64)v20, 1, a4, a5);
        v10 = v17 != v21;
      }
      else
      {
        if ( (unsigned __int16)v9 != 15677 )
        {
          if ( (unsigned __int16)v9 != 38 )
          {
            v14 = v17;
            goto LABEL_32;
          }
          while ( 2 )
          {
            v18[0] = 1;
            v19 = 0;
            sub_88D20(a1, (__int64)v18, 1, a4, a5);
            while ( 2 )
            {
              v20[0] = 1;
              v21 = 0;
              v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
              if ( v11 == 8509 )
              {
                sub_88D20(a1, (__int64)v20, 1, a4, a5);
                v13 = v19 != v21;
                goto LABEL_24;
              }
              v12 = (unsigned __int16)v11;
              if ( (unsigned __int16)v11 == 15677 )
              {
                sub_88D20(a1, (__int64)v20, 1, a4, a5);
                v13 = v19 == v21;
LABEL_24:
                v19 = v13;
                v18[0] = 0;
                continue;
              }
              break;
            }
            v14 = v17 & v19;
            v17 &= v19;
            if ( v12 == 38 )
              continue;
            break;
          }
LABEL_32:
          *(_QWORD *)(a2 + 8) ^= v14;
          if ( *(_WORD *)(*(_QWORD *)(a1 + 432) + 24LL) != 94 )
            return __readfsqword(0x28u);
          goto LABEL_16;
        }
        sub_88D20(a1, (__int64)v20, 1, a4, a5);
        v10 = v17 == v21;
      }
      v17 = v10;
      v16[0] = 0;
    }
  }
  return __readfsqword(0x28u);
}
