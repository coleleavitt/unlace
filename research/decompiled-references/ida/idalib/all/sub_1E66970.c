__int64 __fastcall sub_1E66970(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r14
  signed __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned __int64 v32; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v34[200]; // [rsp+20h] [rbp-C8h] BYREF

  v32 = sub_A71450(*(_QWORD *)(a1 + 248), a2);
  LOBYTE(v9) = sub_F62670(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v5, v6, v7, v8);
  if ( !(_BYTE)v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v11 + 17) & 4) == 0 )
    {
      v13 = sub_F57E80(v11);
      if ( !v13 || (*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v13 + 17) & 4) != 0 )
      {
        v14 = sub_AAE980(*(_QWORD *)(a1 + 248), v32);
        v15 = sub_A980A0(*(_QWORD *)(a1 + 248), v32);
        if ( v14 % v15 )
        {
          sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), a3, 0xBFDu, 0);
          v16 = sub_1605D30((__int64)v34, (__int64 *)&v32);
          v17 = v16;
          if ( *(_BYTE *)(v16 + 120) )
          {
            sub_1E5E160((unsigned __int8 **)(v16 + 32), v14);
          }
          else
          {
            if ( !*(_BYTE *)(v16 + 132) )
            {
LABEL_10:
              sub_15F7200(v34);
              return v10;
            }
            v22 = sub_168B9E0((_QWORD *)v16);
            v23 = *(_QWORD *)(v17 + 16);
            if ( v23 )
              v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 32LL))(*(_QWORD *)(v17 + 16));
            v33 = v23;
            v24 = sub_1587BC0(v22, &v33, v18, v19, v20, v21);
            sub_1E5E160((unsigned __int8 **)(*v24 + 32LL * *(unsigned int *)(v17 + 128) + 8), v14);
          }
          if ( *(_BYTE *)(v17 + 120) )
          {
            sub_1E5E160((unsigned __int8 **)(v17 + 32), v15);
          }
          else if ( *(_BYTE *)(v17 + 132) )
          {
            v29 = sub_168B9E0((_QWORD *)v17);
            v30 = *(_QWORD *)(v17 + 16);
            if ( v30 )
              v30 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 32LL))(*(_QWORD *)(v17 + 16));
            v33 = v30;
            v31 = sub_1587BC0(v29, &v33, v25, v26, v27, v28);
            sub_1E5E160((unsigned __int8 **)(*v31 + 32LL * *(unsigned int *)(v17 + 128) + 8), v15);
          }
          goto LABEL_10;
        }
      }
    }
  }
  return 1;
}
