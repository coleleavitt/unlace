__int64 __fastcall sub_1BF27B0(__int64 a1, _QWORD *a2, unsigned int a3, __int64 **a4, double a5, __m128 a6)
{
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r8
  _QWORD *v14; // rbx
  char v15; // r10
  __int64 v16; // rax
  __int64 v17; // rdi
  char v18; // si
  __int64 v19; // r11
  __int64 v20; // r15
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // edx
  char v27; // cl
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax

  if ( (*(_DWORD *)(a1 + 2864) & 0x3FFFFFFF) == 0 || *(char *)(a1 + 2867) < 0 )
    goto LABEL_3;
  v10 = *(unsigned int *)(a1 + 8);
  v11 = 168 * v10 + *(_QWORD *)a1;
  *a4 = (__int64 *)v11;
  v12 = *(_QWORD **)a1;
  v13 = *(_QWORD *)a1 + 168 * v10;
  if ( *(_QWORD *)a1 != v13 )
  {
    v14 = *(_QWORD **)a1;
    while ( 1 )
    {
      v15 = *((_BYTE *)v14 + 104);
      if ( (v15 & 1) != 0 )
      {
        v16 = v14[6];
        v17 = v16 + 152LL * v14[7];
        if ( v16 == v17 )
        {
LABEL_17:
          if ( v15 >= 0
            || (v14[14] & 0xFFFFFF00) == 0
            && (*((_BYTE *)v14 + 117) & 4) == 0
            && ((v27 = *((_BYTE *)v14 + 116), (v27 & 8) == 0)
             || (v28 = *(_QWORD *)&byte_8[v14[18] & 0xFFFFFFFFFFFFFFF0LL],
                 v29 = *(_QWORD *)&byte_8[v14[15] & 0xFFFFFFFFFFFFFFF0LL],
                 (v29 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v29 | (unsigned __int8)v14[15]) & 7) == (v28 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v28 | (unsigned __int8)v14[18]) & 7))
             && (v27 & 0xA0) != 0xA0) )
          {
            if ( (*(_BYTE *)(a1 + 2867) & 0x40) != 0 && *v14 && (*(_BYTE *)(*v14 + 28LL) & 0x7F) == 0x25 )
            {
LABEL_40:
              v30 = *(unsigned int *)(a1 + 8);
              *a4 = (__int64 *)v13;
              v14 = (_QWORD *)(*(_QWORD *)a1 + 168 * v30);
              goto LABEL_28;
            }
            v21 = *a4;
            if ( (__int64 *)v13 == *a4 )
              goto LABEL_39;
            if ( !*v21 || !*v14 )
              goto LABEL_40;
            v22 = sub_1D3B1F0(a2, *v21, *v14);
            if ( !v22 )
            {
              v23 = *(unsigned int *)(a1 + 8);
              v13 = 168 * v23 + *(_QWORD *)a1;
              *a4 = (__int64 *)v13;
              v14 = (_QWORD *)(*(_QWORD *)a1 + 168 * v23);
              goto LABEL_28;
            }
            v10 = *(unsigned int *)(a1 + 8);
            if ( v22 == *v14 )
            {
LABEL_39:
              *a4 = v14;
              v12 = *(_QWORD **)a1;
            }
            else
            {
              v12 = *(_QWORD **)a1;
            }
          }
        }
        else
        {
          while ( (*(_DWORD *)v16 & 0x7FFFFFFF) == 0 )
          {
            if ( (*(_DWORD *)(v16 + 16) & 0xFFFFFF00) != 0 )
              break;
            if ( (*(_BYTE *)(v16 + 21) & 4) != 0 )
              break;
            v18 = *(_BYTE *)(v16 + 20);
            if ( (v18 & 8) != 0 )
            {
              v19 = *(_QWORD *)&byte_8[*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL];
              v20 = *(_QWORD *)&byte_8[*(_QWORD *)(v16 + 24) & 0xFFFFFFFFFFFFFFF0LL];
              if ( (v20 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v20 | (unsigned __int8)*(_QWORD *)(v16 + 24)) & 7) != (v19 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v19 | (unsigned __int8)*(_QWORD *)(v16 + 48)) & 7)
                || (v18 & 0xA0) == 0xA0 )
              {
                break;
              }
            }
            v16 += 152;
            if ( v17 == v16 )
              goto LABEL_17;
          }
        }
      }
      v14 += 21;
      v13 = (__int64)&v12[21 * v10];
      if ( (_QWORD *)v13 == v14 )
      {
        v13 = (__int64)*a4;
        goto LABEL_28;
      }
    }
  }
  v14 = (_QWORD *)(*(_QWORD *)a1 + 168 * v10);
  v13 = v11;
LABEL_28:
  if ( (_QWORD *)v13 == v14 )
  {
LABEL_3:
    sub_1BF2630(a1, a2, a5, a6);
    return sub_1BDD5E0((__int64 *)a1, a2, a3, a4);
  }
  else
  {
    *(_BYTE *)(v13 + 104) |= 2u;
    v24 = **a4;
    if ( !v24 )
      return 0;
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v26 = 3;
    if ( (*(_BYTE *)(v25 + 82) & 0x40) == 0 )
      return 0;
    return v26;
  }
}
