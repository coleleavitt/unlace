__int64 __fastcall sub_369A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  _BYTE *v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-230h] BYREF
  _BYTE v11[520]; // [rsp+10h] [rbp-228h] BYREF
  unsigned __int64 v12; // [rsp+218h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 16) == 0;
  v12 = __readfsqword(0x28u);
  v10 = -1;
  if ( !v6
    && (v7 = *(_BYTE **)(a1 + 8), *v7)
    && (qsnprintf((unsigned int)v11, 512, (unsigned int)"$ idc_array %s", (_DWORD)v7, a5, a6),
        (unsigned __int8)netnode_check(&v10, v11, 0, 1)) )
  {
    v8 = v10;
  }
  else
  {
    v8 = -1;
  }
  *(_QWORD *)(a2 + 8) = v8;
  return 0;
}
