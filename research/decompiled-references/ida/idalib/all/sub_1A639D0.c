void __fastcall sub_1A639D0(__int64 a1, const void *a2, size_t a3, char a4)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v16[2]; // [rsp+0h] [rbp-108h] BYREF
  _QWORD v17[2]; // [rsp+10h] [rbp-F8h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v19[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+3Ch] [rbp-CCh]
  __int64 v21; // [rsp+44h] [rbp-C4h]
  __int16 v22; // [rsp+4Ch] [rbp-BCh]
  __int128 v23; // [rsp+50h] [rbp-B8h]
  __int64 v24; // [rsp+60h] [rbp-A8h]
  _QWORD v25[19]; // [rsp+70h] [rbp-98h] BYREF

  v5 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 16LL);
  v6 = *v5;
  v16[0] = v5 + 2;
  v16[1] = (unsigned int)v6;
  if ( (_DWORD)a3 == (_DWORD)v6 || (unsigned int)v6 / (unsigned __int64)(int)abs32(a3 - v6) > 2 )
  {
    v8 = ((unsigned __int64)(unsigned int)v6 + 2) / 3;
    v9 = sub_2246430(v16, a2, a3, 1, (unsigned int)v8);
    if ( (unsigned int)v8 >= v9 )
    {
      v10 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 248LL) + 17504LL), a2, a3);
      v19[2] = v9;
      v17[0] = v10;
      v18[0] = v19;
      v18[1] = 0x100000000LL;
      v17[1] = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      if ( a4 )
      {
        sub_AEA1A0((__int64)v18, 0);
        LOBYTE(v22) = 1;
      }
      v11 = sub_B85A10(a1 + 608);
      if ( !v11 )
        v11 = *(_DWORD *)(a1 + 616);
      LODWORD(v21) = *(_DWORD *)(a1 + 616);
      HIDWORD(v21) = v11;
      sub_1A3B6B0((__int64)v25, (__int64)v17);
      sub_1A60F00(a1, (unsigned __int64)v25, v12, v13, v14, v15);
      sub_17A1D90(v25);
      sub_17A1D90(v17);
    }
  }
}
