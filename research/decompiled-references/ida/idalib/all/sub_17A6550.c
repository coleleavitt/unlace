void __fastcall sub_17A6550(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r15
  void *v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // r13
  _QWORD *v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-A0h]
  void *v24; // [rsp+8h] [rbp-98h] BYREF
  unsigned int v25; // [rsp+10h] [rbp-90h]
  void *v26; // [rsp+18h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+20h] [rbp-80h]
  unsigned int v28; // [rsp+28h] [rbp-78h] BYREF
  char v29; // [rsp+2Ch] [rbp-74h]
  void *v30; // [rsp+30h] [rbp-70h]
  unsigned int v31; // [rsp+38h] [rbp-68h]
  char v32; // [rsp+3Ch] [rbp-64h]

  if ( byte_2641DE0[*(unsigned int *)(a1[29] + 368LL)] )
  {
    v3 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v3 - 8);
      if ( (*(_BYTE *)(v4 + 68) & 1) != 0 && !sub_B781F0(v4) )
      {
        v8 = a1[68];
        v9 = *(_BYTE *)(v8 + 8) & 0x7F;
        if ( v9 == 20 )
        {
          if ( v8 == 48 )
            return;
        }
        else
        {
          if ( v9 != 23 )
            return;
          if ( v8 == 48 )
            return;
          v22 = *(_QWORD *)(v8 - 8);
          if ( (v22 & 7) == 0 && (v22 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            return;
        }
        v25 = sub_A97D20(a1[31], *(_QWORD *)(*(_QWORD *)(a1[31] + 18720LL) & 0xFFFFFFFFFFFFFFF0LL));
        if ( v25 > 0x40 )
          sub_2205470(&v24, 0, 0);
        else
          v24 = nullptr;
        v10 = sub_C0C5D0((_QWORD *)a1[31], (__int64)&v24, *(_QWORD *)(a1[31] + 18720LL), a2);
        v13 = v25;
        v14 = v10;
        v27 = v25;
        if ( v25 > 0x40 )
        {
          sub_2205510(&v26);
          v13 = v27;
          v15 = v26;
        }
        else
        {
          v15 = v24;
          v26 = v24;
        }
        v16 = (_QWORD *)a1[31];
        v31 = v13;
        v29 &= ~1u;
        v27 = 0;
        v32 = 1;
        v28 = 2;
        v30 = v15;
        v17 = sub_C09C20(v16, v14, (int *)&v28, (__int64)v15, v11, v12);
        if ( v28 > 1 )
          sub_A4F8E0((int *)&v28);
        if ( v27 > 0x40 && v26 )
          operator delete[](v26);
        v18 = sub_A81910((_QWORD *)a1[31], *(_QWORD *)(a1[31] + 18648LL), a2);
        v19 = a1[68];
        if ( v19 )
          v19 -= 48;
        v20 = sub_BA99A0((_QWORD *)a1[31], v19, a2, a2, 0, *(_QWORD *)(a1[31] + 18648LL), (__int64)v18, 1, v17, 1);
        v21 = *(unsigned int *)(a3 + 8);
        if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v23 = v20;
          sub_2237220(a3, a3 + 16, v21 + 1, 8);
          v21 = *(unsigned int *)(a3 + 8);
          v20 = v23;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v21) = v20;
        ++*(_DWORD *)(a3 + 8);
        if ( v25 > 0x40 )
        {
          if ( v24 )
            operator delete[](v24);
        }
      }
    }
  }
}
