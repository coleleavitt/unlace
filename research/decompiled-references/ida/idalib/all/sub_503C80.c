__int64 __fastcall sub_503C80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD *, _BYTE *, _BYTE *); // rax
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // rcx
  _BYTE v11[1024]; // [rsp+0h] [rbp-428h] BYREF
  _BYTE v12[8]; // [rsp+400h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+408h] [rbp-20h]

  v6 = *(__int64 (__fastcall **)(_QWORD *, _BYTE *, _BYTE *))(a1 + 64);
  v13 = __readfsqword(0x28u);
  if ( v6 )
  {
    v7 = v6(a2, v11, v12);
    v8 = v11;
    v9 = v7;
  }
  else
  {
    v9 = *(unsigned __int16 *)(a1 + 8);
    v8 = a2;
  }
  return netnode_supset(*(_QWORD *)a1, *a2, v8, v9, 339, a6);
}
