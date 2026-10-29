__int64 __fastcall sub_440100(_QWORD *a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r14d
  _QWORD *v6; // rbp
  unsigned int v7; // eax
  unsigned int *v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  _DWORD v13[4]; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v4 = a2 + a4;
  if ( a2 >= a2 + a4 || a3 >= a3 + a4 )
    return 0;
  v6 = a1 + 301;
  while ( 1 )
  {
    v8 = (unsigned int *)sub_4EE820(v6, v4);
    if ( !v8 )
      break;
    v7 = *v8;
    if ( v7 == v4 )
      break;
    v4 = v7;
  }
  v13[0] = a2;
  v13[1] = v4;
  v13[2] = a3;
  v9 = sub_4EE3F0(v6, v13);
  if ( (_BYTE)v9 )
  {
    v10 = sub_614FB0(*a1, 20);
    v11 = sub_614FB0(*a1, 19);
    auto_mark_range(v11, v10, 40);
  }
  else
  {
    return 0;
  }
  return v9;
}

