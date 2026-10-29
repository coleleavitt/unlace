void __fastcall sub_9E7610(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r8d
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // rdx
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rcx
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
  int *v27; // r13
  unsigned int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // r15
  void *v31; // r12
  int v32; // edx
  int v33; // edx
  __m128i v34; // xmm1
  unsigned int v35; // eax
  unsigned int v36; // [rsp+0h] [rbp-58h]
  int v37; // [rsp+4h] [rbp-54h]
  unsigned int v38; // [rsp+4h] [rbp-54h]
  unsigned int v39; // [rsp+4h] [rbp-54h]
  __int64 v40; // [rsp+8h] [rbp-50h]
  unsigned int v41; // [rsp+18h] [rbp-40h] BYREF
  unsigned int v42[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v7 = a4 >> 5;
  v8 = *(_QWORD *)(a1 + 648) + 16LL * a4;
  v9 = *(_QWORD *)(a1 + 632) + 24LL * a2;
  v10 = (__int64 *)(*(_QWORD *)(a1 + 848) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 856) - 1));
  v11 = *v10;
  if ( *v10 && v7 < *(_DWORD *)(v11 - 4) && (v12 = 1 << a4, (*(_DWORD *)(v11 + 4LL * v7) & (1 << a4)) != 0) )
  {
    v13 = *(unsigned int *)(v9 + 8);
    if ( (_DWORD)v13 )
    {
      v14 = *(_QWORD *)v9;
      v15 = 0;
      v16 = 40 * v13;
      while ( *(_DWORD *)(v14 + v15 + 32) != a4 )
      {
        v15 += 40;
        if ( v15 == v16 )
          return;
      }
      v17 = (_DWORD *)(v14 + v15);
      v40 = 4LL * v7;
      v36 = v7;
      v37 = v12;
      sub_2FC4A0((__int64)qword_1C7F2C0, v14 + v15, a3, v14 + v15);
      if ( !*v17 )
      {
        v18 = *(_DWORD *)(v9 + 16);
        v19 = *(_QWORD *)v9 + v15;
        v20 = (unsigned int)v17[9];
        *(_DWORD *)(v19 + 32) = -1;
        *(_DWORD *)(v19 + 36) = v18;
        v21 = *(_QWORD *)v8;
        v22 = v20;
        --*(_DWORD *)(v9 + 8);
        v23 = (_DWORD *)(v21 + 8 * v20);
        LODWORD(v20) = *(_DWORD *)(v8 + 12);
        *v23 = -1;
        v23[1] = v20;
        *(_DWORD *)(v8 + 12) = v22;
        v24 = *(_DWORD *)(a1 + 856);
        --*(_DWORD *)(v8 + 8);
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 848) + 8LL * (unsigned int)(v24 - 1));
        if ( v25 )
        {
          if ( v36 < *(_DWORD *)(v25 - 4) )
            *(_DWORD *)(v25 + v40) &= ~v37;
        }
        sub_997F80(v9, (_QWORD *)(a1 + 648));
        sub_997BC0((__int64 *)v8, (_QWORD *)(a1 + 632));
      }
    }
  }
  else
  {
    sub_506520(v10, a4);
    v26 = sub_9C25B0(v9, &v41);
    ++*(_DWORD *)(v8 + 8);
    v27 = v26;
    v28 = *(_DWORD *)(v8 + 12);
    if ( v28 == -1 )
    {
      v30 = sub_98C810((_QWORD *)v8, v42);
      v28 = v42[0];
    }
    else
    {
      v29 = *(_QWORD *)v8;
      v42[0] = *(_DWORD *)(v8 + 12);
      v30 = (_QWORD *)(v29 + 8LL * v28);
      *(_DWORD *)(v8 + 12) = *((_DWORD *)v30 + 1);
    }
    v27[8] = a4;
    v31 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    {
      v39 = v28;
      sub_182C690(qword_1C7F2C0, v27, a3);
      v28 = v39;
    }
    else
    {
      v32 = *(_DWORD *)a3;
      *((_BYTE *)v27 + 4) &= ~1u;
      *v27 = v32;
    }
    if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    {
      v38 = v28;
      sub_182C690(v31, v27 + 4, a3 + 16);
      v28 = v38;
    }
    else
    {
      v33 = *(_DWORD *)(a3 + 16);
      *((_BYTE *)v27 + 20) &= ~1u;
      v27[4] = v33;
    }
    v34 = _mm_cvtsi32_si128(v41);
    v27[9] = v28;
    v35 = a4 + 1;
    *v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), v34).m128i_u64[0];
    if ( a4 + 1 < *(_DWORD *)(a1 + 392) )
      v35 = *(_DWORD *)(a1 + 392);
    *(_DWORD *)(a1 + 392) = v35;
  }
}

