__int64 __fastcall sub_370B90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  _BYTE *v8; // rcx
  __int64 v9; // [rsp+8h] [rbp-230h] BYREF
  _BYTE v10[520]; // [rsp+10h] [rbp-228h] BYREF
  unsigned __int64 v11; // [rsp+218h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 16) == 0;
  v11 = __readfsqword(0x28u);
  if ( v6 || (v8 = *(_BYTE **)(a1 + 8), !*v8) )
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  else
  {
    qsnprintf((unsigned int)v10, 512, (unsigned int)"$ idc_array %s", (_DWORD)v8, a5, a6);
    netnode_check(&v9, v10, 0, 0);
    *(_QWORD *)(a2 + 8) = v9;
  }
  return 0;
}
