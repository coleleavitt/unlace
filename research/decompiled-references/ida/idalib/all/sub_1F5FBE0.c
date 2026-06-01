void __fastcall sub_1F5FBE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  _BYTE *v17; // rbx
  int v18; // r14d
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _BYTE *v41; // rdi
  __int64 v42; // rdx
  unsigned __int64 v43; // [rsp+18h] [rbp-C0h]
  __m128i v44; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v46; // [rsp+48h] [rbp-90h]
  void *ptr; // [rsp+50h] [rbp-88h] BYREF
  __int64 v48; // [rsp+58h] [rbp-80h]
  _BYTE v49[120]; // [rsp+60h] [rbp-78h] BYREF

  sub_1F58FC0((__int64 *)a1, a2);
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v7 = *(_QWORD *)(v6 + 8 * v5);
  v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 24LL) + 1);
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = v5 + 2;
  v9 = *(_QWORD *)(v6 + 8 * v8);
  *(_BYTE *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 16) = v9;
  *(_DWORD *)(a1 + 20) = 1;
  if ( (v9 & 1) != 0 )
  {
    v10 = *(unsigned int *)(v4 + 24);
    v11 = *(_QWORD *)(v6 + 8 * v10);
    *(_DWORD *)(v4 + 24) = v10 + 1;
    v12 = *(unsigned int *)(a2 + 4);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
      v13 = 8 * v12 + 64;
    else
      v13 = 8 * v12 + 80;
    v14 = v13 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0);
    v15 = (_DWORD *)(a2 + v13);
    v16 = a2 + v14;
    if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
      v15 = nullptr;
    sub_1F57350((__int64 *)a1, v15, v16, v11);
  }
  v17 = v49;
  v48 = 0x800000000LL;
  ptr = v49;
  if ( (_DWORD)v7 )
  {
    v18 = 0;
    do
    {
      v19 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
      v20 = sub_1EE13A0(
              (__int64)v19,
              *(_QWORD *)(*(_QWORD *)a1 + 16LL),
              (__int64 *)(*(_QWORD *)a1 + 32LL),
              (_DWORD *)(*(_QWORD *)a1 + 24LL));
      v25 = sub_1EDB980(v19, v20, v21, v22, v23, v24);
      v26 = *(_QWORD *)a1;
      v27 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
      *(_DWORD *)(v26 + 24) = v27 + 1;
      v28 = *(unsigned int *)(*(_QWORD *)(v26 + 32) + 8 * v27) | (unsigned __int64)v25;
      v46 = v28;
      v29 = (unsigned int)v48;
      v30 = (unsigned int)v48 + 1LL;
      if ( v30 > HIDWORD(v48) )
      {
        v43 = v28;
        sub_2237220(&ptr, v49, v30, 8);
        v29 = (unsigned int)v48;
        v31 = ptr;
        v28 = v43;
      }
      else
      {
        v31 = ptr;
      }
      ++v18;
      v31[v29] = v28;
      LODWORD(v48) = v48 + 1;
    }
    while ( (_DWORD)v7 != v18 );
    v17 = ptr;
  }
  v32 = a2 + 80;
  if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
    v32 = a2 + 64;
  v33 = 0;
  if ( (_DWORD)v7 )
  {
    while ( 1 )
    {
      *(_QWORD *)(v32 + 8 * v33) = *(_QWORD *)&v17[8 * v33];
      if ( (_DWORD)v7 - 1 == v33 )
        break;
      ++v33;
    }
  }
  v34 = *(_QWORD *)a1;
  sub_1F194A0((__int64)&v44, *(_QWORD *)a1);
  v35 = _mm_loadu_si128(&v44);
  *(_QWORD *)(a2 + 32) = v45;
  *(__m128i *)(a2 + 16) = v35;
  v40 = sub_1F194E0(*(_QWORD *)a1, v34, v36, v37, v38, v39);
  v41 = ptr;
  *(_QWORD *)(a2 + 40) = v40;
  *(_QWORD *)(a2 + 48) = v42;
  if ( v41 != v49 )
    free(v41);
}
