__int64 __fastcall sub_917E20(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rbp
  char v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  char v14; // r13
  __int64 v15; // r12
  __int64 v16; // rbp
  __int16 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rbp
  __int16 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rbp
  int v23; // r13d
  __int64 v24; // r12
  __int64 v25; // rbp
  int v26; // r13d
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rbp
  char v39; // r13
  __int64 v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rbp
  __int64 v45; // r13
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rbp
  __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rbp
  __int64 v54; // r12
  __m128i *v55; // rax
  __m128i v56; // [rsp+0h] [rbp-78h] BYREF
  __int8 v57; // [rsp+10h] [rbp-68h]
  __int64 v58; // [rsp+38h] [rbp-40h]
  int v59; // [rsp+40h] [rbp-38h]

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v11 = sub_915550(*(_QWORD *)(a1 + 568));
        v12 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v10, v12);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v12 + 48) && *(_QWORD *)(v12 + 24) )
          {
            if ( *(_DWORD *)(v12 + 32) )
            {
              sub_A1DB00(v12);
              sub_A1C490(v12);
            }
          }
          *(_BYTE *)sub_8F63E0((__int64 *)v12) = v11;
        }
      }
      return v3;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v13 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v14 = sub_915900(*(_QWORD *)(a1 + 568));
        v15 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v13, v15);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v15 + 48) && *(_QWORD *)(v15 + 24) && *(_DWORD *)(v15 + 32) )
          {
            sub_A1DB00(v15);
            sub_A1C490(v15);
          }
          *(_BYTE *)sub_8F6BD0((__int64 *)v15) = v14;
        }
      }
      return v3;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v16 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v17 = sub_915930(*(_QWORD *)(a1 + 568));
        v18 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v16, v18);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v18 + 48) && *(_QWORD *)(v18 + 24) && *(_DWORD *)(v18 + 32) )
          {
            sub_A1DB00(v18);
            sub_A1C490(v18);
          }
          *(_WORD *)sub_8F6C20((__int64 *)v18) = v17;
        }
      }
      return v3;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v19 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v20 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v21 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v19, v21);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v21 + 48) && *(_QWORD *)(v21 + 24) && *(_DWORD *)(v21 + 32) )
          {
            sub_A1DB00(v21);
            sub_A1C490(v21);
          }
          *(_WORD *)sub_8F7430((__int64 *)v21) = v20;
        }
      }
      return v3;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v22 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v23 = sub_915D10(*(_QWORD *)(a1 + 568));
        v24 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v22, v24);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v24 + 48) && *(_QWORD *)(v24 + 24) && *(_DWORD *)(v24 + 32) )
          {
            sub_A1DB00(v24);
            sub_A1C490(v24);
          }
          *(_DWORD *)sub_8F7480((__int64 *)v24) = v23;
        }
      }
      return v3;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v25 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v26 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v27 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v25, v27);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v27 + 48) && *(_QWORD *)(v27 + 24) && *(_DWORD *)(v27 + 32) )
          {
            sub_A1DB00(v27);
            sub_A1C490(v27);
          }
          *(_DWORD *)sub_8F7C70((__int64 *)v27) = v26;
        }
      }
      return v3;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v28 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v29 = sub_9160F0(*(_QWORD *)(a1 + 568));
        v30 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v28, v30);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v30 + 48) && *(_QWORD *)(v30 + 24) && *(_DWORD *)(v30 + 32) )
          {
            sub_A1DB00(v30);
            sub_A1C490(v30);
          }
          *(_QWORD *)sub_8F7CC0((__int64 *)v30) = v29;
        }
      }
      return v3;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v31 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v32 = sub_9164A0(*(_QWORD *)(a1 + 568));
        v33 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v31, v33);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v33 + 48) && *(_QWORD *)(v33 + 24) && *(_DWORD *)(v33 + 32) )
          {
            sub_A1DB00(v33);
            sub_A1C490(v33);
          }
          *(_QWORD *)sub_8F84D0((__int64 *)v33) = v32;
        }
      }
      return v3;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v34 = *(_QWORD *)(a1 + 792);
      v35 = a1 + 384;
      *(_QWORD *)(v35 + 416) = *a3;
      return sub_90F5C0(v35, v34);
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v36 = *(_QWORD *)(a1 + 792);
      v37 = a1 + 384;
      *(_QWORD *)(v37 + 416) = *a3;
      return sub_90F6E0(v37, v36);
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v38 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v39 = sub_8F4170(*(_QWORD *)(a1 + 568));
        v40 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v38, v40);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v40 + 48) && *(_QWORD *)(v40 + 24) && *(_DWORD *)(v40 + 32) )
          {
            sub_A1DB00(v40);
            sub_A1C490(v40);
          }
          *(_BYTE *)sub_8F9850((__int64 *)v40) = v39;
        }
      }
      return v3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v41 = *(_QWORD *)(a1 + 792);
      v42 = a1 + 384;
      *(_QWORD *)(v42 + 416) = *a3;
      return sub_90F800(v42, v41);
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v43 = *(_QWORD *)(a1 + 568);
        v44 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F4110((__int64)&v56, v43);
        v45 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v44, v45);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v45 + 48) && *(_QWORD *)(v45 + 24) && *(_DWORD *)(v45 + 32) )
          {
            sub_A1DB00(v45);
            sub_A1C490(v45);
          }
          v46 = (__int64 *)sub_8F8D80((__int64 *)v45);
          sub_8DBB60(v46, v56.m128i_i64, v47);
        }
        sub_5FF3B0(v56.m128i_i64);
      }
      return v3;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v48 = *(_QWORD *)(a1 + 568);
      v49 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)&v56, v48);
      v50 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E26A0(a1 + 384, v49, v50);
      if ( (_BYTE)v3 )
      {
        if ( !*(_DWORD *)(v50 + 48) && *(_QWORD *)(v50 + 24) && *(_DWORD *)(v50 + 32) )
        {
          sub_A1DB00(v50);
          sub_A1C490(v50);
        }
        v51 = sub_8F9CB0((__int64 *)v50);
        sub_A1C120(v51, &v56, v52);
      }
      goto LABEL_95;
    case 14:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v53 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F5130(&v56, *(_QWORD *)(a1 + 568));
        v54 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v3 = sub_9E26A0(a1 + 384, v53, v54);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v54 + 48) && *(_QWORD *)(v54 + 24) && *(_DWORD *)(v54 + 32) )
          {
            sub_A1DB00(v54);
            sub_A1C490(v54);
          }
          v55 = (__m128i *)sub_8FA040((__int64 *)v54);
          *v55 = _mm_load_si128(&v56);
          v55[1].m128i_i8[0] = v57;
        }
      }
      return v3;
    case 15:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v5 = *(_QWORD *)(a1 + 568);
      v6 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5170((__int64)&v56, v5);
      v7 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E26A0(a1 + 384, v6, v7);
      if ( (_BYTE)v3 )
      {
        if ( !*(_DWORD *)(v7 + 48) && *(_QWORD *)(v7 + 24) && *(_DWORD *)(v7 + 32) )
        {
          sub_A1DB00(v7);
          sub_A1C490(v7);
        }
        v8 = sub_8FA090((__int64 *)v7);
        sub_A1C120(v8, &v56, v9);
        *(_QWORD *)(v8 + 56) = v58;
        *(_DWORD *)(v8 + 64) = v59;
      }
LABEL_95:
      sub_A1C0C0(&v56);
      return v3;
  }
}

