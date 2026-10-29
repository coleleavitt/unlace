__int64 __fastcall sub_678030(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  unsigned int v7; // r12d
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rdi
  int v20; // eax

  sub_66B920(a1, a2, a3, *(double *)a4.m128i_i64, a5, a6);
  if ( !*(_QWORD *)(a2 + 104) )
  {
    v12 = *(_QWORD *)(a2 + 96);
    v13 = *(_QWORD *)(v12 + 88);
    v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v13 & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_2;
    }
    else
    {
      if ( v14 <= 3 || (v13 & 2) == 0 )
        goto LABEL_2;
      v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
      v16 = v15[2275];
      if ( !v16 )
      {
        *(_QWORD *)(v12 + 88) = v12 & 0xFFFFFFFFFFFFFFFALL | 1;
        goto LABEL_2;
      }
      v17 = v15[274];
      v15[284] += 24LL;
      v14 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15[275] >= v14 + 24 && v17 )
        v15[274] = v14 + 24;
      else
        v14 = sub_63DCB0((__int64)(v15 + 274), 24, 3);
      *(_QWORD *)v14 = v16;
      *(_DWORD *)(v14 + 8) = 0;
      v13 = v14 | 5;
      *(_QWORD *)(v14 + 16) = v12;
      *(_QWORD *)(v12 + 88) = v14 | 5;
      LOBYTE(v14) = v14 & 0xFA | 4;
    }
    if ( (v14 & 4) != 0 )
    {
      v18 = (_DWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18 )
      {
        v19 = *(_QWORD *)v18;
        v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
        if ( v18[2] != v20 )
        {
          v18[2] = v20;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 144LL))(v19, v12);
        }
      }
    }
  }
LABEL_2:
  v7 = sub_66F3A0(a1, a2 + 48, a3, a4, a5, a6);
  if ( !(_BYTE)v7 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v8 = nullptr;
    v9 = sub_79A2B0(a2);
    v10 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v8 = *(__int64 **)sub_79A2B0(a2);
    if ( (__int64 *)v10 != v8 )
    {
      while ( (unsigned __int8)sub_6777E0(a1, *v8, a3, a4, a5, a6) )
      {
        if ( (__int64 *)v10 == ++v8 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}

