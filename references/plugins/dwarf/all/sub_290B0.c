__int64 __fastcall sub_290B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v6; // ebp
  unsigned __int64 v7; // rax
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned __int16 v12; // [rsp+Eh] [rbp-2Ah] BYREF
  _QWORD v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 88);
  v13[1] = __readfsqword(0x28u);
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned __int16 *, _QWORD *))(v3 + 56))(a3, &v12, v13) )
    return v12;
  if ( (debug & 0x400000) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 88) + 464LL))(v13[0]);
    v7 = sub_28270(a2, a3, 0);
    v8 = sub_817F0(v7 & 0x7FFFFFFFFFFFFFFFLL, *(_QWORD *)(a2 + 112) & 0x7FFFFFFFFFFFFFFFLL, *(unsigned int *)(a2 + 160));
    sub_88B80((unsigned int)"Error DIE %s retrieving tag : %s\n", v8, v6, v9, v10, v11);
  }
  return 0;
}
