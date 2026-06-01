__int64 __fastcall sub_AF6C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v9; // [rsp+20h] [rbp-58h]
  unsigned __int64 v10; // [rsp+38h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  LOBYTE(v9) = 0;
  qlread();
  *(_DWORD *)(a3 + 16) += sub_A8B10(a2);
  if ( *(_BYTE *)a1 <= 7u )
  {
    v5 = (unsigned int)sub_A8B10(a2);
  }
  else
  {
    v4 = (unsigned int)sub_A8B10(a2);
    v5 = v4 | (sub_A8B10(a2) << 32);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
  if ( v6 == v5 )
    v5 = -1;
  *(_QWORD *)(a3 + 8) = v6 & (*(_QWORD *)(a3 + 8) + v5);
  v7 = (unsigned int)sub_A8B10(a2);
  *(_QWORD *)(a3 + 24) += v7 | (sub_A8B10(a2) << 32);
  return 1;
}

