__int64 __fastcall sub_9FCB20(__int64 *a1, __int16 a2)
{
  __int16 v3; // dx
  __int64 v4; // rdi
  _WORD v6[5]; // [rsp+Eh] [rbp-Ah] BYREF

  v3 = a2;
  v4 = *a1;
  if ( *((_DWORD *)a1 + 2) != 1 )
    v3 = __ROL2__(a2, 8);
  v6[0] = v3;
  return sub_22581D0(v4, v6, 2);
}

