_BOOL8 __fastcall sub_70AE0(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // r13d
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  _BOOL4 v7; // ebx
  _QWORD v9[2]; // [rsp+0h] [rbp-3B8h] BYREF
  _BYTE v10[360]; // [rsp+10h] [rbp-3A8h] BYREF
  __int64 v11; // [rsp+330h] [rbp-88h]
  __int64 v12; // [rsp+338h] [rbp-80h]
  __int64 v13; // [rsp+348h] [rbp-70h]
  __int64 v14; // [rsp+350h] [rbp-68h]
  __int64 v15; // [rsp+360h] [rbp-58h]
  __int64 v16; // [rsp+368h] [rbp-50h]
  unsigned __int64 v17; // [rsp+388h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  sub_6F900((__int64)v9, a3, a1, (__int64)&unk_8E508, 0);
  v9[0] = off_A4170;
  qmemcpy(v10, a2, sizeof(v10));
  if ( (unsigned __int8)match_jpt((__int64)v9) )
  {
    v3 = 2;
    v4 = *(_DWORD *)a1 & 0x404;
    if ( v4 )
    {
      if ( v4 == 4 )
      {
        v3 = 4;
      }
      else
      {
        v5 = v4 == 1024;
        v6 = 8;
        if ( v5 )
          v6 = 1;
        v3 = v6;
      }
    }
    getseg();
    *(_WORD *)(a1 + 4) = (next_that() - *(_QWORD *)(a1 + 8)) / (unsigned __int64)v3;
    trim_jtable(a1, a2[2], 0);
    v7 = *(_WORD *)(a1 + 4) != 0;
  }
  else
  {
    v7 = 0;
  }
  v9[0] = off_A4B78;
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
  }
  if ( v11 )
  {
    v12 = 0;
    qfree(v11);
  }
  return v7;
}
