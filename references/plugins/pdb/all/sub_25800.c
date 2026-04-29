__int64 __fastcall sub_25800(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  __int64 v4; // [rsp+8h] [rbp-50h] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h] BYREF
  int v6; // [rsp+18h] [rbp-40h]
  int v7; // [rsp+1Ch] [rbp-3Ch]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  v4 = 17;
  v5 = 0;
  v7 = a2;
  copy_tinfo_t(&v5, &v4);
  v2 = create_tinfo(a1 + 64, 11, 11, &v5);
  clear_tinfo_t(&v5);
  clear_tinfo_t(&v4);
  if ( (_BYTE)v2 )
    *(_QWORD *)(a1 + 8) = 8 * a2;
  return v2;
}
