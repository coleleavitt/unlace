__int64 __fastcall sub_914A90(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 result; // rax
  char v7; // dl
  __int64 v8; // r13
  __int64 v9; // r12
  int *v10; // rbx
  __int64 v11; // r11
  _BYTE *v12; // rbx
  __int64 v13; // rdi
  char v14; // dl
  __int64 v15; // r13
  __int64 v16; // r12
  int *v17; // rbx
  __int64 v18; // r11
  __int64 v19; // rbx
  __int64 v20; // rbp
  unsigned int v21; // eax
  __int64 v22; // rdi
  char v23; // dl
  __int64 v24; // r13
  __int64 v25; // r12
  int *v26; // rbx
  __int64 v27; // r11
  __int64 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // dl
  __int64 v32; // r13
  __int64 v33; // r12
  int *v34; // rbx
  __int64 v35; // r11
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdi
  char v39; // dl
  __int64 v40; // r13
  __int64 v41; // r12
  int *v42; // rbx
  __int64 v43; // r11
  const __m128i *v44; // rbx
  __m128i *v45; // rax
  char v46; // dl
  __int64 v47; // r13
  __int64 v48; // r12
  int *v49; // rbx
  __int64 v50; // r11
  __int64 v51; // rbx
  __int64 v52; // rbp
  __int64 v53; // rdi
  char v54; // dl
  int *v55; // rbx
  __int64 v56; // r11
  __int64 v57; // rdi
  char v58; // dl
  int *v59; // rbx
  __int64 v60; // r11
  __int64 v61; // rdi
  char v62; // dl
  __int64 v63; // r13
  __int64 v64; // r12
  int *v65; // rbx
  __int64 v66; // r11
  _WORD *v67; // rbx
  __int64 v68; // rdi
  char v69; // dl
  int *v70; // rbx
  __int64 v71; // r11
  char v72; // dl
  __int64 v73; // r13
  __int64 v74; // r12
  int *v75; // rbx
  __int64 v76; // r11
  _DWORD *v77; // rbx
  __int64 v78; // rdi
  char v79; // dl
  int *v80; // rbx
  __int64 v81; // r11
  char v82; // dl
  __int64 v83; // r13
  __int64 v84; // r12
  int *v85; // rbx
  __int64 v86; // r11
  _QWORD *v87; // rbx
  __int64 v88; // rdi
  char v89; // dl
  int *v90; // rbx
  __int64 v91; // r11
  __int64 v92[13]; // [rsp+0h] [rbp-68h] BYREF

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v53 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 800) = *a4;
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 24LL))(v53);
        result = 0;
        if ( !v54 )
        {
          v8 = *(_QWORD *)(a1 + 584);
          v9 = *(_QWORD *)(a1 + 568);
          v55 = sub_8CFFE0((__int64 *)(v8 + 192), a3);
          if ( v55 == (int *)sub_914A80(v56) )
            goto LABEL_72;
          sub_A1BF70(v92, *((_QWORD *)v55 + 1));
          v12 = (_BYTE *)sub_8F63E0(v92);
          sub_A1C0C0(v92);
          goto LABEL_43;
        }
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v57 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 800) = *a4;
        v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 24LL))(v57);
        result = 0;
        if ( !v58 )
        {
          v8 = *(_QWORD *)(a1 + 584);
          v9 = *(_QWORD *)(a1 + 568);
          v59 = sub_8CFFE0((__int64 *)(v8 + 192), a3);
          if ( v59 == (int *)sub_914A80(v60) )
            goto LABEL_72;
          sub_A1BF70(v92, *((_QWORD *)v59 + 1));
          v12 = (_BYTE *)sub_8F6BD0(v92);
          sub_A1C0C0(v92);
          goto LABEL_43;
        }
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v61 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 800) = *a4;
        v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 24LL))(v61);
        result = 0;
        if ( !v62 )
        {
          v63 = *(_QWORD *)(a1 + 584);
          v64 = *(_QWORD *)(a1 + 568);
          v65 = sub_8CFFE0((__int64 *)(v63 + 192), a3);
          if ( v65 == (int *)sub_914A80(v66) )
            goto LABEL_75;
          sub_A1BF70(v92, *((_QWORD *)v65 + 1));
          v67 = (_WORD *)sub_8F6C20(v92);
          sub_A1C0C0(v92);
          goto LABEL_48;
        }
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v68 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 800) = *a4;
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 24LL))(v68);
        result = 0;
        if ( !v69 )
        {
          v63 = *(_QWORD *)(a1 + 584);
          v64 = *(_QWORD *)(a1 + 568);
          v70 = sub_8CFFE0((__int64 *)(v63 + 192), a3);
          if ( v70 == (int *)sub_914A80(v71) )
          {
LABEL_75:
            v67 = (_WORD *)(*(_QWORD *)(v63 + 168) + a3 - (unsigned __int64)*(unsigned int *)(v63 + 160));
          }
          else
          {
            sub_A1BF70(v92, *((_QWORD *)v70 + 1));
            v67 = (_WORD *)sub_8F7430(v92);
            sub_A1C0C0(v92);
          }
LABEL_48:
          *(_WORD *)sub_A1A4E0(v64, 8) = *v67;
          result = 1;
        }
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        v72 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        result = 0;
        if ( !v72 )
        {
          v73 = *(_QWORD *)(a1 + 584);
          v74 = *(_QWORD *)(a1 + 568);
          v75 = sub_8CFFE0((__int64 *)(v73 + 192), a3);
          if ( v75 == (int *)sub_914A80(v76) )
            goto LABEL_73;
          sub_A1BF70(v92, *((_QWORD *)v75 + 1));
          v77 = (_DWORD *)sub_8F7480(v92);
          sub_A1C0C0(v92);
          goto LABEL_61;
        }
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v78 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 800) = *a4;
        v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v78 + 24LL))(v78);
        result = 0;
        if ( !v79 )
        {
          v73 = *(_QWORD *)(a1 + 584);
          v74 = *(_QWORD *)(a1 + 568);
          v80 = sub_8CFFE0((__int64 *)(v73 + 192), a3);
          if ( v80 == (int *)sub_914A80(v81) )
          {
LABEL_73:
            v77 = (_DWORD *)(*(_QWORD *)(v73 + 168) + a3 - (unsigned __int64)*(unsigned int *)(v73 + 160));
          }
          else
          {
            sub_A1BF70(v92, *((_QWORD *)v80 + 1));
            v77 = (_DWORD *)sub_8F7C70(v92);
            sub_A1C0C0(v92);
          }
LABEL_61:
          *(_DWORD *)sub_A1A4E0(v74, 8) = *v77;
          result = 1;
        }
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        v82 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        result = 0;
        if ( !v82 )
        {
          v83 = *(_QWORD *)(a1 + 584);
          v84 = *(_QWORD *)(a1 + 568);
          v85 = sub_8CFFE0((__int64 *)(v83 + 192), a3);
          if ( v85 == (int *)sub_914A80(v86) )
            goto LABEL_74;
          sub_A1BF70(v92, *((_QWORD *)v85 + 1));
          v87 = (_QWORD *)sub_8F7CC0(v92);
          sub_A1C0C0(v92);
          goto LABEL_70;
        }
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v88 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 800) = *a4;
        v89 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 24LL))(v88);
        result = 0;
        if ( !v89 )
        {
          v83 = *(_QWORD *)(a1 + 584);
          v84 = *(_QWORD *)(a1 + 568);
          v90 = sub_8CFFE0((__int64 *)(v83 + 192), a3);
          if ( v90 == (int *)sub_914A80(v91) )
          {
LABEL_74:
            v87 = (_QWORD *)(*(_QWORD *)(v83 + 168) + a3 - (unsigned __int64)*(unsigned int *)(v83 + 160));
          }
          else
          {
            sub_A1BF70(v92, *((_QWORD *)v90 + 1));
            v87 = (_QWORD *)sub_8F84D0(v92);
            sub_A1C0C0(v92);
          }
LABEL_70:
          *(_QWORD *)sub_A1A4E0(v84, 8) = *v87;
          result = 1;
        }
      }
      break;
    case 8:
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
        result = sub_8E71D0((_QWORD *)a1, a3, *a4);
      break;
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        result = 0;
        if ( !v7 )
        {
          v8 = *(_QWORD *)(a1 + 584);
          v9 = *(_QWORD *)(a1 + 568);
          v10 = sub_8CFFE0((__int64 *)(v8 + 192), a3);
          if ( v10 == (int *)sub_914A80(v11) )
          {
LABEL_72:
            v12 = (_BYTE *)(*(_QWORD *)(v8 + 168) + a3 - (unsigned __int64)*(unsigned int *)(v8 + 160));
          }
          else
          {
            sub_A1BF70(v92, *((_QWORD *)v10 + 1));
            v12 = (_BYTE *)sub_8F9850(v92);
            sub_A1C0C0(v92);
          }
LABEL_43:
          *(_BYTE *)sub_A1A4E0(v9, 8) = *v12;
          result = 1;
        }
      }
      break;
    case 11:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v13 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 800) = *a4;
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
        result = 0;
        if ( !v14 )
        {
          v15 = *(_QWORD *)(a1 + 584);
          v16 = *(_QWORD *)(a1 + 568);
          v17 = sub_8CFFE0((__int64 *)(v15 + 192), a3);
          if ( v17 == (int *)sub_914A80(v18) )
          {
            v19 = *(_QWORD *)(v15 + 168) + a3 - (unsigned __int64)*(unsigned int *)(v15 + 160);
          }
          else
          {
            sub_A1BF70(v92, *((_QWORD *)v17 + 1));
            v19 = sub_8FA0E0(v92);
            sub_A1C0C0(v92);
          }
          v20 = sub_A1A4E0(v16, 24);
          v21 = *(_DWORD *)(v19 + 8);
          *(_DWORD *)(v20 + 8) = v21;
          if ( v21 > 0x40 )
            sub_2585B30(v20);
          else
            *(_QWORD *)v20 = *(_QWORD *)v19;
          *(_BYTE *)(v20 + 12) = *(_BYTE *)(v19 + 12);
          *(_DWORD *)(v20 + 16) = *(_DWORD *)(v19 + 16);
          result = 1;
        }
      }
      break;
    case 12:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v22 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 800) = *a4;
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22);
        result = 0;
        if ( !v23 )
        {
          v24 = *(_QWORD *)(a1 + 584);
          v25 = *(_QWORD *)(a1 + 568);
          v26 = sub_8CFFE0((__int64 *)(v24 + 192), a3);
          if ( v26 == (int *)sub_914A80(v27) )
          {
            v28 = (__int64 *)(*(_QWORD *)(v24 + 168) + a3 - (unsigned __int64)*(unsigned int *)(v24 + 160));
          }
          else
          {
            sub_A1BF70(v92, *((_QWORD *)v26 + 1));
            v28 = (__int64 *)sub_8F8D80(v92);
            sub_A1C0C0(v92);
          }
          v29 = sub_A1A4E0(v25, 24);
          sub_835150(v29, v28, v30);
          result = 1;
        }
      }
      break;
    case 13:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        result = 0;
        if ( !v31 )
        {
          v32 = *(_QWORD *)(a1 + 584);
          v33 = *(_QWORD *)(a1 + 568);
          v34 = sub_8CFFE0((__int64 *)(v32 + 192), a3);
          if ( v34 == (int *)sub_914A80(v35) )
          {
            v36 = *(_QWORD *)(v32 + 168) + a3 - (unsigned __int64)*(unsigned int *)(v32 + 160);
          }
          else
          {
            sub_A1BF70(v92, *((_QWORD *)v34 + 1));
            v36 = sub_8F9CB0(v92);
            sub_A1C0C0(v92);
          }
          v37 = sub_A1A4E0(v33, 56);
          sub_A1BFE0(v37, v36);
          result = 1;
        }
      }
      break;
    case 14:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v38 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 800) = *a4;
        v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 24LL))(v38);
        result = 0;
        if ( !v39 )
        {
          v40 = *(_QWORD *)(a1 + 584);
          v41 = *(_QWORD *)(a1 + 568);
          v42 = sub_8CFFE0((__int64 *)(v40 + 192), a3);
          if ( v42 == (int *)sub_914A80(v43) )
          {
            v44 = (const __m128i *)(*(_QWORD *)(v40 + 168) + a3 - (unsigned __int64)*(unsigned int *)(v40 + 160));
          }
          else
          {
            sub_A1BF70(v92, *((_QWORD *)v42 + 1));
            v44 = (const __m128i *)sub_8FA040(v92);
            sub_A1C0C0(v92);
          }
          v45 = (__m128i *)sub_A1A4E0(v41, 24);
          *v45 = _mm_loadu_si128(v44);
          v45[1].m128i_i64[0] = v44[1].m128i_i64[0];
          result = 1;
        }
      }
      break;
    case 15:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        v46 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        result = 0;
        if ( !v46 )
        {
          v47 = *(_QWORD *)(a1 + 584);
          v48 = *(_QWORD *)(a1 + 568);
          v49 = sub_8CFFE0((__int64 *)(v47 + 192), a3);
          if ( v49 == (int *)sub_914A80(v50) )
          {
            v51 = *(_QWORD *)(v47 + 168) + a3 - (unsigned __int64)*(unsigned int *)(v47 + 160);
          }
          else
          {
            sub_A1BF70(v92, *((_QWORD *)v49 + 1));
            v51 = sub_8FA090(v92);
            sub_A1C0C0(v92);
          }
          v52 = sub_A1A4E0(v48, 72);
          sub_A1BFE0(v52, v51);
          *(_QWORD *)(v52 + 56) = *(_QWORD *)(v51 + 56);
          *(_DWORD *)(v52 + 64) = *(_DWORD *)(v51 + 64);
          result = 1;
        }
      }
      break;
  }
  return result;
}

