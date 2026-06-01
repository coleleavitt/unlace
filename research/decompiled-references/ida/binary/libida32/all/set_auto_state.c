__int64 __fastcall set_auto_state(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = **(_QWORD **)(qword_2CA1698 + 1480);
  v5 = a1;
  v2 = *(_QWORD *)(v1 + 1344);
  v3 = *(_DWORD *)(v2 + 112);
  sub_39DF60((_DWORD *)(v2 + 112), &v5, 0x76u);
  return v3;
}

