void __fastcall sub_E2A700(__int64 *a1, __int64 a2, __m128 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  char v7; // al
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdi
  _WORD *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  char v22; // al
  int v23; // eax
  __int64 *v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx

  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v7 != 67 )
  {
    if ( v7 == 47 )
    {
      if ( *(_BYTE *)(a2 + 81) )
      {
        v9 = *(_DWORD *)(a2 + 84);
        if ( v9 )
        {
          v10 = a2 + 88;
          v11 = a2 + 16LL * (unsigned int)(v9 - 1) + 104;
          do
          {
            while ( 1 )
            {
              v12 = a1[1];
              v13 = *(_WORD **)(v12 + 32);
              if ( *(_QWORD *)(v12 + 24) - (_QWORD)v13 > 1u )
                break;
              v10 += 16;
              sub_22581D0(v12, "Tn", 2);
              sub_E1BE40((__int64)a1, *(_QWORD *)(v10 - 16), v14, v15, v16);
              if ( v10 == v11 )
                return;
            }
            v10 += 16;
            *v13 = 28244;
            *(_QWORD *)(v12 + 32) += 2LL;
            sub_E1BE40((__int64)a1, *(_QWORD *)(v10 - 16), (__int64)v13, a5, a6);
          }
          while ( v11 != v10 );
        }
      }
      else
      {
        v17 = *(_QWORD *)(a2 + 48);
        v18 = a1[1];
        if ( *(_BYTE *)(a2 + 80) )
        {
          sub_971800(v18, "Tp");
          v28 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v28 + 16) == 38
            || (v29 = *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v29 + 16) == 38)
            && (v28 = sub_F3F310(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL), "Tp", v29, v27)) != 0 )
          {
            v17 = *(_QWORD *)(v28 + 32);
          }
          v18 = a1[1];
        }
        sub_971800(v18, "Tn");
        sub_E1BE40((__int64)a1, v17, v19, v20, v21);
      }
    }
    else if ( v7 == 68 )
    {
      v22 = *(_BYTE *)(a2 + 80);
      if ( (v22 & 4) != 0 )
      {
        v23 = *(_DWORD *)(a2 + 84);
        if ( v23 )
        {
          v24 = (__int64 *)(a2 + 88);
          v25 = a2 + 8LL * (unsigned int)(v23 - 1) + 96;
          do
          {
            v26 = *v24++;
            sub_E2A980(a1, v26);
          }
          while ( (__int64 *)v25 != v24 );
        }
      }
      else
      {
        if ( (v22 & 2) != 0 )
          sub_971800(a1[1], "Tp");
        sub_E2A980(a1, *(_QWORD *)(a2 + 56));
      }
    }
    return;
  }
  if ( !sub_B9A890(a2) )
  {
    v8 = a1[1];
    if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
      goto LABEL_4;
LABEL_6:
    sub_971800(v8, "Ty");
    return;
  }
  sub_971800(a1[1], "Tp");
  v8 = a1[1];
  if ( (*(_BYTE *)(a2 + 60) & 4) == 0 )
    goto LABEL_6;
LABEL_4:
  if ( a2 == -80 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0x9Fu )
    goto LABEL_6;
  sub_971800(v8, "Tk");
  sub_E2A5A0(a1, a2 + 80, a3);
}

