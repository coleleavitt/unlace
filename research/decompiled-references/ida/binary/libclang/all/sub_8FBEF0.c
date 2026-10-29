__int64 __fastcall sub_8FBEF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r14
  unsigned int v14; // ebp
  __int64 v16; // rsi
  __int64 v17; // r12
  unsigned __int8 **v18; // rbp
  __int64 v19; // r12
  unsigned __int8 **v20; // [rsp+8h] [rbp-70h] BYREF
  void *v21; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-60h]
  char v23; // [rsp+1Ch] [rbp-5Ch]
  __int64 v24[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 184);
  v6 = (_QWORD *)sub_A1A5A0(v5, 24);
  v7 = *v6;
  v11 = v6;
  if ( v7 == sub_2575D20(v5, 24, v8) )
    sub_257D000(v24, v11, v9, v10);
  else
    sub_2576960(v24, v11);
  sub_A1A5E0(v5, 24);
  v22 = 32;
  v21 = nullptr;
  v23 = 1;
  v12 = sub_2580E00(v24, &v21, 0, &v20);
  if ( (v12 & 1) != 0 )
  {
    v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v17 = *(_QWORD *)(v16 + 8);
    v20 = (unsigned __int8 **)sub_A2E240(a1, v16, 2262, 0);
    v18 = v20;
    if ( v20 )
    {
      sub_8E5030(&v20, v24);
      sub_8D69A0(v18, v17);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v14 )
    {
      LODWORD(v19) = v22;
      if ( v23 )
      {
        if ( v22 <= 0x40 )
          LODWORD(v19) = (_DWORD)v21;
        else
          v19 = *(_QWORD *)v21;
      }
      else if ( v22 > 0x40 )
      {
        LODWORD(v19) = *(_DWORD *)v21;
      }
      else if ( v22 )
      {
        LODWORD(v19) = (__int64)((_QWORD)v21 << (64 - (unsigned __int8)v22)) >> (64 - (unsigned __int8)v22);
      }
      *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v19;
    }
  }
  else
  {
    LODWORD(v13) = v22;
    if ( v23 )
    {
      if ( v22 <= 0x40 )
        LODWORD(v13) = (_DWORD)v21;
      else
        v13 = *(_QWORD *)v21;
    }
    else if ( v22 > 0x40 )
    {
      LODWORD(v13) = *(_DWORD *)v21;
    }
    else if ( v22 )
    {
      LODWORD(v13) = (__int64)((_QWORD)v21 << (64 - (unsigned __int8)v22)) >> (64 - (unsigned __int8)v22);
    }
    *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v13;
    v14 = sub_9DBAE0(a1, a2, v24, v12, a3);
  }
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  sub_5FF3B0(v24);
  return v14;
}

