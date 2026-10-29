__int64 __fastcall sub_CF9FB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // rbx
  bool v9; // cc
  void *v10; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-60h]
  char v12; // [rsp+Ch] [rbp-5Ch]
  int v13; // [rsp+10h] [rbp-58h]
  void *v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+2Ch] [rbp-3Ch]
  int v17; // [rsp+30h] [rbp-38h]

  sub_CE7240((__int64)&v10, *(_QWORD *)(a1 + 176));
  v2 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DA8220(a1, a2, v2);
  if ( !(_BYTE)v3 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v2 + 24) && *(_QWORD *)(v2 + 32) && *(_DWORD *)(v2 + 40) )
  {
    sub_E00FC0(v2);
    sub_DFFFB0(v2);
  }
  v4 = sub_CDA870(v2);
  if ( v4 )
  {
    sub_B54430(v4);
    v15 = v11;
    if ( v11 > 0x40 )
      sub_21E17D0(&v14);
    else
      v14 = v10;
    v16 = v12;
    v17 = v13;
    v5 = sub_CEB480(v2);
    v6 = v5;
    if ( *(_DWORD *)(v5 + 8) > 0x40u && *(_QWORD *)v5 )
      operator delete[](*(void **)v5);
    *(_QWORD *)v6 = v14;
    *(_DWORD *)(v6 + 8) = v15;
    *(_BYTE *)(v6 + 12) = v16;
    *(_DWORD *)(v6 + 16) = v17;
LABEL_13:
    if ( v11 <= 0x40 )
      return v3;
    goto LABEL_14;
  }
  v8 = sub_CEB480(v2);
  sub_BFCC40(v8, (__int64 *)&v10);
  v9 = v11 <= 0x40;
  *(_DWORD *)(v8 + 16) = v13;
  if ( v9 )
    return v3;
LABEL_14:
  if ( v10 )
    operator delete[](v10);
  return v3;
}

