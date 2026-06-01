__int64 __fastcall sub_4C6FF0(__int64 a1)
{
  __int16 v1; // cx
  unsigned int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // eax

  if ( (unsigned __int64)sub_4C6A30((_QWORD *)a1) >> 2 )
  {
    v5 = sub_4C6BF0((_QWORD *)a1);
    *(_QWORD *)(a1 + 1048) = node2ea(v5);
    v6 = sub_4C6BF0((_QWORD *)a1);
    *(_QWORD *)(a1 + 1064) = node2ea(v6);
    v7 = sub_4C6BF0((_QWORD *)a1);
    *(_WORD *)(a1 + 1058) = v7;
    *(_WORD *)(a1 + 1056) = HIWORD(v7);
    v8 = sub_4C6BF0((_QWORD *)a1);
    v3 = 1;
    v1 = v8;
    v2 = HIWORD(v8);
  }
  else
  {
    *(_DWORD *)(a1 + 1056) = 0;
    v1 = 0;
    LOWORD(v2) = 0;
    v3 = 0;
    *(_QWORD *)(a1 + 1048) = -1;
    *(_QWORD *)(a1 + 1064) = -1;
  }
  *(_WORD *)(a1 + 1062) = v2;
  *(_WORD *)(a1 + 1060) = v1;
  return v3;
}
