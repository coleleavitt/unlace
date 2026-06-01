__int64 __fastcall sub_8E4AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  unsigned int v4; // ebp
  __int64 v5; // r12
  unsigned __int8 v6; // r13
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int8 **v11; // rbp
  char v12; // cl
  int v13; // eax
  char v14; // dl
  char v15; // si
  unsigned __int8 **v16; // [rsp+18h] [rbp-40h] BYREF
  void *v17; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-30h]
  char v19; // [rsp+2Ch] [rbp-2Ch]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_QWORD *)(a1 + 792);
  v4 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = *(_BYTE *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 47) & 0x20) != 0 )
  {
    LOBYTE(v4) = v4 & 7;
LABEL_3:
    v7 = v6 << v4;
LABEL_4:
    *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v7;
    return 1;
  }
  if ( v4 <= 7 )
    goto LABEL_3;
  v9 = sub_A180F0(*(_QWORD *)(a1 + 584), v3);
  v19 = 1;
  v18 = 32;
  v10 = *(_QWORD *)(v9 + 8);
  v17 = (void *)v4;
  v16 = (unsigned __int8 **)sub_A2E240(a1 + 384, v9, 2220, 0);
  v11 = v16;
  if ( v16 )
  {
    sub_8DF340(&v16, (__int64)&v17);
    sub_8D69A0(v11, v10);
    sub_8D6E40(v11, 8);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v18 > 0x40 && v17 )
      operator delete[](v17);
    v12 = 8;
    if ( v6 )
    {
      v13 = (int)v6 >> 4;
      if ( v13 )
      {
        v14 = 2;
        v15 = 0;
      }
      else
      {
        v13 = v6;
        v14 = 6;
        v15 = 4;
      }
      if ( v13 >> 2 )
      {
        v13 >>= 2;
        v14 = v15;
      }
      v12 = v14 | 1;
      if ( (unsigned int)v13 >> 1 )
        v12 = v14;
    }
    v7 = v6 << v12;
    goto LABEL_4;
  }
  if ( v18 > 0x40 && v17 )
  {
    operator delete[](v17);
    return 0;
  }
  return result;
}

