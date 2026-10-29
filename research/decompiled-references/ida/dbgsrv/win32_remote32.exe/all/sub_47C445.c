/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C445
// Address: 0x0047C445

//----- (0047C445) --------------------------------------------------------
_DWORD *__cdecl sub_47C445(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v3; // [esp+10h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  *a1 = 0;
  sub_47A78B(8);
  ms_exc.registration.TryLevel = 0;
  v1 = (_DWORD *)*sub_47C4E9(&v3);
  *a1 = v1;
  if ( v1 )
  {
    v1[2] = 0;
    v1[7] = 0;
    *v1 = 0;
    v1[1] = 0;
    v1[4] = -1;
  }
  ms_exc.registration.TryLevel = -2;
  sub_47A7D3(8);
  return a1;
}
