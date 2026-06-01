__int16 __fastcall sub_578150(__int64 a1, __int16 *a2, _BYTE *a3, _BYTE *a4, _BYTE *a5, __int64 a6, unsigned int *a7)
{
  unsigned int v7; // eax
  unsigned __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v12; // r10
  __int64 v13; // r9
  unsigned __int64 *v14; // rbx
  __int64 v15; // r14
  bool v16; // bp
  unsigned __int64 *v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  bool v20; // si
  __int16 v21; // dx
  __int64 v22; // rsi
  unsigned __int16 *v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  _BYTE *v26; // rcx
  unsigned int v27; // ecx
  bool v28; // zf
  unsigned int v29; // r8d
  __int64 v30; // rdx
  int v31; // r11d
  unsigned int v32; // ecx
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  unsigned __int64 *v35; // rdx
  unsigned __int64 *v36; // r11
  __int64 v37; // rdi
  __int64 v38; // r8
  _BYTE *v39; // rdi
  char v40; // bl
  _BYTE *v41; // rdi
  unsigned __int64 v42; // rdx
  __int64 v44; // [rsp+0h] [rbp-88h]
  __int64 v45; // [rsp+8h] [rbp-80h]
  unsigned __int64 *v46; // [rsp+10h] [rbp-78h]
  unsigned int v49; // [rsp+2Ch] [rbp-5Ch]

  v7 = *a7;
  *a2 = 0;
  v49 = v7;
  *a7 = 0;
  LODWORD(v8) = *(_DWORD *)(a1 + 16);
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  v9 = v8 - 1;
  if ( (_DWORD)v8 != 1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    v44 = 32LL * (unsigned int)(v8 - 2);
    v45 = 32LL * v9;
    v13 = *(_QWORD *)(a1 + 8) + v45;
    while ( 1 )
    {
      v14 = *(unsigned __int64 **)(v13 - v45 + v44);
      if ( *(_WORD *)(*v14 + 66) )
      {
        v15 = *(_QWORD *)(v12 + 128)
            + 2LL * *(unsigned __int16 *)(*v14 + 66) * (unsigned int)*(unsigned __int16 *)(v12 + 36);
        v16 = v15 != 0;
      }
      else
      {
        v16 = 0;
        v15 = 0;
      }
      v17 = *(unsigned __int64 **)v13;
      v18 = **(_QWORD **)v13;
      if ( (v18 & 1) != 0 )
        v19 = (v18 >> 3) & 1;
      else
        LOBYTE(v19) = (*(_BYTE *)(v18 + 44) & 4) != 0;
      if ( (_BYTE)v19 != 1 && v16 )
      {
        LOWORD(v8) = *(_WORD *)(v15 + 2LL * *(unsigned int *)(v13 + 24));
        if ( (_WORD)v8 )
          break;
      }
      if ( (v18 & 1) == 0 )
      {
        LOWORD(v8) = *(_WORD *)(v18 + 40);
        if ( (_WORD)v8 == 0xFFFF )
        {
LABEL_11:
          LODWORD(v8) = *(_DWORD *)(a1 + 16) - 1;
          if ( (_DWORD)v8 != v9 )
            return v8;
          goto LABEL_12;
        }
        goto LABEL_61;
      }
      LOWORD(v8) = BYTE1(v18);
LABEL_28:
      v26 = (_BYTE *)(*(_QWORD *)(v12 + 104) + 3LL * (unsigned __int16)v8);
      if ( *(_DWORD *)(a1 + 16) - 1 != v9 && *v26 )
        return v8;
      if ( v26[2] )
      {
        v27 = *a7;
        if ( *a7 < v49 )
        {
          v28 = *a3 == 0;
          *(_WORD *)(a6 + 2LL * v27) = v8;
          LOWORD(v8) = (_WORD)a7;
          v18 = *v17;
          *a7 = v27 + 1;
          if ( !v28 )
            goto LABEL_13;
          goto LABEL_33;
        }
      }
LABEL_12:
      if ( *a3 )
        goto LABEL_13;
LABEL_33:
      v8 = *v14;
      v29 = *(_DWORD *)(*v14 + 36);
      if ( (v18 & 1) != 0 )
        v30 = (v18 >> 3) & 1;
      else
        LOBYTE(v30) = (*(_BYTE *)(v18 + 44) & 4) != 0;
      v31 = *(_DWORD *)(v13 + 20);
      v32 = ((_BYTE)v30 == 0) + *(_DWORD *)(v13 + 24);
      v33 = (unsigned int)(v31 + 1);
      if ( (unsigned int)v33 >= v29 )
        goto LABEL_13;
      v46 = v14;
      v34 = v8 - 8LL * v29;
      if ( (*(_BYTE *)v14 & 1) != 0 )
        v34 = 0;
      v35 = (unsigned __int64 *)(v34 + 8 * v33);
      v36 = (unsigned __int64 *)(v34 + 8 * (v33 + -2 - v31 + v29 + 1));
      while ( 1 )
      {
        v8 = *v35;
        v38 = *v35 & 1;
        if ( (*v35 & 1) == 0 )
          break;
        if ( (v8 & 8) == 0 && v16 && (v37 = *(unsigned __int16 *)(v15 + 2LL * v32), (_WORD)v37) )
        {
          if ( (_WORD)v37 == 0xFFFF )
            goto LABEL_69;
          if ( (_WORD)v37 == 0xFFFE )
            goto LABEL_44;
LABEL_71:
          v41 = (_BYTE *)(*(_QWORD *)(v12 + 104) + 3 * v37);
          v40 = v41[1];
          if ( *v41 )
            goto LABEL_65;
          if ( !(_BYTE)v38 )
            goto LABEL_52;
LABEL_44:
          v8 = (v8 >> 3) & 1;
          v32 += (_BYTE)v8 == 0;
          if ( ++v35 == v36 )
            goto LABEL_57;
        }
        else
        {
          v39 = (_BYTE *)(*(_QWORD *)(v12 + 104) + 3LL * BYTE1(v8));
          v40 = v39[1];
          if ( !*v39 )
            goto LABEL_44;
LABEL_65:
          *a3 = 1;
          if ( *a4 )
          {
LABEL_57:
            v14 = v46;
            if ( (v18 & 1) != 0 )
              goto LABEL_14;
LABEL_58:
            v20 = (*(_BYTE *)(v18 + 44) & 4) != 0;
            goto LABEL_15;
          }
          if ( v40 )
            goto LABEL_85;
          if ( (_BYTE)v38 )
            goto LABEL_44;
LABEL_56:
          LOWORD(v8) = (*(_BYTE *)(v8 + 44) & 4) != 0;
          v32 += (_BYTE)v8 == 0;
          if ( ++v35 == v36 )
            goto LABEL_57;
        }
      }
      if ( (*(_BYTE *)(v8 + 44) & 4) != 0 || !v16 || (v37 = *(unsigned __int16 *)(v15 + 2LL * v32), !(_WORD)v37) )
        v37 = *(unsigned __int16 *)(v8 + 40);
      if ( (_WORD)v37 == 0xFFFF )
      {
LABEL_69:
        *a3 = 1;
        v14 = v46;
        if ( !*a4 )
          goto LABEL_70;
        goto LABEL_13;
      }
      if ( (_WORD)v37 != 0xFFFE )
        goto LABEL_71;
LABEL_52:
      if ( !*(_DWORD *)(v8 + 36) || !*(_DWORD *)(v8 + 48) )
        goto LABEL_56;
      *a3 = 1;
      if ( *a4 )
        goto LABEL_57;
      if ( !*(_DWORD *)(v8 + 52) )
        goto LABEL_56;
LABEL_85:
      v14 = v46;
LABEL_70:
      *a4 = 1;
LABEL_13:
      if ( (v18 & 1) == 0 )
        goto LABEL_58;
LABEL_14:
      v20 = (v18 & 8) != 0;
LABEL_15:
      if ( v20 || (v8 = *(unsigned __int16 *)(*v14 + 66), v21 = *a2, !*(_DWORD *)(v12 + 32)) )
      {
LABEL_24:
        v13 -= 32;
        if ( !--v9 )
          return v8;
      }
      else
      {
        v22 = *(_QWORD *)(v12 + 96);
        v23 = (unsigned __int16 *)(*(_QWORD *)(v12 + 88) + 4 * v8);
        v24 = *v23;
        v8 = v22 + 4 * v24;
        v25 = v22 + 4 * (v24 + v23[1]);
        if ( v21 )
          goto LABEL_20;
        if ( v8 >= v25 )
          goto LABEL_24;
        v42 = v22 + 4 * v24;
        while ( 2 )
        {
          if ( !*(_BYTE *)(v42 + 3) && *(unsigned __int8 *)(v42 + 2) == *(_DWORD *)(v13 + 24) )
          {
            v21 = *(_WORD *)v42;
            *a2 = v21;
            if ( v21 )
            {
              while ( 1 )
              {
                if ( *(_WORD *)v8 == v21 && *(_DWORD *)(v13 + 24) < (unsigned int)*(unsigned __int8 *)(v8 + 2) )
                {
                  LOWORD(v8) = (_WORD)a5;
                  *a5 = 1;
                  goto LABEL_24;
                }
                v8 += 4LL;
LABEL_20:
                if ( v8 >= v25 )
                  goto LABEL_24;
              }
            }
            v13 -= 32;
            if ( !--v9 )
              return v8;
          }
          else
          {
            v42 += 4LL;
            if ( v42 < v25 )
              continue;
            v13 -= 32;
            if ( !--v9 )
              return v8;
          }
          break;
        }
      }
    }
    if ( (_WORD)v8 == 0xFFFF )
      goto LABEL_11;
LABEL_61:
    if ( (_WORD)v8 == 0xFFFE )
      goto LABEL_12;
    goto LABEL_28;
  }
  return v8;
}
