__int64 __fastcall sub_3329E0(__int64 a1, const char *a2, _QWORD *a3, __int64 *a4, _DWORD *a5, _QWORD *a6, _DWORD *a7)
{
  size_t v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  __int64 result; // rax
  const char *v18; // [rsp+0h] [rbp-68h] BYREF
  __int16 v19; // [rsp+20h] [rbp-48h]

  v11 = j__strlen(a2);
  sub_2217250(a1, a2, v11);
  v12 = a3[1];
  v13 = *a5 & 3;
  *(_QWORD *)(a1 + 48) = *a3;
  *(_QWORD *)(a1 + 56) = v12;
  v14 = *a4;
  *(_QWORD *)(a1 + 40) = a4[1];
  LOBYTE(v12) = 32 * v13;
  LOBYTE(v13) = *(_BYTE *)(a1 + 10);
  *(_QWORD *)(a1 + 32) = v14;
  v15 = *(_QWORD *)(a1 + 120) == 0;
  *(_BYTE *)(a1 + 10) = v12 | v13 & 0x9F;
  if ( v15 )
  {
    *(_QWORD *)(a1 + 120) = *a6;
  }
  else
  {
    v16 = sub_227D6D0();
    v19 = 259;
    v18 = "cl::location(x) specified more than once!";
    sub_22116C0(a1, &v18, 0, 0, v16);
  }
  result = (8 * (*a7 & 3)) | *(_BYTE *)(a1 + 10) & 0xE7u;
  *(_BYTE *)(a1 + 10) = (8 * (*(_BYTE *)a7 & 3)) | *(_BYTE *)(a1 + 10) & 0xE7;
  return result;
}
