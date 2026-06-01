unsigned __int64 __fastcall sub_559430(const char *a1, int *a2)
{
  __int16 v2; // ax
  int v3; // edx
  __int64 license_manager; // rax
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  int v8; // [rsp+1Ah] [rbp-2Eh]
  __int16 v9; // [rsp+1Eh] [rbp-2Ah]
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int16 v11; // [rsp+24h] [rbp-24h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

  v2 = *((_WORD *)a2 + 2);
  v3 = *a2;
  v14 = __readfsqword(0x28u);
  v6 = 0;
  v9 = v2;
  v11 = v2;
  v8 = v3;
  v10 = v3;
  v12 = 0x100000001LL;
  v13 = 0;
  v7 = 0;
  license_manager = get_license_manager(0.0);
  (*(void (__fastcall **)(__int64, const char *, int *, __int64, __int64 *))(*(_QWORD *)license_manager + 32LL))(
    license_manager,
    a1,
    &v10,
    16,
    &v6);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, a1);
  }
  return v14 - __readfsqword(0x28u);
}
