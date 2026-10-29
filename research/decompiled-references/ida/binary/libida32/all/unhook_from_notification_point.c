__int64 __fastcall unhook_from_notification_point(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // ebp
  _QWORD v7[3]; // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+18h] [rbp-30h]
  char v9; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v7[0] = 0;
  v7[1] = a2;
  v7[2] = a3;
  v8 = 1;
  v9 = 1;
  if ( (unsigned __int8)sub_3E8690() && (v4 = *(_QWORD *)(qword_2CA1698 + 1520)) != 0 )
    v5 = sub_49E940((_QWORD *)(v4 + 8), a1, 0, (__int64)v7, 0);
  else
    v5 = 0;
  return v5 + (unsigned int)sub_49EBA0(a1, 0, (__int64)v7, 0);
}

