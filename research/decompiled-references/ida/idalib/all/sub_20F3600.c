__int64 __fastcall sub_20F3600(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  __int64 v3; // rbx
  int v4; // r8d
  __int64 v5; // rsi
  __int64 v6; // r11
  __int64 i; // rcx
  __int64 j; // r13
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 *v18; // r12
  unsigned int v19; // ebp
  __int64 v20; // rdi
  unsigned int v21; // r12d
  __int64 *v22; // rbx
  __int64 v23; // rdi
  unsigned int v25; // ebp
  __int64 v26; // r14
  __int64 v27; // rsi
  int v28; // edi
  __int64 v29; // rdx
  int v30; // ecx
  void *v31; // rsi
  unsigned int v32; // ebp
  unsigned int v33; // edi
  unsigned int v34; // esi
  int v35; // ebp
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r10
  __int64 v39; // rdx
  int v42; // eax
  int v43; // eax
  int v44; // r10d
  unsigned int v45; // edi
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  char v49; // al
  int v50; // edx
  __int64 v51; // rax
  int v52; // eax
  __int64 *v53; // r12
  unsigned int v54; // ebp
  __int64 v55; // rdi
  __int64 *v56; // r14
  unsigned int v57; // r12d
  __int64 v58; // rdi
  int v59; // r8d
  int v60; // eax
  unsigned int v61; // [rsp+Ch] [rbp-FCh]
  __int64 v62; // [rsp+10h] [rbp-F8h]
  unsigned int v63; // [rsp+20h] [rbp-E8h]
  __int64 v64; // [rsp+20h] [rbp-E8h]
  __int64 v67; // [rsp+38h] [rbp-D0h]
  __int64 v68; // [rsp+40h] [rbp-C8h]
  int v69; // [rsp+48h] [rbp-C0h]
  unsigned int v70; // [rsp+4Ch] [rbp-BCh]
  __int64 v71; // [rsp+50h] [rbp-B8h]
  __int64 *v72; // [rsp+58h] [rbp-B0h]
  __int64 *v73; // [rsp+60h] [rbp-A8h]
  __int64 *v74; // [rsp+68h] [rbp-A0h]
  void *v75; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v76; // [rsp+78h] [rbp-90h]
  void *v77; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v78; // [rsp+88h] [rbp-80h]
  void *v79; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v80; // [rsp+98h] [rbp-70h]
  void *ptr[2]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v82[88]; // [rsp+B0h] [rbp-58h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v76 = 64;
  v75 = nullptr;
  v69 = v2;
  v70 = -1;
  if ( !v2 )
    return v70;
  v62 = 0;
  v61 = 0;
  v68 = 0;
  do
  {
    v3 = *(_QWORD *)a1 + v62;
    ptr[0] = v82;
    ptr[1] = (void *)0x800000000LL;
    if ( (unsigned int)sub_20F11A0((_DWORD *)v3, a2, (__int64)ptr, 0) )
    {
      v4 = *(_DWORD *)(v3 + 64);
      v5 = *(unsigned int *)(v3 + 224);
      v78 = 64;
      v77 = &dword_0 + 1;
      if ( !v4 )
        goto LABEL_11;
      v6 = *(_QWORD *)v3;
      for ( i = 0; ; ++i )
      {
        _RDX = *(_QWORD *)(v6 + 8 * i);
        if ( (unsigned int)(v4 - 1) >> 6 == (_DWORD)i )
          _RDX = (0xFFFFFFFFFFFFFFFFLL >> -(char)v4) & *(_QWORD *)(v6 + 8 * i);
        if ( _RDX )
          break;
        if ( (unsigned int)(v4 - 1) >> 6 == i )
          goto LABEL_11;
      }
      __asm { tzcnt   rdx, rdx }
      v25 = ((_DWORD)i << 6) + _RDX;
      if ( v25 != -1 )
      {
        v26 = 1LL << ((unsigned __int8)v5 + 2);
        v67 = 1LL << ((unsigned __int8)v5 + 1);
        v64 = 1LL << v5;
        while ( 1 )
        {
          if ( (*(_BYTE *)(v3 + 264) & 1) != 0 )
          {
            v27 = v3 + 272;
            v28 = v25 & 3;
            v29 = v3 + 272 + 24LL * (v25 & 3);
            v30 = *(_DWORD *)v29;
            if ( *(_DWORD *)v29 == v25 )
              goto LABEL_47;
            v44 = 3;
          }
          else
          {
            v42 = *(_DWORD *)(v3 + 280);
            v27 = *(_QWORD *)(v3 + 272);
            if ( !v42 )
              goto LABEL_77;
            v43 = v42 - 1;
            v28 = v43 & v25;
            v44 = v43;
            v30 = *(_DWORD *)(v27 + 24LL * (v43 & v25));
            if ( v30 == v25 )
              goto LABEL_71;
          }
          v48 = 1;
          if ( v30 != -1 )
          {
            while ( 1 )
            {
              v50 = v48 + 1;
              v51 = v44 & (unsigned int)(v28 + v48);
              v28 = v51;
              v52 = *(_DWORD *)(v27 + 24 * v51);
              if ( v52 == v25 )
                break;
              if ( v52 == -1 )
                goto LABEL_77;
              v48 = v50;
            }
            if ( (*(_BYTE *)(v3 + 264) & 1) != 0 )
            {
              v27 = v3 + 272;
              v45 = v25 & 3;
              v29 = v3 + 272 + 24LL * (v25 & 3);
              v43 = 3;
              v46 = *(_DWORD *)v29;
              goto LABEL_72;
            }
            v60 = *(_DWORD *)(v3 + 280);
            v27 = *(_QWORD *)(v3 + 272);
            if ( v60 )
            {
              v43 = v60 - 1;
LABEL_71:
              v45 = v43 & v25;
              v29 = v27 + 24LL * (v43 & v25);
              v46 = *(_DWORD *)v29;
LABEL_72:
              if ( v25 != v46 )
              {
                v47 = 1;
                if ( v46 == -1 )
                  goto LABEL_74;
                while ( 1 )
                {
                  v59 = v47 + 1;
                  v45 = v43 & (v47 + v45);
                  v29 = v27 + 24LL * v45;
                  if ( *(_DWORD *)v29 == v25 )
                    break;
                  if ( *(_DWORD *)v29 == -1 )
                    goto LABEL_74;
                  v47 = v59;
                }
              }
LABEL_47:
              v80 = *(_DWORD *)(v29 + 16);
              if ( v80 <= 0x40 )
              {
                v79 = *(void **)(v29 + 8);
                goto LABEL_49;
              }
              sub_2205510(&v79);
              if ( v80 > 0x40 )
              {
                v31 = *(void **)v79;
LABEL_50:
                sub_2205A20(&v77, v31);
                if ( v80 > 0x40 && v79 )
                  operator delete[](v79);
LABEL_53:
                v4 = *(_DWORD *)(v3 + 64);
                goto LABEL_54;
              }
            }
            else
            {
LABEL_74:
              v80 = 1;
              v79 = nullptr;
            }
LABEL_49:
            v31 = v79;
            goto LABEL_50;
          }
LABEL_77:
          v49 = byte_26F2240[v25];
          if ( v49 != 1 && (v49 <= 0 || (unsigned __int8)(v49 - 4) > 1u) && v25 != 11 && v25 != 32 )
          {
            switch ( v25 )
            {
              case 6u:
              case 7u:
              case 8u:
              case 9u:
              case 0xAu:
              case 0xBu:
              case 0x1Bu:
              case 0x1Cu:
              case 0x1Du:
              case 0x1Eu:
              case 0x1Fu:
              case 0x20u:
                sub_2205A20(&v77, v64);
                v4 = *(_DWORD *)(v3 + 64);
                break;
              case 0xCu:
              case 0xDu:
              case 0xEu:
              case 0xFu:
              case 0x10u:
              case 0x11u:
              case 0x12u:
              case 0x13u:
              case 0x14u:
              case 0x15u:
              case 0x16u:
              case 0x17u:
              case 0x18u:
              case 0x19u:
              case 0x1Au:
              case 0x22u:
              case 0x23u:
              case 0x24u:
              case 0x25u:
              case 0x26u:
              case 0x27u:
              case 0x28u:
              case 0x29u:
              case 0x2Au:
              case 0x2Bu:
              case 0x2Cu:
              case 0x2Du:
              case 0x2Eu:
              case 0x2Fu:
              case 0x30u:
                sub_2205A20(&v77, v67);
                v4 = *(_DWORD *)(v3 + 64);
                break;
              case 0x49u:
              case 0x4Au:
                sub_2205A20(&v77, v26);
                goto LABEL_53;
              default:
                break;
            }
          }
LABEL_54:
          v32 = v25 + 1;
          if ( v32 != v4 )
          {
            v33 = v32 >> 6;
            v34 = (unsigned int)(v4 - 1) >> 6;
            if ( v32 >> 6 <= v34 )
            {
              v35 = v32 & 0x3F;
              v36 = *(_QWORD *)v3;
              v37 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v35);
              if ( v35 == 0 )
                v37 = 0;
              v38 = ~v37;
              v39 = v33;
              while ( 1 )
              {
                _RAX = *(_QWORD *)(v36 + 8 * v39);
                if ( v33 == (_DWORD)v39 )
                  _RAX = v38 & *(_QWORD *)(v36 + 8 * v39);
                if ( v34 == (_DWORD)v39 )
                  _RAX &= 0xFFFFFFFFFFFFFFFFLL >> -(char)v4;
                if ( _RAX )
                  break;
                if ( v34 < (unsigned int)++v39 )
                  goto LABEL_66;
              }
              __asm { tzcnt   rax, rax }
              v25 = _RAX + ((_DWORD)v39 << 6);
              if ( v25 != -1 )
                continue;
            }
          }
LABEL_66:
          v5 = *(unsigned int *)(v3 + 224);
          break;
        }
      }
LABEL_11:
      if ( *(_QWORD *)(v3 + 216) != *(_QWORD *)(v3 + 216) + 4 * v5 )
      {
        for ( j = 0; ; ++j )
        {
          sub_2205A20(&v77, 1LL << *((_DWORD *)ptr[0] + (unsigned int)j));
          if ( (unsigned __int64)(4 * v5 - 4) >> 2 == j )
            break;
        }
      }
      v10 = sub_2205DB0(&v77, &v75);
      v63 = v78;
      if ( v10 < 0 )
        goto LABEL_38;
      if ( v78 <= 0x40 )
      {
        if ( v77 != v75 )
          goto LABEL_84;
      }
      else if ( !(unsigned __int8)sub_2205D70(&v77, &v75) )
      {
        v70 = v61;
        goto LABEL_19;
      }
      v16 = *(_QWORD *)v3;
      v17 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
      v73 = *(__int64 **)v3;
      if ( *(_QWORD *)v3 == v17 )
      {
        v16 = *(_QWORD *)v68;
        v72 = *(__int64 **)v68;
        v71 = *(_QWORD *)v68 + 8LL * *(unsigned int *)(v68 + 8);
        if ( v71 == *(_QWORD *)v68 )
          goto LABEL_38;
        v19 = 0;
      }
      else
      {
        v18 = *(__int64 **)v3;
        v19 = 0;
        do
        {
          v20 = *v18++;
          v19 += __popcountdi2(v20, v16, v11, v12, v13, v14);
        }
        while ( (__int64 *)v17 != v18 );
        v12 = *(_QWORD *)v68;
        v72 = *(__int64 **)v68;
        v71 = *(_QWORD *)v68 + 8LL * *(unsigned int *)(v68 + 8);
        if ( v71 == *(_QWORD *)v68 )
        {
          v54 = 0;
          goto LABEL_98;
        }
      }
      v74 = (__int64 *)v3;
      v21 = 0;
      v22 = v72;
      do
      {
        v23 = *v22++;
        v21 += __popcountdi2(v23, v16, v11, v12, v13, v14);
      }
      while ( (__int64 *)v71 != v22 );
      v3 = (__int64)v74;
      if ( v21 <= v19 || (v16 = v68, !(unsigned __int8)sub_20F1990(v74, v68)) )
      {
        v53 = v72;
        v54 = 0;
        do
        {
          v55 = *v53++;
          v54 += __popcountdi2(v55, v16, v11, v12, v13, v14);
        }
        while ( (__int64 *)v71 != v53 );
        if ( v73 != (__int64 *)v17 )
        {
LABEL_98:
          v56 = v73;
          v57 = 0;
          do
          {
            v58 = *v56++;
            v57 += __popcountdi2(v58, v16, v11, v12, v13, v14);
          }
          while ( (__int64 *)v17 != v56 );
          if ( v57 > v54 && (unsigned __int8)sub_20F1990((__int64 *)v68, v3) )
          {
LABEL_84:
            v70 = v61;
            if ( v76 <= 0x40 && v63 <= 0x40 )
            {
              v76 = v63;
              v75 = v77;
LABEL_22:
              if ( ptr[0] != v82 )
                free(ptr[0]);
              v68 = v3;
              goto LABEL_25;
            }
LABEL_19:
            sub_22056A0(&v75, &v77);
            if ( v78 > 0x40 && v77 )
              operator delete[](v77);
            goto LABEL_22;
          }
        }
      }
LABEL_38:
      if ( v63 > 0x40 && v77 )
        operator delete[](v77);
    }
    if ( ptr[0] != v82 )
      free(ptr[0]);
LABEL_25:
    ++v61;
    v62 += 368;
  }
  while ( v61 != v69 );
  if ( v76 > 0x40 && v75 )
    operator delete[](v75);
  return v70;
}
