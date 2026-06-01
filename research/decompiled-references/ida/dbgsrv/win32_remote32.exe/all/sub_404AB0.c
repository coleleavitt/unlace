/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404AB0
// Address: 0x00404AB0

//----- (00404AB0) --------------------------------------------------------
int __userpurge sub_404AB0@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int a3)
{
  int v4; // edi
  const char *v6; // eax
  _DWORD v7[3]; // [esp+Ch] [ebp-30h] BYREF
  unsigned int v8[3]; // [esp+18h] [ebp-24h] BYREF
  LPVOID v9[3]; // [esp+24h] [ebp-18h] BYREF
  int v10; // [esp+38h] [ebp-4h]

  v4 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 60))(a1, 0, 0);
  if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 12))(a1, v4, a3) )
  {
    sub_4013E0(v9);
    v10 = 0;
    sub_402970(a2, v9, "Failed loading symbol data for ID %u", a3);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 144))(v4, 1);
    v6 = sub_401680(v9);
    sub_401340(v8, v6);
    LOBYTE(v10) = 1;
    sub_402AD0(v7, v8);
    sub_464D00(v7, &_TI1_AUpdb_exception_t__);
    JUMPOUT(0x404B6A);
  }
  return v4;
}
// 404B65: control flows out of bounds to 404B6A
// 4AC660: using guessed type __TI_flags _TI1_AUpdb_exception_t__;
