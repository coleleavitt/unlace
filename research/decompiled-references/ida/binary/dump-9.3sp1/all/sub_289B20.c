__int64 __fastcall sub_289B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r12d
  int v14; // eax
  __int64 *v15; // r14
  __int64 *v16; // r13
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rax
  __m128 v31; // xmm0
  __int64 v32; // r13
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rbx
  __int64 v38; // rdx

  v5 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v5 + 8) != 16 )
    return 0;
  if ( sub_241890(*(_QWORD *)(a1 + 72), *(_QWORD *)(v5 + 24), a3, a4, a5) )
  {
    sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(v5 + 24), v7, v8, v9);
    v31 = _mm_loadh_ps((const double *)(v5 + 40));
    *(_QWORD *)(v5 + 40) = *(_QWORD *)(v5 + 32);
    *(__m128 *)(v5 + 24) = v31;
LABEL_14:
    sub_2441C0(v5, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    return 1;
  }
  v10 = *(_QWORD *)(v5 + 32);
  v11 = *(_DWORD *)(v10 + 8);
  if ( (unsigned int)(v11 - 2) <= 0xD )
  {
    v12 = *(_QWORD *)(v5 + 40);
    if ( v11 == *(_DWORD *)(v12 + 8) && !sub_259AA0(*(_QWORD *)(v10 + 24), *(_QWORD *)(v12 + 24)) )
    {
      v32 = *(_QWORD *)(v5 + 24);
      if ( !(unsigned __int8)sub_285160(v32, 1, 1)
        && !(unsigned __int8)sub_285160(v32, 66, 1)
        && !(unsigned __int8)sub_285230(v32)
        && *(_DWORD *)(*(_QWORD *)(v5 + 32) + 12LL) == -1
        && *(_DWORD *)(*(_QWORD *)(v5 + 40) + 12LL) == -1 )
      {
        if ( (get_tinfo_property() & 0x2F) != 0xD )
        {
LABEL_26:
          v34 = *(_QWORD *)(v5 + 32);
          v35 = *(_QWORD *)(v5 + 24);
          *(_QWORD *)(v5 + 24) = *(_QWORD *)(v34 + 24);
          v36 = *(_DWORD *)(v34 + 8);
          *(_QWORD *)(v34 + 24) = v35;
          LODWORD(v35) = *(_DWORD *)(v5 + 8);
          *(_DWORD *)(v5 + 8) = v36;
          *(_DWORD *)(v34 + 8) = v35;
          *(_QWORD *)(v34 + 40) = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 32LL);
          *(_QWORD *)(*(_QWORD *)(v5 + 40) + 32LL) = 0;
          v37 = *(_QWORD *)(v5 + 40);
          if ( v37 )
          {
            sub_255630(*(_QWORD *)(v5 + 40));
            clear_tinfo_t();
            j__qfree(v37);
          }
          sub_2441C0(*(_QWORD *)(v5 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
          goto LABEL_14;
        }
        if ( get_tinfo_property() )
        {
          v33 = *(unsigned int *)(v5 + 8);
          if ( (unsigned int)v33 <= 0x17 )
          {
            v38 = -12648455;
            if ( !_bittest64(&v38, v33) )
              goto LABEL_26;
          }
          else if ( (unsigned int)(v33 - 70) <= 0xE )
          {
            goto LABEL_26;
          }
        }
      }
    }
  }
  v13 = *(_DWORD *)(a2 + 12);
  v14 = *(_DWORD *)(v5 + 12);
  if ( v13 == -1 )
  {
    *(_DWORD *)(v5 + 12) = -1;
    v13 = v14;
  }
  else
  {
    if ( v14 != -1 )
      return 0;
    *(_DWORD *)(a2 + 12) = -1;
  }
  if ( v13 == -2 )
    return 0;
  v15 = *(__int64 **)(v5 + 32);
  v16 = *(__int64 **)(v5 + 40);
  v17 = *(_QWORD *)(v5 + 24);
  sub_254DA0(v5);
  sub_255050(a2);
  *(_DWORD *)(a2 + 12) = v13;
  v20 = sub_286930(a2, v17, v18, v19);
  v23 = sub_241330(a2, v17, v21, v22);
  v24 = *(_QWORD *)(v20 + 64);
  *(_QWORD *)(v20 + 72) = v23;
  v27 = sub_2413C0(v24, *v15, v25, v26);
  v30 = sub_2413C0(*(_QWORD *)(v20 + 72), *v16, v28, v29);
  *((_DWORD *)v27 + 2) = 72;
  *((_DWORD *)v30 + 2) = 72;
  v27[3] = (__int64)v15;
  v30[3] = (__int64)v16;
  return 1;
}
