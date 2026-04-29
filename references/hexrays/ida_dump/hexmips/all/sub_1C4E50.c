__int64 __fastcall sub_1C4E50(char *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 tinfo_size; // rax
  char v7; // al
  char v8; // [rsp+Fh] [rbp-69h]
  __int64 v9; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v10[11]; // [rsp+20h] [rbp-58h] BYREF

  v10[3] = __readfsqword(0x28u);
  v10[0] = 0;
  v10[1] = 0;
  v4 = sub_1C0C70(a1, (__int64)v10);
  if ( (_BYTE)v4 && (tinfo_size = get_tinfo_size(0, *a3, 0), (unsigned __int64)(tinfo_size - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
  {
    sub_1C4D70((__int64)v10, tinfo_size);
    v7 = a1[1];
    v9 = 0;
    v8 = v7;
    copy_tinfo_t(&v9, a3);
    sub_118F50((__int64)a1, a2, nullptr, &v9, v10);
    clear_tinfo_t(&v9);
    a1[1] = v8;
  }
  else
  {
    v4 = 0;
  }
  cleanup_argloc(v10);
  return v4;
}
