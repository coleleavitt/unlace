void __fastcall sub_E2E9D0(
        _QWORD *a1,
        unsigned __int16 *a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int16 *v12; // rbp
  _BYTE *v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rdi
  _BYTE *v17; // rax

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 2320LL) + 212LL) > 0x5Fu )
  {
    sub_E24970((__int64)a1, a2, (unsigned __int16 *)0xFFFFFFFFLL, 1, a6, a7);
  }
  else
  {
    v8 = sub_BD7DA0((unsigned __int64)a2);
    v11 = a1[1];
    v12 = (unsigned __int16 *)v8;
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_QWORD *)(v11 + 24);
    if ( (*(_WORD *)v8 & 0x1FF) == 0x47 && (v15 = *(_QWORD *)(v8 + 16), ((*(_BYTE *)(v15 + 28) + 94) & 0x7Fu) <= 0xC) )
    {
      if ( v14 <= (unsigned __int64)v13 )
      {
        sub_2257CD0(v11, 76);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v13 + 1;
        *v13 = 76;
      }
      sub_E2E4C0((__int64)a1, v15, 0, a3);
      v16 = a1[1];
      v17 = *(_BYTE **)(v16 + 32);
      if ( (unsigned __int64)v17 < *(_QWORD *)(v16 + 24) )
        goto LABEL_7;
    }
    else
    {
      if ( v14 <= (unsigned __int64)v13 )
      {
        sub_2257CD0(v11, 88);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v13 + 1;
        *v13 = 88;
      }
      sub_E24970((__int64)a1, v12, (unsigned __int16 *)0xFFFFFFFFLL, 0, v9, v10);
      v16 = a1[1];
      v17 = *(_BYTE **)(v16 + 32);
      if ( (unsigned __int64)v17 < *(_QWORD *)(v16 + 24) )
      {
LABEL_7:
        *(_QWORD *)(v16 + 32) = v17 + 1;
        *v17 = 69;
        return;
      }
    }
    sub_2257CD0(v16, 69);
  }
}

