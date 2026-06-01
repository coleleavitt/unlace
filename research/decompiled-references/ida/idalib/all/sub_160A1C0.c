void __fastcall sub_160A1C0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned __int64 v6; // r12
  unsigned __int8 *v7; // rbp
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  char v20; // al
  unsigned __int8 **v21; // rbx
  __int64 v22; // rbp
  unsigned __int8 *v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-A8h] BYREF
  _DWORD v25[3]; // [rsp+Ch] [rbp-9Ch] BYREF
  __int64 v26; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v27[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v28; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v29; // [rsp+48h] [rbp-60h]
  __int64 *v30; // [rsp+50h] [rbp-58h]
  _DWORD *v31; // [rsp+58h] [rbp-50h]
  __int64 *v32; // [rsp+60h] [rbp-48h]

  v4 = *(unsigned int *)(a1 + 4624);
  v25[0] = a3;
  v24 = a4;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640 * v4 - 640);
  if ( v5 == 3 )
    return;
  if ( v5 <= 1 )
    return;
  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return;
  v7 = (unsigned __int8 *)a2;
  if ( a4 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 96LL) & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 800);
    v28 = nullptr;
    v29 = nullptr;
    LODWORD(v30) = 0;
    operator delete(0, 0, 8);
    LODWORD(v30) = 0;
    v28 = nullptr;
    v29 = nullptr;
    sub_1C76260(v10, v25[0], &v28, a4);
    operator delete(v28, 8LL * (unsigned int)v30, 8);
    a2 = 0;
    operator delete(0, 0, 8);
  }
  v11 = *(_QWORD *)(a1 + 3032);
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 544);
  v13 = sub_B8C1B0(v11);
  v14 = *(_BYTE *)(v13 + 28) & 0x7F;
  if ( (unsigned int)(v14 - 35) <= 3 )
  {
    if ( (sub_B98230((_QWORD *)v13, a2) || sub_B98360((_QWORD *)v13, a2)) && *(char *)(v13 + 82) < 0 )
      return;
    LOBYTE(v14) = *(_BYTE *)(v13 + 28) & 0x7F;
    if ( (_BYTE)v14 == 38 )
    {
      if ( (unsigned __int8)sub_B990E0(v13, &v28, v15, v16) && *(char *)(v13 + 82) < 0 )
        return;
      v14 = *(_BYTE *)(v13 + 28) & 0x7F;
    }
    else
    {
      v14 = (unsigned __int8)v14;
    }
  }
  if ( (unsigned int)(v14 - 34) > 5 )
  {
    v13 = v24;
    if ( v24 )
    {
      if ( (*(_BYTE *)(v24 + 28) & 0x7Fu) - 34 >= 6 )
        v13 = 0;
    }
  }
  v26 = v13;
  v27[2] = v25;
  v29 = v27;
  v31 = v25;
  v27[3] = &v26;
  v32 = &v26;
  v27[0] = a1;
  v27[1] = &v24;
  v28 = (__int64 *)a1;
  v30 = &v24;
  sub_1608D60(&v28, v7, 0, (__int64)&v24, v12);
  v19 = *(_QWORD *)v6;
  v20 = *(_BYTE *)(*(_QWORD *)v6 + 16LL);
  if ( v20 == 26 )
  {
    v21 = (unsigned __int8 **)(v19 + 48);
    v22 = v19 + 48 + 8LL * *(unsigned __int16 *)(v19 + 22);
    if ( v22 != v19 + 48 )
    {
      do
      {
        v23 = *v21++;
        sub_1608D60(&v28, v23, 0, v17, v18);
      }
      while ( (unsigned __int8 **)v22 != v21 );
    }
    sub_1608D60(&v28, *(unsigned __int8 **)(v19 + 24), 1, v17, v18);
    v19 = *(_QWORD *)v6;
    v20 = *(_BYTE *)(*(_QWORD *)v6 + 16LL);
  }
  if ( v20 == 25 )
    sub_1608D60(&v28, *(unsigned __int8 **)(v19 + 24), 1, v17, v18);
}
