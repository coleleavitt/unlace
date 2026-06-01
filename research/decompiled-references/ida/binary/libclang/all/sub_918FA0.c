__int64 __fastcall sub_918FA0(__int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r13
  char v11; // bl
  __int64 v12; // rbp
  __int64 v13; // r13
  char v14; // bl
  __int64 v15; // rbp
  __int64 v16; // r13
  __int16 v17; // bx
  __int64 v18; // rbp
  __int64 v19; // r13
  __int16 v20; // bx
  __int64 v21; // rbp
  __int64 v22; // r13
  int v23; // ebx
  __int64 v24; // rbp
  __int64 v25; // r13
  int v26; // ebx
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // rbp
  __int64 v31; // r13
  __int64 v32; // rbx
  __int64 v33; // rsi
  _QWORD *v34; // rdi
  __int64 v35; // rsi
  _QWORD *v36; // rdi
  __int64 v37; // rbp
  __int64 v38; // r13
  char v39; // bl
  __int64 v40; // rsi
  _QWORD *v41; // rdi
  __int64 v42; // rbp
  __int64 v43; // r13
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  _QWORD *v47; // rdi
  __int64 v48; // rbp
  __int64 v49; // r13
  __m128i *v50; // rax
  __m128i v51; // [rsp+0h] [rbp-88h] BYREF
  __int8 v52; // [rsp+10h] [rbp-78h]
  __int64 v53[13]; // [rsp+20h] [rbp-68h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v9 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v10 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v9, v10 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v10 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v10 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v10 + 40)));
      v11 = sub_915550(*(_QWORD *)(a1 + 568));
      *(_BYTE *)sub_8F63E0(v53) = v11;
      goto LABEL_38;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v12 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v13 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v12, v13 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v13 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v13 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v13 + 40)));
      v14 = sub_915900(*(_QWORD *)(a1 + 568));
      *(_BYTE *)sub_8F6BD0(v53) = v14;
      goto LABEL_38;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v15 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v16 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v15, v16 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v16 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v16 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v16 + 40)));
      v17 = sub_915930(*(_QWORD *)(a1 + 568));
      *(_WORD *)sub_8F6C20(v53) = v17;
      goto LABEL_38;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v18 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v19 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v18, v19 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v19 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v19 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v19 + 40)));
      v20 = sub_915CE0(*(_QWORD *)(a1 + 568));
      *(_WORD *)sub_8F7430(v53) = v20;
      goto LABEL_38;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v21 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v22 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v21, v22 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v22 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v22 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v22 + 40)));
      v23 = sub_915D10(*(_QWORD *)(a1 + 568));
      *(_DWORD *)sub_8F7480(v53) = v23;
      goto LABEL_38;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v24 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v25 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v24, v25 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v25 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v25 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v25 + 40)));
      v26 = sub_9160C0(*(_QWORD *)(a1 + 568));
      *(_DWORD *)sub_8F7C70(v53) = v26;
      goto LABEL_38;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v27 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v28 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v27, v28 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v28 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v28 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v28 + 40)));
      v29 = sub_9160F0(*(_QWORD *)(a1 + 568));
      *(_QWORD *)sub_8F7CC0(v53) = v29;
      goto LABEL_38;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v30 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v31 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v30, v31 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v31 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v31 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v31 + 40)));
      v32 = sub_9164A0(*(_QWORD *)(a1 + 568));
      *(_QWORD *)sub_8F84D0(v53) = v32;
      goto LABEL_38;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v33 = *(_QWORD *)(a1 + 792);
      v34 = (_QWORD *)(a1 + 384);
      v34[52] = *a4;
      return sub_90BE40(v34, v33, a3);
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v35 = *(_QWORD *)(a1 + 792);
      v36 = (_QWORD *)(a1 + 384);
      v36[52] = *a4;
      return sub_90BFD0(v36, v35, a3);
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v37 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v38 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v37, v38 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v38 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v38 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v38 + 40)));
      v39 = sub_8F4170(*(_QWORD *)(a1 + 568));
      *(_BYTE *)sub_8F9850(v53) = v39;
      goto LABEL_38;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v40 = *(_QWORD *)(a1 + 792);
      v41 = (_QWORD *)(a1 + 384);
      v41[52] = *a4;
      return sub_90C160(v41, v40, a3);
    case 12:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v42 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v43 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v42, v43 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v43 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v43 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v43 + 40)));
      sub_8F4110((__int64)&v51, *(_QWORD *)(a1 + 568));
      v44 = (__int64 *)sub_8F8D80(v53);
      sub_8DBA70(v44, v51.m128i_i64, v45);
      sub_5FF3B0(v51.m128i_i64);
      sub_A1C490(v53);
      sub_A1DB00(v53);
      sub_A1C0C0(v53);
      return v5;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v46 = *(_QWORD *)(a1 + 792);
      v47 = (_QWORD *)(a1 + 384);
      v47[52] = *a4;
      return sub_90C320(v47, v46, a3);
    case 14:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v48 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
        return 0;
      v49 = *(_QWORD *)(a1 + 584);
      v5 = sub_9D9870(a1 + 384, v48, v49 + 40);
      if ( !(_BYTE)v5 )
        return 0;
      sub_A1C030(
        v53,
        *(_QWORD *)(v49 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v49 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v49 + 40)));
      sub_8F5130(&v51, *(_QWORD *)(a1 + 568));
      v50 = (__m128i *)sub_8FA040(v53);
      *v50 = _mm_load_si128(&v51);
      v50[1].m128i_i8[0] = v52;
LABEL_38:
      sub_A1C490(v53);
      sub_A1DB00(v53);
      sub_A1C0C0(v53);
      return v5;
    case 15:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v5;
      v7 = *(_QWORD *)(a1 + 792);
      v8 = (_QWORD *)(a1 + 384);
      v8[52] = *a4;
      return sub_90C4B0(v8, v7, a3);
  }
}

