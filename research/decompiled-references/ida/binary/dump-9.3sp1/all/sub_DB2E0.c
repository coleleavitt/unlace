__int64 __fastcall sub_DB2E0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  bool v6; // zf
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_BYTE *)a2 == 4;
  v15[3] = __readfsqword(0x28u);
  if ( v6 && (v9 = *(_QWORD *)(a2 + 8), (unsigned int)(*(_DWORD *)v9 - 56) <= 1) && *(_BYTE *)(v9 + 64) == 8 )
  {
    *(_BYTE *)(a1 + 96) = 1;
    *(_BYTE *)(a1 + 40) = 1;
  }
  else if ( a4 )
  {
    sub_127FE0(*(_QWORD *)(a1 + 48), (__int64)&v14, a2, 1u, a5, a6, 0, 0, 0, 0, 0);
    sub_64640((__int64 *)(a1 + 56), &v14, v10, v11, v12, v13);
    sub_317C60(a1 + 72, v15);
    if ( v15[0] )
    {
      v15[1] = 0;
      qfree(v15[0]);
    }
    qfree(v14);
  }
  return 0;
}
