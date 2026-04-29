__int64 __fastcall sub_3F2040(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rax
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  char *v14; // rbx
  _DWORD *v15; // r13
  unsigned int v16; // r14d
  char *v17; // rcx
  unsigned __int8 v18; // al
  int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  char v22; // al
  __int16 v23; // si
  int v24; // esi
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // [rsp+Ch] [rbp-1B4h]
  char *v28; // [rsp+10h] [rbp-1B0h]
  __int128 v29; // [rsp+18h] [rbp-1A8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-198h]
  __int64 v31; // [rsp+30h] [rbp-190h]
  __int64 v32; // [rsp+38h] [rbp-188h]
  char v33; // [rsp+40h] [rbp-180h] BYREF
  char v34; // [rsp+41h] [rbp-17Fh] BYREF
  unsigned __int16 v35; // [rsp+46h] [rbp-17Ah]
  char v36; // [rsp+69h] [rbp-157h]
  char v37; // [rsp+129h] [rbp-97h]
  _QWORD v38[8]; // [rsp+180h] [rbp-40h] BYREF

  v7 = &v33;
  v38[0] = __readfsqword(0x28u);
  v29 = -1;
  v30 = -1;
  v31 = 0;
  v32 = 0;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 40;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *((_QWORD *)v7 - 2) = 0;
  }
  while ( v7 != (char *)v38 );
  v9 = decode_insn(&v29, a3, v38, 0, 0, a6, 0.0);
  result = 0;
  if ( !v9 )
    return result;
  v13 = (unsigned __int16)v31;
  if ( (_WORD)v31 == 129 )
    return result;
  v14 = &v34;
  v15 = dword_42EDA0;
  v16 = 0;
  v17 = (char *)v38 + 1;
  while ( 1 )
  {
    v18 = *v14;
    if ( !*v14 )
      break;
    if ( v18 == 2 )
    {
      if ( !v14[31] )
        goto LABEL_12;
      goto LABEL_27;
    }
    if ( v18 > 2u )
    {
      if ( (unsigned __int8)(v18 - 3) > 1u )
        goto LABEL_12;
      if ( v14[31] )
      {
LABEL_27:
        v22 = v14[32];
        v11 = v22 & 7;
        if ( (v31 & 0x1000000000LL) != 0 )
        {
          v10 = BYTE1(v32);
          if ( (v32 & 0x100) != 0 )
          {
            if ( a2 == (v22 & 7 | 8) )
              goto LABEL_24;
          }
          else if ( a2 == (_DWORD)v11 )
          {
            goto LABEL_24;
          }
          v23 = (v22 >> 3) & 7;
          LOWORD(v21) = v23 | 8;
          v10 = BYTE1(v32) & 2;
          if ( (v32 & 0x200) == 0 )
            LOWORD(v21) = v23;
          if ( (unsigned __int16)v13 <= 0x5C0u )
          {
LABEL_33:
            if ( (unsigned __int16)v13 <= 0x5BCu )
            {
              if ( (unsigned __int16)v13 > 0x378u )
              {
                if ( (unsigned __int16)(v13 - 993) > 3u )
                {
                  v21 = (__int16)v21;
                  goto LABEL_23;
                }
              }
              else if ( (unsigned __int16)v13 <= 0x374u )
              {
                goto LABEL_36;
              }
            }
            goto LABEL_41;
          }
        }
        else
        {
          LOWORD(v21) = (v22 >> 3) & 7;
          if ( a2 == (_DWORD)v11 )
            goto LABEL_24;
          if ( (unsigned __int16)v13 <= 0x5C0u )
            goto LABEL_33;
        }
        if ( (unsigned __int16)v13 > 0x5F1u )
        {
          if ( (unsigned __int16)(v13 - 1532) > 0xFu )
          {
            v21 = (__int16)v21;
            goto LABEL_23;
          }
        }
        else if ( (unsigned __int16)v13 <= 0x5EDu )
        {
LABEL_36:
          v21 = (__int16)v21;
          goto LABEL_23;
        }
LABEL_41:
        v28 = v17;
        v27 = v13;
        if ( (v37 & 0x10) != 0 )
          LOWORD(v21) = v21 | 0x10;
        LOWORD(v21) = sub_3F1D70((__int64)&v29, (__int16)v21);
        v17 = v28;
        v13 = v27;
        v21 = (__int16)v21;
LABEL_23:
        if ( a2 == v21 )
          goto LABEL_24;
LABEL_12:
        v14 += 40;
        ++v15;
        if ( v14 == v17 )
          break;
      }
      else
      {
        if ( a2 != *(unsigned __int16 *)(v14 + 5) )
        {
          v21 = 4;
          goto LABEL_23;
        }
LABEL_24:
        v14 += 40;
        v16 |= 2u;
        ++v15;
        if ( v14 == v17 )
          break;
      }
    }
    else
    {
      v19 = *(unsigned __int16 *)(v14 + 5);
      v20 = (unsigned int)(v19 - 16);
      if ( (unsigned int)v20 <= 0xB )
        v19 = dword_434B40[v20];
      if ( a2 != v19 )
        goto LABEL_12;
      v24 = 2;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
      v11 = *(unsigned int *)(v10 + 104);
      if ( (unsigned __int16)v13 >= (int)v11
        && (unsigned __int16)v13 < *(int *)(v10 + 108)
        && (*v15 & *(_DWORD *)(*(_QWORD *)(v10 + 112) + 16LL * ((unsigned __int16)v13 - (int)v11) + 8)) != 0 )
      {
        v24 = 1;
      }
      v14 += 40;
      v16 |= v24;
      ++v15;
      if ( v14 == v17 )
        break;
    }
  }
  if ( v16 == 3 )
  {
    if ( (_WORD)v13 == 7 || (result = 3, (_WORD)v13 == 131) )
    {
      result = 3;
      if ( v34 == 1 )
      {
        LOBYTE(result) = v36 != 1;
        return (unsigned int)(result + 2);
      }
    }
  }
  else
  {
    result = v16;
    if ( !v16 )
    {
      if ( ((_WORD)v13 == 85 || (_WORD)v13 == 79)
        && decode_prev_insn(&v29, a3, v13, v17, v10, v11, 0.0) != -1
        && ((_WORD)v31 == 131 || (_WORD)v31 == 216 || (_WORD)v31 == 7)
        && v34 == 1 )
      {
        v25 = v35;
        v26 = (unsigned int)v35 - 16;
        if ( (unsigned int)v26 <= 0xB )
          v25 = dword_434B40[v26];
        LOBYTE(v25) = a2 == v25;
        return (unsigned int)(2 * v25);
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
