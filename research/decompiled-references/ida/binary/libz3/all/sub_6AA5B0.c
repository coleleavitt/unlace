__int64 __fastcall sub_6AA5B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax

  v3 = a1[8];
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  v5 = sub_186B270(0x40u);
  v6 = *a1;
  v7 = v5;
  v8 = a1[1];
  *(_QWORD *)v7 = &off_1C52FD8;
  *(_QWORD *)(v7 + 16) = v8;
  LOBYTE(v8) = *(_BYTE *)(v8 + 715);
  *(_QWORD *)(v7 + 8) = v6;
  *(_BYTE *)(v7 + 40) = v8;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = v6;
  *(_QWORD *)(v7 + 48) = 0;
  *(_BYTE *)(v7 + 56) = 1;
  a1[8] = v7;
  return sub_6AFF50(v7, a2);
}

