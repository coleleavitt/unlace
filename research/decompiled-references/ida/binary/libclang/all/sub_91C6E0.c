__int64 __fastcall sub_91C6E0(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  _BYTE *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // r13
  __int64 v32; // rbp
  __int64 v33; // r13
  __int64 v34; // rbp
  __int64 v35; // r13
  __int64 v36; // r14
  _WORD *v37; // rax
  __int64 v38; // rbp
  __int64 v39; // r13
  __int64 v40; // rbp
  __int64 v41; // r13
  __int64 v42; // r14
  _DWORD *v43; // rax
  __int64 v44; // rbp
  __int64 v45; // r13
  __int64 v46; // rbp
  __int64 v47; // r13
  __int64 v48; // r14
  _QWORD *v49; // rax
  __int64 v50; // rbp
  __int64 v51; // r13
  __int64 v52; // rbp
  __int64 v53; // r13
  __int64 v54; // r14
  const __m128i *v55; // r12
  __m128i *v56; // rax
  __int64 v57; // rbp
  __int64 v58; // r13
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61[13]; // [rsp+0h] [rbp-68h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v30 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v31 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v30, v31, 0);
        if ( (_BYTE)v5 )
        {
          v9 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v31, a3);
          v10 = (_BYTE *)sub_8F63E0(v61);
          goto LABEL_25;
        }
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v32 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v33 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v32, v33, 0);
        if ( (_BYTE)v5 )
        {
          v9 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v33, a3);
          v10 = (_BYTE *)sub_8F6BD0(v61);
          goto LABEL_25;
        }
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v34 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v35 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v34, v35, 0);
        if ( (_BYTE)v5 )
        {
          v36 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v35, a3);
          v37 = (_WORD *)sub_8F6C20(v61);
          goto LABEL_32;
        }
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v38 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v39 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v38, v39, 0);
        if ( (_BYTE)v5 )
        {
          v36 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v39, a3);
          v37 = (_WORD *)sub_8F7430(v61);
LABEL_32:
          *(_WORD *)sub_A1A4E0(v36, 8) = *v37;
          sub_A1C0C0(v61);
        }
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v40 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v41 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v40, v41, 0);
        if ( (_BYTE)v5 )
        {
          v42 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v41, a3);
          v43 = (_DWORD *)sub_8F7480(v61);
          goto LABEL_39;
        }
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v44 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v45 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v44, v45, 0);
        if ( (_BYTE)v5 )
        {
          v42 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v45, a3);
          v43 = (_DWORD *)sub_8F7C70(v61);
LABEL_39:
          *(_DWORD *)sub_A1A4E0(v42, 8) = *v43;
          sub_A1C0C0(v61);
        }
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v46 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v47 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v46, v47, 0);
        if ( (_BYTE)v5 )
        {
          v48 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v47, a3);
          v49 = (_QWORD *)sub_8F7CC0(v61);
          goto LABEL_46;
        }
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v50 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v51 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v50, v51, 0);
        if ( (_BYTE)v5 )
        {
          v48 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v51, a3);
          v49 = (_QWORD *)sub_8F84D0(v61);
LABEL_46:
          *(_QWORD *)sub_A1A4E0(v48, 8) = *v49;
          sub_A1C0C0(v61);
        }
      }
      break;
    case 8:
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v57 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v58 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v57, v58, 0);
        if ( (_BYTE)v5 )
        {
          v59 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v58, a3);
          v60 = sub_8F8520(v61);
          sub_91C660(v59, v60);
          sub_A1C0C0(v61);
        }
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v7 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v8 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v7, v8, 0);
        if ( (_BYTE)v5 )
        {
          v9 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v8, a3);
          v10 = (_BYTE *)sub_8F9850(v61);
LABEL_25:
          *(_BYTE *)sub_A1A4E0(v9, 8) = *v10;
          sub_A1C0C0(v61);
        }
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v12 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v11, v12, 0);
        if ( (_BYTE)v5 )
        {
          v13 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v12, a3);
          v14 = sub_8FA0E0(v61);
          sub_8F5F00(v13, v14);
          sub_A1C0C0(v61);
        }
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v15 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v16 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v15, v16, 0);
        if ( (_BYTE)v5 )
        {
          v17 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v16, a3);
          v18 = (__int64 *)sub_8F8D80(v61);
          v19 = sub_A1A4E0(v17, 24);
          sub_835150(v19, v18, v20);
          sub_A1C0C0(v61);
        }
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v21 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v22 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v21, v22, 0);
        if ( (_BYTE)v5 )
        {
          v23 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v22, a3);
          v24 = sub_8F9CB0(v61);
          v25 = sub_A1A4E0(v23, 56);
          sub_A1BFE0(v25, v24);
          sub_A1C0C0(v61);
        }
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v52 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v53 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v52, v53, 0);
        if ( (_BYTE)v5 )
        {
          v54 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v53, a3);
          v55 = (const __m128i *)sub_8FA040(v61);
          v56 = (__m128i *)sub_A1A4E0(v54, 24);
          *v56 = _mm_loadu_si128(v55);
          v56[1].m128i_i64[0] = v55[1].m128i_i64[0];
          sub_A1C0C0(v61);
        }
      }
      break;
    case 15:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v26 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v27 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v5 = sub_9E4580(a1 + 384, v26, v27, 0);
        if ( (_BYTE)v5 )
        {
          v28 = *(_QWORD *)(a1 + 568);
          sub_8E61F0((__int64)v61, v27, a3);
          v29 = sub_8FA090(v61);
          sub_91C6A0(v28, v29);
          sub_A1C0C0(v61);
        }
      }
      break;
  }
  return v5;
}

