bool __fastcall sub_37F780(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rdx
  bool result; // al
  __int64 (__fastcall **v11[2])(_QWORD); // [rsp+0h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+10h] [rbp-28h]
  unsigned int v13; // [rsp+14h] [rbp-24h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v5 = a3;
  v6 = *(_QWORD *)(a4 + 128);
  v7 = *(_QWORD *)(a4 + 24);
  v14 = __readfsqword(0x28u);
  *(_QWORD *)(v6 + 1344) = v7;
  *(_QWORD *)(v6 + 1352) = *(_QWORD *)(a4 + 32);
  v9 = sub_338EA0(*(_QWORD *)(a4 + 128), 0x68u, a4, a2, v5);
  result = 1;
  if ( !v9 )
  {
    v11[1] = (__int64 (__fastcall **)(_QWORD))a4;
    v11[0] = (__int64 (__fastcall **)(_QWORD))off_4BE2A8;
    v12 = a2;
    v13 = a3;
    return sub_338F80(v11) > 0;
  }
  return result;
}
