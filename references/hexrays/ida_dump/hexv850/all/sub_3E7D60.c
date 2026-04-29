unsigned __int64 __fastcall sub_3E7D60(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rbp
  _DWORD *v7; // rdi
  __int64 (__fastcall *v8)(_DWORD *, unsigned int); // rax
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v19; // [rsp+8h] [rbp-60h]
  __m128 v20; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 72);
  v21 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  v19 = a1 + 8;
  v4 = v3 + 32 * v2;
  while ( v4 != v3 )
  {
    if ( *(_QWORD *)(v3 + 16) != 4 )
      sub_32B650(a2, *(_QWORD *)v3, 0x32u);
    v12 = *(unsigned int *)(v3 + 24);
    if ( (_DWORD)v12 == 31 || (_DWORD)v12 == 48 )
    {
      v13 = *(_DWORD *)(a1 + 112);
      v14 = *(_QWORD *)(v3 + 8) + a2[17] - a2[22];
      if ( (_DWORD)v12 == 31 )
      {
        *(_QWORD *)(a1 + 96) = v14;
        v15 = v13 | 1;
      }
      else
      {
        *(_QWORD *)(a1 + 104) = v14;
        v15 = v13 | 4;
      }
      *(_DWORD *)(a1 + 112) = v15;
      v20 = _mm_loadh_ps((const double *)(v3 + 16));
      sub_F2F00((__int64)a2, (__int64)&v20);
      v7 = *(_DWORD **)(a1 + 56);
      v16 = *(_DWORD *)(v3 + 24);
      v12 = v16;
      v8 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v7 + 168LL);
      if ( v8 != sub_3E40F0 )
      {
LABEL_23:
        v9 = v8(v7, v12);
LABEL_7:
        if ( v9 != -1 )
        {
          v10 = *(_QWORD *)(a1 + 16);
          v11 = *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v10 + 1) )
          {
            v17 = qvector_reserve(v19, v11, v10 + 1, 4);
            *(_QWORD *)(a1 + 8) = v17;
            v11 = v17;
            v10 = *(_QWORD *)(a1 + 16);
          }
          *(_DWORD *)(v11 + 4 * v10) = v9;
          ++*(_QWORD *)(a1 + 16);
        }
        goto LABEL_11;
      }
      if ( v16 <= 0x1F )
        goto LABEL_22;
      if ( v16 == 48 )
      {
        v9 = v7[120];
        goto LABEL_7;
      }
    }
    else
    {
      v7 = *(_DWORD **)(a1 + 56);
      v8 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v7 + 168LL);
      if ( v8 != sub_3E40F0 )
        goto LABEL_23;
      if ( (unsigned int)v12 <= 0x1F )
      {
LABEL_22:
        v9 = v7[20] * v12 + v7[88];
        goto LABEL_7;
      }
    }
    if ( (_DWORD)v12 == 49 )
    {
      v9 = v7[121];
      goto LABEL_7;
    }
LABEL_11:
    v3 += 32;
  }
  return v21 - __readfsqword(0x28u);
}
