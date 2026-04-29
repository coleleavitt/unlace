__int64 __fastcall sub_2DCF0(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx

  v2 = (_DWORD *)sub_2CEC0(*(__int64 **)(a1 + 16), 0x8000, 0x400u, 0x4000000);
  v3 = 1;
  if ( v2 )
  {
    v3 = 0;
    *a2 = *v2;
  }
  return v3;
}
