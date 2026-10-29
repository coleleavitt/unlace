__int64 __fastcall sub_20D0710(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // r12
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  void (*v5)(); // rax
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE *v9; // rbp
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v12)(__int64, __int64); // rax

  v2 = *(_BYTE **)(a1 + 16);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v3 == sub_20CEB40 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)(a1 + 16));
    else
      v3((__int64)a2, *(_QWORD *)(a1 + 16));
    if ( (v2[9] & 0xC0) != 0x40 )
    {
      v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
      if ( v4 == sub_20CEB60 )
      {
        v5 = *(void (**)())(*(_QWORD *)v2 + 72LL);
        if ( v5 != nullsub_1308 )
          ((void (__fastcall *)(_BYTE *, _QWORD *))v5)(v2, a2);
      }
      else
      {
        v4((__int64)a2, (__int64)v2);
      }
    }
    if ( *(_QWORD *)(a1 + 16) )
    {
      v6 = 46;
      if ( !*(_BYTE *)(a1 + 32) )
      {
LABEL_10:
        sub_20CFD70((__int64)a2);
        v7 = a2[2];
        v8 = a2[1];
        a2[2] = v7 + 1;
        *(_BYTE *)(v8 + v7) = v6;
        goto LABEL_11;
      }
LABEL_17:
      v6 = 58;
      goto LABEL_10;
    }
  }
  if ( *(_BYTE *)(a1 + 32) )
    goto LABEL_17;
LABEL_11:
  v9 = *(_BYTE **)(a1 + 24);
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v10 == sub_20CEB40 )
    (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v9 + 64LL))(v9, a2);
  else
    v10((__int64)a2, (__int64)v9);
  result = v9[9] & 0xC0;
  if ( (v9[9] & 0xC0) != 0x40 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v12 == sub_20CEB60 )
      return (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v9 + 72LL))(v9, a2);
    else
      return v12((__int64)a2, (__int64)v9);
  }
  return result;
}
