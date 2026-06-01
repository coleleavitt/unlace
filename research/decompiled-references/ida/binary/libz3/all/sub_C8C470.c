__int64 __fastcall sub_C8C470(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // zf
  _DWORD *v6; // rax
  unsigned int v7; // ebp
  void *v8; // r12
  unsigned __int64 v10; // rax
  char v11; // [rsp+Fh] [rbp-59h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_WORD *)(a2 + 4) == 0;
  v12[0] = 0;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  if ( v4 && !*(_DWORD *)(a2 + 24) && ((v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v6 == -1) )
  {
    v7 = sub_1666AE0(a1 + 24, a3, v12, &v11);
    v8 = qword_1C7F2C0;
    if ( (_BYTE)v7 )
    {
      v7 = (v13[0] & 0x100000000LL) == 0;
      if ( (v13[0] & 0x100000000LL) == 0 )
      {
        v7 = 0;
        if ( LODWORD(v13[0]) == 1 )
        {
          v7 = sub_182CFA0(qword_1C7F2C0, v12);
          v8 = qword_1C7F2C0;
          if ( (_BYTE)v7 )
          {
            v10 = sub_182D020(qword_1C7F2C0, v12);
            v8 = qword_1C7F2C0;
            if ( HIDWORD(v10)
              || *(_DWORD *)a2 < *(_DWORD *)(a1 + 816)
              && (*(_DWORD *)(*(_QWORD *)(a1 + 824) + 4LL * (*(_DWORD *)a2 >> 5)) & (1 << *(_DWORD *)a2)) != 0 )
            {
              v7 = 0;
            }
            else
            {
              *a4 = sub_182D020(qword_1C7F2C0, v12);
              v8 = qword_1C7F2C0;
            }
          }
        }
      }
    }
  }
  else
  {
    v7 = 0;
    v8 = qword_1C7F2C0;
  }
  sub_182CBA0(v8, v12);
  sub_182CBA0(v8, v13);
  return v7;
}

