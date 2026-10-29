__int64 __fastcall sub_3E8A70(_QWORD *a1)
{
  unsigned int v1; // r12d
  unsigned int v2; // ebp
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 result; // rax

  v1 = 0;
  if ( !sub_3B8910((__int64)a1, 0) )
    v1 = sub_3B87D0((__int64)a1, 0);
  v2 = sub_3B8820((__int64)a1, 0xFFFFFFFF) + 1;
  if ( v1 != (unsigned int)sub_614FB0(*a1, 19) || (result = sub_614FB0(*a1, 20), v2 != (_DWORD)result) )
  {
    sub_615AB0(*a1, 19, v1);
    sub_615AB0(*a1, 20, v2);
    callui(1, 20, (int)callui, v3, v4, v5);
  }
  return result;
}

