char __fastcall validate_name(_QWORD *a1, int a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  int v6; // [rsp+Ch] [rbp-2Ch]
  __int128 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6 = a2;
  v7 = 0;
  v4 = qword_2CA1698;
  v5 = a3;
  return sub_4B4F70(qword_2CA1698 + 760, a1, (__int64)&v4);
}

