void __fastcall sub_F1BFE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int128 v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]

  *(_QWORD *)&v14 = a1;
  v15 = a1;
  sub_F07020(a1, a2);
  v5 = *(_QWORD *)(a2 + 104);
  if ( v5 )
  {
    v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v6 )
      return;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a2 + 96);
  v10 = *(_QWORD *)(v9 + 88);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) == 0 && (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    if ( (v10 & 2) == 0 )
    {
LABEL_12:
      v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v13 = v10 & 2;
        if ( !(_DWORD)v13 )
          return;
        v11 = sub_6C1EC0(v12, v9, v13, v2, v3, v4) & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)(v9 + 88) = v11 | 1;
      }
LABEL_15:
      v16[0] = v11;
      sub_B57E30(v16);
      if ( (*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return;
      v7 = *(unsigned __int64 **)((*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      v8 = nullptr;
      goto LABEL_4;
    }
    v11 = sub_6C1EC0((_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL), *(_QWORD *)(a2 + 96), v10, v2, v3, v4)
        & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v9 + 88) = v11 | 1;
  }
  v16[0] = v11;
  sub_B57E30(v16);
  v6 = *(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v6 )
  {
    if ( *(_QWORD *)(a2 + 104) )
      return;
    v9 = *(_QWORD *)(a2 + 96);
    v10 = *(_QWORD *)(v9 + 88);
    v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v10 & 1) != 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_3:
  v7 = *(unsigned __int64 **)(v6 + 8);
  v8 = &v7[*(unsigned int *)(v6 + 16)];
LABEL_4:
  while ( v8 != v7 )
  {
    if ( *v7 )
    {
      *(_QWORD *)&v14 = *v7;
      v16[0] = 0;
      v16[1] = 0;
      v14 = (__int128)_mm_loadh_ps((const double *)&v14);
      v17 = v14;
      sub_F1B570(v15, (__int64)&byte_22CD811, 0, v2, v3, v4, 0, v14);
    }
    ++v7;
  }
}

