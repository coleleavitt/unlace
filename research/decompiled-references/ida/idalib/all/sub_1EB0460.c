__int64 __fastcall sub_1EB0460(__int64 a1, __int64 a2, char a3)
{
  int v3; // r13d
  int v4; // eax
  int v5; // eax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  int v26; // [rsp+Ch] [rbp-7Ch]
  __int64 v27; // [rsp+10h] [rbp-78h] BYREF
  char v28; // [rsp+18h] [rbp-70h]
  __int64 v29; // [rsp+20h] [rbp-68h] BYREF
  char v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h]
  __int64 v33; // [rsp+40h] [rbp-48h]

  v3 = a3 & 2;
  v26 = a3 & 1;
  if ( (a3 & 2) == 0 )
    goto LABEL_2;
  while ( 1 )
  {
    if ( !*(_DWORD *)(a2 + 32) && *(_QWORD *)(a2 + 8) <= *(_QWORD *)(a2 + 16) )
      goto LABEL_4;
    sub_A0B360((__int64)&v31, a2, *(_DWORD *)(a2 + 36));
    v30 = v32 & 1 | v30 & 0xFE;
    v9 = v31;
    if ( (v32 & 1) != 0 )
    {
      v31 = 0;
      v29 = v9;
    }
    else
    {
      LODWORD(v29) = v31;
    }
    sub_A0AE70(&v31);
    if ( (v30 & 1) != 0 )
    {
LABEL_27:
      v11 = v29;
      v28 |= 1u;
      v29 = 0;
      v27 = v11;
      goto LABEL_14;
    }
    v7 = v29;
    if ( !(_DWORD)v29 )
    {
LABEL_35:
      if ( !v26 )
      {
        v12 = *(unsigned int *)(a2 + 72);
        if ( !(_DWORD)v12 )
        {
          v28 &= ~1u;
          v27 = 0;
          goto LABEL_14;
        }
        v13 = *(_DWORD *)(a2 + 32);
        v14 = 0;
        if ( v13 > 0x1F )
        {
          *(_QWORD *)(a2 + 24) >>= (unsigned __int8)v13 - 32;
          v14 = 32;
        }
        v15 = *(_QWORD *)(a2 + 64);
        *(_DWORD *)(a2 + 32) = v14;
        v16 = v15 + 32 * v12 - 32;
        *(_DWORD *)(a2 + 36) = *(_DWORD *)v16;
        v31 = *(_QWORD *)(a2 + 40);
        v17 = *(_QWORD *)(a2 + 48);
        *(_OWORD *)(a2 + 40) = 0;
        v32 = v17;
        v18 = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a2 + 56) = 0;
        v33 = v18;
        *(_QWORD *)(a2 + 40) = *(_QWORD *)(v16 + 8);
        v19 = *(_QWORD *)(v16 + 16);
        *(_QWORD *)(v16 + 8) = 0;
        v20 = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(a2 + 48) = v19;
        v21 = *(_QWORD *)(v16 + 24);
        *(_QWORD *)(v16 + 16) = v20;
        v22 = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a2 + 56) = v21;
        *(_QWORD *)(v16 + 24) = v22;
        sub_A0AD20((__int64)&v31);
        v23 = (unsigned int)(*(_DWORD *)(a2 + 72) - 1);
        *(_DWORD *)(a2 + 72) = v23;
        sub_A0AD20(*(_QWORD *)(a2 + 64) + 32 * v23 + 8);
      }
      v28 &= ~1u;
      v27 = 1;
      goto LABEL_14;
    }
    if ( (_DWORD)v29 == 1 )
    {
LABEL_32:
      sub_1EAF910((__int64)&v31, a2, 8u);
      if ( (v32 & 1) != 0 )
      {
        v24 = v31;
        v31 = 0;
        v27 = v24;
      }
      else
      {
        LODWORD(v27) = 2;
        HIDWORD(v27) = v31;
      }
      v28 = v32 & 1 | v28 & 0xFE;
      sub_A0AE90(&v31);
LABEL_14:
      sub_A0AE90(&v29);
      if ( (v28 & 1) != 0 )
        goto LABEL_25;
      goto LABEL_15;
    }
LABEL_24:
    v28 &= ~1u;
    LODWORD(v27) = 3;
    HIDWORD(v27) = v7;
    sub_A0AE90(&v29);
    if ( (v28 & 1) != 0 )
    {
LABEL_25:
      v10 = v27;
      v27 = 0;
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v10;
      goto LABEL_6;
    }
LABEL_15:
    v4 = v27;
    if ( (_DWORD)v27 != 2 )
      goto LABEL_5;
    sub_A0BAF0(&v31, a2);
    v8 = v31;
    if ( v31 )
      break;
    sub_A0B030(&v27);
    if ( !v3 )
    {
LABEL_2:
      while ( *(_DWORD *)(a2 + 32) || *(_QWORD *)(a2 + 8) > *(_QWORD *)(a2 + 16) )
      {
        sub_A0B360((__int64)&v31, a2, *(_DWORD *)(a2 + 36));
        v30 = v32 & 1 | v30 & 0xFE;
        if ( (v32 & 1) != 0 )
        {
          v29 = v31;
          v31 = 0;
          sub_A0AE70(&v31);
          if ( (v30 & 1) != 0 )
            goto LABEL_27;
        }
        else
        {
          LODWORD(v29) = v31;
          sub_A0AE70(&v31);
          if ( (v30 & 1) != 0 )
            goto LABEL_27;
        }
        v7 = v29;
        if ( !(_DWORD)v29 )
          goto LABEL_35;
        if ( (_DWORD)v29 == 1 )
          goto LABEL_32;
        if ( (_DWORD)v29 != 2 )
          goto LABEL_24;
        sub_20252B0(&v31, a2);
        if ( v31 )
        {
          v28 |= 1u;
          v27 = v31;
          goto LABEL_14;
        }
        sub_A0AE90(&v29);
      }
LABEL_4:
      v28 &= ~1u;
      v4 = 0;
      v27 = 0;
LABEL_5:
      *(_DWORD *)a1 = v4;
      v5 = HIDWORD(v27);
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)(a1 + 4) = v5;
      goto LABEL_6;
    }
  }
  *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)a1 = v8;
LABEL_6:
  sub_A0B030(&v27);
  return a1;
}
