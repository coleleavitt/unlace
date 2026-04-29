__int64 __fastcall sub_DB110(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  int v7; // r13d
  __int64 *v8; // r15
  int v9; // r14d
  unsigned int v10; // eax
  unsigned int v11; // r13d
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (*v15)(); // rcx

  v7 = a4 & 8;
  if ( (a4 & 8) != 0 )
  {
    v8 = (__int64 *)(a1 + 144);
    v7 = 0;
    if ( !(unsigned __int8)sub_60E40((_QWORD *)(a1 + 144)) )
      v7 = sub_611C0(v8) + 1;
    v9 = 0;
    if ( !(unsigned __int8)sub_60E40((_QWORD *)(a1 + 160)) )
      v9 = sub_611C0((_QWORD *)(a1 + 160)) + 1;
  }
  else
  {
    sub_CD5D0(a1, a2);
    v13 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 168) = 0;
    v14 = *(_QWORD *)(v13 + 112);
    v15 = *(__int64 (**)())(*(_QWORD *)v14 + 360LL);
    if ( v15 == sub_D70C0 )
    {
      *(_DWORD *)(a1 + 200) = -1;
      v9 = 0;
      v8 = (__int64 *)(a1 + 144);
    }
    else
    {
      v8 = (__int64 *)(a1 + 144);
      v9 = 0;
      *(_DWORD *)(a1 + 200) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v15)(v14, a2, 0);
    }
  }
  sub_DAEB0(a1, a3);
  v10 = sub_DA5C0(v8, *(_QWORD *)(a1 + 136), a3, (_QWORD *)(a1 + 8), v7, a4, nullptr);
  v11 = v10;
  if ( (*(_DWORD *)a1 & 0xFFFFFFFB) == 2 )
    return (unsigned int)sub_DA5C0(
                           (__int64 *)(a1 + 160),
                           *(_QWORD *)(a1 + 136),
                           a3,
                           (_QWORD *)(a1 + 32),
                           v9,
                           a4,
                           nullptr)
         + v10;
  return v11;
}
