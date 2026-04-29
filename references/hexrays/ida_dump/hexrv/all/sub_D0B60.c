unsigned __int64 __fastcall sub_D0B60(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // al
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v10 = 32;
  v12 = 0;
  get_stkarg_area_info(&v10, a3);
  *(_QWORD *)a1 = 0;
  v4 = sub_36A3A0(*(_QWORD *)(a2 + 1504), a3);
  v5 = v11;
  v6 = v4;
  v7 = 0;
  if ( !v6 )
  {
    v7 = v11;
    v5 = -1;
  }
  v8 = *((_QWORD *)&v11 + 1) + v7;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 24) = 0;
  return v13 - __readfsqword(0x28u);
}
