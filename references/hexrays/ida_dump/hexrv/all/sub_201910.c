__int64 __fastcall sub_201910(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __m128i *a5, unsigned __int64 a6)
{
  __int64 v6; // rax
  __m128i *v13; // r15
  __m128i *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  __int64 result; // rax
  char v20; // al
  int v21; // r8d
  __m128i *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r9
  __int64 v37; // rax
  int v38; // r13d
  __int64 v39; // rsi
  char v40; // al
  __int64 v41; // rax
  __int64 v43; // [rsp+8h] [rbp-120h]
  unsigned __int64 v44; // [rsp+8h] [rbp-120h]
  unsigned __int64 v45; // [rsp+8h] [rbp-120h]
  char v46; // [rsp+17h] [rbp-111h]
  __m128i *v47; // [rsp+40h] [rbp-E8h] BYREF
  char v48; // [rsp+48h] [rbp-E0h]
  int v49; // [rsp+4Ch] [rbp-DCh]
  __m128i *v50; // [rsp+50h] [rbp-D8h] BYREF
  char v51; // [rsp+58h] [rbp-D0h]
  int v52; // [rsp+5Ch] [rbp-CCh]
  __int64 v53[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v54[4]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v55[2]; // [rsp+90h] [rbp-98h] BYREF
  _QWORD v56[4]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v57[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+E8h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  if ( *(__int64 **)(a1 + 72) != a4 )
  {
    if ( !under_debugger )
      sub_37DDE0(52661);
    goto LABEL_60;
  }
  v6 = *(int *)(a2 + 72);
  v13 = (__m128i *)(*a4 + 24 * v6);
  v14 = v13;
  v15 = sub_100930((unsigned __int64 *)v13, a6);
  v18 = (unsigned __int64)v15;
  if ( !v15 )
    return 0;
  LOBYTE(v16) = *((_DWORD *)v15 + 11) == -1 || *(_DWORD *)(a6 + 44) != *((_DWORD *)v15 + 11);
  result = 0;
  v46 = v16;
  if ( (_BYTE)v16 && (*(_BYTE *)(v18 + 48) & 2) == 0 )
  {
    v20 = *(_BYTE *)(v18 + 32);
    if ( v20 == 1 )
    {
      v14 = (__m128i *)*(int *)(v18 + 24);
    }
    else
    {
      if ( v20 != 5 )
        goto LABEL_57;
      v14 = *(__m128i **)(v18 + 24);
    }
    v21 = *(_DWORD *)(v18 + 40);
    v16 = *(unsigned __int8 *)(a6 + 32);
    v47 = v14;
    v48 = v20;
    v49 = v21;
    if ( (_BYTE)v16 == 1 )
    {
      v22 = (__m128i *)*(int *)(a6 + 24);
      goto LABEL_12;
    }
    if ( (_BYTE)v16 == 5 )
    {
      v22 = *(__m128i **)(a6 + 24);
LABEL_12:
      v23 = *(int *)(a6 + 40);
      v50 = v22;
      v51 = v16;
      v52 = v23;
      if ( (_BYTE)v16 == v20
        && v23
        && v14 >= v22
        && (v35 = (unsigned __int64)v22->m128i_u64 + v23 - 1,
            v36 = (unsigned __int64)v14->m128i_u64 + v21 - 1,
            v35 >= v36) )
      {
        if ( !v21 || v14 != v22 || v36 != v35 )
          return sub_200610(a1, a4, a3, v13, v18, (__int64)&v50, 3);
        if ( *(_QWORD *)(v18 + 8) )
        {
          if ( (*(_BYTE *)(a6 + 48) & 4) != 0 )
          {
            v45 = v18;
            sub_102A20(*(_QWORD *)(a1 + 56), v18, *(_QWORD *)(a1 + 72), *(_QWORD **)(a1 + 80));
            v18 = v45;
          }
          v37 = *(_QWORD *)(a1 + 24);
          v38 = *(_DWORD *)(a2 + 72);
          v39 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v37 + 1) )
          {
            v44 = v18;
            v41 = qvector_reserve(a1 + 16, v39, v37 + 1, 4);
            v18 = v44;
            *(_QWORD *)(a1 + 16) = v41;
            v39 = v41;
            v37 = *(_QWORD *)(a1 + 24);
          }
          *(_DWORD *)(v39 + 4 * v37) = v38;
          ++*(_QWORD *)(a1 + 24);
          v43 = v18;
          if ( *(_DWORD *)(a6 + 40) == (unsigned int)sub_1FDC40(a1, *(_DWORD *)(a2 + 72), v18, 1, 1u)
            || (*(_BYTE *)(v43 + 48) & 4) != 0 )
          {
            return sub_2013E0(a1, *(_DWORD *)(a2 + 72), (__int64)v13, v43, 1);
          }
          if ( !under_debugger )
            sub_37DDE0(52663);
LABEL_60:
          BUG();
        }
      }
      else
      {
        if ( *(_QWORD *)(v18 + 8) )
          goto LABEL_27;
        v24 = *(_QWORD *)(a1 + 56);
        if ( (*(_BYTE *)(v24 + 2) & 4) == 0 )
        {
          sub_32A270(v53, &v47, v24);
          sub_32A270(v55, &v50, *(_QWORD *)(a1 + 56));
          sub_602C0(v53, v55, v25, v26, v27, v28);
          sub_312B60(v54, v56);
          v29 = *(_QWORD *)(a2 + 56);
          if ( v29 )
          {
            while ( 1 )
            {
              sub_1201C0((__int64)v57, a2, v29, 0);
              if ( (unsigned __int8)sub_60400(v53, v57) )
                break;
              v40 = sub_313370(v54, &v58);
              v30 = v58;
              if ( v40 )
                goto LABEL_19;
              if ( v58 )
              {
                v59 = 0;
                qfree(v58);
              }
              qfree(v57[0]);
              v29 = *(_QWORD *)(v29 + 16);
              if ( !v29 )
                goto LABEL_53;
            }
            v30 = v58;
LABEL_19:
            if ( v30 )
            {
              v59 = 0;
              qfree(v30);
            }
            qfree(v57[0]);
          }
          else
          {
LABEL_53:
            v46 = 0;
          }
          if ( v56[0] )
          {
            v56[1] = 0;
            qfree(v56[0]);
          }
          qfree(v55[0]);
          if ( v54[0] )
          {
            v54[1] = 0;
            qfree(v54[0]);
          }
          qfree(v53[0]);
          if ( v46 )
          {
LABEL_27:
            if ( (**(_DWORD **)(a1 + 56) & 0x40000) == 0 )
            {
              if ( (unsigned int)sub_1FE0A0(a1, a3, a4, a5, a6, (__int64)&v47, 1) )
                return 4294967260LL;
              v34 = *(_QWORD *)(a1 + 56);
              if ( (*(_BYTE *)(*(_QWORD *)(v34 + 1496) + 604LL) & 0x10) == 0 )
                return 4294967276LL;
              sub_1EBCB0(v34, -1, 20, v31, v32, v33);
              return 0;
            }
          }
        }
      }
      return 0;
    }
LABEL_57:
    sub_1FC740(v14, a6, v16, v17);
  }
  return result;
}
