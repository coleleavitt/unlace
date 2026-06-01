__int64 __fastcall sub_F61C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 *v14; // rax
  _QWORD *v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rbp
  unsigned __int64 v22; // r12
  char v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // rax
  unsigned __int64 *v27; // rax
  unsigned __int64 *v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rbp
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // r12
  char v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 *v40; // rax
  __int64 *v41; // rax
  unsigned __int16 v42; // dx
  _QWORD *v43; // rbx
  __int64 v44; // rdi
  int v45; // eax
  unsigned __int64 v46; // rax
  _QWORD *v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  _QWORD *v53; // rbx
  __int64 v54; // rdi
  int v55; // eax
  __int64 *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rbx
  char v59; // r12
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rbx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a2;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  switch ( *(_BYTE *)(v7 + 16) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xC:
    case 0xE:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2B:
    case 0x2C:
    case 0x2E:
    case 0x2F:
    case 0x35:
    case 0x38:
    case 0x39:
    case 0x3A:
      return 0;
    case 0xB:
    case 0x21:
    case 0x22:
    case 0x2A:
      return 1;
    case 0xD:
      v42 = (*(_WORD *)(v7 + 18) >> 3) & 0x1FF;
      if ( v42 <= 0x1F6u )
      {
        result = 0;
        if ( v42 > 0x1F0u )
          return (unsigned int)a2;
      }
      else
      {
        result = 0;
        if ( v42 == 504 )
          return (unsigned int)a2;
      }
      return result;
    case 0xF:
    case 0x10:
    case 0x14:
    case 0x16:
    case 0x27:
    case 0x2D:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x36:
    case 0x37:
      return (unsigned int)a2;
    case 0x30:
      v15 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, a3, v7, a5, a6);
      if ( (*((_BYTE *)v15 + 28) & 0x7Fu) - 60 <= 1 )
      {
        v16 = sub_BBF290((__int64)v15);
        v21 = (_QWORD *)v16;
        if ( !v16 )
          return 0;
        v22 = v16;
        v23 = 0;
        v24 = *(_QWORD *)(v16 + 48);
        if ( (*(_BYTE *)(v24 + 29) & 1) != 0 )
          goto LABEL_20;
        while ( 1 )
        {
LABEL_14:
          v25 = *(_QWORD *)(v22 + 64);
          if ( (v25 & 1) != 0 )
          {
            if ( v23 )
              return 0;
            v17 = v25 & 0xFFFFFFFFFFFFFFFELL;
            goto LABEL_48;
          }
          if ( (v25 & 2) != 0 )
          {
            if ( v23 )
              return 0;
            v46 = v25 & 0xFFFFFFFFFFFFFFFCLL;
            v23 = 1;
            v47 = (_QWORD *)v46;
            if ( v46 )
            {
              v48 = *(_QWORD *)(v46 + 18360);
              if ( v48 )
              {
                v49 = *(_QWORD *)(v46 + 2352);
                v47[304] += 24LL;
                v50 = (v49 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                v18 = v50 + 24;
                if ( v47[295] >= v50 + 24 && v49 )
                {
                  v47[294] = v18;
                  v51 = (v49 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  a2 = 24;
                  v51 = sub_986170((__int64)(v47 + 294), 24, 24, 3, v19, v20);
                  v50 = v51 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v51 = v48;
                v52 = v50 | 4;
                *(_DWORD *)(v51 + 8) = 0;
                *(_QWORD *)(v51 + 16) = v22;
              }
              else
              {
                v52 = v22 & 0xFFFFFFFFFFFFFFFBLL;
              }
              v17 = v52 & 0xFFFFFFFFFFFFFFFELL;
              v25 = v17 | 1;
              *(_QWORD *)(v22 + 64) = v17 | 1;
LABEL_48:
              v26 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
              v23 = 1;
              v43 = v26;
              if ( v17 )
              {
                v17 &= 4u;
                if ( (_DWORD)v17 )
                {
                  if ( v26 )
                  {
                    v44 = *v26;
                    v45 = *(_DWORD *)(*v26 + 12LL);
                    if ( *((_DWORD *)v43 + 2) != v45 )
                    {
                      *((_DWORD *)v43 + 2) = v45;
                      a2 = v22;
                      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v44 + 152LL))(v44, v22);
                    }
                    v26 = (_QWORD *)v43[2];
                    v23 = 1;
                  }
                }
              }
              goto LABEL_17;
            }
          }
          else
          {
            v26 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
            if ( v26 )
              goto LABEL_17;
          }
          v26 = nullptr;
LABEL_17:
          if ( v21 == v26 )
            return 0;
          v22 = (unsigned __int64)v26;
          if ( !v26 )
            return 0;
          v24 = v26[6];
          if ( (*(_BYTE *)(v24 + 29) & 1) != 0 )
          {
LABEL_20:
            v27 = sub_B8C3D0(v24, a2, v17, v18, v19, v20);
            v17 = *v27;
            v18 = *v27 + 8LL * *((unsigned int *)v27 + 2);
            if ( *v27 >= v18 )
            {
              for ( ; v17 != v18; v18 += 8LL )
              {
                if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) == 89 )
                  return 1;
              }
            }
            else
            {
              v28 = (unsigned __int64 *)*v27;
              while ( 1 )
              {
                v17 = *v28;
                if ( *(_WORD *)(*v28 + 36) == 89 )
                  break;
                if ( (unsigned __int64 *)v18 == ++v28 )
                  goto LABEL_14;
              }
              if ( (unsigned __int64 *)v18 != v28 )
                return 1;
            }
          }
        }
      }
      v58 = (__int64)v15;
      v59 = 0;
      do
      {
        if ( (*(_BYTE *)(v58 + 29) & 1) != 0 )
        {
          v9 = sub_B8C3D0(v58, a2, v12, v13, v10, v11);
          v12 = *v9;
          v13 = *v9 + 8LL * *((unsigned int *)v9 + 2);
          if ( *v9 >= v13 )
          {
            for ( ; v12 != v13; v13 += 8LL )
            {
              if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 89 )
                return 1;
            }
          }
          else
          {
            v14 = (__int64 *)*v9;
            while ( 1 )
            {
              v12 = *v14;
              if ( *(_WORD *)(*v14 + 36) == 89 )
                break;
              if ( (__int64 *)v13 == ++v14 )
                goto LABEL_86;
            }
            if ( (__int64 *)v13 != v14 )
              return 1;
          }
        }
LABEL_86:
        if ( (*(_BYTE *)(v58 + 96) & 3) != 0 )
        {
          if ( v59 )
            return 0;
          v59 = 1;
        }
        a2 = v58;
        v60 = sub_7052B0((__int64 *)(v58 + 96), v58, v12, v13, v10, v11);
        v58 = (__int64)v60;
      }
      while ( v15 != v60 && v60 );
      return 0;
    case 0x31:
      v29 = 0;
      v66[0] = *(_QWORD *)(v7 + 32);
      v31 = sub_F22BD0(v66, 0);
      result = v6;
      if ( !v31 )
        return result;
      v34 = *(_BYTE *)(v31 + 28) & 0x7F;
      if ( (_BYTE)v34 != 72 )
        return result;
      v35 = v31;
      v36 = 0;
      v37 = *(_QWORD *)(v31 + 48);
      if ( (*(_BYTE *)(v37 + 29) & 1) == 0 )
        goto LABEL_29;
LABEL_35:
      v40 = sub_B8C3D0(v37, v29, v34, v30, v32, v33);
      v34 = *v40;
      v30 = *v40 + 8LL * *((unsigned int *)v40 + 2);
      if ( *v40 >= v30 )
      {
        if ( v34 == v30 )
          goto LABEL_29;
        if ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 89 )
        {
          v56 = (__int64 *)(v30 + 8);
          do
          {
            v30 = (unsigned __int64)v56;
            if ( (__int64 *)v34 == v56 )
              goto LABEL_29;
            v57 = *v56++;
          }
          while ( *(_WORD *)(v57 + 36) != 89 );
        }
      }
      else
      {
        v41 = (__int64 *)*v40;
        while ( 1 )
        {
          v34 = *v41;
          if ( *(_WORD *)(*v41 + 36) == 89 )
            break;
          if ( (__int64 *)v30 == ++v41 )
            goto LABEL_29;
        }
        if ( (__int64 *)v30 == v41 )
        {
LABEL_29:
          while ( 1 )
          {
            v38 = *(_QWORD *)(v35 + 64);
            if ( (v38 & 1) != 0 )
              break;
            if ( (v38 & 2) != 0 )
            {
              if ( v36 )
                return 0;
              v61 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
              v36 = 1;
              if ( !v61 )
              {
LABEL_109:
                v39 = nullptr;
                goto LABEL_32;
              }
              v62 = v61[2295];
              if ( v62 )
              {
                v30 = v61[294];
                v61[304] += 24LL;
                v63 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                v29 = v63 + 24;
                if ( v61[295] >= v63 + 24 && v30 )
                {
                  v61[294] = v29;
                  v64 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v29 = 24;
                  v64 = sub_986170((__int64)(v61 + 294), 24, 24, 3, v32, v33);
                  v63 = v64 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v64 = v62;
                v65 = v63 | 4;
                *(_DWORD *)(v64 + 8) = 0;
                *(_QWORD *)(v64 + 16) = v35;
              }
              else
              {
                v65 = v35 & 0xFFFFFFFFFFFFFFFBLL;
              }
              v34 = v65 & 0xFFFFFFFFFFFFFFFELL;
              v38 = v34 | 1;
              *(_QWORD *)(v35 + 64) = v34 | 1;
              goto LABEL_64;
            }
            v39 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
            if ( !v39 )
              goto LABEL_109;
LABEL_32:
            if ( (_QWORD *)v31 == v39 )
              return 0;
            v35 = (unsigned __int64)v39;
            if ( !v39 )
              return 0;
            v37 = v39[6];
            if ( (*(_BYTE *)(v37 + 29) & 1) != 0 )
              goto LABEL_35;
          }
          if ( v36 )
            return 0;
          v34 = v38 & 0xFFFFFFFFFFFFFFFELL;
LABEL_64:
          v39 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF8LL);
          v36 = 1;
          v53 = v39;
          if ( v34 )
          {
            v34 &= 4u;
            if ( (_DWORD)v34 )
            {
              if ( v39 )
              {
                v54 = *v39;
                v55 = *(_DWORD *)(*v39 + 12LL);
                if ( *((_DWORD *)v53 + 2) != v55 )
                {
                  *((_DWORD *)v53 + 2) = v55;
                  v29 = v35;
                  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v54 + 152LL))(v54, v35);
                }
                v39 = (_QWORD *)v53[2];
                v36 = 1;
              }
            }
          }
          goto LABEL_32;
        }
      }
      return 1;
  }
}
