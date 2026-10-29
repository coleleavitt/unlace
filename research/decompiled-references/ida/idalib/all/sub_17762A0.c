__int64 __fastcall sub_17762A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = a3;
  v7 = a4 + 24;
  v8 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v11 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v4 + 40),
          (const __m128i *)(v8 * ((v7 - (unsigned __int64)(v7 != 0)) / v8 + (v7 != 0))),
          v9,
          v10);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v13 = *a1;
    v14 = v11;
    sub_18C74E0(*a1, 4, 0, 4);
    v15 = sub_175B800(a1, *(unsigned __int16 **)(v4 + 32));
    v16 = sub_19146D0(*a1, v15);
    if ( v16 != 1 )
    {
      v17 = *a1;
      v18 = v16 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v4 + 40) == v14 && *(_QWORD *)(v4 + 32) == v18 )
      {
        v20 = v4 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_12:
        if ( *(_BYTE *)(*(_QWORD *)v20 + 16LL) == 18 )
        {
          sub_1EA6140(a2, v4, 24, 8);
          *(_QWORD *)(v21 + 8) = *(_QWORD *)(a4 + 8);
          *(_QWORD *)v21 = *(_QWORD *)a4;
          *(_DWORD *)(v21 + 16) = *(_DWORD *)(a4 + 16);
        }
        goto LABEL_9;
      }
      v19 = *(unsigned int *)(v4 + 48);
      v22[0] = v14;
      v4 = sub_1E654F0(v17, v22, v18, v19);
      v20 = v4 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_12;
    }
    v4 = 0;
LABEL_9:
    sub_190D5E0(v13);
    return v4;
  }
  return 0;
}
