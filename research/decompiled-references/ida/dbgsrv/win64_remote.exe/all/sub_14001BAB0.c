/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001BAB0
// Address: 0x000000014001BAB0

//----- (000000014001BAB0) ----------------------------------------------------
__int64 __fastcall sub_14001BAB0(_QWORD *a1, unsigned int *a2, int a3)
{
  __int64 result; // rax
  int v7; // ecx
  int v8; // esi
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  __int16 *v11; // r8
  __int64 v12; // rdx
  char v13[1024]; // [rsp+30h] [rbp-448h] BYREF

  (*(void (__fastcall **)(_QWORD *, _QWORD, char *, __int64))(*a1 + 56LL))(a1, *a2, v13, 1024);
  if ( a3 > 0 )
    sub_140012410((__int64)a1, (struct __crt_locale_pointers *)"%*c", a3, 32);
  result = sub_140012410(
             (__int64)a1,
             (struct __crt_locale_pointers *)"%s: fl=%X adr=%a #prm=%d\n",
             v13,
             a2[1],
             COERCE_DOUBLE(a1[3] & *((_QWORD *)a2 + 2)),
             a2[6]);
  if ( a2[6] )
  {
    sub_140012410((__int64)a1, (struct __crt_locale_pointers *)"%*c", a3 + 2, 32);
    v7 = 15;
    if ( a2[6] < 0xF )
      v7 = a2[6];
    v8 = 0;
    v9 = v7;
    if ( v7 > 0 )
    {
      v10 = a2 + 8;
      do
      {
        v11 = &word_1400929C4;
        if ( !v8 )
          v11 = (__int16 *)pNodeName;
        sub_140012410((__int64)a1, (struct __crt_locale_pointers *)"%s0x%a", v11, *v10);
        ++v8;
        ++v10;
        --v9;
      }
      while ( v9 );
    }
    result = sub_140012410((__int64)a1, (struct __crt_locale_pointers *)"\n");
  }
  v12 = *((_QWORD *)a2 + 1);
  if ( v12 )
    return sub_14001BAB0(a1, v12, (unsigned int)(a3 + 2));
  return result;
}
// 1400929C4: using guessed type __int16 word_1400929C4;
