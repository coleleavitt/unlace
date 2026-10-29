unsigned __int64 __fastcall sub_1CC1A40(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 result; // rax
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r13
  __int64 *v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int8 *v21; // rax
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  unsigned __int8 *v31; // rax
  _BYTE *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // r14
  unsigned __int8 *v43; // r12
  __int64 v44; // rbx
  void *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // r15
  __int64 v51; // r12
  unsigned __int8 *v52; // r14
  __int64 v53; // rbx
  void *v54; // rdi
  __int64 v56; // [rsp+10h] [rbp-F8h]
  __int64 v57; // [rsp+10h] [rbp-F8h]
  __int64 v58; // [rsp+10h] [rbp-F8h]
  __int64 v59; // [rsp+18h] [rbp-F0h]
  unsigned __int64 *v60; // [rsp+20h] [rbp-E8h]
  __int64 v61; // [rsp+20h] [rbp-E8h]
  unsigned __int64 *v62; // [rsp+28h] [rbp-E0h]
  __int64 v63; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v64[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v66; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+68h] [rbp-A0h]
  char v68; // [rsp+B8h] [rbp-50h]
  unsigned int v69; // [rsp+C0h] [rbp-48h]
  char v70; // [rsp+C4h] [rbp-44h]

  v3 = *a3;
  if ( (*a3 & 1) != 0 )
  {
    result = v3 >> 58;
    if ( !(v3 >> 58) )
      return result;
  }
  else
  {
    result = *(unsigned int *)(v3 + 64);
    if ( !(_DWORD)result )
      return result;
  }
  v6 = (unsigned int)(result - 1);
  v7 = 0;
  v8 = a3;
  while ( 1 )
  {
    if ( (v3 & 1) != 0 )
      v9 = (((v3 >> 1) & ~(-1LL << (v3 >> 58))) >> v7) & 1;
    else
      v9 = (*(_QWORD *)(*(_QWORD *)v3 + 8LL * ((unsigned int)v7 >> 6)) >> v7) & 1LL;
    if ( !(_BYTE)v9 )
    {
      v10 = *(_QWORD *)(a2 + 8 * v7 + 24);
      v11 = (__int64 *)(a1 + 8);
      v12 = *(_DWORD *)(v10 + 24);
      if ( *(_QWORD *)(v10 + 40) )
      {
        sub_168B9F0((__int64)v64, v11, v12, 0x17E1u, 0);
        v13 = *(_QWORD *)(v10 + 40);
        if ( v68 )
        {
          v21 = v66;
          if ( !v66 )
          {
            v34 = v67;
            v35 = *(_DWORD *)(v67 + 14976);
            if ( v35 )
            {
              v38 = (unsigned int)(v35 - 1);
              *(_DWORD *)(v67 + 14976) = v38;
              v21 = *(unsigned __int8 **)(v34 + 8 * v38 + 14848);
              v39 = *((unsigned int *)v21 + 134);
              *v21 = 0;
              v40 = *((_QWORD *)v21 + 66);
              *((_DWORD *)v21 + 106) = 0;
              v41 = v40 + (v39 << 6);
              if ( v40 != v41 )
              {
                v59 = a2;
                v42 = v6;
                v43 = v21;
                v60 = v8;
                v44 = v41;
                do
                {
                  while ( 1 )
                  {
                    v44 -= 64;
                    v45 = *(void **)(v44 + 24);
                    if ( v45 == (void *)(v44 + 40) )
                      break;
                    operator delete(v45);
                    if ( v40 == v44 )
                      goto LABEL_39;
                  }
                }
                while ( v40 != v44 );
LABEL_39:
                v21 = v43;
                v6 = v42;
                v8 = v60;
                a2 = v59;
              }
              *((_DWORD *)v21 + 134) = 0;
            }
            else
            {
              v21 = (unsigned __int8 *)operator new(0x3A0u);
              *v21 = 0;
              *((_QWORD *)v21 + 12) = v21 + 112;
              *((_QWORD *)v21 + 16) = v21 + 144;
              *((_QWORD *)v21 + 20) = v21 + 176;
              *((_QWORD *)v21 + 24) = v21 + 208;
              *((_QWORD *)v21 + 28) = v21 + 240;
              *((_QWORD *)v21 + 32) = v21 + 272;
              *((_QWORD *)v21 + 36) = v21 + 304;
              *((_QWORD *)v21 + 40) = v21 + 336;
              *((_QWORD *)v21 + 44) = v21 + 368;
              *((_QWORD *)v21 + 48) = v21 + 400;
              *((_QWORD *)v21 + 52) = v21 + 432;
              *((_QWORD *)v21 + 13) = 0;
              v21[112] = 0;
              *((_QWORD *)v21 + 17) = 0;
              v21[144] = 0;
              *((_QWORD *)v21 + 21) = 0;
              v21[176] = 0;
              *((_QWORD *)v21 + 25) = 0;
              v21[208] = 0;
              *((_QWORD *)v21 + 29) = 0;
              v21[240] = 0;
              *((_QWORD *)v21 + 33) = 0;
              v21[272] = 0;
              *((_QWORD *)v21 + 37) = 0;
              v21[304] = 0;
              *((_QWORD *)v21 + 41) = 0;
              v21[336] = 0;
              *((_QWORD *)v21 + 45) = 0;
              v21[368] = 0;
              *((_QWORD *)v21 + 49) = 0;
              v21[400] = 0;
              *((_QWORD *)v21 + 53) = 0x800000000LL;
              *((_QWORD *)v21 + 66) = v21 + 544;
              *((_QWORD *)v21 + 67) = 0x600000000LL;
            }
            v66 = v21;
          }
          v21[*v21 + 1] = 9;
          v22 = v66;
          v23 = *v66;
          *v66 = v23 + 1;
          *(_QWORD *)&v22[8 * v23 + 16] = v13;
        }
        else if ( v70 )
        {
          v24 = sub_168B9E0(v64);
          v28 = v65;
          if ( v65 )
          {
            v56 = v24;
            v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 32LL))(v65);
            v24 = v56;
          }
          v63 = v28;
          v29 = sub_1587BC0(v24, &v63, v24, v25, v26, v27);
          v30 = *v29 + 32LL * v69;
          v31 = *(unsigned __int8 **)(v30 + 8);
          if ( !v31 )
          {
            v36 = *(_QWORD *)(v30 + 16);
            v37 = *(_DWORD *)(v36 + 14976);
            if ( v37 )
            {
              v46 = (unsigned int)(v37 - 1);
              *(_DWORD *)(v36 + 14976) = v46;
              v31 = *(unsigned __int8 **)(v36 + 8 * v46 + 14848);
              v47 = *((unsigned int *)v31 + 134);
              *v31 = 0;
              v48 = *((_QWORD *)v31 + 66);
              *((_DWORD *)v31 + 106) = 0;
              v49 = v48 + (v47 << 6);
              if ( v48 != v49 )
              {
                v58 = v7;
                v50 = v6;
                v51 = v30;
                v61 = a2;
                v52 = v31;
                v62 = v8;
                v53 = v49;
                do
                {
                  while ( 1 )
                  {
                    v53 -= 64;
                    v54 = *(void **)(v53 + 24);
                    if ( v54 == (void *)(v53 + 40) )
                      break;
                    operator delete(v54);
                    if ( v48 == v53 )
                      goto LABEL_47;
                  }
                }
                while ( v48 != v53 );
LABEL_47:
                v30 = v51;
                v31 = v52;
                v6 = v50;
                v7 = v58;
                a2 = v61;
                v8 = v62;
              }
              *((_DWORD *)v31 + 134) = 0;
            }
            else
            {
              v57 = v30;
              v31 = (unsigned __int8 *)operator new(0x3A0u);
              *v31 = 0;
              *((_QWORD *)v31 + 12) = v31 + 112;
              *((_QWORD *)v31 + 16) = v31 + 144;
              *((_QWORD *)v31 + 20) = v31 + 176;
              *((_QWORD *)v31 + 24) = v31 + 208;
              *((_QWORD *)v31 + 28) = v31 + 240;
              *((_QWORD *)v31 + 32) = v31 + 272;
              *((_QWORD *)v31 + 36) = v31 + 304;
              *((_QWORD *)v31 + 40) = v31 + 336;
              *((_QWORD *)v31 + 44) = v31 + 368;
              *((_QWORD *)v31 + 48) = v31 + 400;
              *((_QWORD *)v31 + 52) = v31 + 432;
              *((_QWORD *)v31 + 13) = 0;
              v31[112] = 0;
              *((_QWORD *)v31 + 17) = 0;
              v31[144] = 0;
              *((_QWORD *)v31 + 21) = 0;
              v31[176] = 0;
              *((_QWORD *)v31 + 25) = 0;
              v31[208] = 0;
              *((_QWORD *)v31 + 29) = 0;
              v31[240] = 0;
              *((_QWORD *)v31 + 33) = 0;
              v31[272] = 0;
              *((_QWORD *)v31 + 37) = 0;
              v31[304] = 0;
              *((_QWORD *)v31 + 41) = 0;
              v31[336] = 0;
              *((_QWORD *)v31 + 45) = 0;
              v31[368] = 0;
              *((_QWORD *)v31 + 49) = 0;
              v31[400] = 0;
              *((_QWORD *)v31 + 53) = 0x800000000LL;
              v30 = v57;
              *((_QWORD *)v31 + 66) = v31 + 544;
              *((_QWORD *)v31 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v30 + 8) = v31;
          }
          v31[*v31 + 1] = 9;
          v32 = *(_BYTE **)(v30 + 8);
          v33 = (unsigned __int8)*v32;
          *v32 = v33 + 1;
          *(_QWORD *)&v32[8 * v33 + 16] = v13;
        }
      }
      else
      {
        sub_168B9F0((__int64)v64, v11, v12, 0x17E1u, 0);
        if ( v68 )
        {
          sub_AE9DF0(&v66, (__int64)"(anonymous)", 1u);
        }
        else if ( v70 )
        {
          v18 = sub_168B9E0(v64);
          v19 = v65;
          if ( v65 )
            v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 32LL))(v65);
          v63 = v19;
          v20 = sub_1587BC0(v18, &v63, v14, v15, v16, v17);
          sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v69 + 8), (__int64)"(anonymous)", 1u);
        }
      }
      sub_15F7200(v64);
    }
    result = v7 + 1;
    if ( v6 == v7 )
      return result;
    v3 = *v8;
    ++v7;
  }
}
