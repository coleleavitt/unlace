__int64 __fastcall sub_1E4E540(__int64 a1, unsigned int a2, int a3)
{
  char *v5; // r12
  signed __int64 v6; // rdx
  signed __int64 v7; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // r14
  _QWORD *v11; // r13
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  unsigned __int8 *v14; // rbp
  _QWORD *v15; // rax
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  void **v20; // rbx
  unsigned __int8 *v21; // rdi
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // r14
  unsigned __int8 *v32; // rbp
  _QWORD *v33; // rax
  _BYTE *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  void **v38; // rbx
  _BYTE *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  size_t v43; // rdx
  size_t v44; // rdx
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // r15
  __int64 v50; // r14
  void *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // r15
  void *v56; // rdi
  __int64 v57; // [rsp+8h] [rbp-120h]
  __int64 v58; // [rsp+18h] [rbp-110h] BYREF
  void *src; // [rsp+20h] [rbp-108h]
  size_t n; // [rsp+28h] [rbp-100h]
  _QWORD v61[2]; // [rsp+30h] [rbp-F8h] BYREF
  void *v62; // [rsp+40h] [rbp-E8h]
  size_t v63; // [rsp+48h] [rbp-E0h]
  _QWORD v64[2]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v65[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v67; // [rsp+80h] [rbp-A8h]
  __int64 v68; // [rsp+88h] [rbp-A0h]
  char v69; // [rsp+D8h] [rbp-50h]
  unsigned int v70; // [rsp+E0h] [rbp-48h]
  char v71; // [rsp+E4h] [rbp-44h]

  switch ( a3 )
  {
    case 20:
      return sub_19A26C0(a1, a2, 135);
    case 32:
      v9 = *(_QWORD **)(a1 + 248);
      v10 = v9[2329];
      v11 = sub_A81910(v9, v10, a2);
      v12 = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
      *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 0x64;
      if ( unk_2CD7484 )
        sub_EE9B50(100);
      *(_WORD *)(v12 + 1) &= 0xF801u;
      *(_QWORD *)(v12 + 8) = v10;
      *(_QWORD *)(v12 + 16) = v11;
      *(_DWORD *)(v12 + 4) = a2;
      v13 = sub_B635F0(v12);
      *(_BYTE *)(v12 + 1) = (v13 << 6) | *(_BYTE *)(v12 + 1) & 0x3F;
      *(_BYTE *)(v12 + 2) = *(_BYTE *)(v12 + 2) & 0xF8 | (v13 >> 2) & 7;
      return v12;
    case 19:
      return sub_19A26C0(a1, a2, 149);
    default:
      sub_168B9F0((__int64)v65, (__int64 *)(a1 + 8), a2, 0xEF6u, 0);
      v5 = sub_BFA720(a3);
      v7 = v6;
      if ( !v69 )
      {
        if ( !v71 )
        {
LABEL_6:
          sub_15F7200(v65);
          return 1;
        }
        v26 = sub_168B9E0(v65);
        v29 = v66;
        if ( v66 )
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 32LL))(v66);
        v58 = v29;
        v30 = sub_1587BC0(v26, &v58, v24, v25, v27, v28);
        v31 = *v30 + 32LL * v70;
        v32 = *(unsigned __int8 **)(v31 + 8);
        if ( !v32 )
        {
          v41 = *(_QWORD *)(v31 + 16);
          v42 = *(_DWORD *)(v41 + 14976);
          if ( v42 )
          {
            v52 = (unsigned int)(v42 - 1);
            *(_DWORD *)(v41 + 14976) = v52;
            v32 = *(unsigned __int8 **)(v41 + 8 * v52 + 14848);
            v53 = *((unsigned int *)v32 + 134);
            *v32 = 0;
            v54 = *((_QWORD *)v32 + 66);
            *((_DWORD *)v32 + 106) = 0;
            v55 = v54 + (v53 << 6);
            while ( v54 != v55 )
            {
              while ( 1 )
              {
                v55 -= 64;
                v56 = *(void **)(v55 + 24);
                if ( v56 == (void *)(v55 + 40) )
                  break;
                v57 = v54;
                operator delete(v56);
                v54 = v57;
                if ( v57 == v55 )
                  goto LABEL_77;
              }
            }
LABEL_77:
            *((_DWORD *)v32 + 134) = 0;
          }
          else
          {
            v32 = (unsigned __int8 *)operator new(0x3A0u);
            *v32 = 0;
            *((_QWORD *)v32 + 12) = v32 + 112;
            *((_QWORD *)v32 + 16) = v32 + 144;
            *((_QWORD *)v32 + 20) = v32 + 176;
            *((_QWORD *)v32 + 24) = v32 + 208;
            *((_QWORD *)v32 + 28) = v32 + 240;
            *((_QWORD *)v32 + 32) = v32 + 272;
            *((_QWORD *)v32 + 36) = v32 + 304;
            *((_QWORD *)v32 + 40) = v32 + 336;
            *((_QWORD *)v32 + 44) = v32 + 368;
            *((_QWORD *)v32 + 48) = v32 + 400;
            *((_QWORD *)v32 + 52) = v32 + 432;
            *((_QWORD *)v32 + 13) = 0;
            v32[112] = 0;
            *((_QWORD *)v32 + 17) = 0;
            v32[144] = 0;
            *((_QWORD *)v32 + 21) = 0;
            v32[176] = 0;
            *((_QWORD *)v32 + 25) = 0;
            v32[208] = 0;
            *((_QWORD *)v32 + 29) = 0;
            v32[240] = 0;
            *((_QWORD *)v32 + 33) = 0;
            v32[272] = 0;
            *((_QWORD *)v32 + 37) = 0;
            v32[304] = 0;
            *((_QWORD *)v32 + 41) = 0;
            v32[336] = 0;
            *((_QWORD *)v32 + 45) = 0;
            v32[368] = 0;
            *((_QWORD *)v32 + 49) = 0;
            v32[400] = 0;
            *((_QWORD *)v32 + 53) = 0x800000000LL;
            *((_QWORD *)v32 + 66) = v32 + 544;
            *((_QWORD *)v32 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v31 + 8) = v32;
        }
        v32[*v32 + 1] = 0;
        v62 = v64;
        if ( !&v5[v7] || v5 )
        {
          if ( (unsigned __int64)v7 <= 0xF )
          {
            if ( v7 == 1 )
            {
              LOBYTE(v64[0]) = *v5;
              v33 = v64;
              goto LABEL_33;
            }
            v33 = v64;
            if ( !v7 )
            {
LABEL_33:
              v63 = v7;
              *((_BYTE *)v33 + v7) = 0;
              v34 = *(_BYTE **)(v31 + 8);
              v35 = (unsigned __int8)*v34;
              *v34 = v35 + 1;
              v36 = (unsigned __int8)v35;
              v37 = 32 * (v35 + 3);
              v38 = (void **)&v34[v37];
              v39 = *(_BYTE **)&v34[v37];
              if ( v62 == v64 )
              {
                v44 = v63;
                if ( v63 )
                {
                  if ( v63 == 1 )
                    *v39 = v64[0];
                  else
                    memcpy(v39, v62, v63);
                  v44 = v63;
                  v39 = *v38;
                }
                v38[1] = (void *)v44;
                v39[v44] = 0;
                v39 = v62;
              }
              else
              {
                if ( v39 == &v34[v37 + 16] )
                {
                  *v38 = v62;
                  v38[1] = (void *)v63;
                  v38[2] = (void *)v64[0];
                }
                else
                {
                  v40 = *(_QWORD *)&v34[32 * v36 + 112];
                  *v38 = v62;
                  v38[1] = (void *)v63;
                  v38[2] = (void *)v64[0];
                  if ( v39 )
                  {
                    v62 = v39;
                    v64[0] = v40;
                    goto LABEL_37;
                  }
                }
                v39 = v64;
                v62 = v64;
              }
LABEL_37:
              v63 = 0;
              *v39 = 0;
              v23 = v62;
              if ( v62 == v64 )
                goto LABEL_6;
LABEL_38:
              operator delete(v23);
              goto LABEL_6;
            }
LABEL_43:
            memcpy(v33, v5, v7);
            v33 = v62;
            goto LABEL_33;
          }
          if ( v7 >= 0 )
          {
            v33 = (_QWORD *)operator new(v7 + 1);
            v64[0] = v7;
            v62 = v33;
            goto LABEL_43;
          }
LABEL_80:
          std::__throw_length_error("basic_string::_M_create");
        }
LABEL_15:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
      v14 = v67;
      if ( !v67 )
      {
        v45 = v68;
        v46 = *(_DWORD *)(v68 + 14976);
        if ( v46 )
        {
          v47 = (unsigned int)(v46 - 1);
          *(_DWORD *)(v68 + 14976) = v47;
          v14 = *(unsigned __int8 **)(v45 + 8 * v47 + 14848);
          v48 = *((unsigned int *)v14 + 134);
          *v14 = 0;
          v49 = *((_QWORD *)v14 + 66);
          *((_DWORD *)v14 + 106) = 0;
          v50 = v49 + (v48 << 6);
          while ( v49 != v50 )
          {
            while ( 1 )
            {
              v50 -= 64;
              v51 = *(void **)(v50 + 24);
              if ( v51 == (void *)(v50 + 40) )
                break;
              operator delete(v51);
              if ( v49 == v50 )
                goto LABEL_72;
            }
          }
LABEL_72:
          *((_DWORD *)v14 + 134) = 0;
        }
        else
        {
          v14 = (unsigned __int8 *)operator new(0x3A0u);
          *v14 = 0;
          *((_QWORD *)v14 + 12) = v14 + 112;
          *((_QWORD *)v14 + 16) = v14 + 144;
          *((_QWORD *)v14 + 20) = v14 + 176;
          *((_QWORD *)v14 + 24) = v14 + 208;
          *((_QWORD *)v14 + 28) = v14 + 240;
          *((_QWORD *)v14 + 32) = v14 + 272;
          *((_QWORD *)v14 + 36) = v14 + 304;
          *((_QWORD *)v14 + 40) = v14 + 336;
          *((_QWORD *)v14 + 44) = v14 + 368;
          *((_QWORD *)v14 + 48) = v14 + 400;
          *((_QWORD *)v14 + 52) = v14 + 432;
          *((_QWORD *)v14 + 13) = 0;
          v14[112] = 0;
          *((_QWORD *)v14 + 17) = 0;
          v14[144] = 0;
          *((_QWORD *)v14 + 21) = 0;
          v14[176] = 0;
          *((_QWORD *)v14 + 25) = 0;
          v14[208] = 0;
          *((_QWORD *)v14 + 29) = 0;
          v14[240] = 0;
          *((_QWORD *)v14 + 33) = 0;
          v14[272] = 0;
          *((_QWORD *)v14 + 37) = 0;
          v14[304] = 0;
          *((_QWORD *)v14 + 41) = 0;
          v14[336] = 0;
          *((_QWORD *)v14 + 45) = 0;
          v14[368] = 0;
          *((_QWORD *)v14 + 49) = 0;
          v14[400] = 0;
          *((_QWORD *)v14 + 53) = 0x800000000LL;
          *((_QWORD *)v14 + 66) = v14 + 544;
          *((_QWORD *)v14 + 67) = 0x600000000LL;
        }
        v67 = v14;
      }
      v14[*v14 + 1] = 0;
      src = v61;
      if ( &v5[v7] && !v5 )
        goto LABEL_15;
      if ( (unsigned __int64)v7 > 0xF )
      {
        if ( v7 < 0 )
          goto LABEL_80;
        v15 = (_QWORD *)operator new(v7 + 1);
        v61[0] = v7;
        src = v15;
      }
      else
      {
        if ( v7 == 1 )
        {
          LOBYTE(v61[0]) = *v5;
          v15 = v61;
          goto LABEL_19;
        }
        v15 = v61;
        if ( !v7 )
        {
LABEL_19:
          n = v7;
          *((_BYTE *)v15 + v7) = 0;
          v16 = v67;
          v17 = *v67;
          *v67 = v17 + 1;
          v18 = (unsigned __int8)v17;
          v19 = 32 * (v17 + 3);
          v20 = (void **)&v16[v19];
          v21 = *(unsigned __int8 **)&v16[v19];
          if ( src == v61 )
          {
            v43 = n;
            if ( n )
            {
              if ( n == 1 )
                *v21 = v61[0];
              else
                memcpy(v21, src, n);
              v43 = n;
              v21 = (unsigned __int8 *)*v20;
            }
            v20[1] = (void *)v43;
            v21[v43] = 0;
            v21 = (unsigned __int8 *)src;
          }
          else
          {
            if ( v21 == &v16[v19 + 16] )
            {
              *v20 = src;
              v20[1] = (void *)n;
              v20[2] = (void *)v61[0];
            }
            else
            {
              v22 = *(_QWORD *)&v16[32 * v18 + 112];
              *v20 = src;
              v20[1] = (void *)n;
              v20[2] = (void *)v61[0];
              if ( v21 )
              {
                src = v21;
                v61[0] = v22;
                goto LABEL_23;
              }
            }
            v21 = (unsigned __int8 *)v61;
            src = v61;
          }
LABEL_23:
          n = 0;
          *v21 = 0;
          v23 = src;
          if ( src == v61 )
            goto LABEL_6;
          goto LABEL_38;
        }
      }
      memcpy(v15, v5, v7);
      v15 = src;
      goto LABEL_19;
  }
}
