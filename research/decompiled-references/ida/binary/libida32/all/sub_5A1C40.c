__int64 __fastcall sub_5A1C40(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v4 == sub_3D58E0 )
    v5 = a2 + 2;
  else
    v5 = (unsigned __int64 *)v4((__int64)a2);
  if ( a3 >= *v5
    && a3 < v5[1]
    && a3 == (*(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, _QWORD))(*a2 + 40))(a2, a3, 0) )
  {
    ptr = nullptr;
    v8 = 0;
    get_ea_diffpos_name(&ptr, (unsigned int)a3);
    sub_3573A0((char **)a1);
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      qfree(ptr);
    }
  }
  return a1;
}

