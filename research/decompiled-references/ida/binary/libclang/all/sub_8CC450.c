void __fastcall sub_8CC450(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  void *v6; // rdx
  bool v7; // cc
  unsigned int v8; // eax
  unsigned int v9; // eax
  void *v10; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-40h]
  void *v12; // [rsp+10h] [rbp-38h]
  unsigned int v13; // [rsp+18h] [rbp-30h]
  void *v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-20h]

  v4 = *(_DWORD *)(a1 + 8);
  v11 = v4;
  if ( v4 <= 0x40 )
  {
    v5 = *(_QWORD *)a1;
LABEL_3:
    v6 = (void *)(*a2 & v5);
    v13 = v4;
    v10 = v6;
    v12 = v6;
    v11 = 0;
    v15 = v4;
    goto LABEL_4;
  }
  sub_2585B30(&v10);
  v4 = v11;
  if ( v11 <= 0x40 )
  {
    v5 = (unsigned __int64)v10;
    goto LABEL_3;
  }
  sub_2586580(&v10, a2);
  v9 = v11;
  v6 = v10;
  v11 = 0;
  v13 = v9;
  v12 = v10;
  v15 = v9;
  if ( v9 > 0x40 )
  {
    sub_2585B30(&v14);
    goto LABEL_5;
  }
LABEL_4:
  v14 = v6;
LABEL_5:
  if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
    operator delete[](*(void **)a3);
  v7 = v13 <= 0x40;
  *(_QWORD *)a3 = v14;
  v8 = v15;
  v15 = 0;
  *(_DWORD *)(a3 + 8) = v8;
  if ( !v7 && v12 )
    operator delete[](v12);
  if ( v11 > 0x40 )
  {
    if ( v10 )
      operator delete[](v10);
  }
}

