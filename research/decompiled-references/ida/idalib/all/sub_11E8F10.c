__int64 __fastcall sub_11E8F10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbp
  const char **v7; // rax
  size_t v8; // rdx
  const char *v9; // r12
  __m128i v10; // xmm2
  __m128i v12; // [rsp+0h] [rbp-A8h] BYREF
  void *v13[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v14; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int8 *v15[15]; // [rsp+30h] [rbp-78h] BYREF

  v12 = 0;
  v2 = sub_10DCD30(a2, 0x99Eu);
  if ( v2 )
  {
    v6 = v2;
    v7 = *(const char ***)(v2 + 48);
    v8 = 0;
    v9 = *v7;
    if ( *v7 )
      v8 = j__strlen(*v7);
    if ( (unsigned __int8)sub_22578D0(&v12, v9, v8, v3, v4, v5) )
    {
      sub_FC70B0((__int64)v15, **(_QWORD **)(a1 + 8), 0, 402);
      sub_21B5FF0(v13, v6, a2);
      sub_AEC220(v15, (_BYTE *)v13[0], (signed __int64)v13[1]);
      if ( v13[0] != &v14 )
        operator delete(v13[0]);
      sub_AEA040((__int64)v15);
      if ( !*(_BYTE *)(a1 + 2424) )
        goto LABEL_6;
LABEL_8:
      *(__m128i *)(a1 + 2408) = _mm_load_si128(&v12);
      return *(_QWORD *)(a1 + 2408);
    }
  }
  if ( *(_BYTE *)(a1 + 2424) )
    goto LABEL_8;
LABEL_6:
  v10 = _mm_load_si128(&v12);
  *(_BYTE *)(a1 + 2424) = 1;
  *(__m128i *)(a1 + 2408) = v10;
  return *(_QWORD *)(a1 + 2408);
}
