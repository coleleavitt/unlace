unsigned __int64 __fastcall sub_3E81A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r13
  _DWORD *v6; // r8
  __int64 (__fastcall *v7)(_DWORD *, unsigned int); // rcx
  int v8; // edx
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // r15d
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __m128 v23; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 72);
  v24 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = v3 + 32 * v2;
  if ( v3 != v4 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v3 + 24);
      v13 = *(_DWORD **)(a1 + 56);
      v14 = *(_QWORD *)(v3 + 16);
      v15 = v12 - 32;
      if ( v12 - 32 <= 0x1F )
        break;
      if ( v13[20] != v14 )
        goto LABEL_14;
LABEL_15:
      if ( v12 == 1 )
      {
        v20 = *(_QWORD *)(v3 + 8) + a2[17] - a2[22];
        *(_DWORD *)(a1 + 128) |= 1u;
        *(_QWORD *)(a1 + 120) = v20;
        v23 = _mm_loadh_ps((const double *)(v3 + 16));
        sub_F3600((__int64)a2, (__int64)&v23);
        v12 = *(_DWORD *)(v3 + 24);
      }
      if ( v12 - 10 <= 7 )
      {
        v16 = *(_QWORD *)(a1 + 104);
        v17 = *(_QWORD *)v3;
        v18 = *(_QWORD *)(a1 + 96);
        if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(v16 + 1) )
        {
          v21 = qvector_reserve(a1 + 96, v18, v16 + 1, 8);
          *(_QWORD *)(a1 + 96) = v21;
          v18 = v21;
          v16 = *(_QWORD *)(a1 + 104);
        }
        v3 += 32;
        *(_QWORD *)(v18 + 8 * v16) = v17;
        ++*(_QWORD *)(a1 + 104);
        if ( v4 == v3 )
          return v24 - __readfsqword(0x28u);
      }
      else
      {
        v6 = *(_DWORD **)(a1 + 56);
        v7 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
        if ( v7 != sub_3E48E0 )
        {
LABEL_25:
          v9 = v7(v6, v12);
LABEL_7:
          if ( v9 != -1 )
          {
            v10 = *(_QWORD *)(a1 + 16);
            v11 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v10 + 1) )
            {
              v22 = qvector_reserve(a1 + 8, v11, v10 + 1, 4);
              *(_QWORD *)(a1 + 8) = v22;
              v11 = v22;
              v10 = *(_QWORD *)(a1 + 16);
            }
            *(_DWORD *)(v11 + 4 * v10) = v9;
            ++*(_QWORD *)(a1 + 16);
          }
          goto LABEL_11;
        }
        if ( v12 <= 0x1F )
        {
          v9 = v6[88] + v6[20] * v12;
          goto LABEL_7;
        }
        v8 = v6[173];
        if ( v8 )
        {
          v15 = v12 - 32;
          if ( v12 - 32 <= 0x1F )
            goto LABEL_6;
        }
LABEL_11:
        v3 += 32;
        if ( v4 == v3 )
          return v24 - __readfsqword(0x28u);
      }
    }
    if ( v13[174] == v14 )
    {
      v6 = *(_DWORD **)(a1 + 56);
      v7 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v13 + 168LL);
      if ( v7 != sub_3E48E0 )
        goto LABEL_25;
      v8 = v13[173];
      if ( v8 )
      {
LABEL_6:
        v9 = v6[120] + v8 * v15;
        goto LABEL_7;
      }
      goto LABEL_11;
    }
LABEL_14:
    sub_32BE10(a2, *(_QWORD *)v3, 0x32u);
    v12 = *(_DWORD *)(v3 + 24);
    goto LABEL_15;
  }
  return v24 - __readfsqword(0x28u);
}
