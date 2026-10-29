__int64 __fastcall sub_132AB0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  __int64 v9; // rax
  unsigned __int8 *v11; // r14
  __int64 v12; // rax
  __int64 v14; // rsi
  _DWORD *v15; // rdx
  __int16 v16; // si
  __int16 v17; // cx
  int v18; // edx
  __int64 v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // rax
  unsigned __int8 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // [rsp-10h] [rbp-78h]
  __int64 v30; // [rsp-8h] [rbp-70h]
  int v31; // [rsp+4h] [rbp-64h]
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+10h] [rbp-58h] BYREF
  __int64 v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v9 = a1[30].m128i_i64[0];
  v35 = __readfsqword(0x28u);
  v32 = *(_QWORD *)(v9 + 112);
  sub_1217B0(a1, a2, a3);
  sub_1215C0((__int64)a1, (_BYTE *)a4, a5);
  v31 = a6 + *(_DWORD *)(a3 + 4);
  switch ( *a5 )
  {
    case 4u:
      if ( a5[9] == a6 && (unsigned __int8)sub_132E20((_DWORD)a1, a2, a3, a4, (int)a5 + 32, 0) )
        return 1;
      goto LABEL_3;
    case 8u:
    case 9u:
      if ( a5[17] != v31 )
        goto LABEL_3;
      v14 = sub_339CA0();
      if ( !sub_1255D0((unsigned __int8 *)a3, v14, (__int64)(a5 + 8), 0)
        && (*(_BYTE *)a3 != 4 || !sub_125B90(*(unsigned __int8 **)(a3 + 8), v32, a5, 1u)) )
      {
        goto LABEL_3;
      }
      sub_1207E0((char *)a3, v32, *a5, *(_QWORD *)(a4 + 24), v31);
      return 1;
    case 0xAu:
      if ( *(_BYTE *)a3 != 4 )
        goto LABEL_3;
      v20 = *(_DWORD **)(a3 + 8);
      if ( *v20 != 22 || !(unsigned __int8)sub_1307A0(a1, a2, (__int64)v20, a4, (int *)a5) )
        goto LABEL_3;
      v21 = 0;
      if ( *a5 == 10 && *((_BYTE *)a5 + 32) == 4 )
        v21 = *((_QWORD *)a5 + 5);
      v22 = (unsigned __int8 *)(v21 + 32);
      v23 = *(_QWORD *)(a3 + 8);
      v24 = v23 + 32;
      if ( v22 != (unsigned __int8 *)(v23 + 32) )
      {
        sub_11CDA0(v23 + 32);
        sub_123A40(v24, v22, v25, v26);
        v23 = *(_QWORD *)(a3 + 8);
      }
      *(_DWORD *)(v23 + 68) = *(_DWORD *)(v23 + 36);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 68LL);
      return 1;
    case 0xBu:
      if ( *((_BYTE *)a5 + 32) != 4 )
        goto LABEL_3;
      v15 = *((_DWORD **)a5 + 5);
      if ( !v15
        || (unsigned int)(*v15 - 8) > 1
        || a5[9] != v31
        || !(unsigned __int8)sub_12EA80(v32, a1, a2, a3, a4, (__int64)(v15 + 8), 0) )
      {
        goto LABEL_3;
      }
      if ( a3 )
      {
        v34 = 0;
        sub_123A40((__int64)&v33, (unsigned __int8 *)a5 + 32, v29, v30);
        v16 = *(_WORD *)a3;
        v17 = *(_WORD *)(a3 + 2);
        v18 = *(_DWORD *)(a3 + 4);
        *(_QWORD *)a3 = v33;
        v19 = *(_QWORD *)(a3 + 8);
        LOWORD(v33) = v16;
        *(_QWORD *)(a3 + 8) = v34;
        WORD1(v33) = v17;
        HIDWORD(v33) = v18;
        v34 = v19;
        sub_11CDA0((__int64)&v33);
      }
      return 1;
    case 0x18u:
      if ( *(_BYTE *)a3 != 4 || !(unsigned __int8)sub_130320(a1, a2, *(_QWORD *)(a3 + 8), a4, a5) )
        goto LABEL_3;
      v27 = *(_QWORD *)(a3 + 8);
      v28 = *(_QWORD *)(v27 + 40);
      *(_QWORD *)(v27 + 40) = 0;
      sub_11D890(v28, *(_QWORD *)(a3 + 8));
      if ( v28 )
      {
        sub_11CDA0(v28 + 64);
        sub_11CDA0(v28 + 48);
        sub_11CDA0(v28 + 32);
        j__qfree(v28);
      }
      **(_DWORD **)(a3 + 8) = *a5;
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 68LL);
      return 1;
    default:
LABEL_3:
      v11 = (unsigned __int8 *)sub_30D1C0(a5);
      if ( !v11 )
        return 0;
      v12 = sub_339CA0();
      if ( !sub_1255D0(v11, v12, a3, 0) || a5[17] != a6 )
        return 0;
      sub_1207E0((char *)a3, v32, 8, *(_QWORD *)(a4 + 24), v31);
      return 1;
  }
}
