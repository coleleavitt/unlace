__int64 __fastcall sub_207440(__int64 a1, __int64 a2, const __m128i *a3, double a4, __m128 a5, __m128 a6)
{
  __int64 v6; // rbx
  char v9; // r13
  int v10; // eax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // r15
  __m128i *v15; // rax
  __m128i *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // esi
  unsigned int i; // r14d
  const __m128i *v22; // r8
  int v23; // r9d
  __int32 v24; // ecx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rsi
  char v27; // cl
  __int64 *v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-150h]
  __int64 *v35; // [rsp+10h] [rbp-148h]
  __int32 v36; // [rsp+10h] [rbp-148h]
  __m128i *v37; // [rsp+20h] [rbp-138h]
  __m128i v38; // [rsp+30h] [rbp-128h] BYREF
  __int64 v39; // [rsp+40h] [rbp-118h] BYREF
  __int64 v40; // [rsp+48h] [rbp-110h]
  __m128i v41; // [rsp+50h] [rbp-108h] BYREF
  int v42; // [rsp+60h] [rbp-F8h]
  __int64 (__fastcall **v43)(); // [rsp+70h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+78h] [rbp-E0h]
  __int64 v45; // [rsp+80h] [rbp-D8h]
  char v46; // [rsp+88h] [rbp-D0h]
  __int64 v47; // [rsp+90h] [rbp-C8h]
  _QWORD *v48; // [rsp+98h] [rbp-C0h]
  _QWORD v49[5]; // [rsp+A0h] [rbp-B8h] BYREF
  char v50; // [rsp+C8h] [rbp-90h]
  _DWORD v51[4]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-78h]
  __int64 v53; // [rsp+E8h] [rbp-70h]
  __int64 *v54; // [rsp+F0h] [rbp-68h]
  __int128 v55; // [rsp+F8h] [rbp-60h]
  __int64 v56; // [rsp+108h] [rbp-50h]
  unsigned __int64 v57; // [rsp+118h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 312) <= 7 )
  {
    if ( !under_debugger )
      sub_37E160(51938);
    BUG();
  }
  if ( *(_DWORD *)a2 == 1 && (v6 = a1, (v9 = sub_1BE410(a2, a1, *(unsigned int *)(a2 + 88))) != 0) )
  {
    v10 = *(_DWORD *)(a2 + 88);
    v11 = _mm_loadu_si128(a3);
    v38 = 0u;
    v42 = v10;
    v41 = v11;
    sub_2072A0(&v38, (_QWORD *)a1, (int *)a2, *(double *)v11.m128i_i64, a5, a6);
    v43 = (__int64 (__fastcall **)())a2;
    v12 = sub_207120(&v38, (int *)a2, (__int64 *)&v43);
    v13 = v12 + 40;
    v14 = (_QWORD *)(v12 + 24);
    v15 = sub_206830(v12 + 40, &v41, *(double *)v11.m128i_i64, a5, a6);
    if ( v15 )
    {
      v16 = (__m128i *)v14[2];
      if ( v15 == v16 )
      {
        v34 = *(_QWORD *)(a1 + 520);
        v36 = v15[1].m128i_i32[0];
        v31 = v14[3];
        if ( v14[4] < (unsigned __int64)(v31 + 1) )
        {
          v33 = qvector_reserve(v13, v15, v31 + 1, 24);
          v14[2] = v33;
          v31 = v14[3];
          v16 = (__m128i *)v33;
        }
        v37 = v16;
        memmove(&v16[1].m128i_u64[1], v16, 24 * v31);
        v37->m128i_i64[0] = v34;
        v37->m128i_i64[1] = 0;
        v37[1].m128i_i32[0] = v36;
        v32 = (__int64 *)v14[2];
        ++v14[3];
        v35 = v32;
      }
      else
      {
        v35 = &v15[-2].m128i_i64[1];
      }
      memset(&v49[1], 0, 32);
      v49[0] = &unk_4CBFD8;
      v50 = 0;
      v51[0] = 0;
      copy_argloc(v51, a2);
      v17 = *(_QWORD *)(a2 + 16);
      v53 = v13;
      v18 = *(_QWORD *)(a1 + 784);
      v55 = 0;
      v52 = v17;
      v49[0] = off_4BF6D0;
      v56 = 0;
      v54 = v35;
      v19 = a3->m128i_i64[0];
      v39 = 0;
      v20 = *(_DWORD *)(v19 + 72);
      v40 = 0;
      sub_6BAF0(v18, v20, &v39);
      sub_5FF90(&v39, *(_DWORD *)(a3->m128i_i64[0] + 72));
      for ( i = sub_60760(&v39, 0); ; i = sub_60760(&v39, i + 1) )
      {
        if ( i == (_DWORD)v40 )
        {
          LODWORD(v6) = 0;
          goto LABEL_26;
        }
        if ( i >= *(_DWORD *)(v6 + 64) )
          sub_205C00();
        v22 = *(const __m128i **)(*(_QWORD *)(v6 + 528) + 8LL * i);
        v23 = *(_DWORD *)(*v54 + 72);
        v24 = v22[4].m128i_i32[2];
        BYTE1(v56) = v24 != v23;
        v25 = *(_QWORD **)v53;
        v26 = *(_QWORD *)v53 + 24LL * *(_QWORD *)(v53 + 8);
        if ( (unsigned __int64)(v54 + 3) < v26 && v54[3] == *v54 )
        {
          v25 = (_QWORD *)v54[4];
          v27 = v9;
        }
        else if ( v24 == v23 || v25 == (_QWORD *)v26 )
        {
LABEL_23:
          v25 = nullptr;
          v27 = 0;
        }
        else
        {
          while ( v24 != *(_DWORD *)(*v25 + 72LL) )
          {
            v25 += 3;
            if ( v25 == (_QWORD *)v26 )
              goto LABEL_23;
          }
          if ( v25 )
          {
            v25 = (_QWORD *)v25[1];
            v27 = v9;
          }
          else
          {
            v27 = 0;
          }
        }
        *((_QWORD *)&v55 + 1) = v25;
        LOBYTE(v56) = v27;
        BYTE3(v56) = 0;
        sub_11B3B0(v22, (__int64)v49);
        if ( HIDWORD(v56) )
          break;
      }
      HIDWORD(v56) = 0;
      v44 = 0;
      v28 = *(__int64 **)(v6 + 784);
      v46 = 0;
      v54 = v35 + 3;
      v43 = off_4BF700;
      v29 = a3->m128i_i64[0];
      v45 = 0;
      v47 = v6;
      v48 = v49;
      v30 = sub_6B390((__int64 *)&v43, v28, *(_DWORD *)(v29 + 72), 0);
      v43 = off_4BC298;
      LOBYTE(v6) = v30 != 0;
      qfree(v44);
LABEL_26:
      qfree(v39);
      v49[0] = &unk_4CBFD8;
      cleanup_argloc(v51);
    }
    else
    {
      LODWORD(v6) = 0;
    }
    sub_206A00(v38.m128i_i64);
  }
  else
  {
    LODWORD(v6) = 0;
  }
  return (unsigned int)v6;
}
