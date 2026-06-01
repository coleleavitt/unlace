/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001EDB0
// Address: 0x000000014001EDB0

//----- (000000014001EDB0) ----------------------------------------------------
__int64 __fastcall sub_14001EDB0(__int64 a1, __int64 a2)
{
  const char *v3; // rax
  const char *v4; // rbx

  v3 = sub_14002A3D0(a1);
  v4 = v3;
  if ( v3 )
    v3 = (const char *)strlen(v3);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v3 )
    sub_140001810(a2 + 8, v4, (size_t)v3);
  return 0;
}
