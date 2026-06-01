__int64 __fastcall sub_36D3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  _BYTE *v8; // rcx
  char v9; // [rsp+0h] [rbp-238h]
  int v10; // [rsp+Ch] [rbp-22Ch] BYREF
  _BYTE v11[520]; // [rsp+10h] [rbp-228h] BYREF
  unsigned __int64 v12; // [rsp+218h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 16) == 0;
  v12 = __readfsqword(0x28u);
  if ( v6 || (v8 = *(_BYTE **)(a1 + 8), !*v8) )
  {
    *(_DWORD *)(a2 + 8) = -1;
  }
  else
  {
    qsnprintf((int)v11, 512, (int)"$ idc_array %s", (int)v8, a5, a6, v9);
    netnode_check(&v10, v11, 0, 0);
    *(_DWORD *)(a2 + 8) = v10;
  }
  return 0;
}

