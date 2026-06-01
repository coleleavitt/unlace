__int64 __fastcall sub_1654CB0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r13
  unsigned __int8 *v9; // r13
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  char v12; // si
  unsigned __int8 *v13; // r15
  unsigned __int8 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r15
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r13
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rdx
  __int64 v51; // r15
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  void *v57; // rdi
  __int64 v58; // [rsp+0h] [rbp-E8h]
  __int64 v59; // [rsp+0h] [rbp-E8h]
  __int64 v60; // [rsp+8h] [rbp-E0h]
  __int64 v61; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v62[16]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v64; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+48h] [rbp-A0h]
  char v66; // [rsp+98h] [rbp-50h]
  unsigned int v67; // [rsp+A0h] [rbp-48h]
  char v68; // [rsp+A4h] [rbp-44h]

  if ( a3 )
  {
    if ( a4 == 3 || ((*(_BYTE *)(a3 + 29) >> 5) & 3) == a4 )
    {
      *(_BYTE *)(a2 + 29) = *(_BYTE *)(a2 + 29) & 0x9F | (32 * ((*(_BYTE *)(a3 + 29) >> 5) & 3));
      return 0;
    }
    v5 = a1 + 8;
    sub_168B9F0(v62, a1 + 8, *(unsigned int *)(a2 + 24), 3437, 0);
    if ( v66 )
    {
      v13 = v64;
      if ( !v64 )
      {
        v16 = v65;
        v17 = *(_DWORD *)(v65 + 14976);
        if ( v17 )
        {
          v53 = (unsigned int)(v17 - 1);
          *(_DWORD *)(v65 + 14976) = v53;
          v13 = *(unsigned __int8 **)(v16 + 8 * v53 + 14848);
          v54 = *((unsigned int *)v13 + 134);
          *v13 = 0;
          v55 = *((_QWORD *)v13 + 66);
          *((_DWORD *)v13 + 106) = 0;
          v56 = v55 + (v54 << 6);
          while ( v55 != v56 )
          {
            while ( 1 )
            {
              v56 -= 64;
              v57 = *(void **)(v56 + 24);
              if ( v57 == (void *)(v56 + 40) )
                break;
              v60 = v55;
              v59 = v56;
              operator delete(v57);
              v56 = v59;
              v55 = v60;
              if ( v60 == v59 )
                goto LABEL_48;
            }
          }
LABEL_48:
          *((_DWORD *)v13 + 134) = 0;
        }
        else
        {
          v13 = (unsigned __int8 *)operator new(0x3A0u);
          *v13 = 0;
          *((_QWORD *)v13 + 12) = v13 + 112;
          *((_QWORD *)v13 + 16) = v13 + 144;
          *((_QWORD *)v13 + 20) = v13 + 176;
          *((_QWORD *)v13 + 24) = v13 + 208;
          *((_QWORD *)v13 + 28) = v13 + 240;
          *((_QWORD *)v13 + 32) = v13 + 272;
          *((_QWORD *)v13 + 36) = v13 + 304;
          *((_QWORD *)v13 + 40) = v13 + 336;
          *((_QWORD *)v13 + 44) = v13 + 368;
          *((_QWORD *)v13 + 48) = v13 + 400;
          *((_QWORD *)v13 + 52) = v13 + 432;
          *((_QWORD *)v13 + 13) = 0;
          v13[112] = 0;
          *((_QWORD *)v13 + 17) = 0;
          v13[144] = 0;
          *((_QWORD *)v13 + 21) = 0;
          v13[176] = 0;
          *((_QWORD *)v13 + 25) = 0;
          v13[208] = 0;
          *((_QWORD *)v13 + 29) = 0;
          v13[240] = 0;
          *((_QWORD *)v13 + 33) = 0;
          v13[272] = 0;
          *((_QWORD *)v13 + 37) = 0;
          v13[304] = 0;
          *((_QWORD *)v13 + 41) = 0;
          v13[336] = 0;
          *((_QWORD *)v13 + 45) = 0;
          v13[368] = 0;
          *((_QWORD *)v13 + 49) = 0;
          v13[400] = 0;
          *((_QWORD *)v13 + 53) = 0x800000000LL;
          *((_QWORD *)v13 + 66) = v13 + 544;
          *((_QWORD *)v13 + 67) = 0x600000000LL;
        }
        v64 = v13;
      }
      v13[*v13 + 1] = 10;
      v14 = v64;
      v15 = *v64;
      *v64 = v15 + 1;
      *(_QWORD *)&v14[8 * v15 + 16] = a2;
    }
    else
    {
      if ( !v68 )
        goto LABEL_7;
      v31 = sub_168B9E0(v62);
      v32 = v63;
      if ( v63 )
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
      v61 = v32;
      v33 = sub_1587BC0(v31, &v61, v27, v28, v29, v30);
      sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v67 + 8), a2, 0xAu);
    }
    if ( v66 )
    {
      sub_B9B310(&v64, a4);
    }
    else if ( v68 )
    {
      v38 = sub_168B9E0(v62);
      v39 = v63;
      if ( v63 )
        v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
      v61 = v39;
      v40 = sub_1587BC0(v38, &v61, v34, v35, v36, v37);
      sub_B9B310((unsigned __int8 **)(*v40 + 32LL * v67 + 8), a4);
    }
LABEL_7:
    sub_15F7200(v62);
    sub_168B9F0(v62, v5, *(unsigned int *)(a3 + 24), 6280, 0);
    if ( v66 )
    {
      v9 = v64;
      if ( !v64 )
      {
        v18 = v65;
        v19 = *(_DWORD *)(v65 + 14976);
        if ( v19 )
        {
          v48 = (unsigned int)(v19 - 1);
          *(_DWORD *)(v65 + 14976) = v48;
          v9 = *(unsigned __int8 **)(v18 + 8 * v48 + 14848);
          v49 = *((unsigned int *)v9 + 134);
          *v9 = 0;
          v50 = *((_QWORD *)v9 + 66);
          *((_DWORD *)v9 + 106) = 0;
          v51 = v50 + (v49 << 6);
          while ( v50 != v51 )
          {
            while ( 1 )
            {
              v51 -= 64;
              v52 = *(void **)(v51 + 24);
              if ( v52 == (void *)(v51 + 40) )
                break;
              v58 = v50;
              operator delete(v52);
              v50 = v58;
              if ( v58 == v51 )
                goto LABEL_43;
            }
          }
LABEL_43:
          *((_DWORD *)v9 + 134) = 0;
        }
        else
        {
          v9 = (unsigned __int8 *)operator new(0x3A0u);
          *v9 = 0;
          *((_QWORD *)v9 + 12) = v9 + 112;
          *((_QWORD *)v9 + 16) = v9 + 144;
          *((_QWORD *)v9 + 20) = v9 + 176;
          *((_QWORD *)v9 + 24) = v9 + 208;
          *((_QWORD *)v9 + 28) = v9 + 240;
          *((_QWORD *)v9 + 32) = v9 + 272;
          *((_QWORD *)v9 + 36) = v9 + 304;
          *((_QWORD *)v9 + 40) = v9 + 336;
          *((_QWORD *)v9 + 44) = v9 + 368;
          *((_QWORD *)v9 + 48) = v9 + 400;
          *((_QWORD *)v9 + 52) = v9 + 432;
          *((_QWORD *)v9 + 13) = 0;
          v9[112] = 0;
          *((_QWORD *)v9 + 17) = 0;
          v9[144] = 0;
          *((_QWORD *)v9 + 21) = 0;
          v9[176] = 0;
          *((_QWORD *)v9 + 25) = 0;
          v9[208] = 0;
          *((_QWORD *)v9 + 29) = 0;
          v9[240] = 0;
          *((_QWORD *)v9 + 33) = 0;
          v9[272] = 0;
          *((_QWORD *)v9 + 37) = 0;
          v9[304] = 0;
          *((_QWORD *)v9 + 41) = 0;
          v9[336] = 0;
          *((_QWORD *)v9 + 45) = 0;
          v9[368] = 0;
          *((_QWORD *)v9 + 49) = 0;
          v9[400] = 0;
          *((_QWORD *)v9 + 53) = 0x800000000LL;
          *((_QWORD *)v9 + 66) = v9 + 544;
          *((_QWORD *)v9 + 67) = 0x600000000LL;
        }
        v64 = v9;
      }
      v9[*v9 + 1] = 10;
      v10 = v64;
      v11 = *v64;
      *v64 = v11 + 1;
      *(_QWORD *)&v10[8 * v11 + 16] = a3;
    }
    else
    {
      if ( !v68 )
      {
LABEL_9:
        sub_15F7200(v62);
        *(_BYTE *)(a2 + 29) = *(_BYTE *)(a2 + 29) & 0x9F | (32 * (a4 & 3));
        return 1;
      }
      v45 = sub_168B9E0(v62);
      v46 = v63;
      if ( v63 )
        v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
      v61 = v46;
      v47 = sub_1587BC0(v45, &v61, v41, v42, v43, v44);
      sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v67 + 8), a3, 0xAu);
    }
    v12 = *(_BYTE *)(a3 + 29) >> 5;
    if ( v66 )
    {
      sub_B9B310(&v64, v12 & 3);
    }
    else if ( v68 )
    {
      v24 = sub_168B9E0(v62);
      v25 = v63;
      if ( v63 )
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
      v61 = v25;
      v26 = sub_1587BC0(v24, &v61, v20, v21, v22, v23);
      sub_B9B310((unsigned __int8 **)(*v26 + 32LL * v67 + 8), v12 & 3);
    }
    goto LABEL_9;
  }
  *(_BYTE *)(a2 + 29) = *(_BYTE *)(a2 + 29) & 0x9F | (32 * (a4 & 3));
  return 0;
}
