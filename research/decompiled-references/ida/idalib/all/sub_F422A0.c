void __fastcall sub_F422A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 (__fastcall *v8)(); // rsi
  unsigned int v9; // eax
  int v10; // r12d
  __int64 v11; // r13
  _BYTE *v12; // rax
  char *v13; // rax
  int v14; // eax
  char v15; // al
  char v16; // al
  __int64 v17; // rax
  _DWORD *v18; // rax
  _DWORD *v19; // r12
  size_t v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // [rsp+8h] [rbp-50h] BYREF
  __int128 v25; // [rsp+10h] [rbp-48h]
  _QWORD *v26; // [rsp+20h] [rbp-38h]

  v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 4) != 0 )
  {
    v8 = *(__int64 (__fastcall **)())(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 )
      sub_F41560((__int64)a1, v8, a3, a4, a5, a6);
  }
  sub_F2AD60((__int64)a1, a2);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B && *(_DWORD *)(a2 + 100) )
    sub_995540(a1[137], " this");
  sub_F2A610((__int64)a1, *(_QWORD *)(a2 + 48));
  v9 = sub_B740B0(a2);
  sub_F2AEB0((__int64)a1, v9);
  v10 = *(_BYTE *)(a2 + 96) & 7;
  if ( (*(_BYTE *)(a2 + 96) & 7) != 0 )
  {
    v11 = a1[137];
    v12 = *(_BYTE **)(v11 + 32);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
    {
      v11 = sub_227BA10(a1[137], 32);
    }
    else
    {
      *(_QWORD *)(v11 + 32) = v12 + 1;
      *v12 = 32;
    }
    v13 = sub_B730C0(v10);
    sub_995540(v11, v13);
  }
  v14 = sub_B73370(a2);
  if ( v14 == 1 )
  {
    sub_995540(a1[137], " tls");
  }
  else if ( v14 == 2 )
  {
    sub_995540(a1[137], " tls_dynamic");
    if ( (*(_QWORD *)(a2 + 8) & 7LL) != 4 )
      goto LABEL_14;
    goto LABEL_30;
  }
  if ( (*(_QWORD *)(a2 + 8) & 7LL) != 4 )
    goto LABEL_14;
LABEL_30:
  sub_995540(a1[137], " __module_private__");
LABEL_14:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
    goto LABEL_18;
  v15 = *(_BYTE *)(a2 + 97);
  if ( (v15 & 4) != 0 )
  {
    sub_995540(a1[137], " nrvo");
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
      goto LABEL_18;
    v15 = *(_BYTE *)(a2 + 97);
    if ( (v15 & 0x20) == 0 )
    {
LABEL_17:
      if ( v15 >= 0 )
        goto LABEL_18;
LABEL_31:
      sub_995540(a1[137], " constexpr");
      if ( !sub_B735C0(a2) )
        goto LABEL_23;
      goto LABEL_19;
    }
  }
  else if ( (v15 & 0x20) == 0 )
  {
    goto LABEL_17;
  }
  sub_995540(a1[137], " inline");
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B && *(char *)(a2 + 97) < 0 )
    goto LABEL_31;
LABEL_18:
  if ( !sub_B735C0(a2) )
    goto LABEL_23;
LABEL_19:
  v16 = (*(_BYTE *)(a2 + 96) >> 5) & 3;
  if ( v16 == 1 )
  {
    sub_995540(a1[137], " callinit");
  }
  else if ( v16 )
  {
    if ( v16 == 2 )
      sub_995540(a1[137], " listinit");
    else
      sub_995540(a1[137], " parenlistinit");
  }
  else
  {
    sub_995540(a1[137], " cinit");
  }
LABEL_23:
  v17 = sub_B8C330(a2);
  if ( (unsigned int)sub_B73D90(a2, v17) )
    sub_995540(a1[137], " destroyed");
  if ( sub_B799A0(a2) )
    sub_995540(a1[137], " pack");
  if ( sub_B735C0(a2) )
  {
    v18 = (_DWORD *)sub_B73640(a2);
    v19 = v18;
    if ( v18 )
    {
      if ( (*v18 & 0x20000) == 0
        && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B
        && *(char *)(a2 + 97) < 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      {
        if ( sub_B7C110(a2) )
        {
          v24 = v19;
          v26 = a1;
          v25 = (__int128)_mm_loadh_ps((const double *)&v24);
          v20 = j__strlen("value");
          sub_F395E0((__int64)a1, (__int64)"value", v20, v21, v22, v23, v25, v26);
        }
      }
    }
  }
}
