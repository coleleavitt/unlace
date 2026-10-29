void __fastcall sub_E57520(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r9
  __int64 v15; // rax
  __int64 i; // rsi
  __int64 v17; // r15
  _QWORD *v18; // rbx
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21[9]; // [rsp+0h] [rbp-48h] BYREF

  switch ( (unsigned int)sub_E90000(a2) )
  {
    case 0u:
      v7 = *(_QWORD **)(*a1 + 8);
      if ( *(char *)(v7[290] + 212LL) >= 0 )
      {
        sub_E57520(a1, *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_BYTE *)(a2 + 8) & 6) != 0 )
          sub_E39490(a1[1], 0);
        else
          sub_E39490(a1[1], *(_QWORD *)(a2 + 16));
      }
      else
      {
        v8 = sub_AB7570(v7, a2);
        if ( !(unsigned __int8)sub_E3D1B0((__int64)a1, v8) )
        {
          sub_E57520(a1, *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_BYTE *)(a2 + 8) & 6) != 0 )
            sub_E39490(a1[1], 0);
          else
            sub_E39490(a1[1], *(_QWORD *)(a2 + 16));
          v9 = sub_AB7570(*(_QWORD **)(*a1 + 8), a2);
          v10 = *((_DWORD *)a1 + 10);
          v21[0] = v9;
          *((_DWORD *)a1 + 10) = v10 + 1;
          *(_DWORD *)sub_E3B4F0((__int64)(a1 + 29), v21, v11, v12, v13, v14) = v10;
        }
      }
      break;
    case 1u:
      v15 = sub_E90060(a2);
      sub_E51920((__int64)a1, v15, 0, a3);
      break;
    case 2u:
      for ( i = *(_QWORD *)(sub_E90090(a2) + 88); (*(_BYTE *)(i + 28) & 0x7F) == 0x4D; i = *(_QWORD *)(i + 88) )
        ;
      sub_E51920((__int64)a1, i, 0, a3);
      break;
    case 3u:
      v5 = *(__int64 *)(a2 + 8) >> 1;
      v6 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( (v5 & 3) != 2 )
          BUG();
        v17 = *(_QWORD *)(a2 + 16);
        v18 = *(_QWORD **)(*a1 + 8);
        v19 = *(unsigned int *)(v17 + 20);
        sub_F22FF0(v21, v6, *(_QWORD *)(v17 + 40), 1);
        v20 = sub_AB72A0(v18, (unsigned __int8)(*(_WORD *)(v17 + 18) >> 3), v21, (const void *)(v17 + 48), v19, 1);
        sub_E57400(a1, v20);
      }
      else
      {
        if ( v5 == 2 )
          v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        sub_E57400(a1, v6);
      }
      break;
    case 4u:
      return;
  }
}
