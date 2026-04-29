__int64 __fastcall sub_70710(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars10[360]; // [rsp+10h] [rbp+10h] BYREF
  _DWORD *vars178; // [rsp+178h] [rbp+178h]
  __int64 vars330; // [rsp+330h] [rbp+330h]
  __int64 vars338; // [rsp+338h] [rbp+338h]
  __int64 vars348; // [rsp+348h] [rbp+348h]
  __int64 vars350; // [rsp+350h] [rbp+350h]
  __int64 vars360; // [rsp+360h] [rbp+360h]
  __int64 vars368; // [rsp+368h] [rbp+368h]
  __int64 vars380; // [rsp+380h] [rbp+380h]
  unsigned __int64 vars388; // [rsp+388h] [rbp+388h]

  vars388 = __readfsqword(0x28u);
  sub_6F900((__int64)vars0, a3, a1, (__int64)&unk_8E560, 1);
  vars0[0] = off_A3E30;
  vars380 = 0;
  *vars178 |= 0x40000u;
  qmemcpy(vars10, a2, sizeof(vars10));
  v3 = 0;
  if ( (unsigned __int8)match_jpt((__int64)vars0) )
  {
    mark_switch_insns_jpt((__int64)vars0, 6, 1);
    v3 = 1;
  }
  vars0[0] = off_A4B78;
  if ( vars360 )
  {
    vars368 = 0;
    qfree(vars360);
  }
  if ( vars348 )
  {
    vars350 = 0;
    qfree(vars348);
  }
  if ( vars330 )
  {
    vars338 = 0;
    qfree(vars330);
  }
  return v3;
}
