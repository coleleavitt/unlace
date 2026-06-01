/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040F60
// Address: 0x0000000140040F60

//----- (0000000140040F60) ----------------------------------------------------
__int64 __fastcall sub_140040F60(__int64 a1)
{
  void *v2; // rcx
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  void *v6; // rcx

  *(_QWORD *)(a1 + 456) = 0;
  sub_14001A500((__int64 *)(a1 + 352), 0);
  sub_14001A3B0((__int64 *)(a1 + 48), 0);
  sub_140041090((_QWORD *)a1);
  v2 = *(void **)(a1 + 328);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 336) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 328) = 0;
    *(_QWORD *)(a1 + 344) = 0;
  }
  v3 = *(_QWORD **)(a1 + 312);
  sub_140009950(a1 + 312, a1 + 312, v3[1]);
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  *(_QWORD *)(a1 + 320) = 0;
  v4 = *(_QWORD **)(a1 + 472);
  v5 = (_QWORD *)v4[1];
  while ( !*((_BYTE *)v5 + 25) )
  {
    sub_140009A00(a1 + 472, a1 + 472, v5[2]);
    v6 = v5;
    v5 = (_QWORD *)*v5;
    j_j_free(v6);
  }
  v4[1] = v4;
  *v4 = v4;
  v4[2] = v4;
  *(_QWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  *(_BYTE *)(a1 + 693) = 0;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 592LL))(a1);
}
