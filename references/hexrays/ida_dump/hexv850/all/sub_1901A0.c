__int64 __fastcall sub_1901A0(__int64 a1, __int64 a2, int a3, int a4)
{
  _DWORD *v5; // rbx
  bool v6; // zf
  __int64 v8; // rdi
  __int64 result; // rax
  _DWORD *v10; // rbx
  int v11; // r14d
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = (_DWORD *)a1;
  v6 = *(_BYTE *)a1 == 4;
  v12[1] = __readfsqword(0x28u);
  if ( v6 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( (unsigned int)(*(_DWORD *)v8 - 12) > 1 || !(unsigned __int8)sub_11B1C0((char *)(v8 + 48), v12, 1u) )
      return 0;
    v10 = *((_DWORD **)v5 + 1);
    v11 = v12[0];
    if ( *v10 != 12 )
      v11 = -LODWORD(v12[0]);
    v5 = v10 + 8;
  }
  else
  {
    v11 = 0;
  }
  if ( !sub_120FA0((unsigned __int8 *)v5, a2, 0) )
    return 0;
  if ( v11 < a3 )
    return 0xFFFFFFFFLL;
  result = 1;
  if ( v11 > a4 )
    return 0xFFFFFFFFLL;
  return result;
}
