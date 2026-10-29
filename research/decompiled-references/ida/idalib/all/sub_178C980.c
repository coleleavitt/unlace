__int64 __fastcall sub_178C980(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, signed __int64 a5, __m128i a6)
{
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbp
  char v13; // al
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned int v22; // ebp
  __int64 v23; // rax
  char *v25; // rax
  signed __int64 v26; // rdx
  char *v27; // r13
  signed __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  _BYTE *v36; // [rsp+0h] [rbp-E8h] BYREF
  signed __int64 v37; // [rsp+8h] [rbp-E0h]
  unsigned int v38; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v39; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v42[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v43; // [rsp+40h] [rbp-A8h]
  __int64 *v44; // [rsp+48h] [rbp-A0h]
  unsigned __int8 *v45[11]; // [rsp+50h] [rbp-98h] BYREF
  char v46; // [rsp+A8h] [rbp-40h]
  unsigned int v47; // [rsp+B0h] [rbp-38h]
  char v48; // [rsp+B4h] [rbp-34h]

  v38 = a3;
  v6 = *(_QWORD *)(a1 + 544);
  v39 = a2;
  v36 = a4;
  v37 = a5;
  if ( v6 )
  {
    v7 = *(_BYTE *)(v6 + 8);
    v6 -= 72;
    if ( (v7 & 0x7Fu) - 34 >= 6 )
      v6 = 0;
  }
  sub_18C7FE0(a1, 6, v6);
  if ( sub_178B340(a1, v38, v36, v37, 0, a6) )
  {
    v11 = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)v11 )
    {
      v40 = 0;
      BUG();
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v11 - 8);
    v40 = v12;
    if ( v38 == *(_DWORD *)(v12 + 12) && *(_DWORD *)(v12 + 16) )
    {
      sub_168B9F0((__int64)v42, (__int64 *)(a1 + 8), *(_DWORD *)(v12 + 16), 0x1357u, 0);
      sub_15F7200(v42);
      sub_168B9F0((__int64)v42, (__int64 *)(a1 + 8), *(_DWORD *)(v12 + 12), 0x16F0u, 0);
      v25 = sub_1783530(v12);
      v27 = v25;
      v28 = v26;
      if ( v46 )
      {
        sub_AEC220(v45, v25, v26);
      }
      else if ( v48 )
      {
        v33 = sub_168B9E0(v42);
        v34 = (__int64)v43;
        if ( v43 )
          v34 = (*(__int64 (__fastcall **)(__int64 *))(*v43 + 32))(v43);
        v41 = v34;
        v35 = sub_1587BC0(v33, &v41, v29, v30, v31, v32);
        sub_AEC220((unsigned __int8 **)(*v35 + 32LL * v47 + 8), v27, v28);
      }
      sub_15F7200(v42);
      v12 = v40;
    }
    v13 = *(_BYTE *)(v12 + 10);
    if ( (v13 & 2) == 0 )
      goto LABEL_13;
    *(_BYTE *)(v12 + 10) = v13 & 0xFD;
    v14 = *(_QWORD *)(a1 + 544);
    if ( !v14 )
      BUG();
    v15 = *(_DWORD *)(v14 - 48);
    v42[0] = a1;
    LODWORD(v41) = v15;
    v42[1] = (__int64)&v40;
    v43 = &v41;
    v44 = &v39;
    v45[0] = (unsigned __int8 *)&v38;
    v45[1] = (unsigned __int8 *)&v36;
    v19 = sub_178C6E0(v42, "initial_suspend", 0xFu, a6, v8, v9, v10);
    if ( v19 == 1
      || (v20 = sub_178C6E0(v42, "final_suspend", 0xDu, a6, v16, v17, v18), v20 == 1)
      || (v21 = v20 & 0xFFFFFFFFFFFFFFFELL, v22 = sub_1783690(a1, v20 & 0xFFFFFFFFFFFFFFFELL), !(_BYTE)v22) )
    {
LABEL_13:
      v22 = 1;
    }
    else
    {
      v23 = v40;
      *(_BYTE *)(v40 + 10) &= ~2u;
      *(_QWORD *)(v23 + 344) = v19 & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v23 + 352) = v21;
    }
  }
  else
  {
    v22 = 0;
  }
  sub_190D5E0(a1);
  return v22;
}
