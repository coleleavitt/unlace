_QWORD *__fastcall sub_6AA520(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h] BYREF
  int v9; // [rsp+18h] [rbp-40h]
  int v10; // [rsp+1Ch] [rbp-3Ch]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v3 = (unsigned int)(a3 - 1);
  v11 = __readfsqword(0x28u);
  if ( (unsigned int)v3 <= 0xF && (v4 = byte_23B1E10[v3], (_BYTE)v4) )
  {
    *a1 = v4;
  }
  else
  {
    v9 = 0;
    v10 = a3;
    v6 = 0;
    v7 = 17;
    v8 = 0;
    copy_tinfo_t(&v8);
    create_tinfo(&v6, 11, 11, &v8);
    clear_tinfo_t(&v8);
    clear_tinfo_t(&v7);
    *a1 = 0;
    copy_tinfo_t(a1);
    clear_tinfo_t(&v6);
  }
  return a1;
}
