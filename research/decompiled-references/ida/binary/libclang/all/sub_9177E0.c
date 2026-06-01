__int64 __fastcall sub_9177E0(__int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdi
  char v8; // r12
  __int64 v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int16 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdi
  __int16 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __m128i *v43; // rax
  __m128i v44; // [rsp+0h] [rbp-98h] BYREF
  __int8 v45; // [rsp+10h] [rbp-88h]
  __int64 v46[11]; // [rsp+40h] [rbp-58h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v7 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v8 = sub_915550(v7);
      v9 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v9 + 24), (unsigned int)(a3 + *(_DWORD *)v9), (unsigned int)(a3 + *(_DWORD *)v9));
      v10 = (_BYTE *)sub_8F63E0(v46);
      goto LABEL_28;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v11 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v8 = sub_915900(v11);
      v12 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v12 + 24), (unsigned int)(a3 + *(_DWORD *)v12), (unsigned int)(a3 + *(_DWORD *)v12));
      v10 = (_BYTE *)sub_8F6BD0(v46);
      goto LABEL_28;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v13 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v14 = sub_915930(v13);
      v15 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v15 + 24), (unsigned int)(a3 + *(_DWORD *)v15), (unsigned int)(a3 + *(_DWORD *)v15));
      *(_WORD *)sub_8F6C20(v46) = v14;
      goto LABEL_29;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v16 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v17 = sub_915CE0(v16);
      v18 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v18 + 24), (unsigned int)(a3 + *(_DWORD *)v18), (unsigned int)(a3 + *(_DWORD *)v18));
      *(_WORD *)sub_8F7430(v46) = v17;
      goto LABEL_29;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v19 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v20 = sub_915D10(v19);
      v21 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v21 + 24), (unsigned int)(a3 + *(_DWORD *)v21), (unsigned int)(a3 + *(_DWORD *)v21));
      *(_DWORD *)sub_8F7480(v46) = v20;
      goto LABEL_29;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v22 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v23 = sub_9160C0(v22);
      v24 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v24 + 24), (unsigned int)(a3 + *(_DWORD *)v24), (unsigned int)(a3 + *(_DWORD *)v24));
      *(_DWORD *)sub_8F7C70(v46) = v23;
      goto LABEL_29;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v25 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v26 = sub_9160F0(v25);
      v27 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v27 + 24), (unsigned int)(a3 + *(_DWORD *)v27), (unsigned int)(a3 + *(_DWORD *)v27));
      *(_QWORD *)sub_8F7CC0(v46) = v26;
      goto LABEL_29;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v28 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v29 = sub_9164A0(v28);
      v30 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v30 + 24), (unsigned int)(a3 + *(_DWORD *)v30), (unsigned int)(a3 + *(_DWORD *)v30));
      *(_QWORD *)sub_8F84D0(v46) = v29;
      goto LABEL_29;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8D8580(a1 + 384, a3);
      }
      goto LABEL_3;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8D8470(a1 + 384, a3);
      }
      goto LABEL_3;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v31 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v8 = sub_8F4170(v31);
      v32 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v32 + 24), (unsigned int)(a3 + *(_DWORD *)v32), (unsigned int)(a3 + *(_DWORD *)v32));
      v10 = (_BYTE *)sub_8F9850(v46);
LABEL_28:
      *v10 = v8;
      goto LABEL_29;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8D8690(a1 + 384, a3);
      }
      goto LABEL_3;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v33 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8F4110((__int64)&v44, v33);
        v34 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        sub_A1C030(v46, *(_QWORD *)(v34 + 24), (unsigned int)(a3 + *(_DWORD *)v34), (unsigned int)(a3 + *(_DWORD *)v34));
        v35 = (__int64 *)sub_8F8D80(v46);
        sub_8DBB60(v35, v44.m128i_i64, v36);
        sub_A1C490(v46);
        sub_A1DB00(v46);
        sub_A1C0C0(v46);
        sub_5FF3B0(v44.m128i_i64);
      }
      goto LABEL_3;
    case 13:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v37 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8F41A0((__int64)&v44, v37);
        v38 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        sub_A1C030(v46, *(_QWORD *)(v38 + 24), (unsigned int)(a3 + *(_DWORD *)v38), (unsigned int)(a3 + *(_DWORD *)v38));
        v39 = sub_8F9CB0(v46);
        sub_A1C120(v39, &v44, v40);
        sub_A1C490(v46);
        sub_A1DB00(v46);
        sub_A1C0C0(v46);
        sub_A1C0C0(&v44);
      }
      goto LABEL_3;
    case 14:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v41 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F5130(&v44, v41);
      v42 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      sub_A1C030(v46, *(_QWORD *)(v42 + 24), (unsigned int)(a3 + *(_DWORD *)v42), (unsigned int)(a3 + *(_DWORD *)v42));
      v43 = (__m128i *)sub_8FA040(v46);
      *v43 = _mm_load_si128(&v44);
      v43[1].m128i_i8[0] = v45;
LABEL_29:
      sub_A1C490(v46);
      sub_A1DB00(v46);
      sub_A1C0C0(v46);
      result = 1;
      break;
    case 15:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8D78D0(a1 + 384, a3);
      }
LABEL_3:
      result = 1;
      break;
  }
  return result;
}

