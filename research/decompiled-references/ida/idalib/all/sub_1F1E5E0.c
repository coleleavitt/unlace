unsigned __int64 __fastcall sub_1F1E5E0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebp
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned __int64 v14; // [rsp+0h] [rbp-38h]
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16[4]; // [rsp+18h] [rbp-20h] BYREF

  switch ( a2 )
  {
    case 0u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 9u:
      result = 0;
      break;
    case 1u:
      result = (unsigned __int64)sub_1F19370(a1) & 0xFFFFFFFFFFFFFFFCLL | 2;
      break;
    case 6u:
      v14 = sub_1F194E0(a1, a2, a3, a4, a5, a6);
      v15 = v12;
      v13 = sub_1EE7490(a1);
      v10 = 0;
      v9 = v13;
      goto LABEL_3;
    case 7u:
      v14 = sub_1F194E0(a1, a2, a3, a4, a5, a6);
      v15 = v6;
      v7 = sub_1EE7490(a1);
      v8 = sub_1EE7490(a1);
      v9 = v7;
      v10 = v8;
LABEL_3:
      sub_F1ECA0(v16, *(_QWORD **)a1, v14, v15, v9, v10);
      result = v16[0];
      break;
    case 8u:
      result = sub_1F6A0A0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16)) & 0xFFFFFFFFFFFFFFFCLL | 1;
      break;
  }
  return result;
}
