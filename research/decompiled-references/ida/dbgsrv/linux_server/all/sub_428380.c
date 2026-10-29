/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428380
// Address: 0x0000000000428380

//----- (0000000000428380) ----------------------------------------------------
__int64 __fastcall sub_428380(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int16 v8; // bp
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r8
  _BYTE *v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rsi
  bool v23; // cf
  __int64 v24; // rsi
  __int64 v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // r10
  int v32; // eax
  _QWORD *v33; // rdx
  unsigned __int64 v34; // rcx
  __m128i v35; // xmm0
  _QWORD *v36; // [rsp+0h] [rbp-58h]
  int v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+10h] [rbp-48h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v4 = sub_47F740(*(_QWORD *)(a1 + 472), 0, 1);
    v5 = *(_QWORD *)(a1 + 480);
    v38 = v4 - v5;
    if ( sub_47F740(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 536) + v5, 0) != -1 )
    {
      v6 = *(_QWORD *)(a1 + 472);
      v7 = *(unsigned __int16 *)(a1 + 558);
      v37 = *(unsigned __int16 *)(a1 + 560);
      v8 = *(_WORD *)(a1 + 560);
      v9 = sub_47F740(v6, 0, 1);
      v10 = sub_47F710(v6) - v9;
      if ( ((v10 | v9) & 0x8000000000000000LL) != 0LL )
      {
        LODWORD(v11) = 0;
LABEL_31:
        sub_424670((__int64)"%s is incorrect, maximum possible value is %u%s", "PHT entries", v11, "");
      }
      if ( v10 < v8 * v7 )
      {
        v11 = v10 / v7;
        goto LABEL_31;
      }
      sub_4282F0((char **)(a1 + 32), v8);
      *(_BYTE *)(a1 + 72) = 1;
      if ( !v37 )
      {
LABEL_47:
        v1 = 1;
        goto LABEL_29;
      }
      v36 = nullptr;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v22 = v13 * *(unsigned __int16 *)(a1 + 558);
        v23 = __CFADD__(*(_QWORD *)(a1 + 536), v22);
        v24 = *(_QWORD *)(a1 + 536) + v22;
        v25 = v23;
        if ( v23 || sub_47F740(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v24, 0) == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 72) )
          sub_423700();
        v15 = (_BYTE *)(v12 + *(_QWORD *)(a1 + 32));
        if ( (int)sub_424D70(a1, v15, 4, 1, v14) < 0
          || *(_BYTE *)(a1 + 617) && (int)sub_424D70(a1, v15 + 4, 4, 1, v16) < 0
          || (int)sub_424D70(a1, v15 + 8, *(int *)(a1 + 428), 1, v16) < 0
          || (int)sub_424D70(a1, v15 + 16, *(int *)(a1 + 424), 1, v17) < 0
          || (int)sub_424D70(a1, v15 + 24, *(int *)(a1 + 424), 1, v18) < 0
          || (int)sub_424D70(a1, v15 + 32, *(int *)(a1 + 432), 1, v19) < 0
          || (int)sub_424D70(a1, v15 + 40, *(int *)(a1 + 432), 1, v20) < 0
          || !*(_BYTE *)(a1 + 617) && (int)sub_424D70(a1, v15 + 4, 4, 1, v21) < 0
          || (int)sub_424D70(a1, v15 + 48, *(int *)(a1 + 432), 1, v21) < 0 )
        {
          v27 = (int)v13 - 1;
          if ( !(_DWORD)v13 )
            v27 = 0;
          sub_4282F0((char **)(a1 + 32), v27);
          break;
        }
        if ( *(_DWORD *)v15 == 1 )
        {
          sub_426400((_QWORD *)a1, v15);
          v26 = *((_QWORD *)v15 + 2);
          if ( v26 < *(_QWORD *)(a1 + 56) )
            *(_QWORD *)(a1 + 56) = v26 & 0xFFFFFFFFFFFFF000LL;
        }
        else
        {
          if ( *(_DWORD *)v15 != 2 )
            v15 = v36;
          v36 = v15;
        }
        ++v13;
        v12 += 56;
        if ( v37 <= (int)v13 )
        {
          if ( v36 )
          {
            v28 = v36[5];
            v29 = *(_QWORD *)(a1 + 584);
            v30 = v36[2];
            if ( v36[4] >= v28 )
              v28 = v36[4];
            v31 = v28;
            if ( v29 )
            {
              v32 = 0;
              while ( 1 )
              {
                v33 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v25);
                v34 = v33[2];
                if ( v30 >= v34 && v30 < v34 + v33[1] )
                  break;
                v25 = ++v32;
                if ( v32 >= v29 )
                  goto LABEL_45;
              }
              v35 = (__m128i)(*v33 + (unsigned __int64)(unsigned int)(v30 - v34));
            }
            else
            {
LABEL_45:
              v35 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            }
            *(_QWORD *)(a1 + 16) = v31;
            *(_DWORD *)(a1 + 24) = -1;
            *(__m128i *)a1 = _mm_unpacklo_epi64(v35, (__m128i)v30);
          }
          goto LABEL_47;
        }
      }
    }
    v1 = 0;
LABEL_29:
    sub_47F740(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v38, 0);
  }
  return v1;
}
// 4284C8: variable 'v14' is possibly undefined
// 4284EF: variable 'v16' is possibly undefined
// 42852F: variable 'v17' is possibly undefined
// 42854F: variable 'v18' is possibly undefined
// 42856F: variable 'v19' is possibly undefined
// 42858F: variable 'v20' is possibly undefined
// 4285B6: variable 'v21' is possibly undefined
