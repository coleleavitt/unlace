/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140023CA0
// Address: 0x0000000140023CA0

//----- (0000000140023CA0) ----------------------------------------------------
char __fastcall sub_140023CA0(__int64 a1, unsigned __int64 a2, int a3, __int64 a4, char *a5, char a6)
{
  int v11; // r13d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  size_t v15; // rdi
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  char *v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  char v21; // bl
  char v22[8]; // [rsp+38h] [rbp-61h] BYREF
  __int128 v23; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+50h] [rbp-49h]
  char v25[8]; // [rsp+58h] [rbp-41h] BYREF
  __int128 v26; // [rsp+60h] [rbp-39h] BYREF
  __int64 v27; // [rsp+70h] [rbp-29h]
  char v28[8]; // [rsp+78h] [rbp-21h] BYREF
  __int128 v29; // [rsp+80h] [rbp-19h]
  size_t v30; // [rsp+90h] [rbp-9h]
  char v31[8]; // [rsp+98h] [rbp-1h] BYREF
  __int128 v32; // [rsp+A0h] [rbp+7h]
  __int64 v33; // [rsp+B0h] [rbp+17h]

  if ( a3 < 0 )
  {
    if ( a3 == -1 || -a3 >= (unsigned __int64)qword_1400C6060 )
      goto LABEL_3;
  }
  else if ( (unsigned __int64)a3 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
  {
LABEL_3:
    sub_140063F70(0, "?");
    sub_1400640B0(0x58u);
    sub_140024990(a1);
    return 0;
  }
  v11 = *(_DWORD *)(a1 + 32);
  v12 = *(_QWORD *)(a1 + 80) + 1LL;
  if ( v12 > *(_QWORD *)(a1 + 88) )
    *(_QWORD *)(a1 + 72) = sub_14005ABE0(a1 + 72, *(void **)(a1 + 72), v12, 4u);
  *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4LL * (*(_QWORD *)(a1 + 80))++) = v11;
  v33 = 0;
  v31[0] = 5;
  v32 = a2;
  ++*(_DWORD *)(a2 + 16);
  v13 = *(_QWORD *)(a1 + 32) + 1LL;
  if ( v13 > *(_QWORD *)(a1 + 40) )
    *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v13, 0x20u);
  v14 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
  *(_BYTE *)v14 = 2;
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  *(_QWORD *)(v14 + 8) = 0;
  ++*(_QWORD *)(a1 + 32);
  sub_14002A460((char *)v14, v31);
  v28[0] = 7;
  v29 = 0;
  v30 = 0;
  v15 = *(_QWORD *)(a4 + 8);
  if ( v15 )
  {
    *(_QWORD *)&v29 = sub_14005AAA0(*(_QWORD *)(a4 + 8));
    v30 = v15;
    memcpy((void *)v29, *(const void **)a4, v15);
    *((_QWORD *)&v29 + 1) = v15;
  }
  v16 = *(_QWORD *)(a1 + 32) + 1LL;
  if ( v16 > *(_QWORD *)(a1 + 40) )
    *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v16, 0x20u);
  v17 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
  *(_BYTE *)v17 = 2;
  *(_QWORD *)(v17 + 16) = 0;
  *(_QWORD *)(v17 + 24) = 0;
  *(_QWORD *)(v17 + 8) = 0;
  ++*(_QWORD *)(a1 + 32);
  sub_14002A460((char *)v17, v28);
  v18 = a5;
  if ( !a6 )
  {
    v22[0] = 2;
    v23 = 0;
    v24 = 0;
    sub_140028E70(v22, a5);
    v25[0] = 2;
    v26 = 0;
    v27 = 0;
    sub_140029390((__int64)v25);
    v25[0] = v22[0];
    switch ( v22[0] )
    {
      case 2:
      case 8:
      case 9:
        *(_QWORD *)&v26 = v23;
        break;
      case 3:
      case 0xA:
        v26 = v23;
        break;
      case 5:
        *(_QWORD *)&v26 = v23;
        ++*(_DWORD *)(v23 + 16);
        break;
      case 6:
        LODWORD(v26) = v23;
        break;
      case 7:
        sub_140003130(&v26, (__int64)&v23);
        break;
      default:
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(283);
    }
    v19 = *(_QWORD *)(a1 + 32) + 1LL;
    if ( v19 > *(_QWORD *)(a1 + 40) )
      *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v19, 0x20u);
    v20 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
    *(_BYTE *)v20 = 2;
    *(_OWORD *)(v20 + 8) = 0;
    *(_QWORD *)(v20 + 24) = 0;
    sub_140028E70((char *)v20, v25);
    ++*(_QWORD *)(a1 + 32);
    sub_140029390((__int64)v25);
    sub_140029390((__int64)v22);
    v18 = nullptr;
  }
  v21 = sub_140025DF0(a1, v18, nullptr, a3);
  sub_140029390((__int64)v28);
  sub_140029390((__int64)v31);
  return v21;
}
// 1400C6060: using guessed type __int64 qword_1400C6060;
// 1400CB61C: using guessed type char byte_1400CB61C;
