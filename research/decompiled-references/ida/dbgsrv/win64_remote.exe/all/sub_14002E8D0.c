/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E8D0
// Address: 0x000000014002E8D0

//----- (000000014002E8D0) ----------------------------------------------------
__int64 __fastcall sub_14002E8D0(char *a1, char *a2, void **a3, __int64 a4)
{
  _QWORD *v8; // r14
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rdx
  const char *v13; // rax
  struct _RTL_CRITICAL_SECTION *v14; // rbx
  __int64 v15; // rax
  void *Block[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+40h] [rbp-78h]
  void *v19; // [rsp+48h] [rbp-70h]
  struct __crt_locale_pointers v20; // [rsp+50h] [rbp-68h] BYREF

  v8 = sub_14002DA30();
  v9 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  v19 = qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v10 = 1;
  v11 = 0;
  v12 = v8[7];
  while ( (v12 & v10) != 0 )
  {
    ++v11;
    v10 *= 2;
    if ( v11 >= 0x40 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(1443);
    }
  }
  v8[7] = v10 | v12;
  sub_14005D6D0(v9);
  sub_14005B0A0(&v20, 16, "___idcexec%d", v11);
  if ( a2 )
  {
    *(_OWORD *)Block = 0;
    v18 = 0;
    sub_140002FB0((__int64)Block, "static %s(){", (const char *)&v20);
    v13 = sub_14002D4F0(a2);
    if ( v13 )
      sub_140024520((__int64)Block, "%*.*sreturn %s\n;}", (_DWORD)v13 - (_DWORD)a2, (_DWORD)v13 - (_DWORD)a2, a2, v13);
    else
      sub_140024520((__int64)Block, "%s\n;}", a2);
    LOBYTE(a2) = sub_140035620((__int64)Block[0], a3, a4, 0);
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
    if ( (_BYTE)a2 )
      LOBYTE(a2) = sub_140028DE0(a1, (char *)&v20, nullptr, 0, (__int64)a3, a4);
  }
  v14 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  v19 = qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v15 = v8[7];
  if ( ((1LL << v11) & v15) == 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1444);
  }
  v8[7] = v15 & ~(1LL << v11);
  sub_14005D6D0(v14);
  return (unsigned __int8)a2;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
