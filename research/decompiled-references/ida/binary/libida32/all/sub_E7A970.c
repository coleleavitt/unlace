void __fastcall sub_E7A970(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // [rsp+24h] [rbp-94h] BYREF
  char v16; // [rsp+2Ch] [rbp-8Ch]
  unsigned __int8 *v17[17]; // [rsp+30h] [rbp-88h] BYREF

  sub_FA3370(v17, *a1, *(unsigned int *)(a3 + 24), 2329);
  sub_E74340(v17, a3);
  sub_E74100(v17, a5 == 0);
  sub_AC84E0(v17, a4, a5);
  sub_AC6300((__int64)v17);
  if ( *a2 )
  {
    sub_FA3370(v17, *a1, *(unsigned int *)(*a2 + 24LL), 2509);
    sub_E74340(v17, a3);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    v16 = 1;
    v15 = v11;
    sub_AC88D0((__int64 *)v17, &v15);
    sub_AC6300((__int64)v17);
  }
  sub_FA3370(v17, *a1, *(unsigned int *)(a6 + 24), 2511);
  sub_AC84E0(v17, a7, a8);
  sub_AC6300((__int64)v17);
  v12 = a2[1];
  if ( v12 )
  {
    sub_FA3370(v17, *a1, *(unsigned int *)(v12 + 24), 2554);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a2[1] + 16LL))(a2[1]);
    v16 = 1;
    v15 = v13;
    sub_AC88D0((__int64 *)v17, &v15);
    sub_AC6300((__int64)v17);
  }
}

