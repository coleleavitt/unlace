void __fastcall sub_16D4620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 *v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  signed __int64 v25; // rbx
  signed __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbp
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 *v40; // [rsp+8h] [rbp-100h]
  _QWORD v41[3]; // [rsp+10h] [rbp-F8h] BYREF
  bool v42; // [rsp+2Fh] [rbp-D9h] BYREF
  int v43; // [rsp+30h] [rbp-D8h] BYREF
  int v44; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v46[200]; // [rsp+40h] [rbp-C8h] BYREF

  v7 = a6;
  v41[1] = a5;
  v41[0] = a4;
  v10 = *(_QWORD *)(a7 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v11 == 42 )
  {
    v32 = sub_F68450(*(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
    v10 = *(_QWORD *)(a7 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = v32;
  }
  else if ( (unsigned int)(v11 - 43) > 1 )
  {
    return;
  }
  v12 = sub_F68450(v10, a2, a3, a4, a5);
  v16 = v12;
  v17 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v18 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    v40 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v18 + 17) & 4) == 0
      && !sub_F62670(v18, nullptr, v12 & 0xFFFFFFFFFFFFFFF0LL, v13, v14, v15)
      && !sub_F62670(*v17, nullptr, v19, v20, v21, v22) )
    {
      v23 = sub_F57E80(*v40);
      if ( !v23 || (*(_QWORD *)(v23 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v23 + 17) & 4) != 0 )
      {
        v24 = sub_F57E80(*v17);
        if ( !v24 || (*(_QWORD *)(v24 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v24 + 17) & 4) != 0 )
        {
          v25 = sub_A980A0(*(_QWORD *)(a1 + 248), v16);
          v26 = sub_A980A0(*(_QWORD *)(a1 + 248), v7);
          if ( v25 > v26 )
          {
            sub_168B9F0((__int64)v46, (__int64 *)(a1 + 8), a2, 0x1C46u, 0);
            v43 = v26;
            v27 = sub_1587D10((__int64)v46, &v43);
            v44 = v25;
            v28 = sub_1587D10(v27, &v44);
            v29 = sub_1682BA0(v28, (__int64)v41);
            v42 = a3 != 0;
            v30 = sub_1588420(v29, (unsigned __int8 *)&v42);
            v31 = v30;
            if ( *(_BYTE *)(v30 + 120) )
            {
              sub_16B73F0((unsigned __int8 **)(v30 + 32), a3);
            }
            else if ( *(_BYTE *)(v30 + 132) )
            {
              v35 = sub_168B9E0((_QWORD *)v30);
              v38 = *(_QWORD *)(v31 + 16);
              if ( v38 )
                v38 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v38 + 32LL))(*(_QWORD *)(v31 + 16));
              v45 = v38;
              v39 = sub_1587BC0(v35, &v45, v33, v34, v36, v37);
              sub_16B73F0((unsigned __int8 **)(*v39 + 32LL * *(unsigned int *)(v31 + 128) + 8), a3);
            }
            sub_15F7200(v46);
          }
        }
      }
    }
  }
}
