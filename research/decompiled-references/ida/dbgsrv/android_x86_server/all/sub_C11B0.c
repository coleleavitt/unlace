/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C11B0
// Address: 0x000C11B0

//----- (000C11B0) --------------------------------------------------------
void __noreturn sub_C11B0()
{
  int *globals_fast; // eax
  int v1; // eax
  int v2; // ecx
  const char **v3; // edi
  char *v4; // eax
  char *v5; // esi
  char *v6; // edi
  int v7; // eax
  int v8; // [esp-4h] [ebp-420h] BYREF
  size_t outlen; // [esp+0h] [ebp-41Ch] BYREF
  int status; // [esp+4h] [ebp-418h] BYREF
  char out[1044]; // [esp+8h] [ebp-414h] BYREF

  v8 = 790980;
  globals_fast = (int *)_cxa_get_globals_fast((int *)outlen);
  if ( !globals_fast || (v1 = *globals_fast) == 0 )
    v1 = sub_C10D0("terminating");
  if ( (*(_DWORD *)(v1 + 52) >> 8) ^ 0x434C4E | (unsigned int)(*(_QWORD *)(v1 + 48) >> 8) ^ 0x47432B2B )
  {
    v1 = sub_C10D0("terminating with %s foreign exception", off_13BC7C);
  }
  else if ( __PAIR64__(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52)) == 0x432B2B01434C4E47LL )
  {
    v2 = *(_DWORD *)(v1 + 44);
    goto LABEL_9;
  }
  v2 = v1 + 80;
LABEL_9:
  v8 = v2;
  v3 = *(const char ***)v1;
  outlen = 1024;
  v4 = _cxa_demangle(v3[1], out, &outlen, &status);
  if ( status )
    v5 = (char *)v3[1];
  else
    v5 = v4;
  if ( sub_BF240(&`typeinfo for'std::exception, v3, &v8) )
  {
    v6 = off_13BC7C;
    v7 = (*(int (__cdecl **)(int))(*(_DWORD *)v8 + 8))(v8);
    sub_C10D0("terminating with %s exception of type %s: %s", v6, v5, v7);
  }
  sub_C10D0("terminating with %s exception of type %s");
  sub_C12D0();
}
// C11B0: using guessed type void __noreturn sub_C11B0();
// 139A88: using guessed type int (__cdecl *`typeinfo for'std::exception)(std::type_info *);
// 13BC7C: using guessed type char *off_13BC7C;
