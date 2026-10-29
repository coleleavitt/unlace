__int64 __fastcall sub_2259FF0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  const char *(*v3)(); // rax
  size_t v4; // rax
  const void **v5; // rcx
  const void **v6; // r8
  char *v7; // rax
  const void **v9; // rdx
  char *v10; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(__int64 **)(*(_QWORD *)(a2 + 8) + 136LL);
  v3 = *(const char *(**)())(*v2 + 16);
  if ( v3 == sub_FC62B0 )
  {
    v4 = j__strlen("Unknown buffer");
    v5 = (const void **)"Unknown buffer";
    v6 = (const void **)v4;
  }
  else
  {
    v5 = (const void **)((__int64 (__fastcall *)(_QWORD))v3)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 136LL));
    v6 = v9;
  }
  sub_2230330(&v10, v2[1], v2[2] - v2[1], v5, v6);
  v7 = v10;
  *(_BYTE *)(a1 + 16) &= ~1u;
  *(_QWORD *)a1 = v7;
  return a1;
}
