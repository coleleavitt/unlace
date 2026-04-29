__int64 __fastcall sub_3F1CC0(__int64 a1, int a2, __int64 a3)
{
  char *v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int v9; // r9d
  char *v10; // r11
  char *v11; // r8
  _DWORD *v12; // r10
  int v13; // eax
  unsigned int v14; // esi
  int v15; // edx
  int v16; // edi
  __int64 v17; // rsi
  int v18; // edx
  int v19; // esi
  int v20; // r13d
  __int64 v21; // rdx
  int v22; // esi
  int v23; // eax
  int v24; // esi
  __int64 v25; // rdx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  __int128 v29; // [rsp+0h] [rbp-198h] BYREF
  __int64 v30; // [rsp+10h] [rbp-188h]
  __int64 v31; // [rsp+18h] [rbp-180h]
  __int64 v32; // [rsp+20h] [rbp-178h]
  char v33; // [rsp+28h] [rbp-170h] BYREF
  char v34; // [rsp+29h] [rbp-16Fh] BYREF
  _QWORD v35[6]; // [rsp+168h] [rbp-30h] BYREF

  v35[0] = __readfsqword(0x28u);
  v29 = -1;
  v5 = &v33;
  v30 = -1;
  v31 = 0;
  v32 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 40;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( v5 != (char *)v35 );
  v6 = decode_insn(&v29, a3, 0, v35, 0, 0, 0.0);
  result = 0;
  if ( v6 )
  {
    v9 = 0;
    if ( a2 == 13 )
      v9 = (unsigned __int16)(v31 - 42) <= 1u || (unsigned __int16)(v31 - 370) <= 1u;
    v10 = (char *)v35 + 1;
    v11 = &v34;
    v12 = dword_429E60;
    while ( *v11 )
    {
      switch ( *v11 )
      {
        case 1:
          v20 = *(unsigned __int16 *)(v11 + 5);
          if ( !(unsigned __int8)sub_3F1B50(a1, v20, (unsigned int)a2, v7) )
          {
            if ( (unsigned __int16)(v31 - 871) <= 1u && v20 + 1 == a2 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
              v23 = 2;
              v24 = *(_DWORD *)(v7 + 104);
              if ( (unsigned __int16)v31 >= v24 && (unsigned __int16)v31 < *(int *)(v7 + 108) )
                v23 = ((*v12 & *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * ((unsigned __int16)v31 - v24) + 8)) == 0) + 1;
              v9 |= v23;
            }
            goto LABEL_12;
          }
          LODWORD(v7) = 2;
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
          v22 = *(_DWORD *)(v21 + 104);
          if ( (unsigned __int16)v31 >= v22
            && (unsigned __int16)v31 < *(int *)(v21 + 108)
            && (*v12 & *(_DWORD *)(*(_QWORD *)(v21 + 112) + 16LL * ((unsigned __int16)v31 - v22) + 8)) != 0 )
          {
            LODWORD(v7) = 1;
          }
          v11 += 40;
          v9 |= v7;
          ++v12;
          if ( v11 != v10 )
            continue;
          return v9;
        case 3:
          if ( *(unsigned __int16 *)(v11 + 5) != a2 && (unsigned __int8)v11[31] != a2 )
            goto LABEL_12;
          goto LABEL_39;
        case 4:
          goto LABEL_11;
        case 8:
          if ( (v31 & 0x800000000LL) != 0 && (unsigned __int8)v11[31] == a2 )
            goto LABEL_12;
LABEL_11:
          if ( *(unsigned __int16 *)(v11 + 5) != a2 )
            goto LABEL_12;
          v9 |= 2u;
          if ( (v31 & 0xA000000000LL) != 0 )
            v9 = 3;
          v11 += 40;
          ++v12;
          if ( v11 == v10 )
            return v9;
          continue;
        case 9:
          if ( (unsigned __int64)a2 <= 0x1F )
          {
            LODWORD(v7) = a2;
            if ( (*(_QWORD *)(v11 + 23) & (unsigned int)(1 << a2)) != 0 )
              goto LABEL_32;
          }
          goto LABEL_12;
        case 10:
          if ( (_WORD)v31 == 93 )
            goto LABEL_82;
          if ( (unsigned __int16)v31 > 0x5Du )
          {
            if ( (_WORD)v31 != 167 )
            {
              if ( ((_WORD)v31 == 168 || (_WORD)v31 == 94) && (*(unsigned __int16 *)(v11 + 5) == a2 || v11[31] == a2) )
                v9 |= 1u;
LABEL_12:
              v11 += 40;
              ++v12;
              if ( v11 == v10 )
                return v9;
              continue;
            }
LABEL_82:
            if ( *(unsigned __int16 *)(v11 + 5) != a2 && v11[31] != a2 )
              goto LABEL_12;
LABEL_39:
            v11 += 40;
            v9 |= 2u;
            ++v12;
            if ( v11 == v10 )
              return v9;
          }
          else
          {
            if ( (unsigned __int16)v31 <= 0x5Au )
            {
              if ( (unsigned __int16)v31 > 0x58u && *(unsigned __int16 *)(v11 + 5) == a2 )
                v9 |= 1u;
              goto LABEL_12;
            }
            if ( *(unsigned __int16 *)(v11 + 5) == a2 )
              v9 |= 2u;
            v11 += 40;
            ++v12;
            if ( v11 == v10 )
              return v9;
          }
          continue;
        case 12:
          v7 = *(_QWORD *)(v11 + 7);
          v13 = *(unsigned __int16 *)(v11 + 5);
          if ( *(_DWORD *)(a1 + 80) != 8 )
          {
            v14 = a2 - 93;
            if ( (unsigned int)(v13 - 93) <= 0x1F )
            {
              v15 = 1;
              if ( v14 > 0x1F )
                goto LABEL_20;
            }
            else
            {
              if ( (unsigned int)(v13 - 61) > 0x1F )
              {
                if ( (unsigned int)(v13 - 45) > 0xF )
                  goto LABEL_12;
                v13 = 4 * v13 - 87;
                v15 = 4;
              }
              else
              {
                v13 = 2 * v13 - 29;
                v15 = 2;
              }
              if ( v14 > 0x1F )
              {
LABEL_20:
                if ( (unsigned int)(a2 - 61) <= 0x1F )
                {
                  v16 = 2 * a2 - 29;
                  v17 = 2;
                }
                else
                {
                  if ( (unsigned int)(a2 - 45) > 0xF )
                    goto LABEL_12;
                  v16 = 4 * a2 - 87;
                  v17 = 4;
                }
LABEL_60:
                v25 = (int)v7 * v15;
                if ( !v25 )
                  goto LABEL_12;
                LODWORD(v7) = v16;
                if ( v25 + v13 - 1 < (unsigned __int64)v16 || v17 + v16 - 1 < (unsigned __int64)v13 )
                  goto LABEL_12;
                goto LABEL_32;
              }
            }
            v16 = a2;
            v17 = 1;
            goto LABEL_60;
          }
          v26 = v13 - 163;
          v27 = a2 - 163;
          LODWORD(v7) = v26 + v7;
          if ( v26 > a2 - 163 )
            goto LABEL_90;
          v28 = 32;
          if ( (int)v7 <= 32 )
            v28 = v7;
          if ( v28 <= v27 )
          {
LABEL_90:
            if ( (int)v7 <= 32 )
              goto LABEL_12;
            if ( v27 < 0 )
              goto LABEL_12;
            LODWORD(v7) = v7 - 32;
            if ( (int)v7 <= v27 )
              goto LABEL_12;
          }
LABEL_32:
          v18 = 2;
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
          v19 = *(_DWORD *)(v7 + 104);
          if ( (unsigned __int16)v31 >= v19 && (unsigned __int16)v31 < *(int *)(v7 + 108) )
            v18 = ((*v12 & *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * ((unsigned __int16)v31 - v19) + 8)) == 0) + 1;
          v11 += 40;
          v9 |= v18;
          ++v12;
          if ( v11 == v10 )
            return v9;
          break;
        default:
          goto LABEL_12;
      }
    }
    return v9;
  }
  return result;
}
