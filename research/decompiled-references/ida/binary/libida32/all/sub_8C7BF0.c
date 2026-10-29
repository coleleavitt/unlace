__int64 __fastcall sub_8C7BF0(const void *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  const void *v6; // [rsp+8h] [rbp-30h] BYREF

  v6 = a1;
  v2 = operator new(0x60u);
  *(_BYTE *)(v2 + 8) = 84;
  v3 = v2;
  v4 = v2;
  *(_QWORD *)v2 = &off_2B14F08;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 88) = 0;
  *(_BYTE *)(v2 + 92) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 72) = 0;
  if ( a1 && !sub_8C1C70(v2, &v6, a2) )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    return 0;
  }
  return v4;
}

