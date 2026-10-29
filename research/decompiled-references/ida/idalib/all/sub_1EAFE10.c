__int64 __fastcall sub_1EAFE10(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v6; // rax
  char v7; // dl
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-58h] BYREF
  char v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  __int64 v23; // [rsp+18h] [rbp-40h]
  __int64 v24; // [rsp+20h] [rbp-38h]

  while ( *(_DWORD *)(a2 + 32) || *(_QWORD *)(a2 + 8) > *(_QWORD *)(a2 + 16) )
  {
    sub_1EAF8B0((__int64)&v20, a2);
    if ( (v21 & 1) != 0 )
    {
      v6 = v20;
      *(_BYTE *)(a1 + 8) |= 1u;
      v20 = 0;
      *(_QWORD *)a1 = v6;
      goto LABEL_9;
    }
    v3 = v20;
    if ( !(_DWORD)v20 )
    {
      v9 = *(unsigned int *)(a2 + 72);
      if ( (_DWORD)v9 )
      {
        v10 = *(_DWORD *)(a2 + 32);
        if ( v10 > 0x1F )
        {
          v3 = 32;
          *(_QWORD *)(a2 + 24) >>= (unsigned __int8)v10 - 32;
        }
        *(_DWORD *)(a2 + 32) = v3;
        v11 = *(_QWORD *)(a2 + 64) + 32 * v9 - 32;
        *(_DWORD *)(a2 + 36) = *(_DWORD *)v11;
        v22 = *(_QWORD *)(a2 + 40);
        v12 = *(_QWORD *)(a2 + 48);
        *(_OWORD *)(a2 + 40) = 0;
        v23 = v12;
        v13 = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a2 + 56) = 0;
        v24 = v13;
        *(_QWORD *)(a2 + 40) = *(_QWORD *)(v11 + 8);
        v14 = *(_QWORD *)(v11 + 16);
        *(_QWORD *)(v11 + 8) = 0;
        v15 = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(a2 + 48) = v14;
        v16 = *(_QWORD *)(v11 + 24);
        *(_QWORD *)(v11 + 16) = v15;
        v17 = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a2 + 56) = v16;
        *(_QWORD *)(v11 + 24) = v17;
        sub_A0AD20((__int64)&v22);
        v18 = (unsigned int)(*(_DWORD *)(a2 + 72) - 1);
        *(_DWORD *)(a2 + 72) = v18;
        sub_A0AD20(*(_QWORD *)(a2 + 64) + 32 * v18 + 8);
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 1;
        *(_DWORD *)(a1 + 4) = 0;
      }
      else
      {
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = 0;
      }
      goto LABEL_9;
    }
    if ( (_DWORD)v20 == 1 )
    {
      sub_1EAF910((__int64)&v22, a2, 8u);
      v7 = v23 & 1;
      if ( (v23 & 1) != 0 )
      {
        v19 = v22;
        v22 = 0;
        *(_QWORD *)a1 = v19;
      }
      else
      {
        v8 = v22;
        *(_DWORD *)a1 = 2;
        *(_DWORD *)(a1 + 4) = v8;
      }
      *(_BYTE *)(a1 + 8) = v7 | *(_BYTE *)(a1 + 8) & 0xFE;
      sub_A0AE90(&v22);
      goto LABEL_9;
    }
    if ( (_DWORD)v20 != 2 )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = 3;
      *(_DWORD *)(a1 + 4) = v3;
      goto LABEL_9;
    }
    sub_20252B0(&v22, a2);
    v4 = v22;
    if ( v22 )
    {
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v4;
LABEL_9:
      sub_A0AE90(&v20);
      return a1;
    }
    sub_A0AE90(&v20);
  }
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  return a1;
}
