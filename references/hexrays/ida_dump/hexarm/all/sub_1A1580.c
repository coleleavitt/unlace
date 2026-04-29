__int64 *__fastcall sub_1A1580(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  int tinfo_size; // eax
  __int64 v11; // r15
  int v12; // eax
  int v13; // edx
  _QWORD *v15; // [rsp+0h] [rbp-90h]
  __int64 v16; // [rsp+8h] [rbp-88h]
  __int64 v17; // [rsp+10h] [rbp-80h]
  __int64 v20; // [rsp+38h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-50h] BYREF
  char v22; // [rsp+48h] [rbp-48h]
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v9 = a1[2];
  if ( *(_DWORD *)(a3 + 40) != *(_DWORD *)(v9 + 24) && *(_DWORD *)(a3 + 64) == *(_DWORD *)(v9 + 48) )
  {
    v15 = a1 + 57;
    v16 = (__int64)(a1 + 53);
  }
  else
  {
    v15 = a1 + 56;
    v16 = (__int64)(a1 + 50);
  }
  tinfo_size = get_tinfo_size(0, *v15, 0);
  if ( tinfo_size <= 0 || (v17 = tinfo_size, (a6 - a4) % tinfo_size) )
  {
    if ( !under_debugger )
      sub_3835A0(52040);
    goto LABEL_19;
  }
  if ( a6 > a4 )
  {
    while ( 1 )
    {
      if ( a5 > a4 )
      {
        v20 = 1;
      }
      else
      {
        v20 = 0;
        copy_tinfo_t(&v20, v15);
      }
      v11 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3 )
        break;
      v12 = sub_1A0FE0(a3, 0);
      v13 = *(_DWORD *)(a3 + 8) & 0x20;
      v21 = *(_QWORD *)(a3 + 72);
      v22 = v13 == 0 ? 5 : 1;
      a2 = sub_19A6B0(v11, (__int64)a2, &v21, -1, v12, 0xFFFFFFFF, a4, &v20, v16, 1);
      clear_tinfo_t(&v20);
      a4 += v17;
      if ( a6 <= a4 )
        return a2;
    }
    if ( !under_debugger )
      sub_3835A0(51371);
LABEL_19:
    BUG();
  }
  return a2;
}
