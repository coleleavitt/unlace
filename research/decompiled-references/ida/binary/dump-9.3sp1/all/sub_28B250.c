__int64 __fastcall sub_28B250(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 *v4; // r12
  __int64 *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  unsigned int v20; // r15d
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v33; // r15
  __int64 *v34; // rax
  int tinfo_size; // [rsp+0h] [rbp-48h]
  int v36; // [rsp+Ch] [rbp-3Ch]

  v2 = (__int64)a2;
  v4 = (__int64 *)a2[4];
  v5 = (__int64 *)a2[3];
  v6 = a2[5];
  if ( !(unsigned __int8)v4[6] )
    goto LABEL_3;
  if ( !*(_BYTE *)(v6 + 48) )
    goto LABEL_3;
  a2 = (_QWORD *)&word_2;
  v33 = *(_QWORD *)(a1 + 72);
  if ( (get_tinfo_property() & 0x3F) == 1 )
    goto LABEL_3;
  a2 = (_QWORD *)&word_2;
  if ( (get_tinfo_property() & 0x3F) == 1 )
    goto LABEL_3;
  a2 = (_QWORD *)&byte_1;
  if ( (unsigned __int8)sub_285160((__int64)v4, 1, *(_DWORD *)(v33 + 644)) )
    goto LABEL_3;
  a2 = (_QWORD *)(&dword_40 + 2);
  if ( (unsigned __int8)sub_285160((__int64)v4, 66, 1) )
    goto LABEL_3;
  if ( (unsigned __int8)sub_285230((__int64)v4) )
    goto LABEL_3;
  a2 = (_QWORD *)&byte_1;
  if ( (unsigned __int8)sub_285160(v6, 1, *(_DWORD *)(v33 + 644)) )
    goto LABEL_3;
  a2 = (_QWORD *)(&dword_40 + 2);
  if ( (unsigned __int8)sub_285160(v6, 66, 1) )
    goto LABEL_3;
  v20 = sub_285230(v6);
  if ( (_BYTE)v20 )
    goto LABEL_3;
  tinfo_size = get_tinfo_size();
  v36 = get_tinfo_size();
  if ( !sub_11CA80(tinfo_size) )
  {
    a2 = *(_QWORD **)(v2 + 48);
    if ( !(unsigned __int8)compare_tinfo() )
      goto LABEL_3;
  }
  if ( !sub_11CA80(v36) )
  {
    a2 = *(_QWORD **)(v2 + 48);
    if ( !(unsigned __int8)compare_tinfo() )
    {
LABEL_3:
      sub_254DA0(v2);
      *(_DWORD *)(v2 + 8) = 66;
      v9 = sub_241330(v2, (__int64)a2, v7, v8);
      *(_QWORD *)(v2 + 24) = v9;
      v12 = sub_2413C0((__int64)v9, *v5, v10, v11);
      if ( sub_241890(*(_QWORD *)(a1 + 72), (__int64)v5, v13, v14, v15) )
      {
        v5 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (__int64)v5, v16, v17, v18);
        v34 = v4;
        v4 = (__int64 *)v6;
        v6 = (__int64)v34;
      }
      v19 = (__int64)v5;
      v20 = 1;
      v21 = sub_286930((__int64)v12, (__int64)v5, v16, v17);
      v24 = sub_241330((__int64)v12, v19, v22, v23);
      v25 = *(_QWORD *)(v21 + 64);
      *(_QWORD *)(v21 + 72) = v24;
      v28 = sub_2413C0(v25, *v4, v26, v27);
      v31 = sub_2413C0(*(_QWORD *)(v21 + 72), *(_QWORD *)v6, v29, v30);
      *((_DWORD *)v28 + 2) = 72;
      *((_DWORD *)v31 + 2) = 72;
      v28[3] = (__int64)v4;
      v31[3] = v6;
      sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
    }
  }
  return v20;
}
