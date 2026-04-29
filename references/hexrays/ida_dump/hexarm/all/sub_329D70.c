_QWORD *__fastcall sub_329D70(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h] BYREF
  int v7; // [rsp+18h] [rbp-40h]
  unsigned int v8; // [rsp+1Ch] [rbp-3Ch]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( sub_11C4C0(a3) )
  {
    *a1 = (unsigned __int8)sub_329CD0(*(_QWORD *)(a2 + 96), a3);
  }
  else
  {
    *a1 = 0;
    v7 = 0;
    v8 = a3;
    v5 = 17;
    v6 = 0;
    copy_tinfo_t(&v6, &v5);
    create_tinfo(a1, 11, 11, &v6);
    clear_tinfo_t(&v6);
    clear_tinfo_t(&v5);
  }
  return a1;
}
