__int64 __fastcall sub_18F4480(__int64 a1, unsigned int a2, unsigned __int64 *a3, unsigned __int64 *a4, double a5)
{
  unsigned int v5; // r14d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rax
  char v15; // al
  char v16; // al
  unsigned __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = 0;
  v9 = *a4 & 0xFFFFFFFFFFFFFFFELL;
  v10 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v11 = *(_QWORD *)(v9 + 8);
  v12 = *(_QWORD *)(v10 + 8);
  v17 = v10;
  v18[0] = v9;
  v13 = sub_19C0CE0(a1, a2, &v17, v18, 1);
  *a3 = v17;
  *a4 = v18[0];
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v15 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( ((unsigned __int8)(v15 - 33) <= 1u || v15 == 42)
      && (v16 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL),
          LOBYTE(v5) = v16 == 42 || (unsigned __int8)(v16 - 33) <= 1u,
          (_BYTE)v5) )
    {
      sub_18EDD50(a1, a2, a3, a4, 1, a5);
    }
    else
    {
      sub_18F40B0(a1, a2, a3, a4, a5);
      return 1;
    }
  }
  return v5;
}
