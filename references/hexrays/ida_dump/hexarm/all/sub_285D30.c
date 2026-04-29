__int64 __fastcall sub_285D30(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // edx
  unsigned int tinfo_size; // eax
  unsigned int v10; // r12d
  int v11; // r13d
  int tinfo_property; // ebx
  bool v13; // zf
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v18; // r12d
  int v19; // eax
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r15
  int v24; // r12d
  int v25; // eax
  int v26; // ecx
  _QWORD *v27; // rdx
  int v28; // r12d
  int v29; // r15d
  int v30; // eax
  int v31; // r8d
  int v32; // eax
  __int64 v33; // rax
  int v34; // r12d
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rdi
  int v39; // ecx
  __int64 v40; // rax
  int v41; // edx
  unsigned __int64 v42; // rcx
  int v43; // esi
  int v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // ecx
  int v48; // eax
  int v49; // r15d
  int v50; // r12d
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  int v55; // ebx
  int v56; // r12d
  unsigned __int64 v57; // rax
  int v58; // ecx
  unsigned __int64 v59; // rax
  int v60; // ecx
  int v61; // eax
  int v62; // ecx
  __int64 v63; // [rsp+0h] [rbp-68h]
  int v64; // [rsp+0h] [rbp-68h]
  int v65; // [rsp+0h] [rbp-68h]
  int v66; // [rsp+Ch] [rbp-5Ch]
  unsigned int v67; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v68; // [rsp+20h] [rbp-48h] BYREF
  int v69; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v70; // [rsp+28h] [rbp-40h]

  v3 = *(unsigned int *)(a1 + 8);
  v70 = __readfsqword(0x28u);
  if ( (unsigned int)v3 <= 0x31 )
  {
    v5 = 0x20000FFC60000LL;
    if ( _bittest64(&v5, v3) )
      goto LABEL_3;
  }
  if ( (unsigned __int8)sub_29D450(a1) )
  {
    if ( *(_DWORD *)(a1 + 8) != 61 || sub_255DF0(*(__int64 **)(a1 + 24), (_QWORD *)(a1 + 48)) )
    {
LABEL_3:
      LOWORD(v6) = 1;
      v7 = 0;
      return (v7 << 16) | (unsigned int)(unsigned __int16)v6;
    }
LABEL_10:
    LOWORD(v6) = 0;
LABEL_11:
    v7 = 0;
  }
  else
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0);
    v10 = tinfo_size;
    if ( tinfo_size == -1 )
    {
      v7 = 0;
      LOWORD(v6) = 8 * *(_DWORD *)(a2 + 88);
    }
    else
    {
      v11 = 8 * tinfo_size;
      tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 48), 3);
      v13 = (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0xF) == 9;
      v14 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
      if ( v13 )
      {
LABEL_16:
        LODWORD(v6) = v11;
        v18 = 0;
LABEL_17:
        switch ( v14 )
        {
          case 0LL:
          case 1LL:
          case 2LL:
            goto LABEL_10;
          case 19LL:
          case 20LL:
            LOWORD(v28) = 0;
            v31 = 0;
            v29 = 0;
LABEL_30:
            v65 = v31;
            v32 = sub_285AC0(*(_QWORD *)(a1 + 32));
            if ( *(_DWORD *)(a1 + 8) == 38 && ((__int16)v28 >= v11 || v29 >= v11) )
            {
              v7 = v65 + v32 - 1;
              LOWORD(v6) = v11;
              if ( (__int16)(v65 + v32 - 1) > (__int16)v11 )
                v7 = v11;
              goto LABEL_21;
            }
            LOWORD(v6) = v28 + 1 - v32;
            if ( (v6 & 0x8000u) != 0LL )
              LOWORD(v6) = 0;
            v7 = 0;
            break;
          case 21LL:
            if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 130LL) )
              goto LABEL_10;
            goto LABEL_35;
          case 22LL:
LABEL_35:
            v33 = *(_QWORD *)(a1 + 32);
            if ( *(_DWORD *)(v33 + 8) != 61 )
              goto LABEL_10;
            v34 = 0;
            v29 = 0;
            goto LABEL_37;
          default:
            goto LABEL_19;
        }
      }
      else
      {
        switch ( *(_DWORD *)(a1 + 8) )
        {
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
            v19 = sub_285D30(*(_QWORD *)(a1 + 24), a2);
            v20 = *(_QWORD *)(a1 + 32);
            v68 = v19;
            v21 = sub_285D30(v20, a2);
            v22 = *(_QWORD *)(a1 + 24);
            v6 = *(_QWORD *)(a1 + 32);
            v23 = *(_QWORD *)(a2 + 96);
            v69 = v21;
            v63 = v22;
            v24 = get_tinfo_size(0, *(_QWORD *)(v22 + 48), 0);
            v25 = get_tinfo_size(0, *(_QWORD *)(v6 + 48), 0);
            if ( v24 >= v25 )
              v25 = v24;
            v26 = v25;
            if ( v25 < *(unsigned __int8 *)(v23 + 130) )
              v26 = *(unsigned __int8 *)(v23 + 130);
            v66 = v26;
            sub_285A10((__int16 *)&v68, v23, (_QWORD *)(v63 + 48), v26);
            v27 = (_QWORD *)(v6 + 48);
            v28 = (__int16)v68;
            LOWORD(v6) = 0;
            v64 = HIWORD(v68);
            sub_285A10((__int16 *)&v69, v23, v27, v66);
            v29 = (__int16)v69;
            v30 = SHIWORD(v69);
            v31 = v64;
            goto LABEL_28;
          case 0x20:
          case 0x21:
            v36 = sub_285D30(*(_QWORD *)(a1 + 24), a2);
            v37 = *(_QWORD *)(a2 + 96);
            v67 = v36;
            sub_285A10((__int16 *)&v67, v37, (_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 0);
            v38 = *(_QWORD *)(a1 + 32);
            LODWORD(v6) = (unsigned __int16)v67;
            v18 = HIWORD(v67);
            if ( *(_DWORD *)(v38 + 8) != 61 || (v59 = sub_281E20(v38)) == 0 || v59 >= v11 )
            {
              v39 = *(_DWORD *)(a1 + 8);
              if ( v39 == 33 )
                goto LABEL_11;
              if ( (__int16)v6 < v11 )
                v18 = 0;
              v14 = (unsigned int)(v39 - 19);
              goto LABEL_17;
            }
            v60 = *(_DWORD *)(a1 + 8);
            if ( v60 != 33 )
            {
              if ( (__int16)v6 == v11 )
              {
                v18 += v59;
                v14 = (unsigned int)(v60 - 19);
              }
              else
              {
                LODWORD(v6) = v6 - v59;
                if ( (v6 & 0x8000u) != 0LL )
                  LODWORD(v6) = 0;
                v14 = (unsigned int)(v60 - 19);
              }
              goto LABEL_17;
            }
            LOWORD(v6) = v6 - v59;
            if ( (v6 & 0x8000u) != 0LL )
              goto LABEL_10;
LABEL_19:
            v7 = v18;
            if ( (__int16)v6 <= (__int16)v18 )
              v7 = v6;
            goto LABEL_21;
          case 0x22:
            v15 = sub_285D30(*(_QWORD *)(a1 + 24), a2);
            v16 = *(_QWORD *)(a2 + 96);
            v67 = v15;
            sub_285A10((__int16 *)&v67, v16, (_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 0);
            v17 = *(_QWORD *)(a1 + 32);
            if ( *(_DWORD *)(v17 + 8) != 61 )
            {
              v14 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
              goto LABEL_16;
            }
            v55 = (unsigned __int16)v67;
            v56 = HIWORD(v67);
            v57 = sub_281E20(v17);
            v58 = *(_DWORD *)(a1 + 8);
            if ( v57 )
            {
              if ( v57 < v11 )
              {
                LODWORD(v6) = v57 + v55;
                if ( (__int16)v6 <= v11 )
                {
                  v18 = v56 - v57;
                  v14 = (unsigned int)(v58 - 19);
                  goto LABEL_17;
                }
              }
            }
            v14 = (unsigned int)(v58 - 19);
            goto LABEL_16;
          case 0x30:
            v67 = sub_285D30(*(_QWORD *)(a1 + 24), a2);
            v18 = HIWORD(v67);
            v45 = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 0);
            if ( (__int16)v67 <= v11 )
            {
              v54 = 8 * v45;
              if ( (__int16)v67 >= v54 && v11 > v54 )
              {
                v61 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 3);
                v62 = *(_DWORD *)(a1 + 8);
                if ( v61 == 1 )
                {
                  LODWORD(v6) = v11;
                  v14 = (unsigned int)(v62 - 19);
                  v18 = v18 - v67 + v11 + 1;
                }
                else
                {
                  LODWORD(v6) = v67;
                  v14 = (unsigned int)(v62 - 19);
                }
              }
              else
              {
                LODWORD(v6) = v67;
                v14 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
              }
            }
            else
            {
              LODWORD(v6) = v11;
              v18 = v18 - v67 + v11;
              v14 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
            }
            goto LABEL_17;
          case 0x3D:
            v40 = sub_32AEF0(**(_QWORD **)(a1 + 24), v10, tinfo_property != 2);
            if ( v11 <= 0 || !v40 )
            {
              v30 = 0;
              v29 = 0;
              v31 = 0;
              v28 = 0;
              LOWORD(v6) = 0;
              goto LABEL_28;
            }
            v41 = 0;
            break;
          default:
            goto LABEL_16;
        }
        while ( 1 )
        {
          if ( v41 + 1 == v11 )
          {
            LODWORD(v6) = v11;
            goto LABEL_52;
          }
          if ( v41 == 63 )
          {
            LOBYTE(v41) = 63;
            LODWORD(v6) = 64;
            goto LABEL_52;
          }
          if ( (v40 & -(1LL << ((unsigned __int8)v41 + 1))) == 0 )
            break;
          ++v41;
        }
        LODWORD(v6) = v41 + 1;
LABEL_52:
        v42 = 1LL << v41;
        if ( ((1LL << v41) & v40) != 0 )
        {
          v43 = 1;
          do
          {
            v42 >>= 1;
            v44 = v43++;
          }
          while ( (v42 & v40) != 0 );
          v18 = v44;
          v14 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19);
          goto LABEL_17;
        }
        v30 = 0;
        v29 = 0;
        v31 = 0;
        v28 = 0;
LABEL_28:
        switch ( *(_DWORD *)(a1 + 8) )
        {
          case 0x13:
          case 0x14:
            LODWORD(v6) = v28;
            if ( (__int16)v29 >= (__int16)v28 )
              LODWORD(v6) = v29;
            v46 = (__int16)v28 - (__int16)v31;
            v47 = (__int16)v29 - v30;
            v48 = (__int16)v28;
            if ( v46 < v47 )
              v46 = v47;
            if ( (__int16)v29 <= (__int16)v28 )
              v48 = v29;
            if ( v46 >= v48 )
              v48 = v46;
            v7 = v6 - v48;
            if ( (__int16)(v6 - v48) > (__int16)v6 )
              v7 = v6;
            goto LABEL_21;
          case 0x15:
            LODWORD(v6) = v28;
            if ( (__int16)v29 <= (__int16)v28 )
              LODWORD(v6) = v29;
            v50 = v28 - (__int16)v31;
            v51 = v29 - v30;
            if ( v50 >= v51 )
              v51 = v50;
            if ( v51 < (__int16)v6 )
              v51 = (__int16)v6;
            v7 = v6 - v51;
            if ( (__int16)(v6 - v51) > (__int16)v6 )
              v7 = v6;
            goto LABEL_21;
          case 0x26:
          case 0x27:
            goto LABEL_30;
          case 0x28:
            v52 = 8 * *(unsigned __int8 *)(*(_QWORD *)(a2 + 96) + 130LL);
            if ( v52 > (__int16)v28 && v52 > (__int16)v29 )
              goto LABEL_69;
            LODWORD(v6) = v28;
            v53 = (__int16)v29;
            if ( (__int16)v29 >= (__int16)v28 )
              LODWORD(v6) = v29;
            if ( (__int16)v28 - (__int16)v31 <= (__int16)v29 )
              v53 = (__int16)v28 - (__int16)v31;
            v7 = v6 - v53;
            if ( (__int16)(v6 - v53) > (__int16)v6 )
              v7 = v6;
            goto LABEL_21;
          case 0x29:
LABEL_69:
            if ( (__int16)v29 > (__int16)v28 )
            {
              v49 = v29 - v30;
              LOWORD(v6) = v28;
              if ( v49 < (__int16)v28 - (__int16)v31 )
                v49 = (__int16)v28 - (__int16)v31;
              v7 = v28 - v49;
              if ( (__int16)(v28 - v49) > (__int16)v28 )
                v7 = v28;
              goto LABEL_21;
            }
            if ( (_WORD)v29 == (_WORD)v28 )
            {
              if ( (__int16)v31 <= (__int16)v30 )
                v30 = v31;
              v34 = v30;
              v33 = *(_QWORD *)(a1 + 32);
              if ( *(_DWORD *)(v33 + 8) != 61 )
              {
                v7 = v34;
                LOWORD(v6) = v29;
                if ( (__int16)v34 > (__int16)v29 )
                  v7 = v29;
                goto LABEL_21;
              }
            }
            else
            {
              v33 = *(_QWORD *)(a1 + 32);
              if ( *(_DWORD *)(v33 + 8) != 61 )
              {
                LOWORD(v6) = v29;
                v7 = 0;
                return (v7 << 16) | (unsigned int)(unsigned __int16)v6;
              }
              v34 = 0;
            }
            break;
          default:
            goto LABEL_11;
        }
LABEL_37:
        v35 = sub_255DF0(*(__int64 **)(v33 + 24), (_QWORD *)(v33 + 48));
        if ( (v35 & (v35 - 1)) != 0 )
        {
          v7 = v34;
          LOWORD(v6) = v29;
          if ( (__int16)v29 <= (__int16)v34 )
            v7 = v29;
        }
        else
        {
          LOWORD(v6) = v29 - 1;
          v7 = v34;
          if ( (__int16)(v29 - 1) <= (__int16)v34 )
            v7 = v29 - 1;
        }
LABEL_21:
        if ( (__int16)v7 <= 1 )
          v7 = 0;
      }
    }
  }
  return (v7 << 16) | (unsigned int)(unsigned __int16)v6;
}
