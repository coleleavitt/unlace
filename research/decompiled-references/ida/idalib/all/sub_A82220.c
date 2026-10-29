unsigned __int64 __fastcall sub_A82220(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64), __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  switch ( *(_BYTE *)(v4 + 16) )
  {
    case 0:
      v7 = sub_A82220(a1, *(_QWORD *)(v4 + 40));
      result = sub_A75F00(a1, *(_QWORD *)(v4 + 32), v7);
      break;
    case 8:
      v8 = *(_QWORD *)(v4 + 32);
      v9 = sub_A82220(a1, *(_QWORD *)(v4 + 48));
      v10 = sub_A82220(a1, *(_QWORD *)(v4 + 40));
      result = sub_A71850(a1, *(_WORD *)(v4 + 18) >> 3, v10, v9, v8);
      break;
    case 9:
      v11 = sub_A82220(a1, *(_QWORD *)(v4 + 32));
      result = sub_A76570(a1, *(_QWORD *)(v4 + 40), v11);
      break;
    case 0x18:
      v12 = sub_A82220(a1, *(_QWORD *)(v4 + 40));
      result = sub_A76250(a1, (unsigned __int8)(*(_WORD *)(v4 + 18) >> 3), *(_QWORD *)(v4 + 32), v12, 0);
      break;
    case 0x1E:
      v13 = *(_QWORD *)(v4 + 32);
      v14 = sub_A82220(a1, *(_QWORD *)(v4 + 24));
      result = sub_A820D0(a1, v14, v13, v15, v16, v17);
      break;
    case 0x28:
      v5 = sub_A82220(a1, *(_QWORD *)(v4 + 32));
      result = sub_A760B0(a1, v5);
      break;
    default:
      result = a3(a4);
      break;
  }
  return result;
}
