__int64 __fastcall sub_712B50(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 *v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edx
  __int64 v11; // rbp
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 17288);
  v4 = *(unsigned int *)(v3 + 260);
  if ( (unsigned int)v4 > 0x1E )
    return 0;
  v5 = 1811939874;
  LOBYTE(v2) = _bittest64(&v5, v4);
  if ( !(_BYTE)v2 )
    return 0;
  if ( (_DWORD)v4 == 26 || (_DWORD)v4 == 5 )
  {
    if ( (unsigned int)sub_266CFB0(v3 + 216) <= 6 )
      goto LABEL_12;
    LODWORD(v4) = *(_DWORD *)(v3 + 260);
  }
  if ( (v4 & 0xFFFFFFF7) != 1 )
    return 0;
  v6 = sub_266CFB0(v3 + 216);
  if ( (unsigned int)v6 > 9 && ((_DWORD)v6 != 10 || (HIDWORD(v6) & 0x7FFFFFFFu) > 8) )
    return 0;
LABEL_12:
  v8 = (__int64 *)(sub_B167E0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2)
                 & 0xFFFFFFFFFFFFFFF0LL);
  sub_70D900((__int64)v12, a1, *v8);
  v9 = v12[0];
  sub_6F6DE0(a1, *v8);
  if ( v9 == v10 / (unsigned __int64)sub_6F6DE0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 18488) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 287LL);
    LOBYTE(v2) = v11 < sub_6F7120(a1) * v9;
  }
  return v2;
}

