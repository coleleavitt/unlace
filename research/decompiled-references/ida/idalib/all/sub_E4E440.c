void __fastcall sub_E4E440(__int64 *a1, __int64 a2, __m128 a3)
{
  char v4; // al
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdi
  _WORD *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdi
  char v13; // al
  int v14; // eax
  __int64 *v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx

  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v4 != 67 )
  {
    if ( v4 == 47 )
    {
      if ( *(_BYTE *)(a2 + 81) )
      {
        v6 = *(_DWORD *)(a2 + 84);
        if ( v6 )
        {
          v7 = a2 + 88;
          v8 = a2 + 16LL * (unsigned int)(v6 - 1) + 104;
          do
          {
            while ( 1 )
            {
              v9 = a1[1];
              v10 = *(_WORD **)(v9 + 32);
              if ( *(_QWORD *)(v9 + 24) - (_QWORD)v10 > 1u )
                break;
              v7 += 16;
              sub_227BF10(v9, "Tn", 2);
              sub_E3FB80(a1, *(_QWORD *)(v7 - 16));
              if ( v7 == v8 )
                return;
            }
            v7 += 16;
            *v10 = 28244;
            *(_QWORD *)(v9 + 32) += 2LL;
            sub_E3FB80(a1, *(_QWORD *)(v7 - 16));
          }
          while ( v8 != v7 );
        }
      }
      else
      {
        v11 = *(_QWORD *)(a2 + 48);
        v12 = a1[1];
        if ( *(_BYTE *)(a2 + 80) )
        {
          sub_995540(v12, "Tp");
          v19 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v19 + 16) == 38
            || (v20 = *(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v20 + 16) == 38)
            && (v19 = sub_F63050(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), "Tp", v20, v18)) != 0 )
          {
            v11 = *(_QWORD *)(v19 + 32);
          }
          v12 = a1[1];
        }
        sub_995540(v12, "Tn");
        sub_E3FB80(a1, v11);
      }
    }
    else if ( v4 == 68 )
    {
      v13 = *(_BYTE *)(a2 + 80);
      if ( (v13 & 4) != 0 )
      {
        v14 = *(_DWORD *)(a2 + 84);
        if ( v14 )
        {
          v15 = (__int64 *)(a2 + 88);
          v16 = a2 + 8LL * (unsigned int)(v14 - 1) + 96;
          do
          {
            v17 = *v15++;
            sub_E4E6C0(a1, v17);
          }
          while ( (__int64 *)v16 != v15 );
        }
      }
      else
      {
        if ( (v13 & 2) != 0 )
          sub_995540(a1[1], "Tp");
        sub_E4E6C0(a1, *(_QWORD *)(a2 + 56));
      }
    }
    return;
  }
  if ( !sub_BBE5D0(a2) )
  {
    v5 = a1[1];
    if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
      goto LABEL_4;
LABEL_6:
    sub_995540(v5, "Ty");
    return;
  }
  sub_995540(a1[1], "Tp");
  v5 = a1[1];
  if ( (*(_BYTE *)(a2 + 60) & 4) == 0 )
    goto LABEL_6;
LABEL_4:
  if ( a2 == -80 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0x9Fu )
    goto LABEL_6;
  sub_995540(v5, "Tk");
  sub_E4E2E0(a1, a2 + 80, a3);
}
