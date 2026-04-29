__int64 __fastcall sub_1C1370(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v7; // eax
  int v9; // eax
  int v10; // r12d
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rax
  __int64 *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // edx
  __int16 v22; // cx
  __int64 v23; // rdx
  __int64 v24; // rsi
  _DWORD *v25; // r14
  __int64 v26; // rax
  __int64 *v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // edi
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r15
  _DWORD *v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rsi
  __int64 (__fastcall *v40)(__int64, unsigned int); // rax
  int v42; // [rsp+10h] [rbp-A8h]
  __int64 v44; // [rsp+20h] [rbp-98h] BYREF
  __int128 v45; // [rsp+28h] [rbp-90h]
  int v46; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int16 v47; // [rsp+48h] [rbp-70h]
  int v48; // [rsp+50h] [rbp-68h]
  _DWORD v49[4]; // [rsp+60h] [rbp-58h] BYREF
  int v50; // [rsp+70h] [rbp-48h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v7 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( v7 <= 2 )
    {
      if ( v7 == 1 )
      {
        v13 = *(_QWORD *)(a3 + 8) + a5;
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v13;
        return a1;
      }
    }
    else if ( (unsigned int)(v7 - 3) <= 1 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, *(unsigned __int16 *)(a3 + 8));
      v10 = v9;
      if ( v9 == -1 )
      {
        if ( !under_debugger )
          sub_37DDE0(50215);
      }
      else
      {
        v11 = *(unsigned __int16 *)(a3 + 10);
        if ( *(_DWORD *)a3 == 3 )
        {
          if ( (int)sub_12F430((_DWORD *)a2, nullptr, v9, 0x7FFFFFFFu) <= v11 )
          {
            if ( !under_debugger )
              sub_37DDE0(51934);
          }
          else
          {
            v39 = (unsigned int)(v10 + v11);
            v40 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a2 + 320LL);
            if ( v40 != sub_1BD680 )
              LODWORD(v39) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))v40)(a2, v39, (unsigned int)a4);
            if ( (_DWORD)v39 != -1 )
            {
              *(_DWORD *)a1 = 3;
              *(_DWORD *)(a1 + 8) = v39;
              return a1;
            }
            if ( !under_debugger )
              sub_37DDE0(51807);
          }
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, *(unsigned __int16 *)(a3 + 10));
          if ( v12 != -1 )
          {
            if ( a4 > 0 && v10 + (a4 >> 1) == v12 )
            {
              *(_DWORD *)a1 = 3;
              *(_DWORD *)(a1 + 8) = v10;
            }
            else
            {
              *(_DWORD *)a1 = 4;
              *(_DWORD *)(a1 + 8) = v10 | (v12 << 16);
            }
            return a1;
          }
          if ( !under_debugger )
            sub_37DDE0(51022);
        }
      }
LABEL_55:
      BUG();
    }
    if ( !under_debugger )
      sub_37DDE0(51111);
    goto LABEL_55;
  }
  v15 = *(__int64 **)(a3 + 8);
  v44 = 0;
  v45 = 0;
  v16 = *v15;
  v17 = *v15 + 24 * v15[1];
  if ( v17 != *v15 )
  {
    while ( 1 )
    {
      v46 = 0;
      copy_argloc(&v46, v16);
      v18 = _mm_cvtsi32_si128(*(_DWORD *)(v16 + 16));
      v48 = _mm_cvtsi128_si32(v18);
      v19 = sub_3346E0();
      sub_1C1370(v49, v19, &v46, (unsigned int)_mm_extract_epi16(v18, 1), a5);
      copy_argloc(&v46, v49);
      cleanup_argloc(v49);
      if ( !(_QWORD)v45 )
        break;
      v20 = v44 + 24 * v45 - 24;
      if ( *(_DWORD *)v20 != 3 )
        break;
      if ( v46 != 3 )
        break;
      v21 = *(unsigned __int16 *)(v20 + 18);
      v22 = *(_WORD *)(v20 + 18);
      if ( (unsigned __int16)v48 != v21 + *(unsigned __int16 *)(v20 + 16) )
        break;
      v33 = *(unsigned __int16 *)(v20 + 8);
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
      {
        if ( v33 != v47 + HIWORD(v48) )
          break;
        v42 = v47;
        *(_WORD *)(v20 + 18) = v22 + HIWORD(v48);
        cleanup_argloc(v20);
        *(_DWORD *)v20 = 3;
        *(_DWORD *)(v20 + 8) = v42;
      }
      else
      {
        if ( v47 != v33 + v21 )
          break;
        *(_WORD *)(v20 + 18) = HIWORD(v48) + v22;
      }
LABEL_22:
      v16 += 24;
      cleanup_argloc(&v46);
      if ( v16 == v17 )
        goto LABEL_23;
    }
    v49[0] = 0;
    copy_argloc(v49, &v46);
    v23 = v45;
    v24 = v44;
    v50 = v48;
    if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
    {
      v44 = qvector_reserve(&v44, v44, v45 + 1, 24);
      v23 = v45;
      v24 = v44;
    }
    v25 = (_DWORD *)(v24 + 24 * v23);
    *v25 = 0;
    copy_argloc(v25, v49);
    *(_QWORD *)&v45 = v45 + 1;
    v25[4] = v50;
    cleanup_argloc(v49);
    goto LABEL_22;
  }
LABEL_23:
  v26 = qalloc_or_throw(24);
  *(_QWORD *)v26 = 0;
  v27 = (__int64 *)v26;
  *(_OWORD *)(v26 + 8) = 0;
  v28 = v45;
  if ( (_QWORD)v45 )
  {
    v34 = qalloc_or_throw(24 * v45);
    *v27 = v34;
    v35 = v34;
    v36 = 0;
    v27[2] = v28;
    while ( 1 )
    {
      v37 = (_DWORD *)(24 * v36 + v35);
      v38 = v44 + 24 * v36;
      *v37 = 0;
      copy_argloc(v37, v38);
      ++v36;
      v37[4] = *(_DWORD *)(v38 + 16);
      if ( v28 == v36 )
        break;
      v35 = *v27;
    }
    v27[1] = v28;
  }
  if ( v27 )
  {
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v27;
  }
  v29 = v44;
  if ( v44 )
  {
    v30 = v45;
    if ( (_QWORD)v45 )
    {
      v31 = 0;
      do
      {
        v32 = 3 * v31++;
        cleanup_argloc(v29 + 8 * v32);
        v29 = v44;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v45 = 0;
    qfree(v29);
  }
  return a1;
}
