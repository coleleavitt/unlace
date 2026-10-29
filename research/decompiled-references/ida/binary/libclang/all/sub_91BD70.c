__int64 __fastcall sub_91BD70(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rbp
  char v10; // r13
  __int64 *v11; // r12
  __int64 v12; // rbp
  char v13; // r13
  __int64 *v14; // r12
  __int64 v15; // rbp
  __int16 v16; // r13
  __int64 *v17; // r12
  __int64 v18; // rbp
  __int16 v19; // r13
  __int64 *v20; // r12
  __int64 v21; // rbp
  int v22; // r13d
  __int64 *v23; // r12
  __int64 v24; // rbp
  int v25; // r13d
  __int64 *v26; // r12
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 *v29; // r12
  __int64 v30; // rbp
  __int64 v31; // r13
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rbp
  __int64 *v39; // r12
  __int64 v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rbp
  char v43; // r13
  __int64 *v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rbp
  __int64 *v49; // r13
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rbp
  __int64 *v54; // r13
  __int64 v55; // rax
  __int64 v56; // rbp
  __int64 *v57; // r12
  __m128i *v58; // rax
  void *v59[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v60; // [rsp+10h] [rbp-68h]
  __int64 v61; // [rsp+38h] [rbp-40h]
  int v62; // [rsp+40h] [rbp-38h]

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v9 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v10 = sub_915550(*(_QWORD *)(a1 + 568));
        v11 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v9, v11);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v11);
          sub_A1DB00(v11);
          *(_BYTE *)sub_8F63E0(v11) = v10;
        }
      }
      return v3;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v12 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v13 = sub_915900(*(_QWORD *)(a1 + 568));
        v14 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v12, v14);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v14);
          sub_A1DB00(v14);
          *(_BYTE *)sub_8F6BD0(v14) = v13;
        }
      }
      return v3;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v15 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v16 = sub_915930(*(_QWORD *)(a1 + 568));
        v17 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v15, v17);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v17);
          sub_A1DB00(v17);
          *(_WORD *)sub_8F6C20(v17) = v16;
        }
      }
      return v3;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v18 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v19 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v20 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v18, v20);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v20);
          sub_A1DB00(v20);
          *(_WORD *)sub_8F7430(v20) = v19;
        }
      }
      return v3;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v21 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v22 = sub_915D10(*(_QWORD *)(a1 + 568));
        v23 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v21, v23);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v23);
          sub_A1DB00(v23);
          *(_DWORD *)sub_8F7480(v23) = v22;
        }
      }
      return v3;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v24 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v25 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v26 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v24, v26);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v26);
          sub_A1DB00(v26);
          *(_DWORD *)sub_8F7C70(v26) = v25;
        }
      }
      return v3;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v27 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v28 = sub_9160F0(*(_QWORD *)(a1 + 568));
        v29 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v27, v29);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v29);
          sub_A1DB00(v29);
          *(_QWORD *)sub_8F7CC0(v29) = v28;
        }
      }
      return v3;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v30 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v31 = sub_9164A0(*(_QWORD *)(a1 + 568));
        v32 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v30, v32);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v32);
          sub_A1DB00(v32);
          *(_QWORD *)sub_8F84D0(v32) = v31;
        }
      }
      return v3;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v33 = *(_QWORD *)(a1 + 568);
      v34 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_919FD0((__int64)v59, v33);
      v35 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9D5470(a1 + 384, v34, v35);
      if ( !(_BYTE)v3 )
        goto LABEL_39;
      sub_A1C490(v35);
      sub_A1DB00(v35);
      v36 = sub_8F8520(v35);
      goto LABEL_37;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v37 = *(_QWORD *)(a1 + 568);
      v38 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_91A020((__int64)v59, v37);
      v39 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9D5470(a1 + 384, v38, v39);
      if ( !(_BYTE)v3 )
        goto LABEL_39;
      sub_A1C490(v39);
      sub_A1DB00(v39);
      v36 = sub_8F8D30(v39);
LABEL_37:
      v40 = v36;
      v41 = (unsigned int)v59[1];
      *(_DWORD *)(v40 + 8) = v59[1];
      if ( v41 > 0x40 )
        sub_2585B30(v40);
      else
        *(void **)v40 = v59[0];
LABEL_39:
      if ( LODWORD(v59[1]) > 0x40 && v59[0] )
        operator delete[](v59[0]);
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v42 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v43 = sub_8F4170(*(_QWORD *)(a1 + 568));
        v44 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v42, v44);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v44);
          sub_A1DB00(v44);
          *(_BYTE *)sub_8F9850(v44) = v43;
        }
      }
      return v3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v45 = *(_QWORD *)(a1 + 792);
      v46 = a1 + 384;
      *(_QWORD *)(v46 + 416) = *a3;
      return sub_904460(v46, v45);
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v47 = *(_QWORD *)(a1 + 568);
        v48 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F4110((__int64)v59, v47);
        v49 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v48, v49);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v49);
          sub_A1DB00(v49);
          v50 = sub_8F8D80(v49);
          sub_835150(v50, (__int64 *)v59, v51);
        }
        sub_5FF3B0((__int64 *)v59);
      }
      return v3;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v52 = *(_QWORD *)(a1 + 568);
      v53 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v52);
      v54 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9D5470(a1 + 384, v53, v54);
      if ( (_BYTE)v3 )
      {
        sub_A1C490(v54);
        sub_A1DB00(v54);
        v55 = sub_8F9CB0(v54);
        sub_A1BFE0(v55, v59);
      }
      goto LABEL_54;
    case 14:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v56 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F5130((__m128i *)v59, *(_QWORD *)(a1 + 568));
        v57 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9D5470(a1 + 384, v56, v57);
        if ( (_BYTE)v3 )
        {
          sub_A1C490(v57);
          sub_A1DB00(v57);
          v58 = (__m128i *)sub_8FA040(v57);
          *v58 = _mm_load_si128((const __m128i *)v59);
          v58[1].m128i_i64[0] = v60;
        }
      }
      return v3;
    case 15:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v5 = *(_QWORD *)(a1 + 568);
      v6 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5170((__int64)v59, v5);
      v7 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9D5470(a1 + 384, v6, v7);
      if ( (_BYTE)v3 )
      {
        sub_A1C490(v7);
        sub_A1DB00(v7);
        v8 = sub_8FA090(v7);
        sub_A1BFE0(v8, v59);
        *(_QWORD *)(v8 + 56) = v61;
        *(_DWORD *)(v8 + 64) = v62;
      }
LABEL_54:
      sub_A1C0C0(v59);
      break;
  }
  return v3;
}

