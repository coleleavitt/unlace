bool __fastcall unregister_post_event_visitor(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // ebp
  _QWORD v6[3]; // [rsp+0h] [rbp-48h] BYREF
  int v7; // [rsp+18h] [rbp-30h]
  char v8; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v6[0] = 0;
  v6[1] = a2;
  v6[2] = 0;
  v7 = 1;
  v8 = 0;
  if ( (unsigned __int8)sub_3FB5F0() && (v3 = *(_QWORD *)(qword_2CCB598 + 1712)) != 0 )
    v4 = sub_4B3E80((_QWORD *)(v3 + 8), a1, 0, (__int64)v6, 1);
  else
    v4 = 0;
  return v4 + (unsigned int)sub_4B40E0(a1, 0, (__int64)v6, 1) != 0;
}
