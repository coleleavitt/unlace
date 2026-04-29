__int64 __fastcall sub_2CD0(__int64 a1, const char **a2)
{
  const char *v4; // rax
  const char *v5; // r12
  int v6; // esi
  unsigned int v7; // [rsp+Ch] [rbp-10Ch] BYREF
  _WORD v8[16]; // [rsp+10h] [rbp-108h] BYREF
  _WORD v9[44]; // [rsp+30h] [rbp-E8h] BYREF
  int v10; // [rsp+88h] [rbp-90h]
  int v11; // [rsp+B8h] [rbp-60h]
  unsigned __int64 v12; // [rsp+F8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v7 = 0;
  if ( qlread(a1, v8, 28) == 28 && v8[0] == 23117 )
  {
    qlseek(a1, 60, 0);
    if ( qlread(a1, &v7, 4) != 4 )
      return 0;
  }
  qlseek(a1, v7, 0);
  if ( qlread(a1, v9, 196) != 196 || v9[0] != 17740 && v9[0] != 22604 )
    return 0;
  v4 = (const char *)sub_2BF0(a1, v10 + v7, 0);
  v5 = v4;
  if ( !v4 )
    return 0;
  if ( strcasecmp(v4, *a2) )
  {
    qfree(v5);
    return 0;
  }
  qfree(v5);
  v6 = v10 + v7;
  if ( v10 + v7 && v6 < (unsigned __int64)qword_B288 )
    sub_2860(a1, v6, (__int64)a2);
  if ( v11 )
  {
    if ( v11 < (unsigned __int64)qword_B288 )
      sub_2860(a1, v11, (__int64)a2);
  }
  return 1;
}
