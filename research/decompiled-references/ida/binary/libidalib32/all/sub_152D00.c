unsigned __int64 __fastcall sub_152D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v9; // rdi
  __int128 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  __int64 v12; // [rsp+18h] [rbp-30h]
  int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h]
  unsigned __int64 v15; // [rsp+38h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  if ( !byte_2530A8 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    v9 = *(_QWORD *)a2;
    byte_2530A8 = 1;
    v11 = 0;
    LODWORD(v12) = -1;
    WORD2(v12) = v7;
    HIWORD(v12) = a3;
    v13 = 1;
    v14 = v9;
    v10 = 0;
    if ( v9 )
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)v9 + 16LL))(
              v9,
              a2,
              a3,
              a4,
              a5,
              a6,
              v10,
              *((_QWORD *)&v10 + 1),
              v11,
              v12,
              v13);
    sub_161920(a1 + 440, &v10, 1);
    byte_2530A8 = 0;
    if ( v14 )
      qfree();
  }
  return v15 - __readfsqword(0x28u);
}

