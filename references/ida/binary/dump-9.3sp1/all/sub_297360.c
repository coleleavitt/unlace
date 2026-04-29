__int64 __fastcall sub_297360(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 *v7; // r12
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-80h]
  __int64 v27; // [rsp+8h] [rbp-80h]
  unsigned int v28; // [rsp+14h] [rbp-74h]
  __int64 v29; // [rsp+18h] [rbp-70h]
  __int64 v30; // [rsp+20h] [rbp-68h] BYREF
  __int64 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v3 = a2[3];
  v34 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(v3 + 8) == 1 )
  {
    v7 = *(__int64 **)(*(_QWORD *)(v3 + 64) + 24LL);
    v8 = *(_QWORD *)(v3 + 32);
    v9 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(v8 + 12) = -1;
    v30 = -1;
    v28 = v9;
    v31 = -4294967226LL;
    v32 = 0xFFFFFFFFLL;
    v33 = 0;
    v29 = *v7;
    v10 = qalloc_or_throw(48, (__int64)a2, a3, *v7);
    *(_QWORD *)(v10 + 16) = -1;
    v11 = v10;
    *(_DWORD *)(v10 + 24) = 70;
    *(_QWORD *)(v10 + 28) = -1;
    v26 = v10 + 16;
    sub_25AA70(v10 + 16, (__int64)&v30);
    *(_QWORD *)v11 = v29;
    v12 = *(__int64 **)(v29 + 8);
    *(_QWORD *)(v11 + 8) = v12;
    *v12 = v11;
    *(_QWORD *)(v29 + 8) = v11;
    ++v7[2];
    sub_255050((__int64)&v30);
    v16 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(v3 + 32), v13, v14, v15);
    *(_QWORD *)(v3 + 32) = 0;
    v19 = sub_286930(v26, (__int64)v16, v17, v18);
    v20 = *(_QWORD *)(v11 + 16);
    v21 = *(_QWORD *)(v19 + 64);
    *(_DWORD *)(v11 + 28) = v28;
    *((_DWORD *)sub_2413C0(v21, v20, v28, v22) + 2) = 78;
    v30 = -1;
    v31 = -4294967226LL;
    v32 = 0xFFFFFFFFLL;
    v33 = 0;
    v27 = *v7;
    v23 = qalloc_or_throw(48, v20, *v7, 0xFFFFFFFFLL);
    *(_QWORD *)(v23 + 16) = -1;
    *(_DWORD *)(v23 + 24) = 70;
    *(_QWORD *)(v23 + 28) = -1;
    sub_25AA70(v23 + 16, (__int64)&v30);
    *(_QWORD *)v23 = v27;
    v24 = *(__int64 **)(v27 + 8);
    *(_QWORD *)(v23 + 8) = v24;
    *v24 = v23;
    *(_QWORD *)(v27 + 8) = v23;
    ++v7[2];
    sub_255050((__int64)&v30);
    v25 = **(_QWORD **)(v3 + 24);
    *(_DWORD *)(v23 + 24) = 72;
    *(_QWORD *)(v23 + 16) = v25;
    *(_QWORD *)(v23 + 40) = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 24) = 0;
    sub_240A20(
      v3,
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
      *(_QWORD *)(a1 + 64),
      1,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL),
      0);
    *a2 = sub_241AB0(*(_QWORD *)(v23 + 40));
    return 1;
  }
  return result;
}
