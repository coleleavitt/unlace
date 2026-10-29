__int64 __fastcall sub_AAF450(__int64 *a1)
{
  __int64 v1; // rbp
  unsigned int v2; // eax
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v7; // rax
  int v8; // eax
  unsigned int *v9; // rbp
  unsigned int *v10; // rbp
  __int64 v11; // r12
  unsigned int *v12; // rbp
  unsigned int *v13; // r13
  _BYTE v14[48]; // [rsp+8h] [rbp-30h] BYREF

  sub_15B60E0(a1[2]);
  v1 = a1[1];
  sub_180C5A0(v14, "bv");
  v2 = sub_15DA4C0(v1 + 560, v14);
  v3 = *a1;
  v4 = v2;
  if ( v2 == -1 || (v5 = *(_QWORD *)(v3 + 8672)) == 0 || v4 >= *(_DWORD *)(v5 - 4) || !*(_QWORD *)(v5 + 8LL * v4) )
  {
    v7 = a1[2];
    if ( *(_DWORD *)(v7 + 440) == 2 )
    {
      v10 = (unsigned int *)sub_186B270(0x138u);
      sub_B960B0(v10, *a1);
      sub_8F1E10(v3, v10);
      v11 = *a1;
      if ( *(_DWORD *)(a1[2] + 252) == 2 )
      {
        v12 = (unsigned int *)sub_186B270(0x668u);
        sub_A44350((__int64)v12, *a1);
      }
      else
      {
        v12 = (unsigned int *)sub_186B270(0x48u);
        sub_A75F00(v12, *a1);
      }
      sub_8F1E10(v11, v12);
    }
    else
    {
      v8 = *(_DWORD *)(v7 + 424);
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v9 = (unsigned int *)sub_186B270(0x4A8u);
          sub_AB46E0(v9, *a1);
          sub_8F1E10(v3, v9);
        }
      }
      else
      {
        v13 = (unsigned int *)sub_186B270(0x40u);
        sub_ADA4E0(v13, *a1, v4, "no bit-vector");
        sub_8F1E10(v3, v13);
      }
    }
  }
  return sub_AAF350(a1);
}

