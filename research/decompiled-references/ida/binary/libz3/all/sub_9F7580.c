void __fastcall sub_9F7580(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 *v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // eax
  int v11; // r8d
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rsi
  _DWORD *v17; // rbx
  int v18; // ecx
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rcx
  int v22; // edx
  _DWORD *v23; // rcx
  int v24; // edx
  __int64 v25; // rdx
  int *v26; // rax
  unsigned int v27; // r14d
  __int64 v28; // rdx
  int *v29; // r13
  __int64 v30; // rsi
  _QWORD *v31; // r15
  void *v32; // rdi
  int v33; // ecx
  int v34; // edx
  unsigned int v35; // eax
  _QWORD *v36; // rax
  unsigned int v38; // [rsp+Ch] [rbp-5Ch]
  int v39; // [rsp+10h] [rbp-58h]
  void *v41; // [rsp+10h] [rbp-58h]
  __int64 v42; // [rsp+18h] [rbp-50h]
  unsigned int v43; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v44[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v6 = *(_QWORD *)(a1 + 712) + 16LL * a4;
  v7 = *(_QWORD *)(a1 + 696) + 24LL * a2;
  v8 = (__int64 *)(*(_QWORD *)(a1 + 912) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 920) - 1));
  v9 = *v8;
  v10 = a4 >> 5;
  if ( *v8 && v10 < *(_DWORD *)(v9 - 4) && (v11 = 1 << a4, v12 = 4LL * v10, (*(_DWORD *)(v9 + v12) & (1 << a4)) != 0) )
  {
    v13 = *(unsigned int *)(v7 + 8);
    if ( (_DWORD)v13 )
    {
      v14 = *(_QWORD *)v7;
      v15 = 0;
      v16 = 40 * v13;
      while ( *(_DWORD *)(v14 + v15 + 32) != a4 )
      {
        v15 += 40;
        if ( v15 == v16 )
          return;
      }
      v17 = (_DWORD *)(v14 + v15);
      v38 = v10;
      v39 = v11;
      sub_89ABF0((__int64)qword_1C7F2C0, v14 + v15, a3, v14 + v15);
      if ( !*v17 )
      {
        v18 = *(_DWORD *)(v7 + 16);
        v19 = *(_QWORD *)v7 + v15;
        v20 = (unsigned int)v17[9];
        *(_DWORD *)(v19 + 32) = -1;
        *(_DWORD *)(v19 + 36) = v18;
        v21 = *(_QWORD *)v6;
        v22 = v20;
        --*(_DWORD *)(v7 + 8);
        v23 = (_DWORD *)(v21 + 8 * v20);
        LODWORD(v20) = *(_DWORD *)(v6 + 12);
        *v23 = -1;
        v23[1] = v20;
        *(_DWORD *)(v6 + 12) = v22;
        v24 = *(_DWORD *)(a1 + 920);
        --*(_DWORD *)(v6 + 8);
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 912) + 8LL * (unsigned int)(v24 - 1));
        if ( v25 )
        {
          if ( v38 < *(_DWORD *)(v25 - 4) )
            *(_DWORD *)(v25 + v12) &= ~v39;
        }
        sub_9A47C0(v7, (_QWORD *)(a1 + 712));
        sub_9A4400((__int64 *)v6, (_QWORD *)(a1 + 696));
      }
    }
  }
  else
  {
    sub_506520(v8, a4);
    v26 = sub_9C4650(v7, &v43);
    v27 = *(_DWORD *)(v6 + 12);
    ++*(_DWORD *)(v6 + 8);
    v28 = a3;
    v29 = v26;
    if ( v27 == -1 )
    {
      v36 = sub_98C970((_QWORD *)v6, v44);
      v27 = v44[0];
      v28 = a3;
      v31 = v36;
    }
    else
    {
      v30 = *(_QWORD *)v6;
      v44[0] = v27;
      v31 = (_QWORD *)(v30 + 8LL * v27);
      *(_DWORD *)(v6 + 12) = *((_DWORD *)v31 + 1);
    }
    v29[8] = a4;
    v32 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v28 + 4) & 1) != 0 )
    {
      v42 = v28;
      v41 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v29, v28);
      v28 = v42;
      v32 = v41;
    }
    else
    {
      v33 = *(_DWORD *)v28;
      *((_BYTE *)v29 + 4) &= ~1u;
      *v29 = v33;
    }
    if ( (*(_BYTE *)(v28 + 20) & 1) != 0 )
    {
      sub_182C690(v32, v29 + 4, v28 + 16);
    }
    else
    {
      v34 = *(_DWORD *)(v28 + 16);
      *((_BYTE *)v29 + 20) &= ~1u;
      v29[4] = v34;
    }
    sub_1831620(qword_1C7F2C0, v29);
    v29[9] = v27;
    v35 = a4 + 1;
    *v31 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v43)).m128i_u64[0];
    if ( a4 + 1 < *(_DWORD *)(a1 + 456) )
      v35 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = v35;
  }
}

