__int64 __fastcall sub_8EB220(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r14
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // eax
  char v16; // [rsp+Bh] [rbp-9Dh] BYREF
  int v17; // [rsp+Ch] [rbp-9Ch] BYREF
  void *v18; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-90h]
  char v20; // [rsp+1Ch] [rbp-8Ch]
  int v21; // [rsp+20h] [rbp-88h]
  void *v22; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-70h]
  char v24; // [rsp+3Ch] [rbp-6Ch]
  int v25; // [rsp+40h] [rbp-68h]
  __int64 v26[11]; // [rsp+50h] [rbp-58h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v5 = *(_QWORD *)(a1 + 568);
    v7 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a3;
    v8 = (_QWORD *)sub_A1A5A0(v5, 24);
    v9 = *v8;
    v13 = v8;
    if ( v9 == sub_2575D20(v5, 24, v10) )
      sub_257D000(v26, v13, v11, v12);
    else
      sub_2576960(v26, v13);
    sub_A1A5E0(v5, 24);
    v17 = sub_256E510(a2);
    sub_25747D0(&v22, v26, &v17, &v16);
    v19 = v23;
    v18 = v22;
    v20 = v24;
    v21 = v25;
    if ( !v16 || (v3 = sub_9C87D0(a1 + 384, v7, &v18), (_BYTE)v3) )
    {
      v14 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
      v15 = v19;
      *(_DWORD *)(v14 + 8) = v19;
      if ( v15 > 0x40 )
        sub_2585B30(v14);
      else
        *(_QWORD *)v14 = v18;
      v3 = 1;
      *(_BYTE *)(v14 + 12) = v20;
      *(_DWORD *)(v14 + 16) = v21;
    }
    if ( v19 > 0x40 && v18 )
      operator delete[](v18);
    sub_5FF3B0(v26);
  }
  return v3;
}

