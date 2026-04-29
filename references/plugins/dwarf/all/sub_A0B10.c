unsigned __int64 __fastcall sub_A0B10(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v11; // [rsp+10h] [rbp-158h]
  __int64 v13[4]; // [rsp+20h] [rbp-148h] BYREF
  __int128 v14; // [rsp+40h] [rbp-128h]
  __int128 v15; // [rsp+50h] [rbp-118h]
  __int64 v16; // [rsp+60h] [rbp-108h]
  __int128 v17; // [rsp+68h] [rbp-100h]
  __int64 v18; // [rsp+78h] [rbp-F0h]
  __int128 v19; // [rsp+80h] [rbp-E8h]
  __int64 v20; // [rsp+B8h] [rbp-B0h]
  __int128 v21; // [rsp+C0h] [rbp-A8h]
  __int64 v22; // [rsp+D0h] [rbp-98h]
  __int128 v23; // [rsp+D8h] [rbp-90h]
  __int64 v24; // [rsp+F4h] [rbp-74h]
  __int64 v25; // [rsp+FCh] [rbp-6Ch]
  __int64 v26; // [rsp+104h] [rbp-64h]
  unsigned __int64 v27; // [rsp+10Ch] [rbp-5Ch]
  __int64 v28; // [rsp+118h] [rbp-50h]
  unsigned __int64 v29; // [rsp+128h] [rbp-40h]

  v6 = *(_QWORD *)(a4 + 8);
  v29 = __readfsqword(0x28u);
  v7 = *(__int64 **)a4;
  v8 = *(_QWORD *)a4 + 40 * v6;
  v11 = a5;
  if ( v8 != *(_QWORD *)a4 )
  {
    do
    {
      if ( a5 != -1 && a2[1] >= v11 )
        break;
      v9 = operator new(0x20u);
      *(_DWORD *)(v9 + 8) = 1;
      *(_QWORD *)v9 = off_C9528;
      v13[0] = v9;
      *(_OWORD *)(v9 + 16) = 0;
      v13[3] = 0;
      v16 = 0;
      v18 = 0;
      v20 = 0;
      v22 = 0;
      v28 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0x80000000LL;
      v27 = 0xFFFFFFFF00000000LL;
      v14 = 0;
      v15 = 0;
      v17 = 0;
      v19 = 0;
      v21 = 0;
      v23 = 0;
      if ( sub_98E20(v7, v13) && (unsigned __int8)sub_9A850(v13, a3) )
        sub_6C700(a2, v13);
      v7 += 5;
      sub_1B750((__int64)v13);
    }
    while ( v7 != (__int64 *)v8 );
  }
  return v29 - __readfsqword(0x28u);
}
