__int64 __fastcall sub_266E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rbx
  signed __int64 v9; // rbx
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a3 + 16);
  v11[1] = __readfsqword(0x28u);
  v7 = sub_82350(a1, v11, v5);
  if ( (_BYTE)v7 )
  {
    v8 = v11[0] + a5;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
      v8 = (int)v8;
    v9 = -v8;
    if ( v9 <= 0 || *(_QWORD *)(a2 + 32) + (unsigned __int64)*(unsigned __int16 *)(a2 + 40) >= v9 )
    {
      return 0;
    }
    else
    {
      get_spd();
      set_frame_size();
    }
  }
  return v7;
}
