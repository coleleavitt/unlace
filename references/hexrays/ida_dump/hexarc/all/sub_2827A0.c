__int64 __fastcall sub_2827A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // rbp
  _QWORD *v22; // rax
  __m128 v23; // xmm0
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rbx
  __int64 v31; // rdx

  v5 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v5 + 8) != 16 )
    return 0;
  if ( sub_23A510(*(_QWORD *)(a1 + 72), *(_QWORD *)(v5 + 24), a3, a4, a5) )
  {
    sub_23D0E0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(v5 + 24), v7, v8, v9);
    v23 = _mm_loadh_ps((const double *)(v5 + 40));
    *(_QWORD *)(v5 + 40) = *(_QWORD *)(v5 + 32);
    *(__m128 *)(v5 + 24) = v23;
LABEL_14:
    sub_23CE40(v5, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    if ( (unsigned __int8)sub_27C780(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    return 1;
  }
  v10 = *(_QWORD *)(v5 + 32);
  v11 = *(_DWORD *)(v10 + 8);
  if ( (unsigned int)(v11 - 2) <= 0xD )
  {
    v12 = *(_QWORD *)(v5 + 40);
    if ( v11 == *(_DWORD *)(v12 + 8) && !sub_252720(*(_QWORD *)(v10 + 24), *(_QWORD *)(v12 + 24)) )
    {
      v24 = *(_QWORD *)(v5 + 24);
      if ( !(unsigned __int8)sub_27DDE0(v24, 1, 1)
        && !(unsigned __int8)sub_27DDE0(v24, 66, 1)
        && !(unsigned __int8)sub_27DEB0(v24) )
      {
        v25 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v25 + 12) == -1 && *(_DWORD *)(*(_QWORD *)(v5 + 40) + 12LL) == -1 )
        {
          if ( (get_tinfo_property(*(_QWORD *)(v25 + 48), 2) & 0x2F) != 0xD )
          {
LABEL_26:
            v27 = *(_QWORD *)(v5 + 32);
            v28 = *(_QWORD *)(v5 + 24);
            *(_QWORD *)(v5 + 24) = *(_QWORD *)(v27 + 24);
            v29 = *(_DWORD *)(v27 + 8);
            *(_QWORD *)(v27 + 24) = v28;
            LODWORD(v28) = *(_DWORD *)(v5 + 8);
            *(_DWORD *)(v5 + 8) = v29;
            *(_DWORD *)(v27 + 8) = v28;
            *(_QWORD *)(v27 + 40) = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 32LL);
            *(_QWORD *)(*(_QWORD *)(v5 + 40) + 32LL) = 0;
            v30 = *(_QWORD *)(v5 + 40);
            if ( v30 )
            {
              sub_24E2B0(*(_QWORD *)(v5 + 40));
              clear_tinfo_t(v30 + 48);
              j__qfree(v30);
            }
            sub_23CE40(*(_QWORD *)(v5 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
            goto LABEL_14;
          }
          if ( get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 48LL), 17) )
          {
            v26 = *(unsigned int *)(v5 + 8);
            if ( (unsigned int)v26 <= 0x17 )
            {
              v31 = -12648455;
              if ( !_bittest64(&v31, v26) )
                goto LABEL_26;
            }
            else if ( (unsigned int)(v26 - 70) <= 0xE )
            {
              goto LABEL_26;
            }
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
  sub_24DA20(v5);
  sub_24DCD0(a2);
  *(_DWORD *)(a2 + 12) = v13;
  v18 = sub_27F5B0(a2, v17);
  v19 = sub_239FB0();
  v20 = *(_QWORD *)(v18 + 64);
  *(_QWORD *)(v18 + 72) = v19;
  v21 = sub_23A040(v20, *v15);
  v22 = sub_23A040(*(_QWORD *)(v18 + 72), *v16);
  *((_DWORD *)v21 + 2) = 72;
  *((_DWORD *)v22 + 2) = 72;
  v21[3] = v15;
  v22[3] = v16;
  return 1;
}
