__int64 __fastcall sub_71DA0(__int64 a1, char *a2, size_t a3)
{
  unsigned __int64 v4; // r12
  char *v5; // rbp
  __int64 v6; // rdx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r11
  char *v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  size_t v17; // r12

  if ( !a2 )
    return 0;
  v4 = (unsigned __int64)&a2[a3];
  v5 = a2;
  *(_QWORD *)a1 += a3;
  v6 = *(unsigned int *)(a1 + 72);
  if ( v6 + a3 <= 0x1F )
  {
    memcpy((void *)(a1 + v6 + 40), a2, a3);
    *(_DWORD *)(a1 + 72) += a3;
    return 0;
  }
  if ( (_DWORD)v6 )
  {
    memcpy((void *)(a1 + v6 + 40), a2, (unsigned int)(32 - *(_DWORD *)(a1 + 72)));
    v15 = *(_QWORD *)(a1 + 40);
    v5 = &a2[32 - *(_DWORD *)(a1 + 72)];
    *(_DWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 8) = 0x9E3779B185EBCA87LL * __ROL8__(*(_QWORD *)(a1 + 8) - 0x3D4D51C2D82B14B1LL * v15, 31);
    *(_QWORD *)(a1 + 16) = 0x9E3779B185EBCA87LL
                         * __ROL8__(*(_QWORD *)(a1 + 16) - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(a1 + 48), 31);
    v16 = __ROL8__(*(_QWORD *)(a1 + 32) - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(a1 + 64), 31);
    *(_QWORD *)(a1 + 24) = 0x9E3779B185EBCA87LL
                         * __ROL8__(*(_QWORD *)(a1 + 24) - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(a1 + 56), 31);
    *(_QWORD *)(a1 + 32) = 0x9E3779B185EBCA87LL * v16;
    if ( v4 < (unsigned __int64)(v5 + 32) )
      goto LABEL_8;
  }
  else if ( v4 < (unsigned __int64)(a2 + 32) )
  {
    goto LABEL_8;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v4 - 32;
  v10 = v5;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 32);
  do
  {
    v13 = *(_QWORD *)v10;
    v10 += 32;
    v7 = 0x9E3779B185EBCA87LL * __ROL8__(0xC2B2AE3D27D4EB4FLL * v13 + v7, 31);
    *(_QWORD *)(a1 + 8) = v7;
    v8 = 0x9E3779B185EBCA87LL * __ROL8__(0xC2B2AE3D27D4EB4FLL * *((_QWORD *)v10 - 3) + v8, 31);
    *(_QWORD *)(a1 + 16) = v8;
    v11 = 0x9E3779B185EBCA87LL * __ROL8__(0xC2B2AE3D27D4EB4FLL * *((_QWORD *)v10 - 2) + v11, 31);
    *(_QWORD *)(a1 + 24) = v11;
    v12 = 0x9E3779B185EBCA87LL * __ROL8__(0xC2B2AE3D27D4EB4FLL * *((_QWORD *)v10 - 1) + v12, 31);
    *(_QWORD *)(a1 + 32) = v12;
  }
  while ( (unsigned __int64)v10 <= v9 );
  v5 += ((v9 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFE0LL) + 32;
LABEL_8:
  if ( (unsigned __int64)v5 < v4 )
  {
    v17 = v4 - (_QWORD)v5;
    memcpy((void *)(a1 + 40), v5, v17);
    *(_DWORD *)(a1 + 72) = v17;
  }
  return 0;
}

