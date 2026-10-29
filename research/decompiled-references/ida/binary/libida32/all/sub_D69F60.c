__int64 __fastcall sub_D69F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v7; // rcx
  unsigned int v9; // eax
  __int64 *v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // esi
  unsigned int v18; // ecx
  __int64 v19; // r12
  unsigned int v20; // edi
  int v21; // r14d
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rsi
  char v29; // cl
  int v30; // edx
  _BYTE *v31; // rax
  _QWORD *v32; // rax
  _DWORD *v33; // rax
  _WORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // edx
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // r14
  __int64 v45; // r12
  void *v46; // rdi
  __int64 v49; // [rsp+10h] [rbp-E8h]
  unsigned __int8 v50; // [rsp+1Fh] [rbp-D9h]
  __int64 v51; // [rsp+20h] [rbp-D8h]
  __int64 v52; // [rsp+20h] [rbp-D8h]
  __int64 v53; // [rsp+20h] [rbp-D8h]
  __int64 v54; // [rsp+20h] [rbp-D8h]
  _BYTE *v55; // [rsp+20h] [rbp-D8h]
  _QWORD *v56; // [rsp+20h] [rbp-D8h]
  _DWORD *v57; // [rsp+20h] [rbp-D8h]
  _WORD *v58; // [rsp+20h] [rbp-D8h]
  __int64 v59; // [rsp+20h] [rbp-D8h]
  __int64 v60; // [rsp+20h] [rbp-D8h]
  __int64 v61; // [rsp+28h] [rbp-D0h]
  __int64 v62; // [rsp+28h] [rbp-D0h]
  __int64 v63; // [rsp+28h] [rbp-D0h]
  _BYTE v64[48]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v65[48]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v66; // [rsp+90h] [rbp-68h] BYREF
  int v67; // [rsp+98h] [rbp-60h]

  v7 = sub_CDA220(a4);
  v50 = *(_BYTE *)(v7 + 60);
  if ( v50 )
  {
    v17 = *(_DWORD *)(v7 + 20);
    if ( *(_QWORD *)(v7 + 40) )
    {
      if ( v17 != -1 )
      {
        v18 = *(_DWORD *)(v7 + 16);
        if ( v18 <= v17 )
        {
          v19 = 0;
          v61 = v17 / v18 - 1;
          while ( 1 )
          {
            sub_CDA6F0((__int64)&v66, a3, v19);
            sub_CDAA60((__int64)v64, &v66);
            sub_DFF560(&v66);
            sub_CDA6F0((__int64)&v66, a4, v19);
            sub_CDAA60((__int64)v65, &v66);
            sub_DFF560(&v66);
            if ( !(unsigned __int8)sub_D69F60(a1, a2, v64, v65, a5) )
              break;
            sub_DFF560(v65);
            sub_DFF560(v64);
            if ( v61 == v19 )
              return v50;
            ++v19;
          }
          sub_DFF560(v65);
          sub_DFF560(v64);
          return 0;
        }
      }
    }
    else if ( v17 != -1 )
    {
      v20 = *(_DWORD *)(v7 + 16);
      if ( v20 <= v17 )
      {
        v21 = *(_DWORD *)(v7 + 48);
        v22 = 0;
        v49 = v17 / v20 - 1;
        while ( 1 )
        {
          sub_CDA6F0((__int64)v65, a4, v22);
          switch ( v21 )
          {
            case 0:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v55 = (_BYTE *)sub_CE8890((__int64)&v66);
              v31 = (_BYTE *)sub_CE8890((__int64)v65);
              goto LABEL_33;
            case 1:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v55 = (_BYTE *)sub_CE8AA0((__int64)&v66);
              v31 = (_BYTE *)sub_CE8AA0((__int64)v65);
              goto LABEL_33;
            case 2:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v58 = (_WORD *)sub_CE8E90((__int64)&v66);
              v34 = (_WORD *)sub_CE8E90((__int64)v65);
              goto LABEL_43;
            case 3:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v58 = (_WORD *)sub_CE90A0((__int64)&v66);
              v34 = (_WORD *)sub_CE90A0((__int64)v65);
LABEL_43:
              *v34 = *v58;
              sub_DFF560(&v66);
              sub_E00FC0(v65);
              break;
            case 4:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v57 = (_DWORD *)sub_CE9490((__int64)&v66);
              v33 = (_DWORD *)sub_CE9490((__int64)v65);
              goto LABEL_40;
            case 5:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v57 = (_DWORD *)sub_CE96A0((__int64)&v66);
              v33 = (_DWORD *)sub_CE96A0((__int64)v65);
LABEL_40:
              *v33 = *v57;
              sub_DFF560(&v66);
              sub_E00FC0(v65);
              break;
            case 6:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v56 = (_QWORD *)sub_CE9C80((__int64)&v66);
              v32 = (_QWORD *)sub_CE9C80((__int64)v65);
              goto LABEL_37;
            case 7:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v56 = (_QWORD *)sub_CE9E90((__int64)&v66);
              v32 = (_QWORD *)sub_CE9E90((__int64)v65);
LABEL_37:
              *v32 = *v56;
              sub_DFF560(&v66);
              sub_E00FC0(v65);
              break;
            case 8:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v52 = sub_CEA4A0((__int64)&v66);
              v24 = sub_CEA4A0((__int64)v65);
              goto LABEL_27;
            case 9:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v52 = sub_CEA4F0((__int64)&v66);
              v24 = sub_CEA4F0((__int64)v65);
              goto LABEL_27;
            case 10:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v55 = (_BYTE *)sub_CEAA70((__int64)&v66);
              v31 = (_BYTE *)sub_CEAA70((__int64)v65);
LABEL_33:
              *v31 = *v55;
              sub_DFF560(&v66);
              sub_E00FC0(v65);
              break;
            case 11:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v53 = sub_CEB480((__int64)&v66);
              v25 = sub_CEB480((__int64)v65);
              v26 = v53;
              if ( *(_DWORD *)(v25 + 8) <= 0x40u && (v27 = *(_DWORD *)(v53 + 8), v27 <= 0x40) )
              {
                v38 = *(_QWORD *)v53;
                *(_DWORD *)(v25 + 8) = v27;
                *(_QWORD *)v25 = v38;
              }
              else
              {
                v28 = v53;
                v62 = v53;
                v54 = v25;
                sub_21E1960(v25, v28);
                v26 = v62;
                v25 = v54;
              }
              v29 = *(_BYTE *)(v26 + 12);
              v30 = *(_DWORD *)(v26 + 16);
              *(_BYTE *)(v25 + 12) = v29;
              *(_DWORD *)(v25 + 16) = v30;
              sub_DFF560(&v66);
              sub_E00FC0(v65);
              break;
            case 12:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v52 = sub_CEA540((__int64)&v66);
              v24 = sub_CEA540((__int64)v65);
LABEL_27:
              *(_QWORD *)v24 = *(_QWORD *)v52;
              *(_DWORD *)(v24 + 8) = *(_DWORD *)(v52 + 8);
              sub_DFF560(&v66);
              sub_E00FC0(v65);
              break;
            case 13:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v51 = sub_CEACF0((__int64)&v66);
              v23 = sub_CEACF0((__int64)v65);
              sub_DFF5C0(v23, v51);
              sub_DFF560(&v66);
              sub_E00FC0(v65);
              break;
            case 14:
              sub_CDA6F0((__int64)&v66, a3, v22);
              v59 = sub_CEB200((__int64)&v66);
              v35 = sub_CEB200((__int64)v65);
              v36 = v59;
              v60 = v35;
              v63 = v36;
              sub_DFF5C0(v35, v36);
              v37 = *(_DWORD *)(v63 + 56);
              *(_QWORD *)(v60 + 48) = *(_QWORD *)(v63 + 48);
              *(_DWORD *)(v60 + 56) = v37;
              sub_DFF560(&v66);
              sub_E00FC0(v65);
              break;
            default:
              break;
          }
          sub_DFF560(v65);
          if ( v22 == v49 )
            break;
          ++v22;
        }
      }
    }
  }
  else if ( *(_QWORD *)(v7 + 32) )
  {
    return (unsigned __int8)sub_D69D10(a1, a2, a3, a4, a5);
  }
  else
  {
    v9 = sub_DFC980(*(_QWORD *)(a1 + 400));
    v10 = (__int64 *)sub_E0FF40(a1, v9, 108, 0);
    v11 = sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
    if ( v10 )
    {
      v12 = *v10;
      if ( *v10 )
      {
        v13 = *(unsigned int *)(v12 + 424);
        v14 = *(unsigned int *)(v12 + 428);
        v15 = v13 + 1;
      }
      else
      {
        v39 = v10[1];
        v40 = *(_DWORD *)(v39 + 14976);
        if ( v40 )
        {
          v42 = (unsigned int)(v40 - 1);
          *(_DWORD *)(v39 + 14976) = v42;
          v12 = *(_QWORD *)(v39 + 8 * v42 + 14848);
          v43 = *(unsigned int *)(v12 + 536);
          *(_BYTE *)v12 = 0;
          v44 = *(_QWORD *)(v12 + 528);
          *(_DWORD *)(v12 + 424) = 0;
          v45 = v44 + (v43 << 6);
          if ( v44 == v45 )
          {
            v15 = 1;
            v13 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v45 -= 64;
                v46 = *(void **)(v45 + 24);
                if ( v46 == (void *)(v45 + 40) )
                  break;
                operator delete(v46);
                if ( v44 == v45 )
                  goto LABEL_55;
              }
            }
            while ( v44 != v45 );
LABEL_55:
            v13 = *(unsigned int *)(v12 + 424);
            v15 = v13 + 1;
          }
          *(_DWORD *)(v12 + 536) = 0;
          v14 = *(unsigned int *)(v12 + 428);
        }
        else
        {
          v41 = operator new(0x3A0u);
          v14 = 8;
          v15 = 1;
          v12 = v41;
          *(_BYTE *)v41 = 0;
          *(_QWORD *)(v41 + 96) = v41 + 112;
          *(_QWORD *)(v41 + 128) = v41 + 144;
          *(_QWORD *)(v41 + 160) = v41 + 176;
          *(_QWORD *)(v41 + 192) = v41 + 208;
          *(_QWORD *)(v41 + 224) = v41 + 240;
          *(_QWORD *)(v41 + 256) = v41 + 272;
          *(_QWORD *)(v41 + 288) = v41 + 304;
          *(_QWORD *)(v41 + 320) = v41 + 336;
          *(_QWORD *)(v41 + 352) = v41 + 368;
          *(_QWORD *)(v41 + 384) = v41 + 400;
          *(_QWORD *)(v41 + 416) = v41 + 432;
          *(_QWORD *)(v41 + 104) = 0;
          *(_BYTE *)(v41 + 112) = 0;
          *(_QWORD *)(v41 + 136) = 0;
          *(_BYTE *)(v41 + 144) = 0;
          *(_QWORD *)(v41 + 168) = 0;
          *(_BYTE *)(v41 + 176) = 0;
          *(_QWORD *)(v41 + 200) = 0;
          *(_BYTE *)(v41 + 208) = 0;
          *(_QWORD *)(v41 + 232) = 0;
          *(_BYTE *)(v41 + 240) = 0;
          *(_QWORD *)(v41 + 264) = 0;
          *(_BYTE *)(v41 + 272) = 0;
          *(_QWORD *)(v41 + 296) = 0;
          *(_BYTE *)(v41 + 304) = 0;
          *(_QWORD *)(v41 + 328) = 0;
          *(_BYTE *)(v41 + 336) = 0;
          *(_QWORD *)(v41 + 360) = 0;
          *(_BYTE *)(v41 + 368) = 0;
          *(_QWORD *)(v41 + 392) = 0;
          *(_BYTE *)(v41 + 400) = 0;
          *(_QWORD *)(v41 + 424) = 0x800000000LL;
          *(_QWORD *)(v41 + 528) = v41 + 544;
          *(_QWORD *)(v41 + 536) = 0x600000000LL;
          v13 = 0;
        }
        *v10 = v12;
      }
      v66 = v11;
      LOBYTE(v67) = 1;
      if ( v15 > v14 )
      {
        sub_22134E0(v12 + 416, v12 + 432, v15, 12);
        v13 = *(unsigned int *)(v12 + 424);
      }
      v16 = *(_QWORD *)(v12 + 416) + 12 * v13;
      *(_QWORD *)v16 = v66;
      *(_DWORD *)(v16 + 8) = v67;
      ++*(_DWORD *)(v12 + 424);
    }
  }
  return v50;
}

