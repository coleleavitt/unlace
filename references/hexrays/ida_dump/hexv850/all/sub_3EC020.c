unsigned __int64 __fastcall sub_3EC020(__int64 a1, __int64 a2, __int32 a3, int a4, int a5)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // r8
  _QWORD v10[2]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v11[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v5 = a5;
  v6 = *(_QWORD *)(a1 + 832);
  v12 = __readfsqword(0x28u);
  if ( !a5 )
    v5 = *(_DWORD *)(v6 + 80);
  v8 = *(_QWORD *)(a1 + 40);
  v10[1] = 0;
  v10[0] = 0xFFFFFFFF00000000LL;
  sub_11BE50((__int64)v10, v6, a2, v5, v8, a3);
  v11[0] = 1;
  v11[1] = v5;
  v11[2] = a4;
  sub_1D1610(a1, 4, (unsigned __int8 *)v10, nullptr, (unsigned __int8 *)v11);
  sub_1181E0((__int64)v11);
  sub_1181E0((__int64)v10);
  return v12 - __readfsqword(0x28u);
}
