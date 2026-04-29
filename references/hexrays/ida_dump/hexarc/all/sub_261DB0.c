__int64 __fastcall sub_261DB0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, char a6)
{
  unsigned int v9; // eax
  _QWORD *v11; // r13
  size_t v12; // r15
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r15
  const char *v16; // r8
  const char *v17; // rdi
  int v18; // eax
  void *v19; // rax
  const void *v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // [rsp+18h] [rbp-A8h]
  const char *v25; // [rsp+30h] [rbp-90h] BYREF
  __int128 v26; // [rsp+38h] [rbp-88h]
  _QWORD v27[2]; // [rsp+50h] [rbp-70h] BYREF
  void *v28; // [rsp+60h] [rbp-60h]
  __int128 v29; // [rsp+68h] [rbp-58h]
  __int64 v30; // [rsp+78h] [rbp-48h]
  unsigned __int64 v31; // [rsp+88h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  if ( a6 )
  {
    v9 = 73;
    if ( *(_QWORD *)(a1 + 40) )
      v9 = **(_QWORD **)(a1 + 32) | 0x40000000;
    sub_25B3C0((void **)a1, a2, 0, 0, (char *)&unk_3EF793, a5, v9);
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    sub_25B3C0((void **)a3, a2, 0, a4, (char *)&byte_401D30, a5, 0x49u);
    return sub_2611F0(a1, a4 + *(_DWORD *)(a2 + 592), a5, 1u);
  }
  v11 = *(_QWORD **)(a3 + 24);
  v28 = nullptr;
  v29 = 0;
  v12 = v11[11];
  v22 = v11 + 6;
  v27[0] = v11[8];
  v27[1] = v11[9];
  if ( !v12 )
  {
    v30 = v11[13];
    goto LABEL_10;
  }
  v19 = (void *)qalloc_or_throw(v12);
  v20 = (const void *)v11[10];
  *((_QWORD *)&v29 + 1) = v12;
  v28 = v19;
  memcpy(v19, v20, v12);
  v21 = v11[13];
  *(_QWORD *)&v29 = v12;
  v30 = v21;
  if ( *(_QWORD *)(a1 + 40) )
  {
LABEL_10:
    v13 = 0;
    v14 = 0;
    do
    {
      v25 = nullptr;
      v15 = 8 * v14;
      v26 = 0;
      v27[0] = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v14);
      if ( !(unsigned __int8)sub_25E720((__int64)v27, (__int64 *)&v25, v22, nullptr) )
        sub_25A2B0((__int64)v27, (__int64 *)&v25, v22);
      sub_25E360((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a5, a3);
      v16 = s1;
      if ( (_QWORD)v26 )
        v16 = v25;
      (*(void (**)(_QWORD *, _QWORD, const char *, ...))*a5)(a5, a4, "%s %s", &byte_401D48, v16);
      v17 = s1;
      if ( (_QWORD)v26 )
        v17 = v25;
      v18 = tag_strlen(v17);
      sub_25B3C0(
        (void **)a3,
        a2,
        a4 + v18 + 5,
        0,
        byte_3F0142,
        a5,
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + v15) | 0x40000000);
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      v14 = ++v13;
    }
    while ( (unsigned __int64)v13 < *(_QWORD *)(a1 + 40) );
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return sub_2611F0(a1, a4 + *(_DWORD *)(a2 + 592), a5, 1u);
}
