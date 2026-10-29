__int64 __fastcall sub_D06E20(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  int v5; // eax
  __int64 v6; // rdi
  bool v7; // bl
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  _QWORD v12[3]; // [rsp+0h] [rbp-48h] BYREF
  int v13; // [rsp+18h] [rbp-30h]
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-20h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_E21760(v3, 48);
  sub_E23260(v12);
  sub_E21790(v3, 48);
  v5 = v13;
  if ( v13 == 2 )
  {
    v9 = v14;
    if ( v14 && (v10 = *(_QWORD *)(v14 + 16), (v10 & 4) == 0) && (v11 = v10 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (unsigned __int8)sub_B79700(v11) )
        goto LABEL_13;
      v5 = v13;
      v6 = *(_QWORD *)(a1 + 560);
      if ( !v13 )
        goto LABEL_7;
      if ( v13 != 2 )
      {
LABEL_11:
        v7 = 1;
        if ( v5 != 3 )
          v7 = (v12[0] | v15) != 0;
        goto LABEL_8;
      }
      v9 = v14;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 560);
    }
    v7 = v9 != 0;
    goto LABEL_8;
  }
  if ( v13 )
  {
    v6 = *(_QWORD *)(a1 + 560);
    goto LABEL_11;
  }
  if ( *(_BYTE *)(v14 + 29) )
  {
LABEL_13:
    v8 = 0;
    goto LABEL_9;
  }
  v6 = *(_QWORD *)(a1 + 560);
LABEL_7:
  v7 = v14 != 0;
LABEL_8:
  *(_BYTE *)sub_E216C0(v6, 8) = v7;
  v8 = 1;
LABEL_9:
  sub_E232A0(v12);
  return v8;
}
