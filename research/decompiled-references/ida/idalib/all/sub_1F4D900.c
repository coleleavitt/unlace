void __fastcall sub_1F4D900(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  bool v8; // zf
  __int64 v9; // rsi
  bool v10; // r15
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  int v13; // r10d
  unsigned __int64 v14; // rdi
  unsigned int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // cc
  __int64 v24; // rax
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // r9
  __int64 v29; // rbp
  __int64 (__fastcall *v30)(__int64); // rdx
  __int64 v31; // r12
  __int64 (__fastcall *v32)(__int64); // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-98h]
  unsigned __int64 v35; // [rsp+8h] [rbp-90h]
  __int64 v36; // [rsp+10h] [rbp-88h]
  int v37; // [rsp+18h] [rbp-80h]
  int v38; // [rsp+1Ch] [rbp-7Ch]
  void *v39; // [rsp+20h] [rbp-78h] BYREF
  int v40; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v42; // [rsp+38h] [rbp-60h]
  __int64 v43[11]; // [rsp+40h] [rbp-58h] BYREF

  sub_1F4B4A0((__int64)a1, a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = v5 + 1;
  v8 = *(_QWORD *)(v6 + 8 * v5) == 0;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  if ( !v8 )
  {
    v33 = sub_1F6A0A0(*(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
    v4 = a1[2];
    *(_QWORD *)(a2 + 72) = v33;
    v7 = *(_DWORD *)(v4 + 24);
    v6 = *(_QWORD *)(v4 + 32);
  }
  v9 = v7 + 2;
  v8 = *(_QWORD *)(v6 + 8LL * v7) == 0;
  *(_DWORD *)(v4 + 24) = v9;
  v10 = !v8;
  v11 = *(_QWORD *)(v6 + 8LL * (v7 + 1));
  ptr = v43;
  v42 = 0x400000000LL;
  v12 = ((unsigned __int64)(unsigned int)v11 + 63) >> 6;
  v13 = v12;
  if ( v12 )
  {
    v14 = 4;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      *(_DWORD *)(v4 + 24) = v9 + 1;
      v17 = v15;
      v18 = v15 + 1LL;
      if ( v18 <= v14 )
      {
        ++v16;
        *((_QWORD *)ptr + v17) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v9);
        v15 = v42 + 1;
        LODWORD(v42) = v42 + 1;
        if ( v13 == v16 )
          goto LABEL_9;
      }
      else
      {
        v38 = v16;
        v36 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v9);
        v37 = v13;
        v35 = v12;
        v34 = v11;
        sub_2237220(&ptr, v43, v18, 8);
        v13 = v37;
        v11 = v34;
        *((_QWORD *)ptr + (unsigned int)v42) = v36;
        v16 = v38 + 1;
        v15 = v42 + 1;
        v12 = v35;
        LODWORD(v42) = v42 + 1;
        if ( v37 == v38 + 1 )
        {
LABEL_9:
          v19 = (__int64 *)ptr;
          goto LABEL_10;
        }
      }
      v9 = *(unsigned int *)(v4 + 24);
      v14 = HIDWORD(v42);
    }
  }
  v19 = v43;
LABEL_10:
  sub_2205610(&v39, (unsigned int)v11, (unsigned int)v12, v19);
  if ( ptr != v43 )
    free(ptr);
  BYTE4(v42) = v10;
  LODWORD(v42) = v40;
  ptr = v39;
  sub_C0CB30(a2 + 56, *(_QWORD **)(*a1 + 144LL), (__int64)&ptr, v20, v21, v22);
  v23 = (unsigned int)v42 <= 0x40;
  *(_BYTE *)(a2 + 80) = BYTE4(v42);
  if ( !v23 && ptr )
    operator delete[](ptr);
  v24 = *(_QWORD *)(*(_QWORD *)(*a1 + 144LL) + 2320LL);
  if ( (*(_BYTE *)(v24 + 21) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v24 + 1) & 8) != 0
      || (v25 = *(_BYTE *)(a2 + 28) & 0x7F, ((v25 + 96) & 0x7Fu) <= 1)
      || (unsigned int)v25 - 49 <= 2 )
    {
      sub_1F43500((__int64)&ptr, (__int64)a1, a2);
      v29 = v43[0];
      if ( v43[0] && (*(_BYTE *)(v43[0] + 28) & 0x7F) == 0x21 )
      {
        v30 = sub_B727F0;
        v31 = *(_QWORD *)(*a1 + 144LL);
        v32 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43[0] + 32LL);
        if ( v32 == sub_B727F0 )
        {
          if ( *(char *)(v43[0] + 29) < 0 )
            v29 = sub_B72720(v43[0]);
        }
        else
        {
          v29 = v32(v43[0]);
        }
        v39 = (void *)a2;
        *sub_1742A40(v31 + 1728, (__int64 *)&v39, (__int64)v30, v26, v27, v28) = v29;
      }
      sub_1F42E40((__int64)&ptr);
    }
  }
}
