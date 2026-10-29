__int64 __fastcall sub_1EAFB80(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  __int64 v6; // rax
  char v8; // dl
  int v9; // eax
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-68h] BYREF
  char v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  __int64 v27; // [rsp+18h] [rbp-50h]
  __int64 v28; // [rsp+20h] [rbp-48h]

  if ( (a3 & 2) == 0 )
  {
    while ( *(_DWORD *)(a2 + 32) || *(_QWORD *)(a2 + 16) < *(_QWORD *)(a2 + 8) )
    {
      sub_1EAF8B0((__int64)&v24, a2);
      if ( (v25 & 1) != 0 )
        goto LABEL_23;
      v5 = v24;
      if ( !(_DWORD)v24 )
        goto LABEL_24;
      if ( (_DWORD)v24 == 1 )
        goto LABEL_20;
      if ( (_DWORD)v24 != 2 )
        goto LABEL_14;
      sub_20252B0(&v26, a2);
      v6 = v26;
      if ( v26 )
      {
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v6;
        goto LABEL_10;
      }
      sub_A0AE90(&v24);
    }
    goto LABEL_12;
  }
  if ( !*(_DWORD *)(a2 + 32) && *(_QWORD *)(a2 + 8) <= *(_QWORD *)(a2 + 16) )
  {
LABEL_12:
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    return a1;
  }
  sub_1EAF8B0((__int64)&v24, a2);
  if ( (v25 & 1) != 0 )
  {
LABEL_23:
    v10 = v24;
    *(_BYTE *)(a1 + 8) |= 1u;
    v24 = 0;
    *(_QWORD *)a1 = v10;
  }
  else
  {
    v5 = v24;
    if ( (_DWORD)v24 )
    {
      if ( (_DWORD)v24 == 1 )
      {
LABEL_20:
        sub_1EAF910((__int64)&v26, a2, 8u);
        v8 = v27 & 1;
        if ( (v27 & 1) != 0 )
        {
          v23 = v26;
          v26 = 0;
          *(_QWORD *)a1 = v23;
        }
        else
        {
          v9 = v26;
          *(_DWORD *)a1 = 2;
          *(_DWORD *)(a1 + 4) = v9;
        }
        *(_BYTE *)(a1 + 8) = v8 | *(_BYTE *)(a1 + 8) & 0xFE;
        sub_A0AE90(&v26);
      }
      else
      {
LABEL_14:
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 3;
        *(_DWORD *)(a1 + 4) = v5;
      }
      goto LABEL_10;
    }
LABEL_24:
    v11 = a3 & 1;
    if ( !v11 )
    {
      v12 = *(unsigned int *)(a2 + 72);
      if ( !(_DWORD)v12 )
      {
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = 0;
        goto LABEL_10;
      }
      v13 = *(_DWORD *)(a2 + 32);
      if ( v13 > 0x1F )
      {
        v11 = 32;
        *(_QWORD *)(a2 + 24) >>= (unsigned __int8)v13 - 32;
      }
      v14 = *(_QWORD *)(a2 + 64);
      *(_DWORD *)(a2 + 32) = v11;
      v15 = v14 + 32 * v12 - 32;
      *(_DWORD *)(a2 + 36) = *(_DWORD *)v15;
      v26 = *(_QWORD *)(a2 + 40);
      v16 = *(_QWORD *)(a2 + 48);
      *(_OWORD *)(a2 + 40) = 0;
      v27 = v16;
      v17 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 56) = 0;
      v28 = v17;
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(v15 + 8);
      v18 = *(_QWORD *)(v15 + 16);
      *(_QWORD *)(v15 + 8) = 0;
      v19 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v18;
      v20 = *(_QWORD *)(v15 + 24);
      *(_QWORD *)(v15 + 16) = v19;
      v21 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 56) = v20;
      *(_QWORD *)(v15 + 24) = v21;
      sub_A0AD20((__int64)&v26);
      v22 = (unsigned int)(*(_DWORD *)(a2 + 72) - 1);
      *(_DWORD *)(a2 + 72) = v22;
      sub_A0AD20(*(_QWORD *)(a2 + 64) + 32 * v22 + 8);
    }
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = 0;
  }
LABEL_10:
  sub_A0AE90(&v24);
  return a1;
}
