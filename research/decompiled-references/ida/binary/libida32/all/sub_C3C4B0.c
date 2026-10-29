__int64 __fastcall sub_C3C4B0(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int16 v8; // ax
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rdx
  __int8 v13; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // rdi
  void *v35; // [rsp+10h] [rbp-108h] BYREF
  unsigned __int32 v36; // [rsp+18h] [rbp-100h]
  __int8 v37; // [rsp+1Ch] [rbp-FCh]
  __m128i v38; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-B8h]
  char v40; // [rsp+68h] [rbp-B0h]
  __int64 v41; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-98h]
  __int64 v43; // [rsp+88h] [rbp-90h]
  _BYTE v44[136]; // [rsp+90h] [rbp-88h] BYREF

  v7 = a1->m128i_i64[0];
  v8 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v9 = ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) - 5;
  if ( (unsigned int)v9 > 1 )
  {
    if ( (unsigned __int8)v8 <= 1u )
    {
      v17 = 0;
      v38 = 0u;
      ptr = v44;
      v39 = 0;
      v40 |= 1u;
      v41 = 0;
      v43 = 0x800000000LL;
      v44[65] = 0;
      if ( sub_C3A3B0(v7, a2, (__int64)&v38, 1u, a5, a6) )
      {
        v33 = *(_QWORD *)(a2 + 8);
        v34 = a1->m128i_i64[0];
        BYTE4(v35) &= ~1u;
        LODWORD(v35) = 0;
        v17 = sub_C12830(v34, (_DWORD *)a2, v33, (__int64)&v38, (__int64)&v35, 0);
        if ( (_BYTE)v17 )
          sub_C00890(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v35);
        if ( (unsigned int)v35 > 1 )
          sub_A2BBA0((int *)&v35);
      }
      if ( ptr != v44 )
        free(ptr);
    }
    else if ( (_BYTE)v8 == 32 )
    {
      sub_C1BDB0(v7, *(_QWORD *)(a2 + 16), v9, a4, a5);
      return (unsigned int)sub_C24FB0(a1, *(_QWORD *)(a2 + 24), v29, v30, v31, v32);
    }
    else
    {
      v27 = (__int64 *)sub_E0FED0(v7, a2, 108, 0);
      v28 = sub_EC8B80(a2);
      if ( v27 )
      {
        v38.m128i_i64[0] = v28;
        v38.m128i_i8[8] = 1;
        sub_AC88D0(v27, v38.m128i_i64);
      }
      return 0;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 24);
    v11 = *(_QWORD *)(a2 + 16);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 42 )
    {
      v11 = *(_QWORD *)(a2 + 24);
      v10 = *(_QWORD *)(a2 + 16);
    }
    v12 = a1->m128i_i64[1];
    v13 = a1[1].m128i_i8[0];
    v38.m128i_i64[0] = v7;
    v38.m128i_i64[1] = v12;
    LOBYTE(v39) = v13;
    v17 = sub_C24FB0(&v38, v11, v12, a4, a5, a6);
    if ( (_BYTE)v17 )
    {
      v20 = a1->m128i_i64[0];
      v37 = 0;
      v36 = 1;
      v35 = nullptr;
      v17 = sub_C23520(v10, (__int64)&v35, v20, v14, v15, v16);
      if ( (_BYTE)v17 )
      {
        if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 6 )
          sub_BEE8D0((__int64)&v35);
        v23 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v23 + 16) != 42 )
          v23 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL), &v35, v21, v22);
        v24 = *(_QWORD *)(v23 + 32);
        v38.m128i_i32[2] = v36;
        if ( v36 > 0x40 )
          sub_21E17D0(&v38);
        else
          v38.m128i_i64[0] = (__int64)v35;
        v25 = a1->m128i_i64[1];
        v26 = a1->m128i_i64[0];
        v38.m128i_i8[12] = v37;
        v17 = sub_BF65F0(v26, a2, v25, v24, (__int64)&v38);
        if ( v38.m128i_i32[2] > 0x40u && v38.m128i_i64[0] )
          operator delete[]((void *)v38.m128i_i64[0]);
      }
    }
    else
    {
      v18 = a1->m128i_i64[0];
      if ( !*(_DWORD *)(a1->m128i_i64[0] + 48) || !*(_BYTE *)(v18 + 914) && !*(_BYTE *)(v18 + 915) )
        return v17;
      **(_BYTE **)(v18 + 24) = 1;
      v36 = 1;
      v35 = nullptr;
      v37 = 0;
      sub_C23520(v10, (__int64)&v35, v18, v14, v15, v16);
    }
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
  }
  return v17;
}

