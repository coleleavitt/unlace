__int64 __fastcall sub_395DB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  char tinfo_property; // al
  __int64 v4; // rdx
  unsigned int v5; // r15d
  double v7; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // [rsp+8h] [rbp-48h] BYREF
  _QWORD v13[8]; // [rsp+10h] [rbp-40h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( *a2 == -1 )
  {
    return 0;
  }
  else
  {
    v2 = a2[3];
    v12 = 0;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v2 + 48), 2);
    v4 = a2[3];
    if ( (tinfo_property & 0xF) == 0xA )
    {
      v13[0] = 0;
      copy_tinfo_t(v13, v4 + 48);
    }
    else
    {
      sub_32C540(v13, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), (__int64 *)(v4 + 48));
    }
    v5 = sub_388A20(&v12, 0, *(_QWORD *)(a1 + 128), (__int64)&unk_418793, v13, 1, nullptr);
    if ( (_BYTE)v5 && (unsigned int)lexcompare_tinfo(v12, v13[0], 0) )
    {
      v7 = set_op_tinfo(*a2, 0, &v12);
      sub_395A90(a1, 0, v7, v8, v9, v10);
      v11 = sub_1CE9E0(*(_QWORD *)(a1 + 24));
      reanalyze_function(v11, 0, -1, 0);
    }
    else
    {
      v5 = 0;
    }
    clear_tinfo_t(v13);
    clear_tinfo_t(&v12);
  }
  return v5;
}
