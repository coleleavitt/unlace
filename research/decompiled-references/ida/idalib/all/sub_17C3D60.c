unsigned __int64 __fastcall sub_17C3D60(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned int v28; // [rsp+Ch] [rbp-DCh] BYREF
  int v29; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v30; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v31[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v33; // [rsp+40h] [rbp-A8h] BYREF
  char v34; // [rsp+98h] [rbp-50h]
  unsigned int v35; // [rsp+A0h] [rbp-48h]
  char v36; // [rsp+A4h] [rbp-44h]

  v28 = a5;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 0x7Fu) - 59 <= 2 && (*(_BYTE *)(a4 + 28) & 0x7Fu) - 59 <= 2 )
    {
      if ( a3 )
      {
        if ( a2 != 64 && sub_B97450(a4) )
        {
          v13 = sub_B72690(a4 + 64);
          v14 = sub_B8C1B0(v13);
          v15 = v14;
          if ( v14 )
          {
            if ( a2 - 64 == v14
              || (v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 - 64) + 32LL))(a2 - 64),
                  v16 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15)) )
            {
              v17 = 5641;
              if ( a3 != 2 )
                v17 = 4737;
              sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), v28, v17, 0);
              v18 = 0;
              if ( (*(_QWORD *)(a4 + 40) & 7) == 0 )
                v18 = *(_QWORD *)(a4 + 40) & 0xFFFFFFFFFFFFFFF8LL;
              v19 = v18;
              if ( v34 )
              {
                sub_AE9DF0(&v33, v18, 5u);
              }
              else if ( v36 )
              {
                v25 = sub_168B9E0(v31);
                v26 = v32;
                if ( v32 )
                  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
                v30 = v26;
                v27 = sub_1587BC0(v25, &v30, v21, v22, v23, v24);
                sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v35 + 8), v19, 5u);
              }
              v29 = 1;
              v20 = sub_1587D10((__int64)v31, &v29);
              LODWORD(v30) = 0;
              sub_1587D10(v20, (int *)&v30);
              sub_15F7200(v31);
            }
          }
        }
      }
    }
  }
  sub_18F5260(a1, a4, (unsigned int)&v28, 1, 0, 0, 0, 0, 0);
  sub_19116A0(a1, *(unsigned int *)(a4 + 24), a4, 0);
  v11 = *(_QWORD *)(a4 + 48);
  if ( v11 )
    return v11 & 0xFFFFFFFFFFFFFFF0LL;
  else
    return sub_A7AA70(*(_QWORD *)(a1 + 248), a4, v7, v8, v9, v10);
}
