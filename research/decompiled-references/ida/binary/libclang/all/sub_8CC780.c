void __fastcall sub_8CC780(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbp
  unsigned int v5; // eax
  unsigned __int64 v6; // rdx
  bool v7; // cc
  unsigned int v8; // eax
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD **)a2;
  if ( *(_DWORD *)(a2 + 8) > 0x40u )
    v4 = (_QWORD *)*v4;
  v5 = *(_DWORD *)(a1 + 8);
  v10 = v5;
  if ( v5 <= 0x40 )
  {
    v9 = *(void **)a1;
LABEL_5:
    v6 = 0;
    if ( (_DWORD)v4 != v5 )
      v6 = (unsigned __int64)v9 >> (char)v4;
    v9 = (void *)v6;
    v12 = v5;
    goto LABEL_8;
  }
  sub_2585B30(&v9);
  v5 = v10;
  if ( v10 <= 0x40 )
    goto LABEL_5;
  sub_258EF20(&v9, (unsigned int)v4);
  v12 = v10;
  if ( v10 > 0x40 )
  {
    sub_2585B30(&v11);
    goto LABEL_9;
  }
  v6 = (unsigned __int64)v9;
LABEL_8:
  v11 = v6;
LABEL_9:
  if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
    operator delete[](*(void **)a3);
  v7 = v10 <= 0x40;
  *(_QWORD *)a3 = v11;
  v8 = v12;
  v12 = 0;
  *(_DWORD *)(a3 + 8) = v8;
  if ( !v7 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

