__int64 __fastcall sub_366460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  _BYTE *v7; // rcx
  int v8; // eax
  char v10; // [rsp+0h] [rbp-238h]
  int v11; // [rsp+Ch] [rbp-22Ch] BYREF
  _BYTE v12[520]; // [rsp+10h] [rbp-228h] BYREF
  unsigned __int64 v13; // [rsp+218h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 16) == 0;
  v13 = __readfsqword(0x28u);
  v11 = -1;
  if ( !v6
    && (v7 = *(_BYTE **)(a1 + 8), *v7)
    && (qsnprintf((int)v12, 512, (int)"$ idc_array %s", (int)v7, a5, a6, v10),
        (unsigned __int8)netnode_check(&v11, v12, 0, 1)) )
  {
    v8 = v11;
  }
  else
  {
    v8 = -1;
  }
  *(_DWORD *)(a2 + 8) = v8;
  return 0;
}

